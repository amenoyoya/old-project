#pragma once

#include "stage.h"

// �G�̓����\���ő吔
const int enemy_max = 30;

// �G�Ɋւ���\����
struct enemy_t{
	//�t���O�A�J�E���^�A�ړ��p�^�[���A�����A�G�̎�ށAHP�ő�l�A���Ƃ��A�C�e���A�摜
	int flag, cnt, pattern, muki, knd, hp, hp_max, item_n[6], img;
	//���W�A���xx�����A���xy�����A�X�s�[�h�A�p�x
	double x, y, vx, vy, sp, ang;
	//�e���J�n���ԁA�e���̎�ށA�e�̎�ށA�F�A��ԁA�ҋ@���ԁA��؎���
	int bltime, blknd, blknd2, col, state, wtime, wait;
};

// �G�摜3�̕�
DxSprite	img_enemy[3];
enemy_t		enemy[enemy_max];

inline int GetEnemyMax(){
	return enemy_max;
}

luaB_object GetEnemies(){
	luaB_object obj = luaB_NewTable(gLua);
	
	for(int i=0; i<enemy_max; ++i) obj[i] = boost::ref(enemy[i]);
	return obj;
}

void enemy_Draw(int e){
	for(int i=0; i<enemy_max; ++i){
		if(enemy[i].flag == 1){
			img_enemy[e].SetPos(enemy[i].x, enemy[i].y);
			img_enemy[e].draw(enemy[i].img);
		}
	}
}

inline void InitEnemy(){
	memset(enemy, 0, sizeof(enemy_t)*enemy_max);	// �G�f�[�^�̏�����
}

void LoadEnemy(){
	img_enemy[0].DivOpen(gWin.device(), "../dat/img/enemy/0.png", 3, 3, 32, 32);
	
	// lua������G���Q�Ƃł���悤�ɂ���
	luaB_Module(gLua)[
	luaB_Class<enemy_t>("enemy_t")
		.def(luaB_Constructor<>())
		.def_readwrite("cnt", &enemy_t::cnt)
		.def_readwrite("flag", &enemy_t::flag)
		.def_readwrite("muki", &enemy_t::muki)
		.def_readwrite("bltime", &enemy_t::bltime)
		.def_readwrite("hp", &enemy_t::hp)
		.def_readwrite("hp_max", &enemy_t::hp_max)
		.def_readwrite("pattern", &enemy_t::pattern)
		.def_readwrite("x", &enemy_t::x)
		.def_readwrite("y", &enemy_t::y),
	luaB_Def("enemy_max", &GetEnemyMax),
	luaB_Def("enemies", &GetEnemies)
	];
	if(!gLua.dofile("enemy.lua")) MsgBox(~gLua.tostr(-1));
}

//�G�̈ړ��p�^�[��0�ł̈ړ�����
/*void enemy_pattern0(int i){
	if(enemy[i].cnt < 60){
		enemy[i].y += 2.0;
	}
	if(enemy[i].cnt > 60+240){
		enemy[i].y -= 2.0;
	}
}*/

//�G�f�[�^�̓o�^
/*void enemy_enter(){
	if(stage_count == 100){//�Q�[�����n�܂���100�J�E���g�œo�^
		enemy[0].cnt	=0;
		enemy[0].muki   =1;
		enemy[0].flag   =1;
		enemy[0].bltime =150;
		enemy[0].hp	 =1000;
		enemy[0].hp_max =enemy[0].hp;
		enemy[0].pattern=0;
		enemy[0].x	  =field_max.x/2;
		enemy[0].y	  =-20;
	}
}*/

void DrawEnemy(){
	// �G�f�[�^�o�^�X�N���v�g���Ă�
	try{
		luaB_Call<void>(gLua, "enemy_enter");
	}catch(_rfcLERR){
	}
	
	// �G�̍s������
	for(int i=0; i<enemy_max; ++i){
		if(enemy[i].flag == 1){
			// �G�s���p�^�[���X�N���v�g���Ă�
			try{
				luaB_Call<void>(gLua, "enemy_pattern", i);
			}catch(_rfcLERR){
			}
			
			++enemy[i].cnt;
			enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6;
			//�G����ʂ���O�ꂽ�����
			if(enemy[i].x < -50 || field_max.x+50 < enemy[i].x
				|| enemy[i].y < -50 || field_max.y+50 < enemy[i].y)
			{
				enemy[i].flag = 0;
			}
		}
	}
	
	// �G�`��
	enemy_Draw(0);
}
