#pragma once

#include <eve/ui.h>

Lua			lua;
lobj_t		gametable;
DxWindow	&win = dxwin_GetHandle();

#define _GameTable(type, key) (lb_Cast<type>(gametable[#key]))
#define _GameEvent(st) if(_GameTable(int, state) == st)

bool game_Open(){
	lb_Open(lua);
	// ゲーム設定ファイルロード
	if(!lua.dofile("script/ini.lua")){
		MsgBox(~lua.tostr(-1));
		return false;
	}
	gametable = lb_Globals(lua)["gametable"];
	win.SetIcon("EVE_ICON");
	return dxwin_Open("龍神録",
		_GameTable(int, screenwidth), _GameTable(int, screenheight));
}

inline bool game_Run(){
	return dxwin_Run(60);
}
