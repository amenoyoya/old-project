#pragma once

#include "config.h"
#include <math.h>

const int screen_width = 640, screen_height = 480;
int game_state = 0;
DxWindow &gWin = dxwin_GetHandle();

#define _GameEvent(state) if(game_state == state)

bool game_Open(){
	gWin.SetIcon("EVE_ICON");
	return dxwin_Open("ó¥ê_ò^", screen_width, screen_height);
}

inline bool game_Run(){
	return dxwin_Run(60);
}
