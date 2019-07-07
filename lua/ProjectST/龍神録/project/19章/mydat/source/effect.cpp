#include "../include/GV.h"

//�G�t�F�N�g�̓o�^�󂫔ԍ���T��
int search_effect(){
	for(int i=0;i<EFFECT_MAX;i++){
		if(effect[i].flag==0)
			return i;
	}
	return -1;
}

//�G�t�F�N�g���v�Z����
void calc_effect(){
	for(int i=0;i<EFFECT_MAX;i++){
		if(effect[i].flag>0){//�G�t�F�N�g���o�^����Ă�����
			switch(effect[i].knd){//�G�t�F�N�g�̎�ނɂ���ĕ���
				case 0://0�Ԃ̏���
					effect[i].cnt++;
					effect[i].r+=0.08;//�G�t�F�N�g�̑傫����i�X�傫������
					if(effect[i].cnt>10)//10�J�E���g�ȏ�ɂȂ�����
						effect[i].brt-=25;//���邳�����Ȃ�����
					if(effect[i].cnt>20)//20�J�E���g�ȏ�ɂȂ�����
						effect[i].flag=0;//����
					break;
				default:
					printfDx("effect�ݒ�G���[\n");
					break;
			}
		}
	}
}

//���ŃG�t�F�N�g�̓o�^�󂫔ԍ���T��
int search_del_effect(){
	for(int i=0;i<DEL_EFFECT_MAX;i++){
		if(del_effect[i].flag==0)
			return i;
	}
	return -1;
}

//���ŃG�t�F�N�g��o�^����
void enter_del_effect(int s){
	int k=search_del_effect();
	if(k!=-1){
		del_effect[k].flag=1;//�t���O�𗧂Ă�
		del_effect[k].cnt=0;
		del_effect[k].col=enemy[s].back_col;//�G�̔w�i�F�����ŐF�ɐݒ肷��
		del_effect[k].x=enemy[s].x;//�G�̍��W�����ňʒu�ɃZ�b�g
		del_effect[k].y=enemy[s].y;
	}
}

//���ŃG�t�F�N�g���v�Z�E�G�t�F�N�g��o�^����
void calc_del_effect(){
	int k;
	for(int i=0;i<DEL_EFFECT_MAX;i++){
		if(del_effect[i].flag>0){
			if(del_effect[i].cnt%2==0){// 1/30�b���Z�b�g
				if((k=search_effect())!=-1){//�󂫔ԍ�����
					memset(&effect[k],0,sizeof(effect_t));//������
					effect[k].flag=1;//�t���O�𗧂Ă�
					effect[k].brt=255;//�P�x���ő�l��
					effect[k].ang=rang(PI);//�p�x�������_����
					effect[k].col=del_effect[i].col;//�F���Z�b�g
					effect[k].eff=1;//1�͌��G�t�F�N�g�B���G�t�F�N�g�ɃZ�b�g����
					effect[k].img=img_del_effect[effect[k].col];//���ł���摜���Z�b�g
					effect[k].knd=0;//�G�t�F�N�g�̎�ނ�0��(���ŃG�t�F�N�g��0�Ƃ���)
					effect[k].x=del_effect[i].x;//���W���Z�b�g
					effect[k].y=del_effect[i].y;
				}
			}
			if(del_effect[i].cnt>8){
				del_effect[i].flag=0;
			}
			del_effect[i].cnt++;
		}
	}
}

void effect_main(){
	calc_del_effect();//���ŃG�t�F�N�g�̌v�Z
	calc_effect();//�G�t�F�N�g�̌v�Z
}