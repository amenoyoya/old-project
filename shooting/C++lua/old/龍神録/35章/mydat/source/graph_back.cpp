#include "../include/GV.h"

void graph_back00(){//�ʏ�w�i
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//�`��\�G���A��ݒ�
	DrawGraph(FX,count%700+FY-700,img_back[0],FALSE);
	DrawGraph(FX,count%700+FY    ,img_back[0],FALSE);
	SetDrawArea( 0, 0, 640, 480);//�G���A��߂�
}

void graph_back01(){//�X�y���J�[�h�p�w�i
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//�`��\�G���A��ݒ�

	DrawGraph(FX,FY-count%480,img_back[11],FALSE);
	DrawGraph(FX,FY-count%480+480,img_back[11],FALSE);
	DrawGraph(FX,FY,img_back[10],TRUE);

	SetDrawArea( 0, 0, 640, 480);//�G���A��߂�
}

void graph_back_main(){
	//�{�X���I���ŁA�X�y���J�[�h�Ȃ�
	if(boss.flag==1 && boss.back_knd[boss.knd]==1)
		graph_back01();
	else//����ȊO
		graph_back00();
}