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
	//�҂����Ԃ���͂���
	delay_wait = kaiseki_10();	//��kaiseki_10()�̓e�L�X�g����10�i������͂���֐��ŁATextEngine.cpp�ɂ���܂�

	flag_delay = ON;			//�x���t���O�� ON �ɂ��� �� Mainloop�ł��̃t���O���Q�Ƃ��Ă��܂���

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
	flag_delay = OFF;

	return 0;
}



//end of file

