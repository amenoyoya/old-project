#include "../include/GV.h"

void calc_ch(){
	ch.cnt++;
	ch.img=(ch.cnt%24)/6;
}

void ch_move(){
	int i,sayu_flag=0,joge_flag=0;
	double x,y,mx,my,naname=1;
	double move_x[4]={-4.0,4.0,0,0},move_y[4]={0,0,4.0,-4.0};
	int inputpad[4];
	inputpad[0]=CheckStatePad(configpad.left); inputpad[1]=CheckStatePad(configpad.right);
	inputpad[2]=CheckStatePad(configpad.down); inputpad[3]=CheckStatePad(configpad.up);

	if(CheckStatePad(configpad.left)>0)//���L�[��������Ă�����
		ch.img+=4*2;//�摜����������
	else if(CheckStatePad(configpad.right)>0)//�E�L�[��������Ă�����
		ch.img+=4*1;//�摜���E������

	for(i=0;i<2;i++)//���E��
		if(inputpad[i]>0)//���E�ǂ��炩�̓��͂������
			sayu_flag=1;//���E���̓t���O�𗧂Ă�
	for(i=2;i<4;i++)//�㉺��
		if(inputpad[i]>0)//�㉺�ǂ��炩�̓��͂������
			joge_flag=1;//�㉺���̓t���O�𗧂Ă�
	if(sayu_flag==1 && joge_flag==1)//���E�A�㉺�����̓��͂�����Ύ΂߂��ƌ�����
		naname=sqrt(2.0);//�ړ��X�s�[�h��1/���[�g2��

	for(int i=0;i<4;i++){//4���������[�v
		if(inputpad[i]>0){//i�����̃L�[�{�[�h�A�p�b�h�ǂ��炩�̓��͂������
			x=ch.x , y=ch.y;//���̍��W���Ƃ肠����x,y�Ɋi�[
			mx=move_x[i];	my=move_y[i];//�ړ�����mx,my�ɑ��
			if(CheckStatePad(configpad.slow)>0){//�ᑬ�ړ��Ȃ�
				mx=move_x[i]/3;	my=move_y[i]/3;//�ړ��X�s�[�h��1/3��
			}
			x+=mx/naname , y+=my/naname;//���̍��W�ƈړ����𑫂�
			if(!(x<10 || x>FIELD_MAX_X-10 || y<5 || y>FIELD_MAX_Y-5)){//�v�Z���ʈړ��\�͈͓��Ȃ�
				ch.x=x , ch.y=y;//���ۂɈړ�������
			}
		}
	}
}