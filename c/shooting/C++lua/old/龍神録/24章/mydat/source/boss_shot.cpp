#include "../include/GV.h"
#include "../include/func.h"

#define V0 10.0

int search_boss_shot(){//�󂫔ԍ���Ԃ�
	for(int i=0;i<BOSS_BULLET_MAX;i++){
		if(boss_shot.bullet[i].flag==0)
			return i;
	}
	return -1;
}
double bossatan2(){//���@�ƓG�Ƃ̐����p�x
	return atan2(ch.y-boss.y,ch.x-boss.x);
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
				if(boss_shot.bullet[i].x<-50 || boss_shot.bullet[i].x>FIELD_MAX_X+50 ||
					boss_shot.bullet[i].y<-50 || boss_shot.bullet[i].y>FIELD_MAX_Y+50)
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
		boss.x=FIELD_MAX_X/2;//�{�X�̏������W
		boss.y=-30;
		boss.knd=-1;//�e���̎��
	}
	boss.flag=1;
	boss.hagoromo=0;//����L���邩�ǂ����̃t���O
	boss.endtime=99*60;//�c�莞��
	boss.state=1;//�ҋ@����Ԃ�
	boss.cnt=0;
	boss.graph_flag=0;//�`��t���O��߂�
	boss.knd++;
	boss.wtime=0;//�ҋ@���Ԃ�������
	memset(&boss_shot,0,sizeof(boss_shot_t));//�{�X�̒e������������
	input_phy(60);//60�J�E���g�����ĕ����I�v�Z�Œ�ʒu�ɖ߂�
}
//�{�X�̑ҋ@����
void waitandenter(){
	int t=140;
	boss.wtime++;
	if(boss.wtime>t)//140�J�E���g�ҋ@������e���Z�b�g
		enter_boss_shot();
}
//�{�X�̒e�����C��
void boss_shot_main(){
	if(stage_count==boss.appear_count[0] && boss.flag==0)//�J�n���ԂȂ�
		enter_boss(0);//�J�n
	if(boss.flag==0)//�{�X���o�^����Ė�����Ζ߂�
		return;
	if(boss.phy.flag==1)//�������Z�ړ��I���Ȃ�
		calc_phy();//�����v�Z��
	if(boss.state==2 && (boss.hp<=0 || boss.endtime<=0)){//�e�����ő̗͂������Ȃ�����
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


