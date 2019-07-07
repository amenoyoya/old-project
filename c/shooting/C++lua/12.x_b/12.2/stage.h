#pragma once

DxSprite img_board[40];

void LoadStage(){
	img_board[10].open(win.device(), "../dat/img/board/10.png");
	img_board[11].open(win.device(), "../dat/img/board/11.png");
	img_board[12].open(win.device(), "../dat/img/board/12.png");
	img_board[20].open(win.device(), "../dat/img/board/20.png");
}

void InitStage(){
	img_board[10].SetPos(0, 0);
	img_board[11].SetPos(0, _GameTable(int, fieldheight));
	img_board[12].SetPos(0,
		_GameTable(int, fieldmaxheight) + _GameTable(int, fieldheight));
	img_board[20].SetPos(
		_GameTable(int, fieldmaxwidth) + _GameTable(int, fieldwidth), 0);
}

void DrawStage(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
}
