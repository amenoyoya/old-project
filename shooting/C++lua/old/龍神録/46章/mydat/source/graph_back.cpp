#include "../include/GV.h"

extern int DrawGraphFd( int xd, int yd, int GrHandle, int TransFlag);

void graph_back00(){//�ʏ�w�i
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//�`��\�G���A��ݒ�
	DrawGraphFd(0,count%700-700,img_back[0],FALSE);
	DrawGraphFd(0,count%700    ,img_back[0],FALSE);
	SetDrawArea( 0, 0, 640, 480);//�G���A��߂�
}

void graph_back01(){//�X�y���J�[�h�p�w�i
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//�`��\�G���A��ݒ�

	DrawGraphFd(0,-count%480,img_back[11],FALSE);
	DrawGraphFd(0,-count%480+480,img_back[11],FALSE);
	DrawGraphFd(0,0,img_back[10],TRUE);

	SetDrawArea( 0, 0, 640, 480);//�G���A��߂�
}

void graph_back_main(){
	//�{�X���I���ŁA�X�y���J�[�h�Ȃ�
	if(boss.flag==1 && boss.back_knd[boss.knd]==1)
		graph_back01();
	else//����ȊO
		graph_back00();
}