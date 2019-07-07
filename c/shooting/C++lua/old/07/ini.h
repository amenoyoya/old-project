#pragma once

#include "GV.h"

void load(DxLibEngine &);

// ‰Šú‰»
void first_ini(DxLibEngine &){
	img_ch[0].pos(_FieldMaxX/2, _FieldMaxY*3/4);
	img_board[10].pos(0, 0);
	img_board[11].pos(0, 16);
	img_board[12].pos(0, 464);
	img_board[20].pos(416, 0);
	g_mainFunc = load;
}
