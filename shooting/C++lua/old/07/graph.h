#pragma once

#include "char.h"

// ƒLƒƒƒ‰•`‰æ
inline void graph_ch(){
	img_ch[0].draw();
}

// ƒ{[ƒh•`‰æ
void graph_board(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
}

// ‰æ‘œ•`‰æƒƒCƒ“
void graph_main(DxLibEngine &){
	// ålŒö‰æ‘œ‚ğŒvZ‚µ‚Ä•`‰æ
	calc_ch();
	graph_ch();
	
	graph_board();
}
