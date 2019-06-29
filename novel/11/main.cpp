#define _WindowsSystem
#include "command.h"

int kmain(){
	Window win("��1��");
	
	win.style = WS::gamewindow;
	win.main_func = [](Window *win){
		win->average_fps();
		engine_run();	// �G���W�����s
		task_delay();	// �x���^�X�N
	};
	win.open("�����Ƃ�");
	window2center(win);
	engine_open(win.gdi());
	engine_regist("delay", delay);
	engine_set(read_file("_scenario.txt"));
	return win.run();
}
