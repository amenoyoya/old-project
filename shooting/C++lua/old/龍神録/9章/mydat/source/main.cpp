#define GLOBAL_INSTANCE 
#include "../include/GV.h"

//���[�v�ŕK���s���R�又��
int ProcessLoop(){
    if(ProcessMessage()!=0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
    if(ClearDrawScreen()!=0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
    GetHitKeyStateAll_2();//���݂̃L�[���͏������s��
    GetHitPadStateAll();  //���݂̃p�b�h���͏������s��
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

    while(ProcessLoop()==0){//���C�����[�v
        switch(func_state){
            case 0:
                load();        //�f�[�^���[�h
                first_ini();//����̏�����
                func_state=100;
                break;
            case 100:
                calc_ch();	//�L�����N�^�v�Z
				ch_move();	//�L�����N�^�̈ړ�����
                graph_main();//�`�惁�C��
                break;
            default:
                printfDx("�s����func_state\n");
                break;
        }

        if(CheckStateKey(KEY_INPUT_ESCAPE)==1)break;//�G�X�P�[�v�����͂��ꂽ��u���C�N
        ScreenFlip();//����ʔ��f
    }

    DxLib_End();//�c�w���C�u�����I������
    return 0;
}
