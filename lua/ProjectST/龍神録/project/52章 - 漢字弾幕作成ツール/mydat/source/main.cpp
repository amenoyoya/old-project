#include "../../../include/DxLib.h"
#include "math.h"
#include "Key_Mouse.h"

#define PI2 (3.141562f*2)    //�~����*2

#define PMAX 1000    //�o�^����e�̍ő吔

#define WINDOW_SIZE_X 640
#define WINDOW_SIZE_Y 640

//float�^�̍��W�\����
typedef struct{
    float x,y;
}fPt_t;

//�e1���̏��
typedef struct{
    int Knd;//�e�̎��
    int Col;//�e�̐F
    float Angle;//�e�̊p�x
    float x,y;
}Bl_t;

//�e�S�̂̏��
typedef struct{
    int Num;//�o�^������
    Bl_t Bl[ PMAX ];    //�o�^����e���
}BlPoint_t;
BlPoint_t BlPoint;

//����ݒ�n���
typedef struct{
    int State;
    int Knd;
    int Col;
    int Space;
    float Angle;
    int flag;
    fPt_t fPt1;
    fPt_t fPt2;
}Operate_t;

int Key[256];//�L�[
int Red,White,Blue;//�F
int ImgBullet[14][10],ImgBack;//�e�̉摜�Ɣw�i�摜
Mouse_t Mouse;//�}�E�X
Operate_t Operate;//����ݒ�

//������
void ini(){
    Operate.Knd=7;//�e�̏�����ނ�7��
    Operate.Space=20;//�X�y�[�X�͍ŏ�20
    Operate.flag=1;
}

//���[�h
void load(){
    White=GetColor(255,255,255);
    Red = GetColor(255,0,0);
    Blue = GetColor(0,255,255);
    ImgBack = LoadGraph("mydat/img/ryu.png");
    LoadDivGraph( "../dat/img/bullet/b0.png" ,  5 ,  5 , 1 , 76 ,  76 , ImgBullet[0] ) ;
    LoadDivGraph( "../dat/img/bullet/b1.png" ,  6 ,  6 , 1 , 22 ,  22 , ImgBullet[1] ) ;
    LoadDivGraph( "../dat/img/bullet/b2.png" , 10 , 10 , 1 ,  5 , 120 , ImgBullet[2] ) ;
    LoadDivGraph( "../dat/img/bullet/b3.png" ,  5 ,  5 , 1 , 19 ,  34 , ImgBullet[3] ) ;
    LoadDivGraph( "../dat/img/bullet/b4.png" , 10 , 10 , 1 , 38 ,  38 , ImgBullet[4] ) ;
    LoadDivGraph( "../dat/img/bullet/b5.png" ,  3 ,  3 , 1 , 14 ,  16 , ImgBullet[5] ) ;
    LoadDivGraph( "../dat/img/bullet/b6.png" ,  3 ,  3 , 1 , 14 ,  18 , ImgBullet[6] ) ;
    LoadDivGraph( "../dat/img/bullet/b7.png" , 10 , 10 , 1 , 16 ,  16 , ImgBullet[7] ) ;
    LoadDivGraph( "../dat/img/bullet/b8.png" , 10 , 10 , 1 , 12 ,  18 , ImgBullet[8] ) ;
    LoadDivGraph( "../dat/img/bullet/b9.png" ,  3 ,  3 , 1 , 13 ,  19 , ImgBullet[9] ) ;
    LoadDivGraph( "../dat/img/bullet/b10.png",  8 ,  8 , 1 ,  8 ,   8 , ImgBullet[10]) ;
    LoadDivGraph( "../dat/img/bullet/b11.png",  8 ,  8 , 1 , 35 ,  32 , ImgBullet[11]) ;
    LoadDivGraph( "../dat/img/bullet/b12.png", 10 , 10 , 1 , 12 ,  12 , ImgBullet[12]) ;
    LoadDivGraph( "../dat/img/bullet/b13.png", 10 , 10 , 1 , 22 ,  22 , ImgBullet[13]) ;
}

//�e��o�^
void InputBlData(float x, float y, int Knd, int Col, float Angle){
    BlPoint.Bl[BlPoint.Num].x = x;//���̏ꏊ���L�^
    BlPoint.Bl[BlPoint.Num].y = y;
    BlPoint.Bl[BlPoint.Num].Knd = Knd;//�e�̎��
    BlPoint.Bl[BlPoint.Num].Col = Col;//�F
    BlPoint.Bl[BlPoint.Num].Angle = Angle;//�p�x
    BlPoint.Num++;//�����ڂ����J�E���g�A�b�v
}

//�e�������Ă����Ƃ��̌v�Z
void CalcBullet(){
    float x = Operate.fPt1.x, y = Operate.fPt1.y;//�ŏ��̏ꏊ
    //�ŏ��N���b�N�����ꏊ�ƍŌ�N���b�N�����ꏊ�Ƃ̊p�x
    float Angle = atan2( Operate.fPt2.y - Operate.fPt1.y, Operate.fPt2.x - Operate.fPt1.x );
    float xlen = Operate.fPt2.x - Operate.fPt1.x;//x�̋���
    float ylen = Operate.fPt2.y - Operate.fPt1.y;//y�̋���
    float Length = sqrt( xlen * xlen + ylen * ylen );//�_�Ɠ_�Ƃ̋���
    float Proceeded = 0;//�����ݐi�񂾋���

    //�����ݐi�񂾋������i�ނׂ������ȓ��̊ԁA���o�^�o������̊ԃ��[�v
    while( BlPoint.Num < PMAX ){
        InputBlData(x,y,Operate.Knd,Operate.Col,Operate.Angle);
        x += cos( Angle ) * Operate.Space;//�i�ނׂ������֐i��
        y += sin( Angle ) * Operate.Space;
        Proceeded += Operate.Space;//�i�񂾋��������Z
        if(Length < Proceeded) break;
    }
}

//�}�E�X���̌v�Z
void CalcMouse(){
    if( Mouse.Button[0]==1 ){//���N���b�N���ꂽ��
        switch( Operate.State ){
            case 0://1��ډ�������
                //���̎��̈ʒu���L�^
                Operate.fPt1.x = (float)Mouse.x;
                Operate.fPt1.y = (float)Mouse.y;
                Operate.State = 1;
                break;
            case 1://2��ډ�������
                //���̎��̈ʒu���L�^
                Operate.fPt2.x = (float)Mouse.x;
                Operate.fPt2.y = (float)Mouse.y;
                Operate.State = 0;
                //1��ډ������Ƃ��납��2��ڂ������Ƃ���܂łɒe��o�^
                CalcBullet();
                break;
        }
    }
}

void CalcOperate(){
    //�e�e�̐F��
    int Col[14]={5,6,10,5,10,3,3,10,10,3,8,8,10,10};
    //���R���g���[���L�[��������Ă��鎞
    if( Key[KEY_INPUT_LCONTROL]>0 ){
        //Z�L�[�������ꂽ��
        if( Key[KEY_INPUT_Z]==1 || Key[KEY_INPUT_Z]>30){
            //�������O�ɖ߂�
            if( BlPoint.Num>0 ){
                BlPoint.Num--;
            }
        }
        //Y�L�[�������ꂽ��
        if( Key[KEY_INPUT_Y]==1 || Key[KEY_INPUT_Y]>30 ){
            //�ȑO�Z�b�g�����Ƃ���܂�Y�������������߂�
            if( BlPoint.Num<PMAX-1 && !(BlPoint.Bl[BlPoint.Num].x==0 && BlPoint.Bl[BlPoint.Num].y==0) ){
                BlPoint.Num++;
            }
        }
    }
    //S�L�[��������Ă���Ƃ�
    if( Key[KEY_INPUT_S]>0 ){
        //���L�[�����ꂽ��
        if( Key[KEY_INPUT_LEFT]==1 || Key[KEY_INPUT_LEFT]>30){
            //�X�y�[�X���炷
            if( Operate.Space>2 ){
                Operate.Space--;
            }
        }
        //�E�L�[
        if( Key[KEY_INPUT_RIGHT]==1 || Key[KEY_INPUT_RIGHT]>30){
            //�X�y�[�X���₷
            if( Operate.Space<300 ){
                Operate.Space++;
            }
        }
    }
    else{
        if( Key[KEY_INPUT_LEFT]>0 )//���L�[��
            Operate.Angle-=PI2/360;//�����
        if( Key[KEY_INPUT_RIGHT]>0 )//�E�L�[��
            Operate.Angle+=PI2/360;//�E���
    }
    if( Key[KEY_INPUT_C]==1 )//�F
        Operate.Col = (++Operate.Col)%Col[Operate.Knd];
    if( Key[KEY_INPUT_SPACE]==1 )//�\���t���O
        Operate.flag*=-1;
    if( Key[KEY_INPUT_K]==1 ){//���
        Operate.Knd = (++Operate.Knd)%14;
        Operate.Col = 0;
    }
}

//�f�[�^��������
void Show(){
    int i;
    //�w�i��`��
    DrawGraph(0,0,ImgBack,FALSE);
    //�e��`��
    for(i=0; i<BlPoint.Num; i++){
        DrawRotaGraphF( BlPoint.Bl[ i ].x, BlPoint.Bl[ i ].y,1.0,BlPoint.Bl[i].Angle+PI2/4, 
            ImgBullet[BlPoint.Bl[i].Knd][BlPoint.Bl[i].Col], TRUE );
    }
    //�s�[�ƈ����������`��
    if( Operate.State==1 ){
        DrawLine( (int)Operate.fPt1.x, (int)Operate.fPt1.y, Mouse.x, Mouse.y, Red );
    }
    //�}�E�X�|�C���^���ɒe��\������
    DrawRotaGraph( Mouse.x, Mouse.y, 1.0, Operate.Angle, ImgBullet[Operate.Knd][Operate.Col], TRUE );
    //�e�̏�ɁA���ݒ肳��Ă���X�y�[�X���ǂ�ʂ��\������
    DrawLine(Mouse.x,Mouse.y,Mouse.x+Operate.Space,Mouse.y,Blue);
    //�\���t���O���I���Ȃ猻�݂̑���ݒ���e��\��
    if(Operate.flag==1){
        SetDrawBlendMode( DX_BLENDMODE_ALPHA  , 128 ) ;
        DrawBox(0,0,230,120,0,TRUE);
        SetDrawBlendMode( DX_BLENDMODE_NOBLEND,   0 ) ;
        DrawFormatString(0,  0,White,"���W[%3d,%3d]",Mouse.x,Mouse.y);
        DrawFormatString(0, 20,White,"���     [%2d] : K�L�[",Operate.Knd);
        DrawFormatString(0, 40,White,"�F�@     [%2d] : C�L�[",Operate.Col);
        DrawFormatString(0, 60,White,"�p�x[%5.1f��] : �����L�[",Operate.Angle/PI2*360.0f);
        DrawFormatString(0, 80,White,"��    [%3d] : S+�����L�[",Operate.Space);
        DrawFormatString(0,100,White,"�X�y�[�X�L�[�Ŕ�\��");
    }
}

//�f�[�^���o��
void Output(){
	int i;
    FILE *fp;
    fp = fopen( "Output.dat" , "wb" );

	for(i=0; i<BlPoint.Num; i++){//���W�f�[�^��-1�`1�ɕϊ�����
		BlPoint.Bl[i].x -= WINDOW_SIZE_X/2;
		BlPoint.Bl[i].x /= WINDOW_SIZE_X/2;
		BlPoint.Bl[i].y -= WINDOW_SIZE_Y/2;
		BlPoint.Bl[i].y /= WINDOW_SIZE_Y/2;
    }

	if( fp == NULL )
        return;
    fwrite( &BlPoint, sizeof(BlPoint_t), 1, fp );
    fclose(fp);
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow ){
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    SetGraphMode(WINDOW_SIZE_X,WINDOW_SIZE_Y,32);//��ʃT�C�Y�ύX
    SetWindowSizeChangeEnableFlag(TRUE);//��ʂ̑傫�������\
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�
    SetMouseDispFlag( TRUE ) ;//�}�E�X�\���I��
    ini();//������
    load();//���[�h
    while(ProcessMessage()==0 && ClearDrawScreen()==0 && GetHitKeyStateAll_2(Key)==0 && Key[KEY_INPUT_ESCAPE]==0){
          //��ү���ޏ���       �@  ����ʂ�ر    �@�@�@    �����͏�Ԃ�ۑ��@�@�@�@�@�@��ESC��������Ă��Ȃ�
        GetHitMouseStateAll_2(&Mouse);
        CalcMouse();//�}�E�X���̌v�Z
        CalcOperate();//����n�̌v�Z
        Show();//������
        ScreenFlip();
    }
    Output();//�f�[�^���o��
    DxLib_End();
    return 0;
}