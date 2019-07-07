#include <s3/tolua++.h>
#include <s3/win32.h>
#include "_win32.cpp"

using namespace s3;

/*** enumWindowsラッパー ***/
Lua *g_pLua = NULL;

static bool luaEnumWindowsProc(u32 hwnd){ // s3.win32.enumWindowsHandlerを呼び出す
	if(g_pLua){
		g_pLua->getGlobal("s3"); g_pLua->getField(-1, "win32");
		g_pLua->getField(-1, "enumWindowsHandler");
		if(g_pLua->type(-1) != Lua::T_FUNC){
			g_pLua->setTop(0);
			return false;
		}
		g_pLua->pushNum(hwnd);
		if(!g_pLua->call(1, 1)){
			g_pLua->error(g_pLua->lastError());
			return false;
		}
		bool ret = g_pLua->toBool(-1);
		g_pLua->setTop(0);
		return ret;
	}
	return false;
}

int enumWindows(lua_State *L){
	Lua lua(L);
	
	g_pLua = &lua;
	lua.pushBool(win32::enumWindows(luaEnumWindowsProc));
	return 1;
}


/*** sendKeyAction(vkey, mode) ***/
// tolua++で作ったsendKeyActionはファンクションキーが上手く動作しない
/*int sendVirtualKey(lua_State *L){
	Lua lua(L);
	
	lua.pushBool(win32::sendKeyAction((u8)lua.toInt(1),
		(s8)(lua.type(2) == Lua::T_NUMBER? lua.toInt(2): 0)));
	return 1;
}*/


/*** main ***/
extern "C" __declspec(dllexport) int luaopen_s3_libwin32(lua_State *L){
	Lua lua(L);
	
	tolua_libwin32_open(lua);
	lua.getGlobal("s3"); lua.getField(-1, "win32");
	lua.pushCFunc(enumWindows); lua.setField(-2, "enumWindows");
	lua.setTop(0);
	return 0;
}

extern "C" __declspec(dllexport) void luaclose_s3_libwin32(){
	win32::com_Quit();
}
