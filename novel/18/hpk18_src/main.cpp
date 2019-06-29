
//-----------------------------------------------------------------------------
//	main.cpp	
//-----------------------------------------------------------------------------


#include	<windows.h>
#include	"g_tool.h"
#include	"BasicTips.h"
#include	"TextEngine.h"
#include	"main.h"
#include	"Text_Com_01.h"

HWND		hwnd;		//�E�B���h�E�̃n���h��

HDC			win_hdc;	//�f�o�C�X�R���e�L�X�g�i��ʂ𑀍삷��Ƃ��Ɏg���܂��j
HDC			Back_DC;	//�f�o�C�X�R���e�L�X�g�i����ʗp�j
HDC			Parts_DC;	//�f�o�C�X�R���e�L�X�g�i�p�[�c�ށj
HDC			BG_DC;		//�f�o�C�X�R���e�L�X�g�i�w�i�摜�j
HBITMAP		hBack_Bitmap;	//�o�b�N��ʖ{�̂̃n���h��
HBITMAP		hParts_Bitmap;	//�p�[�c��ʖ{�̂̃n���h��
HBITMAP		hBG_Bitmap;		//�w�i��ʖ{�̂̃n���h��

HINSTANCE	hinst;		//�C���X�^���X�i���������ɂ�������t�@�C���j�ւ̃n���h��
						//���Q�d�N���Ȃǂւ̑΍�Ƃ��Ď������g�̃n���h���������Ă���

_Mode_stat	Mode_stat;	//Mainloop()�ŎQ�Ƃ���t���O�ނ��܂Ƃ߂��\���́i��`�� main.h �Q�Ɓj

//==================================================================
//	���������낢��
//==================================================================

//-----------------------------------
//	�o�b�N�T�[�t�F�C�X������
//-----------------------------------

void init_Back_Surface()
{
	HDC		work_hdc;	//��Ɨp��DC

	//�� �o�b�N��ʂ̏�����
	work_hdc=GetDC(hwnd);					//��i�\�j��ʂ�DC�̓��e���擾
	Back_DC=CreateCompatibleDC(work_hdc);	//�����ݒ�Ńo�b�N��ʗp��DC�𐶐�
	hBack_Bitmap=CreateCompatibleBitmap(work_hdc,640,480);//��i�\�j��ʂƓ��������ŉ�ʐ���
	SelectObject(Back_DC,hBack_Bitmap);		//DC�Ɖ�ʖ{�̂��֘A�t����

	PatBlt(Back_DC,0,0,640,480,PATCOPY);	//�Ƃ肠�������œh��Ԃ�

	ReleaseDC(hwnd,work_hdc);				//��ƗpDC���J��
}

//-----------------------------------
//	�p�[�c�p�T�[�t�F�C�X������
//-----------------------------------

void init_Parts_Surface()
{
	HDC		work_hdc;	//��Ɨp��DC

	//�� �o�b�N��ʂ̏�����
	work_hdc=GetDC(hwnd);					//��i�\�j��ʂ�DC�̓��e���擾
	Parts_DC=CreateCompatibleDC(work_hdc);	//�����ݒ�Ńo�b�N��ʗp��DC�𐶐�
	hParts_Bitmap=CreateCompatibleBitmap(work_hdc,75,25);//��i�\�j��ʂƓ��������ŉ�ʐ���
	SelectObject(Parts_DC,hParts_Bitmap);		//DC�Ɖ�ʖ{�̂��֘A�t����

	Load_Bmp( Parts_DC,"Parts.bmp");		//�p�[�c�pBMP��ǂݍ���ł���

	ReleaseDC(hwnd,work_hdc);				//��ƗpDC���J��
}

//-----------------------------------
//	�w�i�摜�p�T�[�t�F�C�X������
//-----------------------------------

void init_BG_Surface()
{
	HDC		work_hdc;	//��Ɨp��DC

	//�� �o�b�N��ʂ̏�����
	work_hdc=GetDC(hwnd);					//��i�\�j��ʂ�DC�̓��e���擾
	BG_DC=CreateCompatibleDC(work_hdc);		//�����ݒ�Ńo�b�N��ʗp��DC�𐶐�
	hBG_Bitmap=CreateCompatibleBitmap(work_hdc,640,480);	//��i�\�j��ʂƓ��������ŉ�ʐ���
	SelectObject(BG_DC,hBG_Bitmap);			//DC�Ɖ�ʖ{�̂��֘A�t����

	Load_Bmp( BG_DC,"Back00.bmp");			//�f�t�H���g�w�iBMP��ǂݍ���ł���

	ReleaseDC(hwnd,work_hdc);				//��ƗpDC���J��
}


//----------------------------------
//	Mainloop�p�t���O�ނ̏�����
//----------------------------------

void init_Mode_stat()
{
	Mode_stat.flag_text = ON;			//�e�L�X�g�\��ON
	Mode_stat.flag_delay = OFF;			//�x��OFF
	Mode_stat.flag_cursor_blink = OFF;	//�J�[�\���\��OFF

}

//----------------------------------
//	���������C��
//----------------------------------

void init_game()
{
	init_Back_Surface();	//Back Surface�쐬
	init_Parts_Surface();	//Parts Surface�쐬
	init_BG_Surface();		//BG Surface�쐬

	//�w�i�ƂȂ�O���t�B�b�N�f�[�^���o�b�N�T�[�t�F�C�X�ɓ]�����Ă���
	BitBlt(Back_DC,0,0,640,480,BG_DC,0,0,SRCCOPY);	

	Init_Text_engine();		//�e�L�X�g�G���W��������

	init_Mode_stat();		//Mode_stat�ɂ܂Ƃ߂��t���O�ނ̏�����
}


//==================================================================
//	���C�����[�v
//==================================================================

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�������Ƃ��Ɏ��s���郋�[�v
void	Mainloop(void)
{
	static DWORD fps_keep=0; //�e�o�r�����ɕۂ��߂̃^�C�}�[�ϐ�
	if( GetTickCount() < fps_keep + 1000/80 ) return; 
	fps_keep = GetTickCount(); //�V�X�e���������擾

	//�e�L�X�g�\��
	if( Mode_stat.flag_text == ON ) Text_engine();
	
	//�x��
	if( Mode_stat.flag_delay == ON ) Com_delay_task();
	
	//�J�[�\���u�����N
	if( Mode_stat.flag_cursor_blink == ON ) Com_cursor_blink_task();

	//�I��
	if( Mode_stat.flag_halt == ON ) Com_halt_task();		

	HLS_stc_FPS(Back_DC);
	BitBlt(win_hdc,0,0,640,480,Back_DC,0,0,SRCCOPY);	//����� �� �\��ʂɃR�s�[
}

//==================================================================
//	�C�x���g�`�F�b�N
//==================================================================

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
		case	WM_KEYDOWN:	//�L�[�������ꂽ
					switch(wprm){
							case	VK_ESCAPE:
								PostQuitMessage(0);
								//PostMessage(hwnd,WM_CLOSE,0,0);	//(ESC)����͂ŏI��
								break;
							case	VK_SPACE:
							case	VK_RETURN:
								//�J�[�\���u�����N���Ȃ�u�����N����
								if( Mode_stat.flag_cursor_blink == ON ){
									Com_cursor_blink_end();
								}
								//�I���҂����Ȃ�I������
								if( Mode_stat.flag_halt == ON ){
									Com_halt_end();
								}
								break;
					}
					break;
		case	WM_LBUTTONDOWN:	//�}�E�X���{�^���������ꂽ
					//�J�[�\���u�����N���Ȃ�u�����N����
					if( Mode_stat.flag_cursor_blink == ON ){
						Com_cursor_blink_end();
					}
					//�I���҂����Ȃ�I������
					if( Mode_stat.flag_halt == ON ){
						Com_halt_end();
					}
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

	Window_Center(hwnd);	//Window����ʒ����ɂ���

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
