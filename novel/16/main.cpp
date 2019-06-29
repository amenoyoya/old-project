#define _WindowsSystem
#include "command.h"

int kmain(){
	Window win("��1��");
	Layer fps_layer;	// FPS�\�����C���[
	
	win.style = WS::gamewindow;
	win.main_func = [&fps_layer](Window *win){
		get_key_states();
		win->average_fps();
		
		fps_layer.clear(0, 0, -1, -1, color_rgb(255,255,255));
		fps_layer.text_out3D(0, 0, color_rgb(150,100,0), color_rgb(50,50,50),
			str_format("FPS: %03ld", win->fps()));
		fps_layer.flip(550, 450);
		
		task_command();	// �X�N���v�g���s�^�X�N
		task_message();	// ���b�Z�[�W�^�X�N
		task_delay();	// �x���^�X�N
	};
	win.open("�����Ƃ�");
	window2center(win);
	engine_open(win.gdi());
	fps_layer.open(g_text_engine, 80, 20);
	
	engine_regist("message", message);
	engine_regist("delay", delay);
	
	// �X�N���v�g���s
	engine_dofile("_scenario.lua");
	return win.run();
}
