#include "../../../include/DxLib.h"
#include "define.h"
#include "math.h"

#ifdef GLOBAL_INSTANCE
#define GLOBAL
#else
#define GLOBAL extern 
#endif

#include "function.h"

//�摜�p�ϐ��錾��
GLOBAL int img_ch[2][12];	//�L�����N�^�摜12�����@X2(�ϐg�p)
GLOBAL int img_enemy[3][9];	//�G�摜9����

GLOBAL int img_board[40];	//�{�[�h�ɂ����摜

//�t���O�E�X�e�[�^�X�ϐ�
GLOBAL int func_state,stage_count;		//�֐�����p�ϐ�

//�\���̕ϐ��錾��
GLOBAL ch_t ch;			//�L�����N�^�f�[�^�錾
GLOBAL enemy_t enemy[ENEMY_MAX];//�G���
GLOBAL configpad_t configpad;//�R���t�B�O�Őݒ肵���L�[���
GLOBAL enemy_order_t enemy_order[ENEMY_ORDER_MAX];//�G�̏o�����
