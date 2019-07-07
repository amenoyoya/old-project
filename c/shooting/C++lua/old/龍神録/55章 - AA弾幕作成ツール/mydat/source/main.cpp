#include "../../../include/DxLib.h"
#include "Key_Mouse.h"

/* �r�b�g�}�b�v�摜�̉��T�C�Y */
#define BMP_YOKO 400
/* �r�b�g�}�b�v�摜�̏c�T�C�Y */
#define BMP_TATE 400

/* �r�b�g�}�b�v�̃w�b�_�T�C�Y */
#define HEAD 54
/* �g�[�^���T�C�Y */
#define TOTAL (BMP_YOKO*BMP_TATE*3+HEAD)

/* AA�f�[�^���쐬���鍇�v���� */
#define BULLET_MAX 4000

/* �r�b�g�}�b�v�̐F�����i�[���邽�߂̍\���� */
typedef struct{
        unsigned char col[3];
}img_t;

int Key[256];

//�e�̍��W(55)
typedef struct{
    float x,y;
}Pt_t;
//�u�����e�̍\����
typedef struct{
    int num;//���ݒu�����e��
    Pt_t Pt[ BULLET_MAX ];
}Bl_t;

typedef struct{
    int state; //���
    double len; //�Ԋu
}Operate_t;

Bl_t Bl;
Operate_t Operate;

/* TOTAL���f�[�^��p�� */
unsigned char data[TOTAL];
/* �C���[�W�摜�̃s�N�Z���������F�i�[�p�\���̂�p�� */
img_t img[BMP_TATE][BMP_YOKO];
/* 2�l�������������邽�߂̔z���p�� */
BYTE Pixel[BMP_TATE][BMP_YOKO];

int img_bullet[4] ; //(55)
int img_back;

/* �r�b�g�}�b�v��ǂݍ���data�Ɋi�[����֐� */
int ReadBmp(){
    char name[256]="../AA�摜/aisha.bmp";
    FILE *fp;
    fp = fopen( name , "rb" );
    if( fp == NULL ){
        printfDx( "%s��������܂���B",name);
        return -1;
    }
    fread( data, TOTAL, 1, fp );
    fclose(fp);
    return 0;
}

/* �r�b�g�}�b�v�̐��f�[�^���e�s�N�Z���̐F�i�[�p�\���̂ɓ��꒼�� */
void ConvData(){
    int x,y,c,t;
    t=HEAD;
    for(y=BMP_TATE-1;y>=0;y--){
        for(x=0;x<BMP_YOKO;x++){
            for(c=0;c<3;c++){
                img[y][x].col[c]=data[t];
                t++;
            }
        }
    }
}

/* 2�l�� */
void Binarization(){
    int x,y,c;
    int sum;
    for(y=0;y<BMP_TATE;y++){
        for(x=0;x<BMP_YOKO;x++){
            sum = 0;
            //�F�̋P�x���ς��v�Z
            for(c=0;c<3;c++){
                sum += img[y][x].col[c];
            }
            sum /= 3;
            //0�`255�̋P�x�̕��ς�128�ȏ�Ȃ�(���邢�Ȃ�)0�A�����Ȃ�(�Â��Ȃ�)1
            if( sum >= 128){
                Pixel[y][x] = 0;
            } else {
                Pixel[y][x] = 1;
            }
        }
    }
}

/* �e�u���v�Z */
void CalcPut(){
    int i,x,y;
    double lx,ly;
    //���ݓo�^����Ă���e��0��
    Bl.num = 0;
    //�r�b�g�}�b�v�摜�T�C�Y�����[�v
    for(y=0;y<BMP_TATE;y++){
        for(x=0;x<BMP_YOKO;x++){
            //�����o�^�ł��Ȃ��Ȃ甲����
            if( Bl.num >= BULLET_MAX-1 ){
                break;
            }
            //���̏ꂪ�F���Ȃ�
            if( Pixel[y][x] == 1){
                //���o�^����Ă���e�����[�v
                for(i=0; i<Bl.num; i++){
                    //���̑S�Ă̒e�ƌ��݂̏ꏊ�Ƃ̋�����Operate.len�ȏ�Ȃ甲����
                    lx = x - Bl.Pt[i].x;
                    ly = y - Bl.Pt[i].y;
                    if( lx*lx + ly*ly < Operate.len*Operate.len){
                        break;
                    }
                }
                //�r���Ŕ����Ȃ�����=����߂��ɒe�����������Ȃ�
                if( i == Bl.num ){
                    //�o�^
                    Bl.Pt[ Bl.num ].x = (float)x;
                    Bl.Pt[ Bl.num ].y = (float)y;
                    Bl.num++;
                }
            }
        }
    }
}

/* ����v�Z */
void CalcOperate(){
    //�X�y�[�X��������邽�тɏ�ԕω�
    if( Key[KEY_INPUT_SPACE] == 1 ){
        Operate.state = ( Operate.state+1 )%3;
    }
    //������������.len�����Ȃ�
    if( Key[KEY_INPUT_LEFT] == 1 || Key[KEY_INPUT_LEFT] > 20 ){
        if( Operate.len > 1 ){
            Operate.len -= 0.2;
        }
        CalcPut();
    }
    //�E����������.len�𑽂�
    if( Key[KEY_INPUT_RIGHT] == 1 || Key[KEY_INPUT_RIGHT] > 20 ){
        if( Operate.len < 50 ){
            Operate.len += 0.2;
        }
        CalcPut();
    }
}

/* �`�� */
void Graph(){
    int i;
    //��Ԃɂ���ĕ`��p�^�[����ς���
    if( Operate.state == 1 ||  Operate.state == 2 ){
        DrawGraph(0,0,img_back,FALSE);
    }
    if( Operate.state == 0 ||  Operate.state == 1 ){
        for(i=0; i<Bl.num; i++){
            DrawRotaGraph((int)Bl.Pt[i].x,(int)Bl.Pt[i].y,1.0,0.0,img_bullet[1],TRUE);
        }
    }
    SetDrawBlendMode( DX_BLENDMODE_ALPHA , 64 ) ;
    DrawBox(0,0,100,40,0,TRUE);
    SetDrawBlendMode( DX_BLENDMODE_NOBLEND , 0 ) ;
    DrawFormatString(0,0,GetColor(255,255,255),"�Ԋu=%.1f",Operate.len);
    DrawFormatString(0,20,GetColor(255,255,255),"�e��=%d",Bl.num);
}
 
//�f�[�^���o��
void Output(){
    int i;
    FILE *fp;
    fp = fopen( "Output.dat" , "wb" );

    for(i=0; i<Bl.num; i++){//���W�f�[�^��-1�`1�ɕϊ�����
        Bl.Pt[i].x -= BMP_YOKO/2;
        Bl.Pt[i].y -= BMP_TATE/2;
        Bl.Pt[i].x /= BMP_YOKO/2;
        Bl.Pt[i].y /= BMP_TATE/2;
    }
    if( fp == NULL ){
        return;
    }
    fwrite( &Bl, sizeof(Bl_t), 1, fp );
    fclose(fp);
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow ){

    SetGraphMode(BMP_YOKO,BMP_TATE,16);//400x400��
    SetWindowSizeChangeEnableFlag(TRUE);//��ʂ̑傫����ύX�ł���
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�
 
    Operate.len = 5;//�e�̊Ԋu��5�ɃZ�b�g
    img_back = LoadGraph( "../AA�摜/aisha.bmp" );
    LoadDivGraph( "../dat/img/bullet/b14.png"   , 4 , 4 , 1 , 6 , 6 , img_bullet ) ;//�e�ǂݍ���(55)

    ReadBmp();//�r�b�g�}�b�v�ǂݍ���
    ConvData();//�摜�̐F���\���̂Ɋi�[
    Binarization();//2�l��
    CalcPut();//�e��u���v�Z

    while(ProcessMessage()==0 && ClearDrawScreen()==0 && GetHitKeyStateAll_2(Key)==0 && Key[KEY_INPUT_ESCAPE]==0){
          //��ү���ޏ���       �@  ����ʂ�ر    �@�@�@    �����͏�Ԃ�ۑ��@�@�@�@�@�@�@��ESC��������Ă��Ȃ�
        CalcOperate();//����v�Z
        Graph();//�`��
        ScreenFlip();
    }
 
    Output();//�t�@�C���o��
    DxLib_End();
    return 0;
}