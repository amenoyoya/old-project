#include "../include/GV.h"

//�G�̈ړ��p�^�[��0�ł̈ړ�����
void enemy_pattern0(int i){
    if(enemy[i].cnt<60){
        enemy[i].y+=2.0;
    }
    if(enemy[i].cnt>60+240){
        enemy[i].y-=2.0;
    }
}

//�G�f�[�^�̓o�^
void enemy_enter(){
    if(stage_count==100){//�Q�[�����n�܂���100�J�E���g�œo�^
        enemy[0].cnt    =0;
        enemy[0].muki   =1;
        enemy[0].flag   =1;
        enemy[0].bltime =150;
        enemy[0].hp     =1000;
        enemy[0].hp_max =enemy[0].hp;
        enemy[0].pattern=0;
        enemy[0].x      =FIELD_MAX_X/2;
        enemy[0].y      =-20;
    }
}

//�G�̍s������
void enemy_act(){
    int i;
    for(i=0;i<ENEMY_MAX;i++){
        if(enemy[i].flag==1){//���̓G�̃t���O���I���ɂȂ��Ă���
            enemy_pattern0(i);
            enemy[i].cnt++;
            enemy[i].img=enemy[i].muki*3+(enemy[i].cnt%18)/6;
            //�G����ʊO�ɊO�ꂽ�����
            if(enemy[i].x<-50 || FIELD_MAX_X+50<enemy[i].x || enemy[i].y<-50 || FIELD_MAX_Y+50<enemy[i].y)
                enemy[i].flag=0;
        }
    }
}

//�G�������C��
void enemy_main(){
    enemy_enter();
    enemy_act();
}

