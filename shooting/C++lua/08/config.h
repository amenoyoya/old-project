#pragma once

#define _UseLuabind
#include <eve/script.h>
#include <eve/gui.h>

// �R���t�B�O��Lua�X�N���v�g�ōs��
Lua gLua;

/* ---------- �L�[�R���t�B�O ---------- */
string key_LoadConfig(){
	luaB_Module(gLua)[
	luaB_Def("di_GetKey", &di_GetKey)
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

// �Q�[���ݒ�
string game_LoadConfig(){
	string err;
	
	luaB_Open(gLua);
	if("" != (err = key_LoadConfig())) return err;
	return "";
}
