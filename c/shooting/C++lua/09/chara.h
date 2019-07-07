#pragma once

#include "stage.h"

//�L�����N�^�[�Ɋւ���\����
struct ch_t{
	int flag;	   //�t���O
	int cnt;		//�J�E���^
	int power;	  //�p���[
	int point;	  //�|�C���g
	int score;	  //�X�R�A
	int num;		//�c�@��
	int mutekicnt;  //���G��ԂƃJ�E���g
	int shot_mode;  //�V���b�g���[�h
	int money;	  //����
	int img;		//�摜
	int slow;	   //�X���[���ǂ���
	double x,y;	 //���W
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
	img_ch[0].DivOpen(gWin.device(), "../dat/img/char/0.png", 4, 3, 73, 73);
}

inline void InitChara(){
	ch.x = (double)field_max.x/2, ch.y = (double)field_max.y*3/4;
}

void CalcChara(){
	// �摜�ω�
	ch.img = (++ch.cnt%24)/6;
	
	// �ړ�
	bool sayu_flag = false, joge_flag = false, slow_flag = false;
	double x = 0, y = 0, mx = 0, my = 0, naname = 1;
	double move_x[4]={-4.0,4.0,0,0},move_y[4]={0,0,4.0,-4.0};//{��,�E,��,��}�̃X�s�[�h
	char inputpad[4];
	
	inputpad[0] = key_Left(), inputpad[1] = key_Right(),
	inputpad[2] = key_Down(), inputpad[3] = key_Up();
	
	if(key_Slow()) slow_flag = true;
	
	if(key_Left())//���L�[��������Ă�����
			ch.img += 4*2;//�摜����������
	else if(key_Right())//�E�L�[��������Ă�����
			ch.img += 4*1;//�摜���E������

	for(int i=0; i<2; ++i)//���E��
		if(inputpad[i])//���E�ǂ��炩�̓��͂������
			sayu_flag = true;//���E���̓t���O�𗧂Ă�
	for(int i=2; i<4; ++i)//�㉺��
		if(inputpad[i])//�㉺�ǂ��炩�̓��͂������
			joge_flag = true;//�㉺���̓t���O�𗧂Ă�
	if(sayu_flag && joge_flag)//���E�A�㉺�����̓��͂�����Ύ΂߂��ƌ�����
		naname = sqrt(2.0);//�ړ��X�s�[�h��1/���[�g2��
	
	for(int i=0; i<4; ++i){//4���������[�v
		if(inputpad[i]){//i�����̃L�[�{�[�h�A�p�b�h�ǂ��炩�̓��͂������
			x = ch.x , y = ch.y;//���̍��W���Ƃ肠����x,y�Ɋi�[
			//�ړ�����mx,my�ɑ��(�ᑬ�ړ����[�h�Ȃ�X�s�[�h3����1)
			mx = slow_flag? move_x[i]/3: move_x[i];
			my = slow_flag? move_y[i]/3: move_y[i];
			
			x += mx/naname , y += my/naname;//���̍��W�ƈړ����𑫂�
			if(!(x<10 || x>field_max.x-10 || y<5 || y>field_max.y-5)){
				//�v�Z���ʈړ��\�͈͓��Ȃ�
				ch.x = x , ch.y = y;//���ۂɈړ�������
			}
		}
	}
}

void DrawChara(){
	CalcChara();
	ch_Draw();
}
