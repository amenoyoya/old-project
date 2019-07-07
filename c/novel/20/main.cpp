#define _WindowsSystem
#include "command.h"

int kmain(){
	Window win("窓1号");
	Layer fps_layer;	// FPS表示レイヤー
	
	win.style = WS::gamewindow;
	win.open("たいとる");
	window2center(win);
	engine_open(win.gdi());
	fps_layer.open(g_text_engine, 80, 20);
	
	engine_regist("message", message);
	engine_regist("delay", delay);
	engine_regist("page", page);
	
	// スクリプト実行
	engine_dofile("_scenario.lua");
	while(Window::run(120)){
		get_key_states();
		
		fps_layer.clear(0, 0, -1, -1, color_rgb(255,255,255));
		fps_layer.text_out3D(0, 0, color_rgb(150,100,0), color_rgb(50,50,50),
			str_format("FPS: %03ld", win.fps()));
		fps_layer.flip(550, 450);
		
		task_command();	// スクリプト実行タスク
		task_message();	// メッセージタスク
		task_delay();	// 遅延タスク
	}
	return 0;
}
