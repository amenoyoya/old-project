#include "../../../include/DxLib.h"
#include "define.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"

//�摜�p�ϐ��錾��
GLOBAL int img_ch[2][12];	//�L�����N�^�摜9�����@X2(�ϐg�p)
GLOBAL int img_board[40];	//�{�[�h�ɂ����摜

//�t���O�E�X�e�[�^�X�ϐ�
GLOBAL int func_state;		//�֐�����p�ϐ�

//�\���̕ϐ��錾��
GLOBAL ch_t ch;			//�L�����N�^�f�[�^�錾
GLOBAL configpad_t configpad;//�R���t�B�O�Őݒ肵���L�[���
