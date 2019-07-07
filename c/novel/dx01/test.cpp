#define _WindowsSystem
#include <kiri/d3d9.h>

int kmain(){
	DxWindow win("窓1号");
	DxSprite back;
	DxString str[4], fps;
	_lpcSTR text[4] = {
		"背景が付くと、雰囲気だけは随分ゲームらしくな",
		"ってきましたね…（^^）余談ですが、ADVやノベ",
		"ルは多少プログラムがへっぽこでも、奇麗なお姉",
		"さんが画面に出るだけで許されます♪（爆笑）"
	};
	
	win.open("たいとる");
	window2center(win);
	
	win.create_sprite(&back, "back.jpg");
	back.scale(640.0f/back.width(), 480.0f/back.height());
	
	win.create_string(&fps);
	fps.font(25, 400);
	for(int i=0; i<4; ++i){
		win.create_string(&str[i]);
		str[i].regist(text[i]);
		str[i].font(40, 800, "メイリオ");
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
