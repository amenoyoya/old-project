#pragma once

#include "core.h"

// �L�����N�^�[�摜(�ϐg�p��2�p��)
DxSprite	img_ch[2];
lobj_t		ch = lb_NewTable(lua);

#define _Char(type, key) (lb_Cast<type>(ch[#key]))

// �L�����`���{�֐�
void ch_Draw(){
	img_ch[0].SetPos(_Char(float, x), _Char(float, y));
	img_ch[0].draw(_Char(int, img));
}

inline void LoadChara(){
	img_ch[0].DivOpen(win.device(), "../dat/img/char/0.png", 4, 3, 73, 73);
	// �L�����\���̃��[�h
	csv_ToStructArray<lua, ch>("dat/char.txt");
	ch = ch[0];
}

void InitChara(){
	ch["x"] = _GameTable(double, fieldmaxwidth)/2;
	ch["y"] = _GameTable(double, fieldmaxheight)*3/4;
}

void DrawChara(){
	ch["cnt"] = _Char(int, cnt) + 1;
	ch["img"] = (_Char(int, cnt)%24)/6;
	ch_Draw();
}
