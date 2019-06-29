#include "../include/GV.h"

int cshot0num[2]  ={2,4};
int cshot0pos_x[4]={-10, 10,-30, 30};
int cshot0pos_y[4]={-30,-30,-10,-10};

//���@�V���b�g�̓o�^�\�ԍ���Ԃ�
int search_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==0)
			return i;
	}
	return -1;
}

//�ʏ�V���b�g�o�^
void ch0_shot_pattern(){
	int k;
	for(int i=0;i<cshot0num[ch.power<200?0:1];i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch.x+cshot0pos_x[i];
			cshot[k].y=ch.y+cshot0pos_y[i];
			cshot[k].power=23;
			cshot[k].knd=0;
		}
	}
	se_flag[2]=1;//���ˉ��I��
}

//�ᑬ�ʏ�V���b�g�o�^
void ch1_shot_pattern(){
	int k;
	for(int i=0;i<cshot0num[ch.power<200?0:1];i++){
		if((k=search_cshot())!=-1){
			cshot[k].flag=1;
			cshot[k].cnt=0;
			cshot[k].angle=-PI/2;
			cshot[k].spd=20;
			cshot[k].x=ch.x+cshot0pos_x[i]/3;//�ᑬ���Ȃ�ʒu�𒆐S����
			cshot[k].y=ch.y+cshot0pos_y[i]/2;
			cshot[k].power=23;
			cshot[k].knd=0;
		}
	}
	se_flag[2]=1;
}

//�V���b�g�o�^��
void enter_shot(){
	//�V���b�g�{�^����������Ă�����
	if(CheckStatePad(configpad.shot)>0){
		ch.shot_cnt++;
		if(ch.shot_cnt%3==0){//3�J�E���g��1��
			if(CheckStatePad(configpad.slow)>0)//�ᑬ�ړ����Ȃ�
				ch1_shot_pattern();
			else
				ch0_shot_pattern();
		}
	}
	else
		ch.shot_cnt=0;
}

//�V���b�g�̈ړ��v�Z
void calc_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag==1){
			int dranx=cshot[i].spd+11/2,drany=cshot[i].spd+55/2;
			cshot[i].x+=cos(cshot[i].angle)*cshot[i].spd;
			cshot[i].y+=sin(cshot[i].angle)*cshot[i].spd;
			cshot[i].cnt++;
			if(cshot[i].x<-dranx || cshot[i].x>FIELD_MAX_X+dranx ||
				cshot[i].y<-drany || cshot[i].y>FIELD_MAX_Y+drany)//��ʂ���O�ꂽ��
				cshot[i].flag=0;
		}
	}
}

//�L�����N�^�V���b�g�Ɋւ���֐�
void cshot_main(){
	calc_cshot();//�V���b�g�̋N���v�Z
	enter_shot();//�V���b�g�o�^
}
