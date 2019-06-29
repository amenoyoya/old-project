#pragma once

#include <lily/dxlib.h>

struct Chara: public DxLibSprite{
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
	
	Chara(): flag(0), cnt(0), power(0), point(0), score(0), num(0),
		mutekicnt(0), shot_mode(0), money(0), img(0), slow(0) {}
	
	void draw(){
		DxLibSprite::draw(img);
	}
};
