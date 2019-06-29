#pragma once

#include "gv.h"
#include "keyconf.h"
#include <math.h>

/* �L�����N�^�[�N���X */
struct ch_t{
	bool flag, slow;		// �t���O// �X���[���ǂ���
	int cnt, power,			// �J�E���^// �p���[
		point, score,		// �|�C���g// �X�R�A
		num, mutekicnt,		// �c�@��// ���G��ԂƃJ�E���g
		shot_mode, money,	// �V���b�g���[�h//����
		img;				// �摜�C���f�b�N�X
	double x, y;			// ���W
};

class CharObject: public GameObject {
	ch_t		ch;
	dximg_t		img_ch[2][12];
	
	void init(){
		ZeroMemory(&ch, sizeof(ch));
		ch.x = _field::maxw/2, ch.y = _field::maxh*3/4;
	}
	
	bool load(){
		if(!dximg_t::divopen(img_ch[0], "../dat/img/char/0.png",
			4, 3, 73, 73))
		{
			loaderrstr = "�L�����N�^�[�摜�̓ǂݍ��݂Ɏ��s���܂���";
			return false;
		}
		return true;
	}
	
	void move(){
		bool sayu_flag = false, joge_flag = false;
		double x, y, mx, my, naname = 1;
		double move_x[4] = {-4.0, 4.0, 0, 0},
			move_y[4] = {0, 0, 4.0, -4.0};//{��,�E,��,��}�̃X�s�[�h
		int inputpad[4];
		
		inputpad[0] = keyconf::left();
		inputpad[1] = keyconf::right();
		inputpad[2] = keyconf::down();
		inputpad[3] = keyconf::up();
		
		ch.img = (++ch.cnt % 24)/6;
		
		if(inputpad[0])//���L�[��������Ă�����
			ch.img += 4*2;//�摜����������
		else if(inputpad[1])//�E�L�[��������Ă�����
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
				mx = move_x[i], my = move_y[i];//�ړ�����mx,my�ɑ��
				if(keyconf::slow()){//�ᑬ�ړ��Ȃ�
					mx = move_x[i]/3, my = move_y[i]/3;//�ړ��X�s�[�h��1/3��
				}
				x += mx/naname , y += my/naname;//���̍��W�ƈړ����𑫂�
				if(!(x < 10 || x > _field::maxw-10 ||
					y < 5 || y > _field::maxh-5))
				{//�v�Z���ʈړ��\�͈͓��Ȃ�
					ch.x = x , ch.y = y;//���ۂɈړ�������
				}
			}
		}
	}
	
	bool draw(){
		move();
		return img_ch[0][ch.img].rotadraw(
			ch.x+_field::x, ch.y+_field::y, 1, 0) && !keyconf::end();
	}
};
