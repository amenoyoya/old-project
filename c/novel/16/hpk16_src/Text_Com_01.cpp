//-----------------------------------------------------------------------------------------
//	Com_01.cpp	�X�N���v�g�R�}���h�F���̂P
//-----------------------------------------------------------------------------------------

#include	"BasicTips.h"
#include	"g_tool.h"
#include	"main.h"
#include	"TextEngine.h"
#include	<windows.h>

//------------------------------------------------------------
//	�x��
//------------------------------------------------------------

DWORD	delay_timer;	//�^�C�}�[�p�ϐ�
DWORD	delay_wait;		//���~���b�҂̂��L�����Ă����ϐ�

int Com_delay()
	//�x�������̃t�@�[�X�g�V���b�g�B�x���^�X�N��
	//�񂷂��߂̏��������Ă����܂�
{
	TEXT++;

	//�҂����Ԃ���͂���
	delay_wait = kaiseki_10();	//��kaiseki_10()�̓e�L�X�g����10�i������͂���֐��ŁATextEngine.cpp�ɂ���܂�

	Mode_stat.flag_text  = OFF;		//�e�L�X�g�\���͒�~
	Mode_stat.flag_delay = ON;		//�x���t���O�� ON �ɂ��� �� Mainloop�ł��̃t���O���Q�Ƃ��Ă��܂���

	HLS_timer_start(&delay_timer);	//�x���̂��߂̃^�C�}�[������

	return 0;
}

int Com_delay_task()
	//�x�������̃^�X�N�����BMainloop() ���牄�X�ƌĂ΂ꑱ����
{
	//�w�莞�Ԍo�߂������H �� ���Ă��Ȃ���Ή��������ɖ߂�i���҂�������j
	if( HLS_timer_check( delay_timer,delay_wait)==false )return 0;
	
	//		��
	//���Ԃ��o�߂�����ȉ��̌�n�������Ċ�����
	//      ��

	//�x���t���O����������i����� Mainloop()���ŕ����\�����\�ɂȂ�j
	Mode_stat.flag_delay = OFF;
	Mode_stat.flag_text  = ON;

	return 0;
}

//------------------------------------------------------------
//	���s
//------------------------------------------------------------

int	Com_linefeed()
{
	//���s�Ƃ́A�\���ʒu�� X �� �s�擪��  Y �� �P�i���ɂ��邱��
	
	TEXT_X =  TEXT_AREA.left;

	TEXT_Y += TEXT_Y_PITCH;

	//�������ł͂܂���ʍŉ��[���яo���Ƃ���܂ł͑z�肵�Ă��Ȃ�
	/*	
	if( TEXT_Y > TEXT_AREA.bottom-TEXT_Y_PITCH ){
		�{���A�����Łu���y�[�W�v�������ĂԔ���������܂�����ĂȂ��i�� ^^;�j
	}
	*/

	return 0;
}

//------------------------------------------------------------
//	�J�[�\���u�����N
//------------------------------------------------------------

DWORD	cursor_timer;		//�^�C�}�[�p�ϐ�
DWORD	cursor_wait = 200;	//���~���b�҂̂��L�����Ă����ϐ�

int	Com_cursor_blink()
{
	//�e�L�X�g�\�����~����
	Mode_stat.flag_text = OFF;

	//�J�[�\���u�����N�p�t���O�𗧂Ă�
	Mode_stat.flag_cursor_blink = ON;

	//�J�[�\���ɂ���ĉB���w�i�̈��Ҕ����Ă���
	BitBlt(Parts_DC,50,0,25,25,Back_DC,TEXT_X,TEXT_Y,SRCCOPY);

	//�^�C�}�[�V���b�g
	HLS_timer_start( &cursor_timer );

	//�P���ڂ̃J�[�\���\��
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR

	return 0;
}

int Com_cursor_blink_task()
{
	static int flag=OFF;

	//�w�莞�Ԍo�߂������H �� ���Ă��Ȃ���� Mainloop �ɖ߂�
	if( HLS_timer_check( cursor_timer, cursor_wait )==false )return 0;

	HLS_timer_start( &cursor_timer );	//����Ɍ����Ẵ^�C�}�[�V���b�g

	switch( flag ){
		case	ON:		//�J�[�\���\��
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,25,0,SRCAND  );	//AND
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC, 0,0,SRCPAINT);	//OR
			flag = OFF;	//�����OFF
			break;
		case	OFF:	//�J�[�\����\��
			BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,50,0,SRCCOPY);	//�w�i�����߂�
			flag = ON;	//�����ON
			break;
	}

	return 0;
}

int Com_cursor_blink_end()
{
	//�e�L�X�g�\���ĊJ
	Mode_stat.flag_text = ON;

	//�J�[�\���u�����N�p�t���O������
	Mode_stat.flag_cursor_blink = OFF;

	//�J�[�\���̔w�i������`���߂��ďI������
	BitBlt(Back_DC,TEXT_X,TEXT_Y,25,25,Parts_DC,50,0,SRCCOPY);	//�w�i�����߂�

	return 0;
}


//end of file

