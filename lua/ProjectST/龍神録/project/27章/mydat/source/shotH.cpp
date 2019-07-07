#include "../include/GV.h"

//1�������A���@�Ɍ������Ē�������
void shot_bullet_H000(int n){
	int k;
	if(shot[n].cnt==0){
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
			shot[n].bullet[k].angle	=shotatan2(n);
			shot[n].bullet[k].flag	=1;
			shot[n].bullet[k].x		=enemy[shot[n].num].x;
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;
			shot[n].bullet[k].cnt	=0;
			shot[n].bullet[k].spd	=3;
			se_flag[0]=1;
		}
	}
}

//100�J�E���g����10���A���@�Ɍ������Ē�������(��Ɏ��@�_��)
void shot_bullet_H001(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<100 && t%10==0){//100�J�E���g��10�J�E���g��1��
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){//�G�����āA�e���o�^�\�Ȃ�
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;//�e�o�^
			shot[n].bullet[k].angle	=shotatan2(n);//�p�x
			shot[n].bullet[k].flag	=1;//�t���O
			shot[n].bullet[k].x		=enemy[shot[n].num].x;//���W
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;//�F
			shot[n].bullet[k].cnt	=0;//�J�E���^
			shot[n].bullet[k].spd	=3;//�X�s�[�h
			se_flag[0]=1;
		}
	}
}

//100�J�E���g����10���A���@�Ɍ������Ē�������(�p�x�L��)
void shot_bullet_H002(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<100 && t%10==0){
		if(t==0)
			shot[n].base_angle[0]=shotatan2(n);
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
			shot[n].bullet[k].angle	=shot[n].base_angle[0];
			shot[n].bullet[k].flag	=1;
			shot[n].bullet[k].x		=enemy[shot[n].num].x;
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;
			shot[n].bullet[k].cnt	=0;
			shot[n].bullet[k].spd	=3;
			se_flag[0]=1;
		}
	}
}

//100�J�E���g����10���A���@�Ɍ������ăX�s�[�h�ω���������
void shot_bullet_H003(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<100 && t%10==0){
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
			shot[n].bullet[k].angle	=shotatan2(n);
			shot[n].bullet[k].flag	=1;
			shot[n].bullet[k].x		=enemy[shot[n].num].x;
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;
			shot[n].bullet[k].cnt	=0;
			shot[n].bullet[k].spd	=1+5.0/100*t;
			se_flag[0]=1;
		}
	}
}

//0.5�b��1�񂸂~�`����
void shot_bullet_H004(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<120 && t%20==0){
		double angle=shotatan2(n);
		for(int i=0;i<20;i++){
			if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
				shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
				shot[n].bullet[k].angle	=angle+PI2/20*i;
				shot[n].bullet[k].flag	=1;
				shot[n].bullet[k].x		=enemy[shot[n].num].x;
				shot[n].bullet[k].y		=enemy[shot[n].num].y;
				shot[n].bullet[k].col	=enemy[shot[n].num].col;
				shot[n].bullet[k].cnt	=0;
				shot[n].bullet[k].spd	=4;
				se_flag[0]=1;
			}
		}
	}
}

//�΂�܂��V���b�g
void shot_bullet_H005(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<120 && t%2==0){
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
			shot[n].bullet[k].angle	=shotatan2(n)+rang(PI/4);
			shot[n].bullet[k].flag	=1;
			shot[n].bullet[k].x		=enemy[shot[n].num].x;
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;
			shot[n].bullet[k].cnt	=0;
			shot[n].bullet[k].spd	=3+rang(1.5);
			se_flag[0]=1;
		}
	}
}

//�΂�܂��V���b�g(����)
void shot_bullet_H006(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<120 && t%2==0){
		if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
			shot[n].bullet[k].knd	=enemy[shot[n].num].blknd2;
			shot[n].bullet[k].angle	=shotatan2(n)+rang(PI/4);
			shot[n].bullet[k].flag	=1;
			shot[n].bullet[k].x		=enemy[shot[n].num].x;
			shot[n].bullet[k].y		=enemy[shot[n].num].y;
			shot[n].bullet[k].col	=enemy[shot[n].num].col;
			shot[n].bullet[k].cnt	=0;
			shot[n].bullet[k].spd	=4+rang(2);
			se_flag[0]=1;
		}
	}
	for(int i=0;i<SHOT_BULLET_MAX;i++){
		if(shot[n].bullet[i].spd>1.5)
			shot[n].bullet[i].spd-=0.04;
	}
}


//�݂��e��
void shot_bullet_H007(int n){
	int t=shot[n].cnt;
	int k;
	if(t>=0 && t<=150 && t%10==0){
		for(int i=0;i<20;i++){
			if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
				shot[n].bullet[k].knd	=7;
				shot[n].bullet[k].angle	=PI2/20*i;
				shot[n].bullet[k].flag	=1;
				shot[n].bullet[k].x		=enemy[shot[n].num].x+cos(PI/2+PI/150*t)*100;
				shot[n].bullet[k].y		=enemy[shot[n].num].y+sin(PI/2+PI/150*t)*100;
				shot[n].bullet[k].col	=2;
				shot[n].bullet[k].cnt	=0;
				shot[n].bullet[k].spd	=1.2;
			}
		}
		for(int i=0;i<20;i++){
			if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
				shot[n].bullet[k].knd	=7;
				shot[n].bullet[k].angle	=PI2/20*i;
				shot[n].bullet[k].flag	=1;
				shot[n].bullet[k].x		=enemy[shot[n].num].x+cos(PI/2-PI/150*t)*100;
				shot[n].bullet[k].y		=enemy[shot[n].num].y+sin(PI/2-PI/150*t)*100;
				shot[n].bullet[k].col	=4;
				shot[n].bullet[k].cnt	=0;
				shot[n].bullet[k].spd	=1.2;
				se_flag[0]=1;
			}
		}
	}
}

//�~�V���O�W����
void shot_bullet_H008(int n){
    int t=shot[n].cnt;
    int k;
    if(t>=0 && t<1200 && t%90==0){
        double angle=rang(PI);
        for(int j=0;j<2;j++){//�r������Q���􂷂镪
            for(int i=0;i<60;i++){//��x��60��
                if(shot[n].flag!=2 && (k=shot_search(n))!=-1){
                    shot[n].bullet[k].knd    =8;//8�Ԃ̒e
                    shot[n].bullet[k].angle  =angle+PI2/60*i;//�~�`60��
                    shot[n].bullet[k].flag   =1;
                    shot[n].bullet[k].x      =enemy[shot[n].num].x;
                    shot[n].bullet[k].y      =enemy[shot[n].num].y;
                    shot[n].bullet[k].col    =enemy[shot[n].num].col;
                    shot[n].bullet[k].cnt    =0;
                    shot[n].bullet[k].state  =j;//�X�e�[�^�X�B0��1���ŉ�]�������
                    shot[n].bullet[k].spd    =2;
			        se_flag[0]=1;//���ˉ��炷
                }
            }
        }
    }
    for(int i=0;i<SHOT_BULLET_MAX;i++){//�S�e��
        if(shot[n].bullet[i].flag>0){//�o�^����Ă���e�������
            int state=shot[n].bullet[i].state;
            int cnt=shot[n].bullet[i].cnt;
            if(30<cnt && cnt<120){//30�`120�J�E���g�Ȃ�
                shot[n].bullet[i].spd-=1.2/90.0;//90�J�E���g������1.2���炷
                shot[n].bullet[i].angle+=(PI/2)/90.0*(state?-1:1);//90�J�E���g������90���X����
            }
        }
    }
}

void shot_bullet_H009(int n){}
void shot_bullet_H010(int n){}
void shot_bullet_H011(int n){}
void shot_bullet_H012(int n){}
void shot_bullet_H013(int n){}
void shot_bullet_H014(int n){}
void shot_bullet_H015(int n){}
void shot_bullet_H016(int n){}
void shot_bullet_H017(int n){}
