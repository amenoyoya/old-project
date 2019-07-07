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

/* TOTAL���f�[�^��p�� */
unsigned char data[TOTAL];
/* �C���[�W�摜�̃s�N�Z���������F�i�[�p�\���̂�p�� */
img_t img[BMP_TATE][BMP_YOKO];
/* 2�l�������������邽�߂̔z���p�� */
BYTE Pixel[BMP_TATE][BMP_YOKO];

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

/* �`�� */
void Graph(){
    int x,y;
    static int Black = GetColor(0,0,0);
    DrawBox(0,0,BMP_YOKO,BMP_TATE,GetColor(255,255,255),TRUE);
    for(y=0;y<BMP_TATE;y++){
        for(x=0;x<BMP_YOKO;x++){
            if( Pixel[y][x] == 1){
                DrawPixel(x,y,Black);
            }
        }
    }
}
 
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow ){

    SetGraphMode(BMP_YOKO,BMP_TATE,16);//400x400��
    SetWindowSizeChangeEnableFlag(TRUE);//��ʂ̑傫����ύX�ł���
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�
 
    ReadBmp();//�r�b�g�}�b�v�ǂݍ���
    ConvData();//�摜�̐F���\���̂Ɋi�[
    Binarization();//2�l��

    while(ProcessMessage()==0 && ClearDrawScreen()==0 && GetHitKeyStateAll_2(Key)==0 && Key[KEY_INPUT_ESCAPE]==0){
          //��ү���ޏ���       �@  ����ʂ�ر    �@�@�@    �����͏�Ԃ�ۑ��@�@�@�@�@�@�@��ESC��������Ă��Ȃ�
        Graph();//�`��
        ScreenFlip();
    }
 
    DxLib_End();
    return 0;
}