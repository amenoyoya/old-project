#include "../../../include/DxLib.h"

//�O�p�`�̃|���S���Q�Ŏl�p�`��`�悷��ׂ̒l�B���l�Œ�Ȃ̂ŁA�o����K�v�Ȃ�
typedef struct{
    float x,y;
    float u,v;
}VtPm_t;
VtPm_t VtPm[6]={{-1,1,0,0},{1,1,1,0},{-1,-1,0,1},{1,-1,1,1},{-1,-1,0,1},{1,1,1,0}};

//��̃e�N�X�`���[�ɂ��Ă̍\����
typedef struct{
    int Type;    // 0:��ʂɕ��s�A1:��ʂɐ���
    int Img;    //�摜
    float x,y,z;//���S�_
    float LargeX,LargeY;//�c���̑傫��(Type��1�̎���LargeX��LargeZ�̖���������)
    float u,v;            //�g�p����摜�̂ǂ̕������g����
    float FromZ,ToZ;    //�ǂ�����ǂ��܂ŉ��s����ݒ肷�邩
    float FadeFromZ,FadeToZ;    //�ǂ�����ǂ��܂Ńt�F�[�h��ݒ肷�邩(������u�ԃt�F�[�h�A�E�g�A�����u�ԃt�F�[�h�C������)
    VERTEX_3D Vertex[6] ;        //�`��p���_6��
}Object_t;

Object_t Object;

void ini (){
    int i;
    Object.Img = LoadGraph( "mydat/img/kabe.png" );
    Object.LargeX = 48.0f;//�Ƃ肠�����`�悷��傫����K���ɐݒ�B�c�E����͑f�ނ̒ʂ�ɂ���
    Object.LargeY = 60.0f;
    Object.Type = 1;//�^�C�v�𐂒���
    Object.x = 220.0f;//�Ƃ肠�����`�悷�钆�S�ʒu�𒆐S��肿�ƍ���
    Object.y = 240.0f;
    Object.z = 0.0f;
    Object.u = 0.763671875f;//�摜�̂ǂ̕������g����
    Object.v = 1.0f;
    Object.FromZ     =  200;//�`��J�n�n�_
    Object.FadeFromZ =  100;//�`��t�F�[�h�C���J�n�n�_
    Object.FadeToZ   = -100;//�`��t�F�[�h�A�E�g�J�n�n�_
    Object.ToZ       = -200;//�`��I���n�_

    for(i=0; i<6; i++){
        Object.Vertex[i].r = 255;
        Object.Vertex[i].b = 255;
        Object.Vertex[i].g = 255;
        Object.Vertex[i].a = 255;
        Object.Vertex[i].u = Object.u * VtPm[i].u;
        Object.Vertex[i].v = Object.v * VtPm[i].v;
    }
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
             LPSTR lpCmdLine, int nCmdShow )
{
    int i;
    float z=0;
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

    ini();

    // �����L�[���������܂Ń��[�v
    while(ProcessMessage()==0 && ClearDrawScreen()==0 && CheckHitKey(KEY_INPUT_ESCAPE)==0){

        Object.z=z;

        if(CheckHitKey(KEY_INPUT_Z)>0){
            z+=1.4f;
        }
        if(CheckHitKey(KEY_INPUT_Y)>0){
            z-=1.4f;
        }

        switch(Object.Type){
            case 0:
                for(i=0;i<6;i++){
                    Object.Vertex[i].pos.x = Object.x + Object.LargeX * VtPm[i].x ;    
                    Object.Vertex[i].pos.y = Object.y + Object.LargeY * VtPm[i].y ;
                    Object.Vertex[i].pos.z = Object.z ;
                }
                break;
            case 1:
                for(i=0;i<6;i++){
                    Object.Vertex[i].pos.x = Object.x;    
                    Object.Vertex[i].pos.y = Object.y + Object.LargeY * VtPm[i].y ;
                    Object.Vertex[i].pos.z = Object.z + Object.LargeX * VtPm[i].x ;
                }
                break;
        }
/*
z
Object.FromZ        200
z
Object.FadeFromZ    100
z
Object.FadeToZ        -100
z
Object.ToZ            -200
z
*/
        if( Object.FromZ - Object.FadeFromZ <= 0 ){
            printfDx(".From�̐ݒ肪��������\n");
        }
        else if( Object.FadeToZ - Object.ToZ <= 0 ){
            printfDx(".To�̐ݒ肪��������\n");
        }
        else{
            for(i=0; i<6; i++){
                float z = Object.Vertex[i].pos.z;
                //�ʒu���`�悷��͈͂�艓�������瓧��0
                if     (z < Object.ToZ){
                    Object.Vertex[i].a = 0;
                }
                //(�߂Â��Ă���ꍇ)�t�F�[�h�C������ʒu��������
                else if(Object.ToZ < z && z <=Object.FadeToZ){
                    Object.Vertex[i].a = (unsigned char)(255.0f / (Object.FadeToZ - Object.ToZ) * (z - Object.ToZ)) ;
                }
                //�ʏ�`�悷��ʒu�Ȃ�
                else if(Object.FadeToZ <= z && z <= Object.FadeFromZ){
                    Object.Vertex[i].a = 255;
                }
                //(�߂Â��Ă�ꍇ)�t�F�[�h�A�E�g����ʒu��������
                else if(Object.FadeFromZ <= z && z < Object.FromZ){
                    Object.Vertex[i].a = (unsigned char)(255.0f / (Object.FromZ - Object.FadeFromZ) * (Object.FromZ - z)) ; 
                }
                //�`�悷��͈͂��߂������瓧��0
                else if(Object.FromZ < z){
                    Object.Vertex[i].a = 0;
                }
            }
        }

        // �|���S���𓧉ߐF�����łQ���`��
        DrawPolygon3D( Object.Vertex, 2, Object.Img, TRUE ) ;

        DrawFormatString(0,0,GetColor(255,255,255),"%f",z);
        // ����ʂ̓��e��\��ʂɔ��f
        ScreenFlip() ;
    }

    // �c�w���C�u�����g�p�̏I������
    DxLib_End() ;

    // �\�t�g�̏I��
    return 0 ;
}

