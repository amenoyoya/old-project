#pragma once

#include "core.h"
#include "chara.h"
#include "enemy.h"

void game_Load(){
	string err = game_LoadConfig();
	
	if(err != "") MsgBox(~err);
	LoadChara(), LoadStage(), LoadEnemy();
}

inline void game_Init(){
	InitChara(), InitStage(), InitEnemy();
}

inline void game_Draw(){
	DrawChara(), DrawEnemy(), DrawStage();
}
