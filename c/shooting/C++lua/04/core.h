#pragma once

#include <eve/gui.h>

const int screen_width = 640, screen_height = 480;
DxWindow &gWin = dxwin_GetHandle();

bool game_Open(){
	gWin.SetIcon("EVE_ICON");
	return dxwin_Open("ó¥ê_ò^", screen_width, screen_height);
}

inline bool game_Run(){
	return dxwin_Run();
}
