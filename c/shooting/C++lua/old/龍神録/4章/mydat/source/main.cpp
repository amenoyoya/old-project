#define GLOBAL_INSTANCE 
#include "../include/GV.h"

//���݂̃L�[���͏������s��
extern int GetHitKeyStateAll_2();
//�󂯎�����L�[�ԍ��̌��݂̓��͏�Ԃ�Ԃ�
extern int CheckStateKey(unsigned char Handle);

//�f�[�^�̃��[�h
extern void load();

//�`�惁�C��
extern void graph_main();

int img_ch[2][12];	//�L�����N�^�摜9�����@X2(�ϐg�p)
ch_t ch;			//�L�����N�^�f�[�^�錾

//���[�v�ŕK���s���R�又��
int ProcessLoop(){
	if(ProcessMessage()!=0)return -1;//�v���Z�X�������G���[�Ȃ�-1��Ԃ�
	if(ClearDrawScreen()!=0)return -1;//��ʃN���A�������G���[�Ȃ�-1��Ԃ�
	GetHitKeyStateAll_2();//���݂̃L�[���͏������s��
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow){
    ChangeWindowMode(TRUE);//�E�B���h�E���[�h
    if(DxLib_Init() == -1 || SetDrawScreen( DX_SCREEN_BACK )!=0) return -1;//�������Ɨ���ʉ�

	load();//�f�[�^���[�h

	while(ProcessLoop()==0){//���C�����[�v
		
		graph_main();//�`�惁�C��

		if(CheckStateKey(KEY_INPUT_ESCAPE)==1)break;//�G�X�P�[�v�����͂��ꂽ��u���C�N
        ScreenFlip();//����ʔ��f
    }

    DxLib_End();//�c�w���C�u�����I������
    return 0;
}
