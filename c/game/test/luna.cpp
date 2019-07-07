#include <lib.luna.h>

int _WinMain(){
	DxImage back, sd1, sd2;
	NovelText novel;
	int z0 = 0, z1 = 1, z2 = 2;
	uchar_t alpha = 0;
	
	dxlib_title = "ゲームテスト♪";
	opengame();
	
	back.open("luna.jpg");
	sd1.open("luna-sd.png"), sd2.open("luna-sd.png");
	
	novel.setfont("メイリオ");
	novel.settextbox("WindowBase.png", 20, 230, 600, 200, 3, 3);
	novel.settextarea(70, 280, 500, 100);
	NovelScripter<0>::bind(&novel);
	while(procgame() && !dxlib_key[KEY_INPUT_ESCAPE]){
		_LayerProc(z0, back.draw(0, 0, false));
		_LayerProc(z2,
			sd1.drawex(-40, 0, 1, 1, 0, 255, 0, 0, true, true));
		_LayerProc(z1,
			sd1.drawex(200, 0, 1, 1, 0, 255, 0, 0, true, false));
		_LayerProc(5, novel.draw(alpha));
		
		// FPS表示
		_LayerProc(9,
			drawgamestr(0, 0, format("FPS: %03d", getfps()),
				GetColor(255, 0, 0));
		);
		
		if(dxlib_key[KEY_INPUT_L] == 1) swapval(z1, z2);
		if(dxlib_key[KEY_INPUT_F] == 1) z0 = 3;
		if(dxlib_key[KEY_INPUT_B] == 1) z0 = 0;
		if(dxlib_key[KEY_INPUT_T] == 1){
			alpha = 0;
			novel.clear();
			addgameactor([&alpha, &novel]()->bool{
				if(alpha < 255){
					alpha += 5;
					return false;
				}
				novel.settext("Hello, world!;3秒停止します;"
					"`delay(3000)`どうでしょう？#;"
					"改行したいときは、\\;を記述します");
				return true;
			});
		}
		Sleep(1);
	}
	closegame();
	return 0;
}
