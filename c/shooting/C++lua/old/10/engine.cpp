#include "engine.h"
#include <cmath>

// ������
void first_ini(DxLibEngine &){
	memset(&ch, 0, sizeof(char_t));
	ch.x = _FieldMaxX/2, ch.y = _FieldMaxY*3/4;
	memset(enemy, 0, sizeof(enemy_t)*_EnemyMax);
	g_mainFunc = load;
}

// �摜���[�h
void load(DxLibEngine &){
	img_board[10].load("../dat/img/board/10.png");
	img_board[11].load("../dat/img/board/11.png");
	img_board[12].load("../dat/img/board/12.png");
	img_board[20].load("../dat/img/board/20.png");
	img_ch[0].load("../dat/img/char/0.png", 73, 73, 4, 3);
	img_enemy[0].load("../dat/img/enemy/0.png", 32, 32, 3, 3);
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
void graph_ch(DxLibEngine &dx){
	calc_ch();
	move_ch(dx);
	img_ch[0].draw(ch.x, ch.y, ch.img);
}

// �{�[�h�`��
void graph_board(){
	img_board[10].draw(0, 0);
	img_board[11].draw(0, 16);
	img_board[12].draw(0, 464);
	img_board[20].draw(416, 0);
}

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
void enter_enemy(){
	if(stage_count==100){//�Q�[�����n�܂���100�J�E���g�œo�^
		enemy[0].cnt    = 0;
		enemy[0].muki   = 1;
		enemy[0].flag   = 1;
		enemy[0].bltime = 150;
		enemy[0].hp     = 1000;
		enemy[0].hp_max = enemy[0].hp;
		enemy[0].pattern= 0;
		enemy[0].x      = _FieldMaxX/2;
		enemy[0].y      = -20;
	}
}

//�G�̍s������
void act_enemy(){
	for(int i=0;i<_EnemyMax; ++i){
		if(enemy[i].flag==1){//���̓G�̃t���O���I���ɂȂ��Ă���
			enemy_pattern0(i);
			enemy[i].cnt++;
			enemy[i].img = enemy[i].muki*3+(enemy[i].cnt%18)/6;
			//�G����ʂ���O�ꂽ�����
			if(enemy[i].x<-50 || _FieldMaxX+50<enemy[i].x
				|| enemy[i].y<-50 || _FieldMaxY+50<enemy[i].y)
			{
				enemy[i].flag = 0;
			}
		}
	}
}

// �G�`��
void graph_enemy(){
	enter_enemy();
	act_enemy();
	for(int i=0; i<_EnemyMax; ++i){
		if(enemy[i].flag==1){
			img_enemy[0].draw(enemy[i].x+_FieldX,
				enemy[i].y+_FieldY, enemy[i].img);
		}
	}
}

// �摜�`�惁�C��
void graph_main(DxLibEngine &dx){
	graph_enemy();
	graph_ch(dx);
	graph_board();
	++stage_count;
}
