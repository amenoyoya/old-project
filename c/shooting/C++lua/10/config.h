#pragma once

#define _UseLuabind
#include <eve/script.h>
#include <eve/gui.h>

// コンフィグはLuaスクリプトで行う
Lua gLua;

/* ---------- キーコンフィグ ---------- */
string key_LoadConfig(){
	luaB_Module(gLua)[
	luaB_Def("key", &di_GetKey),
	luaB_Def("jpad_lx", &di_GetJPadLX),
	luaB_Def("jpad_ly", &di_GetJPadLY),
	luaB_Def("jpad_btn", &di_GetJPadButton)
	];
	if(!gLua.dofile("keyconf.lua")) return gLua.tostr(-1);
	return "";
}

#define _DefineKeyConfig(type) char key_##type(){\
	try{\
		return luaB_Call<char>(gLua, _STR(key_##type));\
	}catch(_rfcLERR){\
		return 0;\
	}\
	return 0;\
}\

_DefineKeyConfig(Left)
_DefineKeyConfig(Up)
_DefineKeyConfig(Right)
_DefineKeyConfig(Down)
_DefineKeyConfig(Shot)
_DefineKeyConfig(Bom)
_DefineKeyConfig(Slow)
_DefineKeyConfig(Start)
_DefineKeyConfig(Change)
/* ------------------------------------ */

// ゲーム設定
string game_LoadConfig(){
	string err;
	
	luaB_Open(gLua);
	if("" != (err = key_LoadConfig())) return err;
	return "";
}
