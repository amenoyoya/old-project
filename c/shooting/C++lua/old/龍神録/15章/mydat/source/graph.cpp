#include "../include/GV.h"

void graph_enemy(){
	int i;
	for(i=0;i<ENEMY_MAX;i++){
		if(enemy[i].flag==1){
			DrawRotaGraphF(enemy[i].x+FIELD_X,enemy[i].y+FIELD_Y,1.0f,0.0f,img_enemy[0][enemy[i].img],TRUE);
		}
	}
}

void graph_ch(){
	DrawRotaGraphF(ch.x+FIELD_X,ch.y+FIELD_Y,1.0f,0.0f,img_ch[0][ch.img],TRUE);
}

//�e�ۂ̕`��
void graph_bullet(){
	int i,j;
	SetDrawMode( DX_DRAWMODE_BILINEAR ) ;//���`�⊮�`��
	for(i=0;i<SHOT_MAX;i++){//�G�̒e���������[�v
		if(shot[i].flag>0){//�e���f�[�^���I���Ȃ�
			for(j=0;j<SHOT_BULLET_MAX;j++){//���̒e�������e�̍ő吔�����[�v
				if(shot[i].bullet[j].flag!=0){//�e�f�[�^���I���Ȃ�
					if(shot[i].bullet[j].eff==1)
						SetDrawBlendMode( DX_BLENDMODE_ADD, 255) ;

					DrawRotaGraphF(
						shot[i].bullet[j].x+FIELD_X, shot[i].bullet[j].y+FIELD_Y,
						1.0, shot[i].bullet[j].angle+PI/2,
						img_bullet[shot[i].bullet[j].knd][shot[i].bullet[j].col],TRUE);

					if(shot[i].bullet[j].eff==1)
						SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
				}
			}
		}
	}
	SetDrawMode(DX_DRAWMODE_NEAREST);//�`��`����߂�
}

void graph_board(){
	DrawGraph(	0,	0,img_board[10],FALSE);
	DrawGraph(	0, 16,img_board[11],FALSE);
	DrawGraph(	0,464,img_board[12],FALSE);
	DrawGraph(416,	0,img_board[20],FALSE);
}

void graph_main(){
	graph_enemy();
	graph_ch();
	graph_bullet();
	graph_board();
}