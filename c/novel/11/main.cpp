#define _WindowsSystem
#include "command.h"

int kmain(){
	Window win("窓1号");
	
	win.style = WS::gamewindow;
	win.main_func = [](Window *win){
		win->average_fps();
		engine_run();	// エンジン実行
		task_delay();	// 遅延タスク
	};
	win.open("たいとる");
	window2center(win);
	engine_open(win.gdi());
	engine_regist("delay", delay);
	engine_set(read_file("_scenario.txt"));
	return win.run();
}
