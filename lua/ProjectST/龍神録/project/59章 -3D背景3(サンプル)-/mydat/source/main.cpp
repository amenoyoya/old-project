#include "../../../include/DxLib.h"

//���Ȃ���������Ƃ��߁B-1�Ŏg�p���Ă���B
#define OBCHILD_MAX 11
#define OBJECT_NUM_MAX 10

//�O�p�`�̃|���S���Q�Ŏl�p�`��`�悷��ׂ̒l�B���l�Œ�Ȃ̂ŁA�o����K�v�Ȃ�
typedef struct{
    float x,y;
    float u,v;
}VtPm_t;
VtPm_t VtPm[6]={{-1,1,0,0},{1,1,1,0},{-1,-1,0,1},{1,-1,1,1},{-1,-1,0,1},{1,1,1,0}};

//��̃e�N�X�`���[�ɂ��Ă̍\����
typedef struct{
    float x,y,z;//���S�_
    VERTEX_3D Vertex[6] ;        //�`��p���_6��
} ObChild_t;

//��R�̃e�N�X�`���[���W�܂�����̏��B
//�Ⴆ�΍��Ƀ_�[���ƘA���ŕ\�������ǂ͑�R�̂�ObChild_t�������ŊǗ����Ă���B
//Obchild_t�̏W��
typedef struct{
    int Type;    // 0:��ʂɕ��s�A1:��ʂɐ���
    int Img;    //�摜
    int ImgSize;
    int ImgX1,ImgX2,ImgY1,ImgY2;
    float LargeX,LargeY;//�c���̑傫��(Type��1�̎���LargeX��LargeZ�̖���������)
    float Zhaba;
    float FromZ,ToZ;    //�ǂ�����ǂ��܂ŉ��s����ݒ肷�邩
    float FadeFromZ,FadeToZ;    //�ǂ�����ǂ��܂Ńt�F�[�h��ݒ肷�邩(������u�ԃt�F�[�h�A�E�g�A�����u�ԃt�F�[�h�C������)
    int ObchindMax;
    ObChild_t ObChild[ OBCHILD_MAX ];
} Object_t;

int ObjectNum;
Object_t Object[OBJECT_NUM_MAX];
/*
int ImgHandle   : �摜�n���h��
int ImgSize     : �摜�T�C�Y
int ImgX1       : �摜�̎g�p���镔��������W
int ImgY1       : �摜�̎g�p���镔��������W
int ImgX2       : �摜�̎g�p���镔���E�����W
int ImgY2       : �摜�̎g�p���镔���E�����W
float LargeX    : �`�悷��傫���i���j
float LargeY    : �`�悷��傫���i�c�j
int Type        : �`��^�C�v�@0:��ʂƓ��������@1:��ʂɐ����i�ǁj�@2:��ʂɐ����i�n�ʁj
float FromZ     : �`����n�߂鉜�s��
float FadeFromZ : �t�F�[�h�C�����n�߂鉜�s��
float FadeToZ   : �t�F�[�h�A�E�g���n�߂鉜�s��
float ToZ       : �`����I��鉜�s��
float GraphX    : �`�悷�钆�S�_
float GraphY    : �`�悷�钆�S�_
int ObchildMax  : type��0�̏ꍇ�̂݁A�����ɂ����\�����邩
*/
void IniObj(Object_t *Ob, int ImgHandle, int ImgSize, int ImgX1, int ImgY1, int ImgX2, int ImgY2, float LargeX, float LargeY,
              int Type, float FromZ, float FadeFromZ, float FadeToZ, float ToZ, float GraphX, float GraphY, int ObchildMax){
    int i,s;

    if( ObjectNum >= OBJECT_NUM_MAX-1 ){
        printfDx("�I�u�W�F�N�g�o�^�I�[�o�[\n");
        return ;
    }
    ObjectNum++;//�I�u�W�F�N�g�̓o�^�����Z

    Ob->Img = ImgHandle;//�摜�n���h��
    Ob->ImgSize = ImgSize;//�摜�T�C�Y
    Ob->ImgX1 = ImgX1;
    Ob->ImgY1 = ImgY1;
    Ob->ImgX2 = ImgX2;
    Ob->ImgY2 = ImgY2;
    Ob->LargeX = LargeX;//�Ƃ肠�����`�悷��傫����K���ɐݒ�B�c�E����͑f�ނ̒ʂ�ɂ���
    Ob->LargeY = LargeY;
    Ob->Type = Type;//�^�C�v�𐂒���
    Ob->FromZ     =  FromZ;//�`��J�n�n�_
    Ob->FadeFromZ =  FadeFromZ;//�`��t�F�[�h�C���J�n�n�_
    Ob->FadeToZ   =  FadeToZ;//�`��t�F�[�h�A�E�g�J�n�n�_
    Ob->ToZ       =  ToZ;//�`��I���n�_
    Ob->ObchindMax = OBCHILD_MAX;
    if( Ob->Type == 0 ){
        Ob->ObchindMax = ObchildMax;
    }
    if( Ob->ObchindMax - 1 <= 0 ){
        printfDx("�\�����̐ݒ肪�ُ�ł�\n");
        return ;
    }
	//Z�̕��v�Z
    Ob->Zhaba = (Ob->FromZ - Ob->ToZ) / (Ob->ObchindMax-1);

    float ou1 = (float)Ob->ImgX1 / Ob->ImgSize, ou2 = (float)(Ob->ImgX2 - Ob->ImgX1) / Ob->ImgSize;
    float ov1 = (float)Ob->ImgY1 / Ob->ImgSize, ov2 = (float)(Ob->ImgY2 - Ob->ImgY1) / Ob->ImgSize;
    for(s=0; s<Ob->ObchindMax; s++){
        Ob->ObChild[s].x = GraphX;
        Ob->ObChild[s].y = GraphY;
        Ob->ObChild[s].z = Ob->ToZ - Ob->Zhaba + Ob->Zhaba * s;;
        for(i=0; i<6; i++){
            Ob->ObChild[s].Vertex[i].r = Ob->ObChild[s].Vertex[i].g = Ob->ObChild[s].Vertex[i].b = Ob->ObChild[s].Vertex[i].a = 255;
            Ob->ObChild[s].Vertex[i].u = ou1 + ou2 * VtPm[i].u;
            Ob->ObChild[s].Vertex[i].v = ov1 + ov2 * VtPm[i].v;
        }
    }
}

void ini (){
    int ImgHandle;
    ObjectNum = 0;
    ImgHandle = LoadGraph( "mydat/img/tex.png" );
    IniObj(&Object[0], ImgHandle, 512,  0,  0, 256, 128, 250, 50, 2, 1000, 400, -200, -400, 320, 240-90, OBCHILD_MAX);
    IniObj(&Object[1], ImgHandle, 512, 60,270, 405, 512, 180,125, 0, 1000, 400, -200, -400, 470, 275, 6);
    ImgHandle = LoadGraph( "mydat/img/kabe.png" );
    IniObj(&Object[2], ImgHandle, 512,  0,  0, 390, 512,  73, 90, 1, 1000, 400, -200, -400, 170, 240, OBCHILD_MAX);
}

void ClacObject(){
    int t,s,i;
    for(t=0; t<ObjectNum; t++){
        for(s=0; s<Object[t].ObchindMax; s++){
            Object[t].ObChild[s].z-=3;
            for(i=0;i<6;i++){
                switch(Object[t].Type){
                    case 0://��ʂɕ��s
                        Object[t].ObChild[s].Vertex[i].pos.x = Object[t].ObChild[s].x + Object[t].LargeX * VtPm[i].x ;    
                        Object[t].ObChild[s].Vertex[i].pos.y = Object[t].ObChild[s].y + Object[t].LargeY * VtPm[i].y ;
                        Object[t].ObChild[s].Vertex[i].pos.z = Object[t].ObChild[s].z ;
                        break;
                    case 1://��ʂɐ���(��)
                        Object[t].ObChild[s].Vertex[i].pos.x = Object[t].ObChild[s].x;    
                        Object[t].ObChild[s].Vertex[i].pos.y = Object[t].ObChild[s].y + Object[t].LargeY * VtPm[i].y ;
                        Object[t].ObChild[s].Vertex[i].pos.z = Object[t].ObChild[s].z + Object[t].Zhaba/2* VtPm[i].x ;
                        break;
                    case 2://��ʂɐ���(��)
                        Object[t].ObChild[s].Vertex[i].pos.x = Object[t].ObChild[s].x + Object[t].LargeX * VtPm[i].x;    
                        Object[t].ObChild[s].Vertex[i].pos.y = Object[t].ObChild[s].y ;
                        Object[t].ObChild[s].Vertex[i].pos.z = Object[t].ObChild[s].z + Object[t].Zhaba/2* VtPm[i].y;
                        break;
                }
            }
        }

        if( Object[t].FromZ - Object[t].FadeFromZ <= 0 ){
            printfDx("Object[%d].From�̐ݒ肪��������\n",t);
        }
        else if( Object[t].FadeToZ - Object[t].ToZ <= 0 ){
            printfDx("Object[%d].To�̐ݒ肪��������\n",t);
        }
        else{
            for(s=0; s<Object[t].ObchindMax; s++){
                for(i=0; i<6; i++){
                    float z = Object[t].ObChild[s].Vertex[i].pos.z;
                    //�ʒu���`�悷��͈͂�艓�������瓧��0
                    if     (z < Object[t].ToZ){
                        Object[t].ObChild[s].Vertex[i].a = 0;
                    }
                    //(�߂Â��Ă���ꍇ)�t�F�[�h�C������ʒu��������
                    else if(Object[t].ToZ < z && z <=Object[t].FadeToZ){
                        Object[t].ObChild[s].Vertex[i].a = (unsigned char)(255.0f / (Object[t].FadeToZ - Object[t].ToZ) * (z - Object[t].ToZ)) ;
                    }
                    //�ʏ�`�悷��ʒu�Ȃ�
                    else if(Object[t].FadeToZ <= z && z <= Object[t].FadeFromZ){
                        Object[t].ObChild[s].Vertex[i].a = 255;
                    }
                    //(�߂Â��Ă�ꍇ)�t�F�[�h�A�E�g����ʒu��������
                    else if(Object[t].FadeFromZ <= z && z < Object[t].FromZ){
                        Object[t].ObChild[s].Vertex[i].a = (unsigned char)(255.0f / (Object[t].FromZ - Object[t].FadeFromZ) * (Object[t].FromZ - z)) ; 
                    }
                    //�`�悷��͈͂��߂������瓧��0
                    else if(Object[t].FromZ < z){
                        Object[t].ObChild[s].Vertex[i].a = 0;
                    }
                }
                //�߂Â��Č����Ȃ��Ȃ�����
                if(Object[t].ObChild[s].z < Object[t].ToZ - Object[t].Zhaba*0.5f){
                    //��Ԍ���������
                    float sub = (Object[t].ToZ - Object[t].Zhaba*0.5f)- Object[t].ObChild[s].z;
                    Object[t].ObChild[s].z = Object[t].FromZ + Object[t].Zhaba*0.5f - sub;
                }
                //���������Č����Ȃ��Ȃ�����
                else if(Object[t].ObChild[s].z > Object[t].FromZ + Object[t].Zhaba*0.5f){
                    //��Ԃ����瑤��
                    float sub = Object[t].ObChild[s].z - (Object[t].FromZ + Object[t].Zhaba*0.5f);
                    Object[t].ObChild[s].z = Object[t].ToZ - Object[t].Zhaba*0.5f + sub;
                }
            }
        }
    }
}

void SwapObChild(ObChild_t *Ob1,ObChild_t *Ob2){
    ObChild_t t = *Ob1;
    *Ob1 = *Ob2;
    *Ob2 = t;
}

//Z�Ńe�N�X�`�����\�[�g
void SortObject(){
    int i,j,t;
    for(t=0; t<ObjectNum; t++){
        for (i = 0; i < Object[t].ObchindMax ; i++) {
            for (j = i + 1; j < Object[t].ObchindMax ; j++) {
                if ( Object[t].ObChild[i].z < Object[t].ObChild[j].z ) {
                    SwapObChild( &Object[t].ObChild[i],  &Object[t].ObChild[j] );
                }
            }
        }
    }
}

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow ){
    int s,t;
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

    ini();

    while(ProcessMessage()==0 && ClearDrawScreen()==0 && CheckHitKey(KEY_INPUT_ESCAPE)==0){
        ClacObject();
        SortObject();
        SetDrawMode( DX_DRAWMODE_BILINEAR ) ;//�|���S�����r�������Ȃ��悤�ȕ`��̎d���u�o�C���j�A�@�v
        for(t=0; t<ObjectNum; t++){
            for(s=0; s<Object[t].ObchindMax; s++){
                DrawPolygon3D( Object[t].ObChild[s].Vertex, 2, Object[t].Img, TRUE ) ;
            }
        }
        SetDrawMode(DX_DRAWMODE_NEAREST);//�`��̎d�������ɖ߂�
        ScreenFlip() ;
    }
    DxLib_End() ;
    return 0 ;
}