#define _WindowsSystem
#include "command.h"

int kmain(){
	Window win("窓1号");
	Layer fps_layer;	// FPS表示レイヤー
	
	win.style = WS::gamewindow;
	win.main_func = [&fps_layer](Window *win){
		win->average_fps();
		
		fps_layer.clear(color_rgb(255,255,255));
		fps_layer.text_out3D(0, 0, color_rgb(150,100,0), color_rgb(50,50,50),
			str_format("FPS: %03ld", win->fps()));
		fps_layer.flip(550, 450);
		
		engine_run();	// エンジン実行
		task_delay();	// 遅延タスク
	};
	win.open("たいとる");
	window2center(win);
	engine_open(win.gdi());
	fps_layer.open(g_text_engine, 80, 20);
	engine_regist("delay", delay);
	engine_set(read_file("_scenario.txt"));
	return win.run();
}
