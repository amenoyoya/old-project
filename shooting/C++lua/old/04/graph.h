#pragma once

#include "GV.h"

// キャラ描画
inline void graph_ch(){
	img_ch[0].draw();
}

// 画像描画メイン
void graph_main(DxLibEngine &){
	graph_ch();
}
