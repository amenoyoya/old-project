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
	function<void(int)>		move_pattern[11]; // �ړ��p�^�[��
	
	void init(){
		ZeroMemory(enemy, sizeof(enemy_t)*_enemy::max);
	}
	
	bool load(){
		return dximg_t::divopen(img_enemy[0],
			"../dat/img/enemy/0.png", 3, 3, 32, 32);
	}
	
	// �G�G���g���[
	virtual void enter(){}
	
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
	
	// -ang�`ang�܂ł̃����_���Ȋp�x��Ԃ�
	static double rang(double ang){
		return (-ang + ang*2*mathlib::rand(10000)/10000.0);
	}
public:
	EnemyObject(){
		// �ړ��p�^�[��0
		// �������Ă��Ē�؂��ďオ���Ă���
		move_pattern[0] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//�������Ă���
			if(t == 40) enemy[i].vy = 0;//�~�܂�
			if(t == 40+enemy[i].wait)//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vy = -3;//�オ���Ă���
		};
		
		//�ړ��p�^�[��1
		//�������Ă��Ē�؂��č����ɍs��
		move_pattern[1] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//�������Ă���
			if(t == 40) enemy[i].vy = 0;//�~�܂�
			if(t == 40+enemy[i].wait){//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vx = -1;//����
				enemy[i].vy = 2;//�������Ă���
				enemy[i].muki = 0;//�������Z�b�g
			}
		};
		
		//�ړ��p�^�[��2
		//�������Ă��Ē�؂��ĉE���ɍs��
		move_pattern[2] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 3;//�������Ă���
			if(t == 40) enemy[i].vy = 0;//�~�܂�
			if(t == 40+enemy[i].wait){//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vx = 1;//�E��
				enemy[i].vy = 2;//�������Ă���
				enemy[i].muki = 2;//�E�����Z�b�g
			}
		};
		
		//�s���p�^�[��3
		//���΂₭�~��Ă��č���
		move_pattern[3] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 5;//�������Ă���
			if(t == 30){//�r���ō�������
				enemy[i].muki = 0;
			}
			if(t < 100){
				enemy[i].vx -= 5/100.0;//����������
				enemy[i].vy -= 5/100.0;//����
			}
		};
		
		//�s���p�^�[��4
		//���΂₭�~��Ă��ĉE��
		move_pattern[4] = [this](int i){
			int t = enemy[i].cnt;
			if(t == 0) enemy[i].vy = 5;//�������Ă���
			if(t == 30){//�r���ŉE������
				enemy[i].muki = 2;
			}
			if(t < 100){
				enemy[i].vx += 5/100.0;//�E��������
				enemy[i].vy -= 5/100.0;//����
			}
		};
		
		//�s���p�^�[��5
		//�΂ߍ�����
		move_pattern[5] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0){
				enemy[i].vx-=1;
				enemy[i].vy=2;
				enemy[i].muki=0;
			}
		};
		
		//�s���p�^�[��6
		//�΂߉E����
		move_pattern[6] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0){
				enemy[i].vx+=1;
				enemy[i].vy=2;
				enemy[i].muki=2;
			}
		};
		
		//�ړ��p�^�[��7
		//��؂��Ă��̂܂܍����
		move_pattern[7] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait){//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vx=-0.7;//����
				enemy[i].vy=-0.3;//�オ���Ă���
				enemy[i].muki=0;//������
			}
		};
		
		//�ړ��p�^�[��8
		//��؂��Ă��̂܂܉E���
		move_pattern[8] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait){//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vx=+0.7;//�E��
				enemy[i].vy=-0.3;//�オ���Ă���
				enemy[i].muki=2;//�E����
			}
		};
		
		//�ړ��p�^�[��9
		//��؂��Ă��̂܂܏��
		move_pattern[9] = [this](int i){
			int t=enemy[i].cnt;
			if(t==enemy[i].wait)//�o�^���ꂽ���Ԃ�����؂���
				enemy[i].vy=-1;//�オ���Ă���
		};
		
		//�ړ��p�^�[��10
		//�������Ă��ăE���E�����ďオ���Ă���
		move_pattern[10] = [this](int i){
			int t=enemy[i].cnt;
			if(t==0) enemy[i].vy=4;//�������Ă���
			if(t==40)enemy[i].vy=0;//�~�܂�
			if(t>=40){
				if(t%60==0){
					int r=cos(enemy[i].ang)< 0 ? 0 : 1;
					enemy[i].sp=6+rang(2);
					enemy[i].ang=rang(PI/4)+PI*r;
					enemy[i].muki=2-2*r;
				}
				enemy[i].sp*=0.95;
			}
			if(t>=40+enemy[i].wait){
				enemy[i].vy-=0.05;
			}
		};
	}
};
