#pragma once

#include <lily/dxlib.h>

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
