#define _WindowsSystem
#include "TextEngine.h"

int kmain(){
	Window win("‘‹1†");
	TextEngine engine;
	
	win.style = WS::gamewindow;
	win.main_func = [&engine](Window *win){
		win->average_fps();
		engine.run();
	};
	win.open("‚½‚¢‚Æ‚é");
	engine.open(win.gdi(), "default.txt");
	return win.run();
}
