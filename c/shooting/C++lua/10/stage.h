#pragma once

#include "core.h"

// ステージの広さ
const POINT		field_max = {384, 448},
				field = {32, 16};
// ステージカウンタ
int stage_count = 0;

DxSprite img_board[40];

inline int GetStageCount(){
	return stage_count;
}

luaB_object GetFieldMax(){
	luaB_object pt = luaB_NewTable(gLua);
	
	pt["w"] = field_max.x;
	pt["h"] = field_max.y;
	return pt;
}

void LoadStage(){
	img_board[10].open(gWin.device(), "../dat/img/board/10.png");
	img_board[11].open(gWin.device(), "../dat/img/board/11.png");
	img_board[12].open(gWin.device(), "../dat/img/board/12.png");
	img_board[20].open(gWin.device(), "../dat/img/board/20.png");
	
	// luaでステージカウンタ、フィールドを参照できるようにする
	luaB_Module(gLua)[
	luaB_Def("stage_count", &GetStageCount),
	luaB_Def("field_max", &GetFieldMax)
	];
}

void InitStage(){
	img_board[10].SetPos(0, 0);
	img_board[11].SetPos(0, 16);
	img_board[12].SetPos(0, 464);
	img_board[20].SetPos(416, 0);
	stage_count = 1;
}

void DrawStage(){
	img_board[10].draw();
	img_board[11].draw();
	img_board[12].draw();
	img_board[20].draw();
	++stage_count;
}
