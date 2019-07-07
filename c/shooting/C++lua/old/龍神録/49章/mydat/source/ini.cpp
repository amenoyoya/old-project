#include "../include/GV.h"

void input_bullet_info(bullet_info_t *binfo,int size_x,int size_y,int col_num,double range,int kaiten){
	binfo->size_x =size_x;	binfo->size_y =size_y;
	binfo->col_num=col_num;	binfo->range  =range;
	binfo->kaiten=kaiten;
}

//��ԍŏ��̏�����
void first_ini(){
	configpad.down=0;
	configpad.left=1;
	configpad.right=2;
	configpad.up=3;
	configpad.bom=4;
	configpad.shot=5;
	configpad.slow=11;
	configpad.start=13;
	configpad.change=6;

	stage=0;
	stage_title_count[0]=200;

	input_bullet_info(&bullet_info[0],76, 76, 5,17.0,0);
	input_bullet_info(&bullet_info[1],22, 22, 6, 4.0,0);
	input_bullet_info(&bullet_info[2], 5,120,10, 2.5,0);
	input_bullet_info(&bullet_info[3],19, 34, 5, 2.0,0);
	input_bullet_info(&bullet_info[4],38, 38,10, 2.0,0);
	input_bullet_info(&bullet_info[5],14, 16, 3, 3.5,0);
	input_bullet_info(&bullet_info[6],14, 18, 3, 2.0,0);
	input_bullet_info(&bullet_info[7],16, 16, 9, 2.5,1);
	input_bullet_info(&bullet_info[8],12, 18,10, 1.5,0);
	input_bullet_info(&bullet_info[9],13, 19, 3, 2.0,0);
	input_bullet_info(&bullet_info[10],8,  8, 8, 1.0,0);
	input_bullet_info(&bullet_info[11],35,32, 8, 2.0,0);
}

/*�����͌ォ�炫����ƃZ�b�g���܂�*/
int back_knd[DANMAKU_MAX]={
	0,1,0,1,1,
};
int boss_hp[DANMAKU_MAX]={
	5000,10000,8000,20000,30000,
};
/*�����܂�*/

//�Q�[���̏�����
void ini(){
	stage_count=1;
	memset(&ch,0,sizeof(ch_t));
	memset(enemy,0,sizeof(enemy_t)*ENEMY_MAX);
	memset(lazer,0,sizeof(lazer_t)*LAZER_MAX);
	memset(enemy_order,0,sizeof(enemy_order_t)*ENEMY_ORDER_MAX);
	memset(shot,0,sizeof(shot_t)*SHOT_MAX);
	memset(cshot,0,sizeof(cshot_t)*CSHOT_MAX);
	memset(effect,0,sizeof(effect_t)*EFFECT_MAX);
	memset(del_effect,0,sizeof(del_effect_t)*DEL_EFFECT_MAX);
	memset(&bom,0,sizeof(bom_t));
	memset(&bright_set,0,sizeof(bright_set_t));
	memset(&dn,0,sizeof(dn_t));
	memset(&boss,0,sizeof(boss_t));
	memset(child,0,sizeof(child_t)*CHILD_MAX);
	memset(&stage_title,0,sizeof(stage_title_t));
	memset(item,0,sizeof(item_t)*ITEM_MAX);
	memset(&area,0,sizeof(area_t));//(48)
	memset(option_bb,0,sizeof(option_bb_t)*2);//(49)

	ch.x=FMX/2;
	ch.y=FMY*3/4;
	ch.power=400;//�����p���[(41)
	ch.num=5;//�����c�@��(41)

	stage_title.appear_cnt=stage_title_count[stage];
	
	/*�e�����ꂼ��̐ݒ�B��X������Ɛݒ肵�܂��傤�B*/
//	boss.appear_count[0]=1700;//���{�X���o�����鎞��(42)
	boss.appear_count[0]=1650;//���{�X���o�����鎞��(42)(47)
	boss.appear_count[1]=2850;//�Ō�{�X���o�����鎞��(44)(47)

	boss.danmaku_num[0]=1;//���{�X�����ڂ܂ł̒e�����o����
	boss.danmaku_num[1]=4;//�Ō�ɏo��{�X�����ڂ܂ł̒e�����o����(47)

	for(int i=0;i<DANMAKU_MAX;i++){//�e�����ꂼ���HP(47)
		boss.set_hp[i]=boss_hp[i];
	}
	boss.hp_max=boss.set_hp[0];
	for(int i=0;i<DANMAKU_MAX;i++)//�e�����ꂼ��̔w�i�̎��
		boss.back_knd[i]=back_knd[i];
	/*�����܂�*/

	area.bgm.flag=0;//���y�Đ��t���O��������(48)
	area.bgm.knd[0]=0;//�ʏ�BGM���ǂ������^�C�~���O�ōĐ����邩�A��茈�߂�music.cpp(48)
	area.bgm.knd[1]=0;//�{�XBGM���ǂ������^�C�~���O�ōĐ����邩�A��茈�߂�music.cpp(48)
	area.bgm.loop_pos[0]=26672;//�ʏ�BGM�̃��[�v�ʒu(48)
	area.bgm.loop_pos[1]=27010;//�{�XBGM�̃��[�v�ʒu(48)

	option_bb[0].img=img_cshot[2];//�I�v�V�����{���{���̉摜���(49)
	option_bb[1].img=img_cshot[2];

	bright_set.brt=255;//�����P�x�͍ő�
}