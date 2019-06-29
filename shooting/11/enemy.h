#pragma once

#include "gv.h"

/* �G�N���X */
struct enemy_t{
	//�t���O�A�J�E���^�A�ړ��p�^�[���A�����A�G�̎�ށAHP�ő�l�A���Ƃ��A�C�e���A�摜
	int flag,cnt,pattern,muki,knd,hp,hp_max,item_n[6],img;
	//���W�A���xx�����A���xy�����A�X�s�[�h�A�p�x
	double x,y,vx,vy,sp,ang;
	//�e���J�n���ԁA�e���̎�ށA�e�̎�ށA�F�A��ԁA�ҋ@���ԁA��؎���
	int bltime,blknd,blknd2,col,state,wtime,wait;
};

class EnemyObject: public GameObject{
protected:
	enemy_t					enemy[_enemy::max];
	dximg_t					img_enemy[3][9]; // �G�摜9�����~3�̕�
	function<void(int)>		move_pattern[1]; // �ړ��p�^�[��
	
	void init(){
		ZeroMemory(enemy, sizeof(enemy_t)*_enemy::max);
	}
	
	bool load(){
		return dximg_t::divopen(img_enemy[0],
			"../dat/img/enemy/0.png", 3, 3, 32, 32);
	}
	
	// �G�G���g���[
	virtual void enter(){
		// �o�^
		if(_field::cnt == 100){
			enemy[0].cnt = 0;
			enemy[0].muki = 1;
			enemy[0].flag = 1;
			enemy[0].bltime = 150;
			enemy[0].hp = 1000;
			enemy[0].hp_max = 1000;
			enemy[0].pattern = 0;
			enemy[0].x = _field::maxw/2;
			enemy[0].y = -20;
		}
	}
	
	void move(){
		// �s������
		for(int i=0; i<_enemy::max; ++i){
			if(enemy[i].flag == 1){//���̓G�̃t���O���I���ɂȂ��Ă���
				move_pattern[enemy[i].pattern](i);
				++enemy[i].cnt;
				enemy[i].x += cos(enemy[i].ang)*enemy[i].sp;
				enemy[i].y += sin(enemy[i].ang)*enemy[i].sp;
				enemy[i].x += enemy[i].vx;
				enemy[i].y += enemy[i].vy;
				enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6;
				//�G����ʂ���O�ꂽ�����
				if(enemy[i].x<-50 || _field::maxw+50<enemy[i].x
					|| enemy[i].y<-50 || _field::maxh+50<enemy[i].y)
				{
					enemy[i].flag = 0;
				}
			}
		}
	}
	
	bool draw(){
		enter(), move();
		for(int i=0; i<_enemy::max; ++i){
			if(enemy[i].flag == 1){
				img_enemy[0][enemy[i].img].rotadraw(
					enemy[i].x+_field::x, enemy[i].y+_field::y, 1, 0);
			}
		}
		return true;
	}
public:
	EnemyObject(){
		move_pattern[0] = [this](int i){
			int t = enemy[i].cnt;
			
			if(t == 0) enemy[i].vy = 2;//�������Ă���
			if(t == 60) enemy[i].vy = 0;//�~�܂�
			if(t == 60+enemy[i].wait)//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vy = -2;//�オ���Ă���
		};
	}
};
