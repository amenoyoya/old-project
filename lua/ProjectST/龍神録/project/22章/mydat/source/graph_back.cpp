#include "../include/GV.h"

void graph_back00(){
	SetDrawArea( 32 , 16 , 416 , 464 ) ;//�`��\�G���A��ݒ�
	DrawGraph(FIELD_X,count%700+FIELD_Y-700,img_back[0],FALSE);
	DrawGraph(FIELD_X,count%700+FIELD_Y    ,img_back[0],FALSE);
	SetDrawArea( 0, 0, 640, 480);//�G���A��߂�
}

void graph_back_main(){
	graph_back00();
}