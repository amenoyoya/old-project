#include "../include/GV.h"
#include "../include/func.h"

#define V0 10.0
 
//�����I�v�Z��_�Ƌ����w��œo�^������(�w�莞��t�Œ�ʒu�ɖ߂�)
void input_phy_pos(double x,double y,int t){//t=�ړ��ɂ����鎞��
	double ymax_x,ymax_y;
	if(t==0)t=1;
	boss.phy.flag=1;//�o�^�I��
	boss.phy.cnt=0;//�J�E���^������
	boss.phy.set_t=t;//�ړ��ɂ����鎞�Ԃ��Z�b�g
	ymax_x=boss.x-x;//�ړ���������������
	boss.phy.v0x=2*ymax_x/t;//���������̏����x
	boss.phy.ax =2*ymax_x/(t*t);//���������̉����x
	boss.phy.prex=boss.x;//����x���W
	ymax_y=boss.y-y;//�ړ���������������
	boss.phy.v0y=2*ymax_y/t;//���������̏����x
	boss.phy.ay =2*ymax_y/(t*t);//���������̉����x
	boss.phy.prey=boss.y;//����y���W
}

//���[�U�[�̕����I�v�Z�o�^
void input_lphy(lazer_t *laz, int time, double angle){
	laz->lphy.angle   =angle;
	laz->lphy.base_ang=laz->angle;
	laz->lphy.time    =time;
}

//������ʒu����dist���ꂽ�ʒu��t�J�E���g�ňړ�����
int move_boss_pos(double x1,double y1,double x2,double y2,double dist, int t){
	int i=0;
	double x,y,angle;
	for(i=0;i<1000;i++){
		x=boss.x,y=boss.y;//���̃{�X�̈ʒu���Z�b�g
		angle=rang(PI);//�K���Ɍ��������������߂�
		x+=cos(angle)*dist;//������Ɉړ�������
		y+=sin(angle)*dist;
		if(x1<=x&&x<=x2 && y1<=y&&y<=y2){//���̓_���ړ��\�͈͂Ȃ�
			input_phy_pos(x,y,t);
			return 0;
		}
	}
	return -1;//1000�񎎂��ă_���Ȃ�G���[
}

int search_child(){//�󂫔ԍ���Ԃ�
	for(int i=0;i<CHILD_MAX;i++){
		if(child[i].flag==0)
			return i;
	}
	return -1;
}

int search_boss_shot(){//�󂫔ԍ���Ԃ�
	for(int i=0;i<BOSS_BULLET_MAX;i++){
		if(boss_shot.bullet[i].flag==0)
			return i;
	}
	return -1;
}
int search_lazer(){//�󂫔ԍ���Ԃ�
	for(int i=0;i<LAZER_MAX;i++){
		if(lazer[i].flag==0)
			return i;
	}
	return -1;
}
double bossatan2(){//���@�ƓG�Ƃ̐����p�x
	return atan2(ch.y-boss.y,ch.x-boss.x);
}
double bossatan3(int k,double x,double y){//�w����W�ƒe�Ƃ̐����p�x
	return atan2(y-boss_shot.bullet[k].y,x-boss_shot.bullet[k].x);
}
//�����I�v�Z��������o�^������(�w�莞��t�Œ�ʒu�ɖ߂�)
void input_phy(int t){//t=�ړ��ɂ����鎞��
	double ymax_x,ymax_y;
	if(t==0)t=1;
	boss.phy.flag=1;//�o�^�I��
	boss.phy.cnt=0;//�J�E���^������
	boss.phy.set_t=t;//�ړ��ɂ����鎞�Ԃ��Z�b�g
	ymax_x=boss.x-BOSS_POS_X;//�ړ���������������
	boss.phy.v0x=2*ymax_x/t;//���������̏����x
	boss.phy.ax =2*ymax_x/(t*t);//���������̉����x
	boss.phy.prex=boss.x;//����x���W
	ymax_y=boss.y-BOSS_POS_Y;//�ړ���������������
	boss.phy.v0y=2*ymax_y/t;//���������̏����x
	boss.phy.ay =2*ymax_y/(t*t);//���������̉����x
	boss.phy.prey=boss.y;//����y���W
}
//�����I�L�����N�^�ړ��v�Z
void calc_phy(){
	double t=boss.phy.cnt;
	boss.x=boss.phy.prex-((boss.phy.v0x*t)-0.5*boss.phy.ax*t*t);//���݂���ׂ�x���W�v�Z
	boss.y=boss.phy.prey-((boss.phy.v0y*t)-0.5*boss.phy.ay*t*t);//���݂���ׂ�y���W�v�Z
	boss.phy.cnt++;
	if(boss.phy.cnt>=boss.phy.set_t)//�ړ��ɂ����鎞�ԕ��ɂȂ�����
		boss.phy.flag=0;//�I�t
}
//�{�X�̒e�����v�Z����
void boss_shot_calc(){
	int i;
	boss.endtime--;
	if(boss.endtime<0)
		boss.hp=0;
	for(i=0;i<BOSS_BULLET_MAX;i++){
		if(boss_shot.bullet[i].flag>0){
			boss_shot.bullet[i].x+=cos(boss_shot.bullet[i].angle)*boss_shot.bullet[i].spd;
			boss_shot.bullet[i].y+=sin(boss_shot.bullet[i].angle)*boss_shot.bullet[i].spd;
			boss_shot.bullet[i].cnt++;
			if(boss_shot.bullet[i].cnt>boss_shot.bullet[i].till){
				if(boss_shot.bullet[i].x<-50 || boss_shot.bullet[i].x>FMX+50 ||
					boss_shot.bullet[i].y<-50 || boss_shot.bullet[i].y>FMY+50)
					boss_shot.bullet[i].flag=0;
			}
		}
	}
	boss_shot.cnt++;
}
//�e�����Z�b�g
void enter_boss_shot(){
	memset(&boss_shot , 0, sizeof(boss_shot_t));//�e��񏉊���
	boss_shot.flag=1;
	boss.wtime=0;//�ҋ@����0
	boss.state=2;//�e������Ԃ�
	boss.hp=boss.set_hp[boss.knd];//HP�ݒ�
	boss.hp_max=boss.hp;
}
//�{�X���Z�b�g
void enter_boss(int num){
	if(num==0){//���{�X�J�n���̎���
		memset(enemy,0,sizeof(enemy_t)*ENEMY_MAX);//�G���G������
		memset(shot,0,sizeof(shot_t)*SHOT_MAX);//�e��������
		boss.x=FMX/2;//�{�X�̏������W
		boss.y=-30;
		if(stage_count==boss.appear_count[0])//�ŏ��Ȃ�
			boss.knd=-1;//�e���̎��
	}
	boss.phy.flag=1;
	boss.phy.flag=1;
	boss.flag=1;
	boss.hagoromo=0;//����L���邩�ǂ����̃t���O
	boss.endtime=99*60;//�c�莞��
	boss.state=1;//�ҋ@����Ԃ�
	boss.cnt=0;
	boss.graph_flag=0;//�`��t���O��߂�
	boss.knd++;
	boss.wtime=0;//�ҋ@���Ԃ�������
	memset(lazer,0,sizeof(lazer_t)*LAZER_MAX);//���[�U�[����������
	input_phy(60);//60�J�E���g�����ĕ����I�v�Z�Œ�ʒu�ɖ߂�
}
//�{�X�̑ҋ@����
void waitandenter(){
	int t=150;
	boss.wtime++;
	if(boss.wtime>t)//140�J�E���g�ҋ@������e���Z�b�g
		enter_boss_shot();
}

void calc_boss(){
	boss.dx=boss.x;
	boss.dy=boss.y+sin(PI2/130*(count%130))*10;
}

//�{�X�̒e�����C��
void boss_shot_main(){
	if((stage_count==boss.appear_count[0] || stage_count==boss.appear_count[1])
			&& boss.flag==0){//�J�n���ԂȂ�
		enter_boss(0);//�J�n
	}
	if(boss.flag==0)//�{�X���o�^����Ė�����Ζ߂�
		return;
	calc_boss();
	if(boss.phy.flag==1)//�������Z�ړ��I���Ȃ�
		calc_phy();//�����v�Z��
	if(boss.state==2 && (boss.hp<=0 || boss.endtime<=0)){//�e�����ő̗͂������Ȃ�����
        se_flag[1]=1;//�G�̃s�`������
		se_flag[11]=1;
		input_phy(30);//30�J�E���g�Œ�ʒu�ɖ߂�
		memset(&boss_shot,0,sizeof(boss_shot_t));//�{�X�̒e������������
		memset(&lazer,0,sizeof(lazer_t)*LAZER_MAX);//�{�X�̃��[�U�[����������
		flash.flag=0;//�t���b�V��������
		if(boss.knd==boss.danmaku_num[0] || boss.knd==boss.danmaku_num[1]){//�o���ׂ��e����������������
			boss.flag=0;//����
			enter_dn(10,40);//(45)
			se_flag[9]=1;//�{�X�����񂾉�
			return ;
		}
		else
			enter_boss(1);//���̒e����o�^
	}
	if(boss.state==1){//�e���Ԃ̑ҋ@����
		waitandenter();
	}
	if(boss.state==2){//�e�����Ȃ�
		boss_shot_bullet[boss.knd]();//�e���֐���
		boss_shot_calc();//�e���v�Z
	}
	boss.cnt++;
}


