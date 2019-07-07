#include "../include/GV.h"

#define ENEMY_RANGE_MAX 4
#define CSHOT_RANGE_MAX 2
#define CRANGE 2.0

//�G�̓����蔻��͈�
int enemy_range[ENEMY_RANGE_MAX]={16,30,16,50};
//���@�V���b�g�̓����蔻��͈�
int cshot_range[CSHOT_RANGE_MAX]={6,};

//�G�Ǝ��@�V���b�g�������������ǂ����𔻒肷��
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

//���@�ƓG�V���b�g�������������ǂ����𔻒肷��
int out_judge_enemyshot(int s,int n){
    int j;
    if(shot[s].bullet[n].cnt>0){//�V���b�g�̋O�����P�x�ł��v�Z����Ă�����
        double x=shot[s].bullet[n].x-ch.x;//�G�Ǝ��@�V���b�g�Ƃ̋���
        double y=shot[s].bullet[n].y-ch.y;
        //�I�[�o�[�t���[�΍�
        if(shot[s].bullet[n].knd>=10)
            printfDx("out_judge_enemyshot���I�[�o�[�t���[\n");
        //�G�̓����蔻��Ǝ��@�V���b�g�̓����蔻��̍��v�͈�
        double r=bullet_info[shot[s].bullet[n].knd].range+CRANGE;
        //���Ԃ��v�Z����K�v�������
        if(shot[s].bullet[n].spd>r){
            //�P�t���[���O�ɂ����ʒu���i�[����
            double pre_x=shot[s].bullet[n].x+cos(shot[s].bullet[n].angle+PI)*shot[s].bullet[n].spd;
            double pre_y=shot[s].bullet[n].y+sin(shot[s].bullet[n].angle+PI)*shot[s].bullet[n].spd;
            double px,py;
            for(j=0;j<shot[s].bullet[n].spd/r;j++){//�i�񂾕��������蔻�蕪���[�v
                px=pre_x-ch.x;
                py=pre_y-ch.y;
                if(px*px+py*py<r*r)
                    return 1;
                pre_x+=cos(shot[s].bullet[n].angle)*r;
                pre_y+=sin(shot[s].bullet[n].angle)*r;
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

//���@�V���b�g�ƓG�Ƃ̏���
void cshot_and_enemy(){
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

//�G�V���b�g�Ǝ��@�Ƃ̏���
void enemyshot_and_ch(){
    int s,n;
    for(s=0;s<SHOT_MAX;s++){//�G�V���b�g����
        if(shot[s].flag>0){//���̃V���b�g���o�^����Ă�����
            for(n=0;n<SHOT_BULLET_MAX;n++){//�e����
                if(shot[s].bullet[n].flag==1){//�e���o�^����Ă�����
                    if(out_judge_enemyshot(s,n)==1){//���@�ɂ��̒e���ڐG���Ă�����
                        shot[s].bullet[n].flag=0;//�e���I�t

                        /*��炢�{�������������ɒǉ�*/

                        if(ch.flag==0 && ch.mutekicnt==0){//�X�e�[�^�X���ʏ�ŁA���G����Ȃ�������
                            ch.flag    =2;    //1:��炢�{����t���@2:����ŕ����オ�蒆
                            ch.cnt    =0;
                            se_flag[3]=1;
                            return;
                        }
                    }
                }
            }
        }
    }
}

//�����蔻�胁�C��
void out_main(){
    cshot_and_enemy();
    enemyshot_and_ch();
}