//-----------------------------------------------------------------------------------------
//	TexitEngine.cpp
//-----------------------------------------------------------------------------------------

#include	"BasicTips.h"
#include	"g_tool.h"
#include	<windows.h>

extern HWND hwnd;

//###################################################################
//	�s�d�w�s�G���W��
//###################################################################

//  �� ���񂿂���
//	SHIFT JIS �R�[�h�́A��P�o�C�g�� 80h �ȏ�ł���B	
//	{ } / ; ���̃V�i���I�t�@�C�����䕶���́A���ׂ�		
//	80h �����̃R�[�h�ł���̂ŁA�S�p�����Ƌ�������ꍇ��
//	�K����Q�o�C�g�ƂԂ��邱�ƂɂȂ�B ���������āA	
//	���ꂪ���p�������S�p�������̔���́A{ } / ; ����	
//	�������ꍇ���̒��O�̂P�o�C�g�� 80h �ȏォ�ǂ���	
//	�ōs�Ȃ����Ƃ��ł���B80h�ȏ�Ȃ�S�p�A80h�ȉ��Ȃ�	
//	���p�����Ő���ΏۂƂȂ�B	

#define			SIZE_OF_TEXT_BUF 0xffff		//64KB������΃o�b�t�@�Ƃ��Ă͏[���ł��傤

unsigned char	TEXT_BUF[SIZE_OF_TEXT_BUF];	//�X�N���v�g��ǂݍ��ރG���A

unsigned char	*TEXT;	//Text pointer�i�e�L�X�g���߈ʒu���|�C���g���܂��j

int		Font_Size;	//�t�H���g�T�C�Y

int		TEXT_WAIT;		//�P�����\���̃E�F�C�g
RECT	TEXT_AREA;		//�e�L�X�g��W�J�����ʗ̈�
int		TEXT_X;			//���݂̕\���ʒu�w
int		TEXT_Y;			//���݂̕\���ʒu�x
int		TEXT_X_PITCH;	//��������s�b�`�w
int		TEXT_Y_PITCH;	//��������s�b�`�x

DWORD	TEXT_TIMER;		//�^�C�}�[

//-------------------------------------
//	TEXT�G���W��������
//-------------------------------------

void _Set_Default_params()
	//�f�t�H���g�p�����[�^�̐ݒ�
{	

	TEXT_WAIT = 100;			//�P�����\���̃E�F�C�g(ms)
	Font_Size = 20;				//Font size

	TEXT_AREA.left	= 20;		//�e�L�X�g�\���G���A�i���j�������ł�640*480�̉�ʒ[����ꗥ20�h�b�g�����ɐݒ肵�Ă��܂�
	TEXT_AREA.top	= 20;		//�e�L�X�g�\���G���A�i��j
	TEXT_AREA.right	= 640-20;	//�e�L�X�g�\���G���A�i�E�j
	TEXT_AREA.bottom= 480-20;	//�e�L�X�g�\���G���A�i���j

	TEXT_X=TEXT_AREA.left;			//�����ʒu�J�E���^�������i�\���G���A��������n�܂�j	
	TEXT_Y=TEXT_AREA.top;		

	TEXT_X_PITCH = Font_Size/2;					//��������s�b�`�i�w�j
	TEXT_Y_PITCH = Font_Size*130/100;			//��������s�b�`�i�x�j
}

void Init_Text_engine()
	//�C�j�V�����C�Y����́u�e�v�֐�
{
	TEXT=TEXT_BUF;	//�e�L�X�g�|�C���^TEXT���o�b�t�@�擪�ɃZ�b�g

	//�f�t�H���g�̃X�N���v�g�t�@�C����ǂ�
	HLS_bload("default.txt",(char *)TEXT_BUF);

	_Set_Default_params();			//�f�t�H���g�p�����[�^�̐ݒ�

	HLS_timer_start(&TEXT_TIMER);	//�^�C�}�[�X�^�[�g
}

//-------------------------------------
//	�����ʒu�̃C���N�������g
//-------------------------------------

void Increment_textp_pos(int inc)	
	//�����\���ʒu�̃C���N�������g
	//	int inc�F��byte�C���N�������g���邩���Por2
{
	//�e�L�X�g�`��G���A����͂ݏo���Ă��܂��ꍇ�ɂ͉��s���������
	if( (TEXT_X+TEXT_X_PITCH*inc) < (TEXT_AREA.right-TEXT_X_PITCH*2) ){
		TEXT_X += TEXT_X_PITCH*inc;
	}else{
		TEXT_X =  TEXT_AREA.left;

		if( (TEXT_Y+TEXT_Y_PITCH) < (TEXT_AREA.bottom-TEXT_Y_PITCH) ){
			TEXT_Y += TEXT_Y_PITCH;
		}else{
			//�P�y�[�W�̕\���������z���Ă��܂��ꍇ�́A�x����\�����ċ����I��
			//���Ƃ肠���� TEST version �Ȃ̂ŉ��y�[�W����͖������Ȃ̂�[��
			MessageBox(hwnd,"��ʂ̏I�[�ɒB���܂���","ERROR",MB_OK );

			//�����I��
			PostQuitMessage(0);

		}
	}
}


//###############################################################
//	TEXT�G���W���i�V�i���I��C���^�v���^�j�{�̕�
//###############################################################

//-------------------------------------
//	�������G���W�����{�̂ˁ�
//-------------------------------------
int Text_engine()
{
	//------------------------------------------
	// �E�F�C�g�����Ȃ���e�L�X�g��\������
	//------------------------------------------
	int color1=RGB(100,200,200);	//�����F
	int color2=RGB( 10, 10, 10);	//�e�F

	//�w�莞�Ԍo�߂��Ă��Ȃ��ꍇ��Mainloop�ɖ߂�
	if( HLS_timer_check(TEXT_TIMER,TEXT_WAIT)==false )return 0;	

	HLS_timer_start(&TEXT_TIMER);	//�^�C�}�[�ăX�^�[�g

	//���P������\������

		if( (unsigned char)(*TEXT)<(unsigned char)0x80  ){

			ChrPut3D(win_hdc,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,1);
				
			Increment_textp_pos(1);	//�����\���ʒu�̃C���N�������g=1byte
				
			TEXT++;		//�e�L�X�g�|�C���^���P�o�C�g�i�߂�
			
		}else{
			//�Q�o�C�g�����̏ꍇ�͂Q�o�C�g���o��
			ChrPut3D(win_hdc,TEXT_X ,TEXT_Y ,Font_Size,color1,color2,(char *)TEXT,2);
		
			Increment_textp_pos(2);	//�����\���ʒu�̃C���N�������g=2byte

			TEXT+=2;	//�e�L�X�g�|�C���^���Q�o�C�g�i�߂�	
	
		}
		

	return 0;
}



//end of file

