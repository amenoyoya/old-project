#pragma once

#include <lily/dxlib.h>

//�~����
#define PI 3.1415926535898
#define PI2 (PI*2)

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

// ��l���Ɋւ���\����
struct char_t{
	int flag;       //�t���O
	int cnt;        //�J�E���^
	int power;      //�p���[
	int point;      //�|�C���g
	int score;      //�X�R�A
	int num;        //�c�@��
	int mutekicnt;  //���G��ԂƃJ�E���g
	int shot_mode;  //�V���b�g���[�h
	int money;      //����
	int img;        //�摜�C���f�b�N�X
	int slow;       //�X���[���ǂ���
	double x, y;	//���W
};

//�G�Ɋւ���\����
struct enemy_t{
	//�t���O�A�J�E���^�A�ړ��p�^�[���A�����A�G�̎�ށAHP�ő�l�A���Ƃ��A�C�e���A�摜
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
	//���W�A���xx�����A���xy�����A�X�s�[�h�A�p�x
	double x,y,vx,vy,sp,ang;
	//�e���J�n���ԁA�e���̎�ށA�e�̎�ށA�F�A��ԁA�ҋ@���ԁA��؎���
	int bltime,blknd,blknd2,col,state,wtime,wait;
};

// �G�̏o�����
struct enemy_order_t{
	//�J�E���^�A�ړ��p�^�[���A�G�̎��
	int cnt,pattern,knd;
	//�������W�ƈړ��X�s�[�h
	double x,y,sp;
	//�e���J�n���ԁA�e���̎�ށA�F�A�̗́A�e�̎�ށA��؎��ԁA�A�C�e��(6���)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
};

// �Q�[�����C���֐�
function<void(DxLibEngine &)> g_mainFunc;

// ��l��
DxLibSprite img_ch[2];
char_t ch;	// ��l�����

// �{�[�h
DxLibSprite img_board[40];

// �L�[�p�b�h1�̏��
int pad1[14];

// �G
#define _EnemyMax 30
int stage_count = 1;	// �Q�[���J�E���^�i�G�̏o���^�C�~���O�j
DxLibSprite img_enemy[3];	// 3�̕�
enemy_t enemy[_EnemyMax];

// �G�̏o���p�^�[���i�X�g�[���[�j
#define _EnemyOrderMax 500
#define _EnemyPatternMax 11
enemy_order_t enemy_order[_EnemyOrderMax];
