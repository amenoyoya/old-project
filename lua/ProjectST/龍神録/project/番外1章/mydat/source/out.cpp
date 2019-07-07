#include "../include/GV.h"

#define ENEMY_RANGE_MAX 4
#define CSHOT_RANGE_MAX 2
#define BRANGE 40.0

extern int out_lazer();

//�G�̓����蔻��͈�
int enemy_range[ENEMY_RANGE_MAX]={16,30,16,50};
//���@�V���b�g�̓����蔻��͈�
int cshot_range[CSHOT_RANGE_MAX]={6,};

//�����蔻��
//�V���b�g�̍��W:1  ������𔻒肷�镨��:2
int out_judge(double x1, double y1, double x2, double y2,
              double range1, double range2, double spd1,double angle1){
    int j;
    double x=x1-x2;//�G�Ǝ��@�V���b�g�Ƃ̋���
    double y=y1-y2;
    //�G�̓����蔻��Ǝ��@�V���b�g�̓����蔻��̍��v�͈�
    double r=range1+range2;
    //���Ԃ��v�Z����K�v�������
    if(spd1>r){
        //�P�t���[���O�ɂ����ʒu���i�[����
        double pre_x=x1+cos(angle1+PI)*spd1;
        double pre_y=y1+sin(angle1+PI)*spd1;
        double px,py;
        for(j=0;j<spd1/r;j++){//�i�񂾕��������蔻�蕪���[�v
            px=pre_x-x2;
            py=pre_y-y2;
            if(px*px+py*py<r*r)
                return 1;
            pre_x+=cos(angle1)*r;
            pre_y+=sin(angle1)*r;
        }
    }
    if(x*x+y*y<r*r)//�����蔻����Ȃ�
        return 1;//������
    return 0;
}

//�G�Ǝ��@�V���b�g�������������ǂ����𔻒肷��
int out_judge_cshot(int i,int s){
    if(cshot[i].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
        if(out_judge(cshot[i].x,cshot[i].y,enemy[s].x,enemy[s].y,
            cshot_range[cshot[i].knd],enemy_range[enemy[s].knd],
            cshot[i].spd,cshot[i].angle)){
                return 1;
        }
    }
    return 0;
}

//�{�X�Ǝ��@�V���b�g�������������ǂ����𔻒肷��
int out_judge_cshot_boss(int i){
    if(cshot[i].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
        if(out_judge(cshot[i].x,cshot[i].y,boss.x,boss.y,
            cshot_range[cshot[i].knd],BRANGE,cshot[i].spd,cshot[i].angle)){
                return 1;
        }
    }
    return 0;
}

//���@�ƓG�V���b�g�������������ǂ����𔻒肷��
int out_judge_enemyshot(int s,int n){
    if(shot[s].bullet[n].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
        if(out_judge(
            shot[s].bullet[n].x,shot[s].bullet[n].y,ch.x,ch.y,
            bullet_info[shot[s].bullet[n].knd].range,CRANGE,
            shot[s].bullet[n].spd,shot[s].bullet[n].angle
            )){
                return 1;
        }
    }
    return 0;
}

//���@�ƃ{�X�V���b�g�������������ǂ����𔻒肷��
int out_judge_bossshot(int n){
    if(boss_shot.bullet[n].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
        if(out_judge(
            boss_shot.bullet[n].x,boss_shot.bullet[n].y,ch.x,ch.y,
            bullet_info[boss_shot.bullet[n].knd].range,CRANGE,
            boss_shot.bullet[n].spd,boss_shot.bullet[n].angle
            )){
                return 1;
        }
    }
    return 0;
}

int serch_item(){
	for(int i=0;i<ITEM_MAX;i++)
		if(item[i].flag==0)
			return i;
	return -1;
}

//�A�C�e���o�^
//�A�C�e���@0:���p���[ 1:���_ 2:�e�_ 3:���� 4:��p���[ 5:���
void enter_item(double x, double y, int item_n[], int num){//x,y,�A�C�e���̎��,��
	int k;
	double r[6]={0.6,0.6,1.0,0.6,1.0,1.0};//dat/img/item�̉摜�̊g�嗦
	for(int i=0;i<num;i++){//1�̓G����o��A�C�e���̍ő吔��6��
		if(item_n[i]!=-1){//�G�N�Z���Ŏw�肵���A�C�e����-1(�Ȃ�)�Ȃ�I��
			if((k=serch_item())!=-1){//�o�^�o����ԍ���������
				item[k].flag=1;
				item[k].v    =-3.5;	//����
				item[k].cnt  =0;
				item[k].state=0;
				item[k].x    =x;
				item[k].y    =y;
				if(i>0){//�����Ȃ�K���ɂ���΂点��
					item[k].x+=rang(40);
					item[k].y+=rang(40);
				}
				item[k].knd =item_n[i];//�w�肵���A�C�e�����o��������
				item[k].r   =r[item[k].knd];
			}
		}
	}
}

//�G����o��A�C�e��
void enter_enemy_item(int s){
	enter_item(enemy[s].x,enemy[s].y,enemy[s].item_n, sizeof(enemy[s].item_n)/sizeof(int));
}

//�L��������o��A�C�e��
void enter_char_item(){
	int item_n[4]={4,4,4,4};
//	enter_item(ch.x, ch.y, item_n, 4);//(b1)
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
		enter_enemy_item(s);//�Gs�̃A�C�e�����o��������(39��)
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

//s�̓G��power�H��킷
void hit_enemy(int s,int power){
    enemy[s].hp-=power;//�e�̎��p���[��HP�����炷
    enemy_death_judge(s);//�G�����ʂ��ǂ��������߂�
}

//�{�X��power�H��킷
void hit_boss(int power){
    boss.hp-=power;//�e�̎��p���[��HP�����炷
}


//���@�V���b�g�ƓG�Ƃ̏���
void cshot_and_enemy(){
    int i,s;
    for(i=0;i<CSHOT_MAX;i++){//���@�V���b�g����
        if(cshot[i].flag>0){
            for(s=0;s<ENEMY_MAX;s++){//�G����
                if(enemy[s].flag>0){
                    if(out_judge_cshot(i,s)){//���@�V���b�g�ƓG���������Ă����
                        cshot[i].flag=0;//���̎��@�V���b�g������
                        hit_enemy(s,cshot[i].power);
                        break;
                    }
                }
            }
            //�{�X���o�����Ă��āA�`�悵�Ȃ��t���O���I�t�ŁA�V���b�g���Ȃ�
            if(boss.flag==1 && boss.graph_flag==0 && boss.state==2){
                if(out_judge_cshot_boss(i)){
                    cshot[i].flag=0;
                    hit_boss(cshot[i].power);
                }
            }
        }
    }
}

//�G�V���b�g�Ǝ��@�Ƃ̏���
void enemyshot_and_ch(){
    int s,n;
	if(ch.flag==0 && ch.mutekicnt==0 && out_lazer()==1){
        ch.cnt=0;
        ch.flag=1;
        se_flag[3]=1;
	}
    //�G���G�̃V���b�g
    for(s=0;s<SHOT_MAX;s++){//�G�V���b�g����
        if(shot[s].flag>0){//���̃V���b�g���o�^����Ă�����
            for(n=0;n<SHOT_BULLET_MAX;n++){//�e����
                if(shot[s].bullet[n].flag==1){//�e���o�^����Ă�����
					if(bom.flag!=0){
						shot[s].bullet[n].flag=0;
						continue;
					}
                    if(out_judge_enemyshot(s,n)==1){//���@�ɂ��̒e���ڐG���Ă�����
                        shot[s].bullet[n].flag=0;//�e���I�t
                        if(ch.flag==0 && ch.mutekicnt==0){
                            ch.cnt=0;
                            ch.flag=1;
                            se_flag[3]=1;
                        }
                    }
                }
            }
        }
    }
    //�{�X�̃V���b�g
    if(boss_shot.flag>0){//���̃V���b�g���o�^����Ă�����
        for(n=0;n<BOSS_BULLET_MAX;n++){//�e����
            if(boss_shot.bullet[n].flag==1){//�e���o�^����Ă�����
				if(bom.flag!=0){
					boss_shot.bullet[n].flag=0;
					continue;
				}
                if(out_judge_bossshot(n)==1){//���@�ɂ��̒e���ڐG���Ă�����
                    boss_shot.bullet[n].flag=0;//�e���I�t
                    if(ch.flag==0 && ch.mutekicnt==0){
                        ch.cnt=0;
                        ch.flag=1;
                        se_flag[3]=1;
                    }
                }
            }
        }
    }
}

//�{���̃_���[�W��G�ɋ��킷
void cbom_and_enemy(){
    int s;
    if(bom.flag!=1)return;
    for(s=0;s<ENEMY_MAX;s++){//�G����
        if(enemy[s].flag>0)//���̓G�������
            hit_enemy(s,ch.power/20);//�_���[�W��^����
    }
    //�{�X�����āA�`�悵�Ȃ��t���O���I�t�ŁA�V���b�g���Ȃ�
    if(boss.flag==1 && boss.graph_flag==0 && boss.state==2)
        hit_boss(ch.power/20);//���킷
}

//�A�C�e���Ƃ̐ڐG
//�A�C�e���@0:���p���[ 1:���_ 2:�e�_ 3:���� 4:��p���[ 5:���
void ch_and_item(){
	for(int i=0;i<ITEM_MAX;i++){
		if(item[i].flag>0){
			double x=item[i].x,y=item[i].y;
			if(kago.x-30<x && x<kago.x+30 && kago.y-15<y && y<kago.y-5){
				switch(item[i].knd){
					case 0:	kago.score+=1; break;
					case 4:	kago.score+=5;break;
				}
				item[i].flag=0;
				se_flag[35]=1;//(b1)
			}
/*
			if(x*x+y*y<ITEM_HIT_BOX*ITEM_HIT_BOX){
				switch(item[i].knd){
					case 0:	ch.power+=3; break;
					case 1:	ch.point+=1; break;
					case 2:	ch.score+=1; break;
					case 3:	ch.money+=1; break;
					case 4:	ch.power+=50;break;
					case 5:	ch.money+=10;break;
				}
				if(ch.power>500)ch.power=500;
				if(ch.point>9999)ch.point=9999;
				if(ch.money>999999)ch.money=999999;
				if(ch.score>999999999)ch.score=999999999;
				item[i].flag=0;
				se_flag[34]=1;
			}
*/
		}
	}
}

//�����蔻�胁�C��
void out_main(){
    cbom_and_enemy();//�G�Ƀ{�������킹��
    cshot_and_enemy();//���@�V���b�g�ƓG�Ƃ̏���
    enemyshot_and_ch();//�G�V���b�g�Ǝ��@�Ƃ̏���
	ch_and_item();//�A�C�e���ڐG����
}