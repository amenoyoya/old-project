#pragma once

#include "engine.h"

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
	
	bool draw(){
		return img_ch[0][ch.img].draw(ch.x, ch.y);
	}
};
