#include <el_sys.win.hpp>
#include <el_d3d.hpp>

int main(){
	DxWindow win;
	Font font;
	Sprite chara;
	
	if(!win.open("dxw","dxwindow",100,100,640,480)) return 1;
	font.open(32,600);
	chara.loadGraph(win,"Data/haruhi.bmp");
	chara.setPos(50,50);
	while(dxProcessMessage(win) && !win.joy().rgbButtons[4-1]){
		chara.draw();
		chara.move(win.joy().lX/500.0f, win.joy().lY/500.0f);
	}
	return 0;
}
