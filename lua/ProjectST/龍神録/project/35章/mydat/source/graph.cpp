#include "../include/GV.h"

extern void graph_back_main();

int DrawRotaGraphF( double xd, double yd, double ExRate, double Angle, int GrHandle, int TransFlag, int TurnFlag = FALSE  ) {
	return DrawRotaGraphF((float)xd,(float)yd,ExRate,Angle,GrHandle,TransFlag,TurnFlag);
}
int DrawModiGraphF( double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, int GrHandle, int TransFlag ){
	return DrawModiGraphF( (float)x1, (float)y1, (float)x2, (float)y2, (float)x3, (float)y3, (float)x4, (float)y4, GrHandle, TransFlag ) ;
}
void graph_effect(int knd){
	for(int i=0;i<EFFECT_MAX;i++){
		if(effect[i].flag>0 && effect[i].knd==knd){
			if(effect[i].eff==1)//�G�t�F�N�g�����G�t�F�N�g�Ȃ�
				SetDrawBlendMode( DX_BLENDMODE_ADD, (int)effect[i].brt) ;
			if(effect[i].eff==2)//�G�t�F�N�g�����G�t�F�N�g�Ȃ�
				SetDrawBlendMode( DX_BLENDMODE_ALPHA, (int)effect[i].brt) ;
			DrawRotaGraphF(effect[i].x+FX+dn.x,effect[i].y+FY+dn.y,effect[i].r,effect[i].ang,effect[i].img,TRUE);
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
			DrawRotaGraphF(enemy[i].x+FX+dn.x,enemy[i].y+FY+dn.y,1.0f,0.0f,img_enemy[0][enemy[i].img],TRUE);
		}
	}
}

void graph_boss_effect(){
	SetDrawBlendMode( DX_BLENDMODE_ALPHA, 150) ;
	DrawRotaGraphF(boss.dx+FX,   boss.dy+FY,
				   (0.4+0.05*sin(PI2/360*(count%360)))*3,
				   2*PI*(count%580)/580,
				   img_etc[5], TRUE);
	DrawRotaGraphF(boss.dx+FX,   boss.dy+FY,
				   (0.5+0.1*sin(PI2/360*(count%360)))*2,
				   2*PI*(count%340)/340,img_etc[2],	TRUE);
	DrawRotaGraphF(boss.dx+60*sin(PI2/153*(count%153))+FX,
				   boss.dy+80*sin(PI2/120*(count%120))+FY,
				   0.4+0.05*sin(PI2/120*(count%120)),
				   2*PI*(count%30)/30,img_etc[6],	TRUE);
	DrawRotaGraphF(boss.dx+60*sin(PI2/200*((count+20)%200))+FX,
				   boss.dy+80*sin(PI2/177*((count+20)%177))+FY,
				   0.3+0.05*sin(PI2/120*(count%120)), 
				   2*PI*(count%35)/35,img_etc[6],	TRUE);
	SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
	DrawRotaGraphF(boss.dx+60*sin(PI2/230*((count+40)%230))+FX,
				   boss.dy+80*sin(PI2/189*((count+40)%189))+FY,
				   0.6+0.05*sin(PI2/120*(count%120)),
				   2*PI*(count%40)/40,img_etc[6],	TRUE);
}

void graph_boss(){
	int i;
	if(boss.flag==0)return;
	graph_boss_effect();
	DrawRotaGraphF(boss.dx+FX+dn.x,boss.dy+FY+dn.y,
		1.0f,0.0f,img_dot_riria[0],TRUE);
	if(boss.hp_max==0){printfDx("graph_boss��0����\n");return;}
	for(i=0;i<FMX*0.98*boss.hp/boss.hp_max;i++){
		if(boss.back_knd[boss.knd]==1)
			DrawGraph(3+FX+i+dn.x,2+FY+dn.y,img_etc[7],FALSE);
		else
			DrawGraph(3+FX+i+dn.x,2+FY+dn.y,img_etc[1],FALSE);
	}
}

//���@�`��
void graph_ch(){
	double sx,sy,ny=(sin(2.0*PI*(count%50)/50)*3),ang=2.0*PI*(count%120)/120;

	if(CheckStatePad(configpad.slow)>0)//�ᑬ�ړ����Ȃ�
		sx=15,sy=15+ny;//�����񂹂�
	else
		sx=30,sy=30+ny;//���ʂ̈ʒu��

	DrawRotaGraphF( ch.x-sx+FX, ch.y+sy+FY, 1.0f,  ang, img_chetc[2], TRUE );
	DrawRotaGraphF( ch.x+sx+FX, ch.y+sy+FY, 1.0f, -ang, img_chetc[2], TRUE );

	if(ch.mutekicnt%2==0){//���G���Ȃ�_��
		//���@�\��
		DrawRotaGraphF(ch.x+FX+dn.x,ch.y+FY+dn.y,1.0f,0.0f,img_ch[0][ch.img],TRUE);
		if(CheckStatePad(configpad.slow)>0)//�ᑬ�ړ����Ȃ瓖���蔻��\��
			DrawRotaGraphF( ch.x+FX, ch.y+FY, 1.0f, 2.0*PI*(count%120)/120, img_chetc[0], TRUE );
	}
}

//���@�V���b�g�`��
void graph_cshot(){
	for(int i=0;i<CSHOT_MAX;i++){
		if(cshot[i].flag>0){
			DrawRotaGraphF(cshot[i].x+FX+dn.x,cshot[i].y+FY+dn.y,1,0,img_cshot[cshot[i].knd],TRUE);
		}
	}
}

void myDrawSquare(double x0, double y0,double x1, double y1,double x2, double y2,double x3, double y3){
	DrawTriangle((int)x0,(int)y0,(int)x1,(int)y1,(int)x2,(int)y2,GetColor(255,0,0),TRUE);
	DrawTriangle((int)x0,(int)y0,(int)x3,(int)y3,(int)x2,(int)y2,GetColor(255,0,0),TRUE);
}

void graph_lazer(){
	int i;
	SetDrawMode( DX_DRAWMODE_BILINEAR ) ;//���`�⊮�`��
	for(i=0;i<LAZER_MAX;i++){//�G�̒e���������[�v
		if(lazer[i].flag>0){//�e���f�[�^���I���Ȃ�
			SetDrawBlendMode( DX_BLENDMODE_ADD, 255) ;
			DrawRotaGraphF(//���ˈʒu�̃G�t�F�N�g��`��
				lazer[i].startpt.x+FX,lazer[i].startpt.y+FY,1.0,0,
				img_lazer_moto[lazer[i].knd][lazer[i].col],TRUE
			);
			DrawModiGraphF(//���[�U�[��`��
				lazer[i].disppt[0].x+FX, lazer[i].disppt[0].y+FY, 
				lazer[i].disppt[1].x+FX, lazer[i].disppt[1].y+FY, 
				lazer[i].disppt[2].x+FX, lazer[i].disppt[2].y+FY, 
				lazer[i].disppt[3].x+FX, lazer[i].disppt[3].y+FY, 
				img_lazer[lazer[i].knd][lazer[i].col],TRUE
			);
			SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
/*			myDrawSquare(//�����蔻��͈͂�\��
				lazer[i].outpt[0].x+FX,lazer[i].outpt[0].y+FY,
				lazer[i].outpt[1].x+FX,lazer[i].outpt[1].y+FY,
				lazer[i].outpt[2].x+FX,lazer[i].outpt[2].y+FY,
				lazer[i].outpt[3].x+FX,lazer[i].outpt[3].y+FY
			);*/
		}
	}
}

//�e�ۂ̕`��
void graph_bullet(){
	int i,j,eff;
	double disp_angle;
	SetDrawMode( DX_DRAWMODE_BILINEAR ) ;//���`�⊮�`��
	for(i=0;i<SHOT_MAX;i++){//�G�̒e���������[�v
		if(shot[i].flag>0){//�e���f�[�^���I���Ȃ�
			for(j=0;j<SHOT_BULLET_MAX;j++){//���̒e�������e�̍ő吔�����[�v
				if(shot[i].bullet[j].flag!=0){//�e�f�[�^���I���Ȃ�
					if(shot[i].bullet[j].eff==1)
						SetDrawBlendMode( DX_BLENDMODE_ADD, 255) ;
					if(bullet_info[shot[i].bullet[j].knd].kaiten==1)
						disp_angle=PI2*(shot[i].bullet[j].cnt%120)/120;
					else
						disp_angle=shot[i].bullet[j].angle+PI/2;

					DrawRotaGraphF(
						shot[i].bullet[j].x+FX+dn.x, shot[i].bullet[j].y+FY+dn.y,
						1.0, disp_angle,
						img_bullet[shot[i].bullet[j].knd][shot[i].bullet[j].col],TRUE);

					if(shot[i].bullet[j].eff==1)
						SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
				}
			}
		}
	}
	//�{�X
	if(boss_shot.flag>0){//�e���f�[�^���I���Ȃ�
		for(j=0;j<BOSS_BULLET_MAX;j++){//���̒e�������e�̍ő吔�����[�v
			if(boss_shot.bullet[j].flag!=0){//�e�f�[�^���I���Ȃ�
				eff=0;
				if(boss_shot.bullet[j].kaiten==1)
					disp_angle=PI2*(boss_shot.bullet[j].cnt%120)/120;
				else
					disp_angle=boss_shot.bullet[j].angle+PI/2;
				if(boss_shot.bullet[j].eff_detail==1){//���J�ɂ��������p�e�G�t�F�N�g
					SetDrawBlendMode( DX_BLENDMODE_ADD, 100+GetRand(155)),eff=1 ;
					DrawRotaGraphF(
						boss_shot.bullet[j].x+FX+dn.x, boss_shot.bullet[j].y+FY+dn.y,
						1.3, disp_angle,
						img_bullet[boss_shot.bullet[j].knd][boss_shot.bullet[j].col],TRUE);
				}
				if(boss_shot.bullet[j].eff==1)
					SetDrawBlendMode( DX_BLENDMODE_ADD, 255),eff=1 ;
				if(boss_shot.bullet[j].eff==2)
					SetDrawBlendMode( DX_BLENDMODE_ADD, 255+GetRand(100)),eff=1 ;
				DrawRotaGraphF(
					boss_shot.bullet[j].x+FX+dn.x, boss_shot.bullet[j].y+FY+dn.y,
					1.0, disp_angle,
					img_bullet[boss_shot.bullet[j].knd][boss_shot.bullet[j].col],TRUE);

				if(eff==1)
					SetDrawBlendMode( DX_BLENDMODE_NOBLEND, 0) ;
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

void graph_develop(){
	DrawFormatString(0,0,GetColor(255,255,255),"%d",stage_count);
}

void graph_main(){

	if(bright_set.brt!=255)SetDrawBright(bright_set.brt,bright_set.brt,bright_set.brt);

	graph_back_main();//�w�i�`�惁�C��
	graph_effect(0);//�G�����ʃG�t�F�N�g

	if(bright_set.brt!=255)SetDrawBright(255,255,255);

	graph_effect(4);//��炢�{���̃G�t�F�N�g

	if(bright_set.brt!=255)SetDrawBright(bright_set.brt,bright_set.brt,bright_set.brt);

	graph_boss();
	graph_enemy();//�G�̕`��
	graph_cshot();//���@�V���b�g�̕`��

	if(bright_set.brt!=255)SetDrawBright(255,255,255);

	graph_ch();//���@�̕`��

	if(bright_set.brt!=255)SetDrawBright(bright_set.brt,bright_set.brt,bright_set.brt);
	
	graph_lazer();//���[�U�[�̕`��
	graph_bullet();//�e�̕`��

	if(bright_set.brt!=255)SetDrawBright(255,255,255);

	graph_effect(1);//�{���̃G�t�F�N�g
	graph_effect(2);//�{�����̃G�t�F�N�g
	graph_effect(3);//�{���L�����̃G�t�F�N�g
	graph_board();//�{�[�h�̕`��

	graph_develop();
}