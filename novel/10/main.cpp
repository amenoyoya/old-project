#define _WindowsSystem
#include "TextEngine.h"
#include <kiri/script.h>

int message(lua_State *L){
	Lua lua(L);
	
	engine_set_message(lua.tonum(1), lua.tostr(2));
	return 0;
}

int kmain(){
	Window win("‘‹1†");
	Lua lua;
	
	lua.regist("message", message);
	
	win.style = WS::gamewindow;
	win.main_func = [&lua](Window *win){
		win->average_fps();
		engine_run();	// ƒGƒ“ƒWƒ“Às
		lua.dofile("default.lua");
	};
	win.open("‚½‚¢‚Æ‚é");
	engine_open(win.gdi());
	return win.run();
}
