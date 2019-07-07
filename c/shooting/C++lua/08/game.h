#pragma once

#include "core.h"
#include "chara.h"

void game_Load(){
	string err = game_LoadConfig();
	
	if(err != "") MsgBox(~err);
	LoadChara(), LoadStage();
}

inline void game_Init(){
	InitChara(), InitStage();
}

inline void game_Draw(){
	DrawChara(), DrawStage();
}
