#pragma once

#include "core.h"

const POINT		field_max = {384, 448},
				field = {32, 16};

DxSprite img_board[40];

void LoadStage(){
	gWin.CreateSprite(&img_board[10], "../dat/img/board/10.png");
	gWin.CreateSprite(&img_board[11], "../dat/img/board/11.png");
	gWin.CreateSprite(&img_board[12], "../dat/img/board/12.png");
	gWin.CreateSprite(&img_board[20], "../dat/img/board/20.png");
}

void InitStage(){
	img_board[10].SetPos(0, 0);
	img_board[11].SetPos(0, 16);
	img_board[12].SetPos(0, 464);
	img_board[20].SetPos(416, 0);
}

void DrawStage(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
}
