#include "engine.h"
#include <cmath>

// ������
void first_ini(DxLibEngine &){
	ch.x = _FieldMaxX/2, ch.y = _FieldMaxY*3/4;
	g_mainFunc = load;
}

// �摜���[�h
void load(DxLibEngine &){
	img_board[10].load("../dat/img/board/10.png");
	img_board[11].load("../dat/img/board/11.png");
	img_board[12].load("../dat/img/board/12.png");
	img_board[20].load("../dat/img/board/20.png");
	img_ch[0].load("../dat/img/char/0.png", 73, 73, 4, 3);
	g_mainFunc = graph_main;
}

// �\�������l���摜���v�Z
inline void calc_ch(){
	ch.img = ((++ch.cnt)%24)/6;
}

// �L�����ړ�����
void move_ch(DxLibEngine &dx){
	double naname=1, x=0, y=0, mx=0, my=0,
		move_x[4]={-4.0, 4.0, 0, 0},
		move_y[4]={0, 0, 4.0, -4.0};//{��,�E,��,��}�̃X�s�[�h
	bool inputpad[4], sayu_flag=false, joge_flag=false;;
	
	inputpad[0] = _InputLeft(dx);
	inputpad[1] = _InputRight(dx);
	inputpad[2] = _InputDown(dx);
	inputpad[3] = _InputUp(dx);
	
	if(_InputLeft(dx))//���L�[��������Ă�����
		ch.img += 4*2;//�摜����������
	else if(_InputRight(dx))//�E�L�[��������Ă�����
		ch.img += 4*1;//�摜���E������

	for(int i=0; i<2; ++i){
		//���E��
		if(inputpad[i]) //���E�ǂ��炩�̓��͂������
			sayu_flag = true;//���E���̓t���O�𗧂Ă�
	}
	for(int i=2; i<4; ++i){
		//�㉺��
		if(inputpad[i])//�㉺�ǂ��炩�̓��͂������
			joge_flag = true;//�㉺���̓t���O�𗧂Ă�
	}
	if(sayu_flag && joge_flag)//���E�A�㉺�����̓��͂�����Ύ΂߂��ƌ�����
		naname = sqrt(2.0);//�ړ��X�s�[�h��1/���[�g2��
	
	for(int i=0; i<4; ++i){
		//4���������[�v
		if(inputpad[i]){
			//i�����̃L�[�{�[�h�A�p�b�h�ǂ��炩�̓��͂������
			x = ch.x, y = ch.y;// ���ݍ��W�擾
			mx = move_x[i], my = move_y[i];//�ړ�������
			if(_InputSlow(dx)){
				//�ᑬ�ړ��Ȃ�ړ��X�s�[�h��1/3��
				mx=move_x[i]/3, my=move_y[i]/3;
			}
			x+=mx/naname, y+=my/naname;//���̍��W�ƈړ����𑫂�
			if(!(x<10 || x>_FieldMaxX-10 || y<5 || y>_FieldMaxY-5)){
				//�v�Z���ʈړ��\�͈͓��Ȃ�ړ�
				ch.x = x, ch.y = y;
			}
		}
	}
}

// �L�����`��
inline void graph_ch(){
	img_ch[0].draw(ch.x, ch.y, ch.img);
}

// �{�[�h�`��
void graph_board(){
	img_board[10].draw(0, 0);
	img_board[11].draw(0, 16);
	img_board[12].draw(0, 464);
	img_board[20].draw(416, 0);
}

// �摜�`�惁�C��
void graph_main(DxLibEngine &dx){
	// ��l���摜���v�Z���ĕ`��
	calc_ch();
	move_ch(dx);
	graph_ch();
	
	graph_board();
}
