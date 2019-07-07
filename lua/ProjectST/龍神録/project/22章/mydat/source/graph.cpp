#include "../include/GV.h"

extern void graph_back_main();

void graph_effect(int knd){
	for(int i=0;i<EFFECT_MAX;i++){
		if(effect[i].flag>0 && effect[i].knd==knd){
			if(effect[i].eff==1)//�G�t�F�N�g�����G�t�F�N�g�Ȃ�
				SetDrawBlendMode( DX_BLENDMODE_ADD, effect[i].brt) ;
			if(effect[i].eff==2)//�G�t�F�N�g�����G�t�F�N�g�Ȃ�
				SetDrawBlendMode( DX_BLENDMODE_ALPHA, effect[i].brt) ;
			DrawRotaGraphF(effect[i].x+FIELD_X+dn.x,effect[i].y+FIELD_Y+dn.y,effect[i].r,effect[i].ang,effect[i].img,TRUE);
			if(effect[i].eff==1 || effect[i].eff==2)
				SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
		}
	}
}

//�G�`��
void graph_enemy(){
	int i;
	for(i=0;i<ENEMY_MAX;i++){
		if(enemy[i].flag==1){
			DrawRotaGraphF(enemy[i].x+FIELD_X+dn.x,enemy[i].y+FIELD_Y+dn.y,1.0f,0.0f,img_enemy[0][enemy[i].img],TRUE);
		}
	}
}

//���@�`��
void graph_ch(){
	if(ch.mutekicnt%2==0)
		DrawRotaGraphF(ch.x+FIELD_X+dn.x,ch.y+FIELD_Y+dn.y,1.0f,0.0f,img_ch[0][ch.img],TRUE);
}

//���@�V���b�g�`��
void graph_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag>0){
			DrawRotaGraphF(cshot[i].x+FIELD_X+dn.x,cshot[i].y+FIELD_Y+dn.y,1,0,img_cshot[cshot[i].knd],TRUE);
		}
	}
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
						shot[i].bullet[j].x+FIELD_X+dn.x, shot[i].bullet[j].y+FIELD_Y+dn.y,
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

//�{�[�h�`��
void graph_board(){
	DrawGraph(	0,	0,img_board[10],FALSE);
	DrawGraph(	0, 16,img_board[11],FALSE);
	DrawGraph(	0,464,img_board[12],FALSE);
	DrawGraph(416,	0,img_board[20],FALSE);
}

void graph_main(){
	if(bright_set.brt!=255)SetDrawBright(bright_set.brt,bright_set.brt,bright_set.brt);

	graph_back_main();//�w�i�`�惁�C��
	graph_effect(0);//�G�����ʃG�t�F�N�g
	graph_enemy();//�G�̕`��
	graph_cshot();//���@�V���b�g�̕`��

	if(bright_set.brt!=255)SetDrawBright(255,255,255);

	graph_ch();//���@�̕`��

	if(bright_set.brt!=255)SetDrawBright(bright_set.brt,bright_set.brt,bright_set.brt);
	
	graph_bullet();//�e�̕`��

	if(bright_set.brt!=255)SetDrawBright(255,255,255);

	graph_effect(1);//�{���̃G�t�F�N�g
	graph_effect(2);//�{�����̃G�t�F�N�g
	graph_effect(3);//�{���L�����̃G�t�F�N�g
	graph_board();//�{�[�h�̕`��
}