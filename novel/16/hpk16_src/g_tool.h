
//------------------------------------------------------------
//	g_tools.h		�O���t�B�b�N����̊�{�֐�
//------------------------------------------------------------

//#include	<windows.h>
//#include	<stdio.h>
//#include	"ADV_BasicTips.h"
//#include	"TextEngine.h"

extern	HINSTANCE	hinst;		//���s�t�@�C���̃C���X�^���X�̃n���h��
extern	HWND		hwnd;		//�E�B���h�E�̃n���h��


//-----------------------------------------------------------
//	��Ԃ���y��BMP�ǂݍ���
//-----------------------------------------------------------

int Load_Bmp( HDC hdc, char *f_name_of_BMP);


//-----------------------------------------------------------
//	�t���J���[BMP����̎��͓ǂݍ��݊֐�
//-----------------------------------------------------------

int Load_Fullcolor_Bmp( HDC hdc, char *f_name_of_BMP);
	//�t���J���[BMP�̓ǂݍ��݁i�C���f�b�N�X�J���[�͖����j


//------------------------------------------------
//	������\���i�e�t���j
//------------------------------------------------

int    StrPut3D(HDC hdc,int x,int y,int fontSize,UINT color1,UINT color2,char *str);
	//������\���i���RD���Ă̂͌ꕾ�����邩���F�΁j


//------------------------------------------------
//	�P�����\���i�e�t���j
//------------------------------------------------

int    ChrPut3D(HDC hdc,int x,int y,int fontSize,
				UINT color1,UINT color2,char *str,int len);
	//�P�����\���i���RD���Ă̂͌ꕾ�����邩���F�΁j
	//	len�F�\�����镶���̃o�C�g���i1 or 2�j

//------------------------------------------------
//	������`��
//------------------------------------------------

void	Line(HDC hdc,int x1,int y1,int x2,int y2,UINT color,int penfat);


//------------------------------------------------
//	�l�p�`��`���i�g�����j
//------------------------------------------------

void	Box(HDC hdc,RECT rect,UINT color);


//------------------------------------------------
//	�l�p�`��`���i�ʂ�Ԃ��j
//------------------------------------------------

void	Boxf(HDC hdc,RECT rect,UINT color);



//------------------------------------------------
//	���\�[�XBMP�̃��[�h
//------------------------------------------------

void	DrawResBmploadRect(HINSTANCE hinst,HDC hdc,int x,int y,RECT rect,LPCTSTR lpszBitmap);
	//RECT rect�F���\�[�X�摜�̓]���������̈���w��


//------------------------------------------------
//	���\�[�XBMP�̓���̃s�N�Z����GET
//------------------------------------------------

COLORREF 	GetPixelResBmp(HDC hdc,HINSTANCE hinst,int x,int y,LPCTSTR lpszBitmap);


//end of file

