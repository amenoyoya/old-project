#include "../include/GV.h"

#define ENEMY_RANGE_MAX 4
#define CSHOT_RANGE_MAX 2

//�G�̓����蔻��͈�
int enemy_range[ENEMY_RANGE_MAX]={16,30,16,50};
//���@�V���b�g�̓����蔻��͈�
int cshot_range[CSHOT_RANGE_MAX]={6,};

//�����������ǂ����𔻒肷��
int out_judge_cshot(int i,int s){
	int j;
	if(cshot[i].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
		double x=cshot[i].x-enemy[s].x;//�G�Ǝ��@�V���b�g�Ƃ̋���
		double y=cshot[i].y-enemy[s].y;
		//�I�[�o�[�t���[�΍�
		if(cshot[i].knd>=CSHOT_RANGE_MAX || enemy[s].knd>=ENEMY_RANGE_MAX)
			printfDx("out_judge_cshot���I�[�o�[�t���[");
		//�G�̓����蔻��Ǝ��@�V���b�g�̓����蔻��̍��v�͈�
		double r=cshot_range[cshot[i].knd]+enemy_range[enemy[s].knd];
		//���Ԃ��v�Z����K�v�������
		if(cshot[i].spd>r){
			//�P�t���[���O�ɂ����ʒu���i�[����
			double pre_x=cshot[i].x+cos(cshot[i].angle+PI)*cshot[i].spd;
			double pre_y=cshot[i].y+sin(cshot[i].angle+PI)*cshot[i].spd;
			double px,py;
			for(j=0;j<cshot[i].spd/r;j++){//�i�񂾕��������蔻�蕪���[�v
				px=pre_x-enemy[s].x;
				py=pre_y-enemy[s].y;
				if(px*px+py*py<r*r)
					return 1;
				pre_x+=cos(cshot[i].angle)*r;
				pre_y+=sin(cshot[i].angle)*r;
			}
		}
		if(x*x+y*y<r*r)//�����蔻����Ȃ�
			return 1;//������
	}
	return 0;
}

extern void enter_del_effect(int);

//�G�����ʂ��ǂ����̌���
void enemy_death_judge(int s){
	int i;
	se_flag[8]=1;//�G�ɓ���������
	if(enemy[s].hp<0){//�G��HP���O�����ɂȂ�����
		enemy[s].flag=0;//�G�����ł�����
		se_flag[1]=1;//�G�̃s�`������
		enter_del_effect(s);
		for(i=0;i<SHOT_MAX;i++){//�G������
			if(shot[i].flag!=0){//�o�^����Ă���e���f�[�^�������
				if(s==shot[i].num){//���̓G���o�^�����e���������
					shot[i].flag=2;//����ȏ�e���𑱂��Ȃ��t���O�𗧂Ă�
					break;
				}
			}
		}
	}
}

//�����蔻�胁�C��
void out_main(){
	int i,s;
	for(i=0;i<CSHOT_MAX;i++){//���@�V���b�g����
		if(cshot[i].flag>0){
			for(s=0;s<ENEMY_MAX;s++){//�G����
				if(enemy[s].flag>0){
					if(out_judge_cshot(i,s)){//���@�V���b�g�ƓG���������Ă����
						cshot[i].flag=0;//���̎��@�V���b�g������
						enemy[s].hp-=cshot[i].power;//�e�̎��p���[��HP�����炷
						enemy_death_judge(s);//�G�����ʂ��ǂ��������߂�
					}
				}
			}
		}
	}
}