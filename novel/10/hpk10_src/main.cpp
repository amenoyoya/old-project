
//-----------------------------------------------------------------------------
//	main.cpp	�R�}���h���`�F�u�x���v�̃C���v�������g
//-----------------------------------------------------------------------------


#include	<windows.h>
#include	"g_tool.h"
#include	"BasicTips.h"
#include	"TextEngine.h"
#include	"main.h"
#include	"Text_Com_01.h"

HWND		hwnd;		//�E�B���h�E�̃n���h��
HDC			win_hdc;	//�f�o�C�X�R���e�L�X�g�i��ʂ𑀍삷��Ƃ��Ɏg���܂��j
HINSTANCE	hinst;		//�C���X�^���X�i���������ɂ�������t�@�C���j�ւ̃n���h��
						//���Q�d�N���Ȃǂւ̑΍�Ƃ��Ď������g�̃n���h���������Ă���
int			flag_delay;	//�x�������p�̃t���O

//������
void init_game()
{
	//�e�L�X�g�G���W��������
	Init_Text_engine();

	flag_delay = OFF;	//�u�x���v�t���O�͍ŏ���OFF�ɂ��Ă����iON/OFF �� BasicTips.h�ɂĒ�`�j

}

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�������Ƃ��Ɏ��s���郋�[�v
void	Mainloop(void)
{
	//�t���O�ɂ����Mainloop����ĂԊ֐���؂�ւ���
	if(flag_delay == OFF){
		//�e�L�X�g�G���W�����Ă�
		Text_engine();
	} else {
		//�x���t���O�������Ă�����A�x���^�X�N���Ă�
		Com_delay_task();
	}
}

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�́A�����Œ��ׂ܂�
LRESULT WndProc(HWND hwnd,UINT msg,WPARAM wprm,LPARAM lprm)
{
	//�����̗�ł́AWindow�E��̏����{�^���������ďI�������邱�Ƃ����o���܂���i���j
	//��ɁA������Ȃ��炢�낢��ȃC�x���g������ǉ����Ă����܂��B

	switch(msg){
		case	WM_CREATE:		//Window���������ꂽ
			break;
		case	WM_DESTROY:		//Window�̏������삪���ꂽ
			PostQuitMessage(0);
			break;
		default:
			//���̑��̃C�x���g��Windows�̃V�X�e���ɂ��C���i�y����A�y����j
			return DefWindowProc(hwnd,msg,wprm,lprm);	
	}

	return 0;
}


//---------------------------------------------------------
//	����������s�J�n��
//---------------------------------------------------------

APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow)
{
	MSG			msg;	//Windows�V�X�e���̃��b�Z�[�W�\���́i����܂�C�ɂ��Ȃ��Ă����ł��j
	WNDCLASS	wc;		//Window�N���X�i�����J���Ƃ��ɂ����g�p���܂��j

	hinst=hIns;			//��۰��ٕϐ� hinst �ɁA�N�����ɗ^������ݽ�ݽ�l��ێ����Ă���

	//--------------------------------------------------------------
	//�����J�����߂̏��v���Ұ���Window�N���X wc �̃����o�ϐ��ɗ^����
	//--------------------------------------------------------------
	wc.hInstance=hIns;					//�ݽ�ݽ�l
	wc.lpszClassName="���P��";			//�N���X���i�K���ł��܂�Ȃ��j
	wc.lpfnWndProc=(WNDPROC)WndProc;	//�C�x���g�n���h����o�^
	wc.style=0;							//�X�^�C���͂Ƃ肠�����O�ł�����
	wc.hIcon=LoadIcon((HINSTANCE)NULL,IDI_APPLICATION);	//�����ް�ɕ\�����鱲�݂���̫�Ăł�����
	wc.hCursor=LoadCursor((HINSTANCE)NULL,IDC_ARROW);	//ϳ����ق��W���`���ł�����
	wc.lpszMenuName=0;					//
	wc.cbClsExtra=0;					//
	wc.cbWndExtra=0;					//
	wc.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	if(RegisterClass(&wc)==0)return 0;

	hwnd=CreateWindowEx(
		0,							//�g���X�^�C���͓��ɍl���Ȃ�
		wc.lpszClassName,			//�N���X���i���Ō��߂����̂�^���Ă�����OK�j
		"�����Ƃ�",					//Window�̍����ɕ\������鑋�̖��O
		WS_OVERLAPPEDWINDOW,		//�E�B���h�E�X�^�C���i�������ł͉����w��̂݁j
		20,20,640,480,				//���̔z�u�|�W�V�����A�傫��(������x,y�y�ѕ��A����) 
		(HWND)NULL,					//�eWindow������فi�����ł͖����j
		(HMENU)NULL,				//�ƭ����q����޳�������̂ŋC�ɂ��Ȃ�
		hIns,						//�C���X�^���X�l
		(LPVOID)NULL				//���ɎQ�Ƃ��ׂ��f�[�^�͖����̂ŋC�ɂ��Ȃ�
		);

	if(!hwnd)return 0;	//Window���J���̂Ɏ��s������I������
						//��ٰ�߂ɓ���O�ɏI������Ƃ��͂O��Ԃ��K��ɂȂ��Ă���

	ShowWindow(hwnd,nCmdShow);	//�O�g�̕`��
	UpdateWindow(hwnd);		//�N���C�A���g�̈�̕`��
		
	win_hdc=GetDC(hwnd);	//����̉�ʑ���ɔ����� DC ���擾���Ă���

	init_game();			//�Q�[���V�X�e��������

	//�����J������A�����Ŗ������[�v�ɓ����ăC�x���g�Ď����s��
	while(1){
		//���b�Z�[�W�L���[�ɂȂɂ������ė������H
		if(PeekMessage(&msg,NULL,0,0,PM_NOREMOVE)){
			//���b�Z�[�W������Ώ�������
			if(!GetMessage(&msg,(HWND)NULL,0,0))break;	//�I�����b�Z�[�W�Ȃ烋�[�v����
			TranslateMessage(&msg);	//�L�[���b�Z�[�W�𕶎����b�Z�[�W�ɕϊ�
			DispatchMessage(&msg);	//�E�B���h�E�v���V�[�W���Ƀ��b�Z�[�W�𑗕t
		}else{
			//���b�Z�[�W��������� Mainloop()�����s
			Mainloop();
		}
	}

	//���I�����ɂ� wParam �p�����[�^�����I���R�[�h��Ԃ��K��ɂȂ��Ă���
	return msg.wParam;	
}
