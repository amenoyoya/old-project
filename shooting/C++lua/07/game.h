#pragma once

#include "core.h"
#include "chara.h"

inline void game_Load(){
	LoadChara(), LoadStage();
}

inline void game_Init(){
	InitChara(), InitStage();
}

inline void game_Draw(){
	DrawChara(), DrawStage();
}
