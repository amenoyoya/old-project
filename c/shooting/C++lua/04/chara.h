#pragma once

#include "core.h"

//�L�����N�^�[�Ɋւ���\����
struct ch_t{
	int flag;       //�t���O
	int cnt;        //�J�E���^
	int power;      //�p���[
	int point;      //�|�C���g
	int score;      //�X�R�A
	int num;        //�c�@��
	int mutekicnt;  //���G��ԂƃJ�E���g
	int shot_mode;  //�V���b�g���[�h
	int money;      //����
	int img;        //�摜
	int slow;       //�X���[���ǂ���
	double x,y;     //���W
};

// �L�����N�^�[�摜(�ϐg�p��2�p��)
DxSprite	img_ch[2];
ch_t		ch = {0};

// �L�����`���{�֐�
void ch_Draw(){
	img_ch[0].SetPos(ch.x, ch.y);
	img_ch[0].draw(ch.img);
}

inline void LoadChara(){
	gWin.CreateDivSprite(&img_ch[0], "../dat/img/char/0.png", 4, 3, 73, 73);
}

inline void DrawChara(){
	ch_Draw();
}
