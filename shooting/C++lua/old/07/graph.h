#pragma once

#include "char.h"

// �L�����`��
inline void graph_ch(){
	img_ch[0].draw();
}

// �{�[�h�`��
void graph_board(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
}

// �摜�`�惁�C��
void graph_main(DxLibEngine &){
	// ��l���摜���v�Z���ĕ`��
	calc_ch();
	graph_ch();
	
	graph_board();
}
