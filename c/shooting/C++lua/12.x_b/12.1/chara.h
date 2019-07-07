#pragma once

#include "core.h"

// キャラクター画像(変身用に2つ用意)
DxSprite	img_ch[2];
lobj_t		ch = lb_NewTable(lua);

#define _Char(type, key) (lb_Cast<type>(ch[0][#key]))

// キャラ描画基本関数
void ch_Draw(){
	img_ch[0].SetPos(_Char(float, x), _Char(float, y));
	img_ch[0].draw(_Char(int, img));
}

inline void LoadChara(){
	img_ch[0].DivOpen(win.device(), "../dat/img/char/0.png", 4, 3, 73, 73);
	// キャラ構造体ロード
	csv_ToStructArray<lua, ch>("dat/char.txt");
}

inline void DrawChara(){
	ch_Draw();
}
