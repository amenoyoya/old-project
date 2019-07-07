#include "engine.h"

// 初期化
void first_ini(DxLibEngine &){
	img_ch[0].pos(_FieldMaxX/2, _FieldMaxY*3/4);
	img_board[10].pos(0, 0);
	img_board[11].pos(0, 16);
	img_board[12].pos(0, 464);
	img_board[20].pos(416, 0);
	g_mainFunc = load;
}

// 画像ロード
void load(DxLibEngine &){
	img_board[10].load("../dat/img/board/10.png");
	img_board[11].load("../dat/img/board/11.png");
	img_board[12].load("../dat/img/board/12.png");
	img_board[20].load("../dat/img/board/20.png");
	img_ch[0].load("../dat/img/char/0.png", 73, 73, 4, 3);
	g_mainFunc = graph_main;
}

// 表示する主人公画像を計算
void calc_ch(DxLibEngine &dx){
	img_ch[0].img = ((++img_ch[0].cnt)%24)/6;
	
	// 操作
	if(_InputLeft(dx)) img_ch[0].move(-3, 0);
	if(_InputRight(dx)) img_ch[0].move(3, 0);
}

// キャラ描画
inline void graph_ch(){
	img_ch[0].draw();
}

// ボード描画
void graph_board(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
}

// 画像描画メイン
void graph_main(DxLibEngine &dx){
	// 主人公画像を計算して描画
	calc_ch(dx);
	graph_ch();
	
	graph_board();
}
