#pragma once

#include "enemy.h"

/* �G�̏o�����i����j�N���X */
struct enemy_order_t{
	//�J�E���^�A�ړ��p�^�[���A�G�̎��
	int cnt,pattern,knd;
	//�������W�ƈړ��X�s�[�h
	double x,y,sp;
	//�e���J�n���ԁA�e���̎�ށA�F�A�̗́A�e�̎�ށA��؎��ԁA�A�C�e��(6���)
	int bltime,blknd,col,hp,blknd2,wait,item_n[6];
};

class StoryObject: public EnemyObject{
protected:
	enemy_order_t enemy_order[_enemy::maxorder];
	
	bool load(){
		// �G�N�Z�����畨���ǂݍ���
		File file("../dat/csv/13��/storyH0.csv");
		int i = 0;
		
		if(file.failed()){
			loaderrstr = "storyH00���ǂݍ��߂܂���ł���";
			return false;
		}
		
		ZeroMemory(enemy_order, sizeof(enemy_order_t)*_enemy::maxorder);
		for(string str=file.gets(); !file.eof(); str=file.gets()){
			if(str[0] == '/' || str == "") continue;
			sscanf(~str, "%d,%d,%d,%lf,%lf,%lf,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
				&enemy_order[i].cnt, &enemy_order[i].pattern,
				&enemy_order[i].knd, &enemy_order[i].x,
				&enemy_order[i].y, &enemy_order[i].sp,
				&enemy_order[i].bltime, &enemy_order[i].blknd,
				&enemy_order[i].col, &enemy_order[i].hp,
				&enemy_order[i].blknd2, &enemy_order[i].wait,
				&enemy_order[i].item_n[0], &enemy_order[i].item_n[1],
				&enemy_order[i].item_n[2], &enemy_order[i].item_n[3],
				&enemy_order[i].item_n[4], &enemy_order[i].item_n[5]
			);
			++i;
		}
		return EnemyObject::load();
	}
	
	//�󂢂Ă���G�ԍ�������
	int enemy_num_search(){
		for(int i=0; i<_enemy::max; ++i){//�t���O�̂����Ė���enemy��T��
			if(enemy[i].flag == 0) return i;//�g�p�\�ԍ���Ԃ�
		}
		return -1;//�S�����܂��Ă�����G���[��Ԃ�
	}
	
	// �G���o�^
	void enter(){
		for(int t=0; t<_enemy::maxorder; ++t){
			if(enemy_order[t].cnt == _field::cnt){
				// ���݂̏u�Ԃ��I�[�_�[�̏u�ԂȂ��
				int i = enemy_num_search();
				
				if(i != -1){
					enemy[i].flag = 1;//�t���O
					enemy[i].cnt = 0;//�J�E���^
					enemy[i].pattern = enemy_order[t].pattern;//�ړ��p�^�[��
					enemy[i].muki = 1;//����
					enemy[i].knd = enemy_order[t].knd;//�G�̎��
					enemy[i].x = enemy_order[t].x;//���W
					enemy[i].y = enemy_order[t].y;
					enemy[i].sp = enemy_order[t].sp;//�X�s�[�h
					enemy[i].bltime = enemy_order[t].bltime;//�e�̔��ˎ���
					enemy[i].blknd = enemy_order[t].blknd;//�e���̎��
					enemy[i].blknd2 = enemy_order[t].blknd2;//�e�̎��
					enemy[i].col = enemy_order[t].col;//�F
					enemy[i].wait = enemy_order[t].wait;//��؎���
					enemy[i].hp = enemy_order[t].hp;//�̗�
					enemy[i].hp_max = enemy[i].hp;//�̗͍ő�l
					enemy[i].vx = 0;//���������̑��x
					enemy[i].vy = 0;//���������̑��x
					enemy[i].ang = 0;//�p�x
					for(int j=0; j<6; ++j)
						enemy[i].item_n[j] = enemy_order[t].item_n[j];//���Ƃ��A�C�e��
				}
			}
		}
	}
};
