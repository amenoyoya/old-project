#define _WindowsSystem
#include <kiri/d3d9.h>

int kmain(){
	DxWindow win("��1��");
	DxSprite back;
	DxString str[4], fps;
	_lpcSTR text[4] = {
		"�w�i���t���ƁA���͋C�����͐����Q�[���炵����",
		"���Ă��܂����ˁc�i^^�j�]�k�ł����AADV��m�x",
		"���͑����v���O�������ւ��ۂ��ł��A���Ȃ��o",
		"���񂪉�ʂɏo�邾���ŋ�����܂���i���΁j"
	};
	
	win.open("�����Ƃ�");
	window2center(win);
	
	win.create_sprite(&back, "back.jpg");
	back.scale(640.0f/back.width(), 480.0f/back.height());
	
	win.create_string(&fps);
	fps.font(25, 400);
	for(int i=0; i<4; ++i){
		win.create_string(&str[i]);
		str[i].regist(text[i]);
		str[i].font(40, 800, "���C���I");
	}
	
	while(Window::run(60)){
		win.begin_scene();
		back.draw();
		for(int i=0; i<4; ++i){
			str[i].draw3D(20, 260+str[i].p_char(0)->height()*i,
				d3d_rgb(100,200,200));
		}
		
		fps.regist(str_format("FPS: %03ld", win.fps()));
		fps.draw3D(550, 450, d3d_rgb(255,0,0));
	};
	return 0;
}
