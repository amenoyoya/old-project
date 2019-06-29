
//-----------------------------------------------------------------------------
//	main.h
//-----------------------------------------------------------------------------


//#include	<windows.h>
//#include	"g_tool.h"
//#include	"BasicTips.h"
//#include	"TextEngine.h"
//#include	"main.h"
//#include	"Text_Com_01.h"

extern HWND			hwnd;		//�E�B���h�E�̃n���h��

extern HDC			win_hdc;	//�f�o�C�X�R���e�L�X�g�i��ʂ𑀍삷��Ƃ��Ɏg���܂��j
extern HDC			Back_DC;	//�f�o�C�X�R���e�L�X�g�i����ʗp�j
extern HDC			Parts_DC;	//�f�o�C�X�R���e�L�X�g�i�p�[�c�ށj
extern HBITMAP		hBack_Bitmap;	//�o�b�N��ʖ{�̂̃n���h��
extern HBITMAP		hParts_Bitmap;	//�p�[�c��ʖ{�̂̃n���h��

extern HINSTANCE	hinst;		//�C���X�^���X�i���������ɂ�������t�@�C���j�ւ̃n���h��
								//���Q�d�N���Ȃǂւ̑΍�Ƃ��Ď������g�̃n���h���������Ă���

struct _Mode_stat {
	int		flag_text;	//�e�L�X�g�\���FON=�i�s OFF=��~

	int		flag_delay;	//�x�������FON=�x������ OFF=�x���Ȃ�

	int		flag_cursor_blink;	//�J�[�\���_�ŁFON=�_�� OFF=�_�łȂ�
};
extern _Mode_stat	Mode_stat;

//������
void init_game();

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�������Ƃ��Ɏ��s���郋�[�v
void	Mainloop(void);

//���b�Z�[�W�i�}�E�X��L�[�̓��͂Ȃǁj�́A�����Œ��ׂ܂�
LRESULT WndProc(HWND hwnd,UINT msg,WPARAM wprm,LPARAM lprm);


//---------------------------------------------------------
//	����������s�J�n��
//---------------------------------------------------------

APIENTRY WinMain(HINSTANCE hIns,HINSTANCE hPI,LPSTR lpArg,int nCmdShow);

//end of file
