#include "../include/GV.h"

#define ENEMY_RANGE_MAX 4
#define CSHOT_RANGE_MAX 2
#define CRANGE 2.0
#define BRANGE 40.0

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
    //�G���G�̃V���b�g
    for(s=0;s<SHOT_MAX;s++){//�G�V���b�g����
        if(shot[s].flag>0){//���̃V���b�g���o�^����Ă�����
            for(n=0;n<SHOT_BULLET_MAX;n++){//�e����
                if(shot[s].bullet[n].flag==1){//�e���o�^����Ă�����
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

//�����蔻�胁�C��
void out_main(){
    cbom_and_enemy();//�G�Ƀ{�������킹��
    cshot_and_enemy();//���@�V���b�g�ƓG�Ƃ̏���
    enemyshot_and_ch();//�G�V���b�g�Ǝ��@�Ƃ̏���
}