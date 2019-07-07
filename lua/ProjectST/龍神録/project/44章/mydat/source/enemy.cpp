#include "../include/GV.h"

extern void enemy_pattern0(int);extern void enemy_pattern1(int);extern void enemy_pattern2(int);
extern void enemy_pattern3(int);extern void enemy_pattern4(int);extern void enemy_pattern5(int);
extern void enemy_pattern6(int);extern void enemy_pattern7(int);extern void enemy_pattern8(int);
extern void enemy_pattern9(int);extern void enemy_pattern10(int);

void (*enemy_pattern[ENEMY_PATTERN_MAX])(int) = {
    enemy_pattern0,    enemy_pattern1,    enemy_pattern2,    enemy_pattern3,    enemy_pattern4,
    enemy_pattern5,    enemy_pattern6,    enemy_pattern7,    enemy_pattern8,    enemy_pattern9,
    enemy_pattern10,
};

//�󂢂Ă���G�ԍ�������
int enemy_num_search(){
    for(int i=0;i<ENEMY_MAX;i++){//�t���O�̂����Ė���enemy��T��
        if(enemy[i].flag==0){
            return i;//�g�p�\�ԍ���Ԃ�
        }
    }
    return -1;//�S�����܂��Ă�����G���[��Ԃ�
}

//�G����o�^
void enemy_enter(){//�G�̍s����o�^�E���䂷��֐�
    int i,j,t;
	if(boss.flag!=0)return;
    for(t=0;t<ENEMY_ORDER_MAX;t++){
        if(enemy_order[t].cnt==stage_count){//���݂̏u�Ԃ��I�[�_�[�̏u�ԂȂ�
            if((i=enemy_num_search())!=-1){
                enemy[i].flag    =1;//�t���O
                enemy[i].cnt    =0;//�J�E���^
                enemy[i].pattern=enemy_order[t].pattern;//�ړ��p�^�[��
                enemy[i].muki    =1;//����
                enemy[i].knd    =enemy_order[t].knd;//�G�̎��
                enemy[i].x        =enemy_order[t].x;//���W
                enemy[i].y        =enemy_order[t].y;
                enemy[i].sp        =enemy_order[t].sp;//�X�s�[�h
                enemy[i].bltime    =enemy_order[t].bltime;//�e�̔��ˎ���
                enemy[i].blknd    =enemy_order[t].blknd;//�e���̎��
                enemy[i].blknd2    =enemy_order[t].blknd2;//�e�̎��
                enemy[i].col    =enemy_order[t].col;//�F
                enemy[i].wait    =enemy_order[t].wait;//�F
                enemy[i].hp        =enemy_order[t].hp;//�̗�
                enemy[i].hp_max =enemy[i].hp;//�̗͍ő�l
				enemy[i].back_col=GetRand(4);
                enemy[i].vx     =0;//���������̑��x
                enemy[i].vy     =0;//���������̑��x
                enemy[i].ang    =0;//�p�x
                for(j=0;j<6;j++)
                    enemy[i].item_n[j]=enemy_order[t].item_n[j];//���Ƃ��A�C�e��
            }
        }
    }
}

void enter_shot(int i){
	int j;
	for(j=0;j<SHOT_MAX;j++){//�t���O�̂����Ė���enemy��T��
		if(shot[j].flag==0){//���g�p�̒e���f�[�^�������
			memset(&shot[j],0,sizeof(shot_t));//���������ēo�^
			shot[j].flag=1;//�t���O�����Ă�
			shot[j].knd=enemy[i].blknd;//�e�̎��
			shot[j].num=i;//num=�ǂ̓G���甭�˂��ꂽ���̂��B
			shot[j].cnt=0;
			return ;
		}
	}
}

//�G�̍s������
void enemy_act(){
    int i;
    for(i=0;i<ENEMY_MAX;i++){
        if(enemy[i].flag==1){//���̓G�̃t���O���I���ɂȂ��Ă���
            if(0<=enemy[i].pattern && enemy[i].pattern<ENEMY_PATTERN_MAX){
                enemy_pattern[enemy[i].pattern](i);
                enemy[i].x+=cos(enemy[i].ang)*enemy[i].sp;
                enemy[i].y+=sin(enemy[i].ang)*enemy[i].sp;
                enemy[i].x+=enemy[i].vx;
                enemy[i].y+=enemy[i].vy;
                enemy[i].cnt++;
                enemy[i].img=enemy[i].muki*3+(enemy[i].cnt%18)/6;
                //�G����ʊO�ɊO�ꂽ�����
                if(enemy[i].x<-20 || FMX+20<enemy[i].x || enemy[i].y<-20 || FMY+20<enemy[i].y)
                    enemy[i].flag=0;
				if(enemy[i].bltime==enemy[i].cnt)
					enter_shot(i);
			}
            else
                printfDx("enemy[i].pattern��%d�l���s���ł��B",enemy[i].pattern);
        }
    }
}

//�G�������C��
void enemy_main(){
    enemy_enter();
    enemy_act();
}