#pragma once

#include <lily/dxlib.h>

#define _FieldMaxX 384
#define _FieldMaxY 448

#define _FieldX 32
#define _FieldY 16

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

// �Q�[�����C���֐�
function<void(DxLibEngine &)> g_mainFunc;

// ��l��
DxLibSprite img_ch[2];
char_t ch;	// ��l�����

// �{�[�h
DxLibSprite img_board[40];

// �L�[�p�b�h1�̏��
int pad1[14];
