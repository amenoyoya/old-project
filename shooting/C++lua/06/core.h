#pragma once

#include <eve/gui.h>

const int screen_width = 640, screen_height = 480;
int game_state = 0;
DxWindow &gWin = dxwin_GetHandle();

#define _GameEvent(state) if(game_state == state)

bool game_Open(){
	gWin.SetIcon("EVE_ICON");
	return dxwin_Open("���_�^", screen_width, screen_height);
}

inline bool game_Run(){
	return dxwin_Run();
}
