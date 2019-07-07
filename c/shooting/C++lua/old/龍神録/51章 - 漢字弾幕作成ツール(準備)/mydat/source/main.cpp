#include "../../../include/DxLib.h"
#include "math.h"
#include "Key_Mouse.h"

#define PI2 (3.141562f*2)    //�~����*2

#define PMAX 1000    //�o�^����e�̍ő吔

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

//����ݒ�n���
typedef struct{
    int State;//���
    int Knd;//���
    int Col;//�F
    int Space;//�X�y�[�X
    float Angle;//�p�x
    int flag;//�t���O
    fPt_t fPt1;//�P�ڂ̍��W
    fPt_t fPt2;//�Q�ڂ̍��W
}Operate_t;

int Key[256];//�L�[
int Red,White,Blue;//�F
int ImgBullet[14][10],ImgBack;//�e�̉摜�Ɣw�i�摜
Mouse_t Mouse;//�}�E�X
Operate_t Operate;//����ݒ�
BlPoint_t BlPoint;//�e���

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
}

//�f�[�^��������
void Show(){
    int i;
    //�w�i��`��
    DrawGraph(0,0,ImgBack,FALSE);
    //�e��`��
    for(i=0; i<BlPoint.Num; i++){
        DrawCircle( (int)BlPoint.Bl[ i ].x, (int)BlPoint.Bl[ i ].y, 3, Red, TRUE );
    }
    //�s�[�ƈ����������`��
    if( Operate.State==1 ){
        DrawLine( (int)Operate.fPt1.x, (int)Operate.fPt1.y, Mouse.x, Mouse.y, Red );
    }
    //�}�E�X�|�C���^���ɒe��\������
    DrawCircle( Mouse.x, Mouse.y, 3, Red, TRUE );
    //�e�̏�ɁA���ݒ肳��Ă���X�y�[�X���ǂ�ʂ��\������
    DrawLine(Mouse.x,Mouse.y,Mouse.x+Operate.Space,Mouse.y,Blue);
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow ){
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    SetGraphMode(640,640,32);//��ʃT�C�Y�ύX
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�
    SetMouseDispFlag( TRUE ) ;//�}�E�X�\���I��
    ini();//������
    load();//���[�h
    while(ProcessMessage()==0 && ClearDrawScreen()==0 && GetHitKeyStateAll_2(Key)==0 && Key[KEY_INPUT_ESCAPE]==0){
          //��ү���ޏ���       �@  ����ʂ�ر    �@�@�@    �����͏�Ԃ�ۑ��@�@�@�@�@�@�@��ESC��������Ă��Ȃ�
        GetHitMouseStateAll_2(&Mouse);
        CalcMouse();//�}�E�X���̌v�Z
        CalcOperate();//����n�̌v�Z
        Show();//������
        ScreenFlip();
    }
    DxLib_End();
    return 0;
}