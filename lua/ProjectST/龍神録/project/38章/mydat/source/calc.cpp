#include "../include/GV.h"

void calc_stage_title(){
	if(stage_title.appear_cnt==stage_count){//�����\���J�n���Ȃ�
		stage_title.flag=1;
		stage_title.img = LoadGraph("../dat/img/board/subject0.png");
	}

	if(stage_title.flag==0)return;

	if(stage_title.cnt<128)//�ŏ���128�̊Ԓi�X���邭
		stage_title.brt+=2;
	if(stage_title.cnt>128+128)//�i�X�Â�
		stage_title.brt-=2;
	if(stage_title.cnt>128+128+128){//�I��
		stage_title.cnt=0;
		stage_title.brt=0;
		stage_title.flag=0;
		DeleteGraph(stage_title.img);//�摜���
		return ;
	}

	stage_title.cnt++;
	//�����I���������̉摜����������K�v
}

void calc_main(){
	calc_stage_title();
}