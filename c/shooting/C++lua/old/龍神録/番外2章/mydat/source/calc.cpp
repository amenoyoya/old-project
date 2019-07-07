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

//�A�C�e���̋z�������B
void calc_item_indraw(int i){
	double v = item[i].state ? 8 : 3;//state1�Ȃ�X�s�[�h8�A�Ⴄ�Ȃ�2
	double angle=atan2(ch.y-item[i].y,ch.x-item[i].x);//���@�ւ̊p�x���v�Z����
	item[i].x += cos(angle)*v;
	item[i].y += sin(angle)*v;
}

//�A�C�e���ړ��Ȃǌv�Z
void calc_item(){
	for(int i=0;i<ITEM_MAX;i++){
		if(item[i].flag>0){
			if(item[i].state==0)
				if(ch.y<ITEM_GET_BORDER_LINE)//�z����ԂȂ�
					item[i].state=1;
			if(item[i].state==0){//���ʂ̏�ԂȂ�
				double x=ch.x-item[i].x,y=ch.y-item[i].y;
				//�ᑬ��ԂŎ��@�t�߂Ȃ�
				if(CheckStatePad(configpad.slow)>0 &&
						x*x+y*y<ITEM_INDRAW_RANGE*ITEM_INDRAW_RANGE){
					calc_item_indraw(i);//�z��
				}
				else{
					if(item[i].v<2.5)//���x�A�b�v
						item[i].v+=0.06;
					item[i].y+=item[i].v;//�ړ�
				}
			}
			else{//�z����ԂȂ�
				calc_item_indraw(i);
			}
			item[i].cnt++;
			if(item[i].y>FMY+50)
				item[i].flag=0;
		}
	}
}
//�t���b�V��(42)
void calc_flash(){
	if(flash.flag>0){
		if(flash.knd==0){
			if(flash.cnt==0)flash.brt=0;
			if(flash.cnt<flash.to_cnt)
				flash.brt+=255.0/flash.to_cnt;
			else
				flash.brt-=255.0/flash.to_cnt;
		}
		if(flash.knd==1){
			if(flash.cnt==0)flash.brt=255;
			flash.brt-=255.0/flash.to_cnt;
		}
		flash.cnt++;
		if(flash.knd==0){
			if(flash.cnt>flash.to_cnt*2)
				flash.flag=0;
		}
		if(flash.knd==1){
			if(flash.cnt>flash.to_cnt)
				flash.flag=0;
		}
	}
}

void calc_main(){
//	calc_stage_title();
	calc_item();
	calc_flash();//�t���b�V��(42)
}