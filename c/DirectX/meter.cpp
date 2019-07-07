#include <el_sys.win.hpp>
#include <el_d3d.hpp>

#define WD 400

int main(){
	int hp =200, hp_max = 200;
	DxWindow win;
	HDC hdc = NULL;
	
	Window::changeStyle(WS_VISIBLE|WS_GAMEWINDOW);
	if(!win.open("dxwin","DxLib",50,50,640,480)) return 1;
	while(dxProcessMessage(win) && !win.key()[DIK_ESCAPE]){
		hdc = win.getDC();
		drawBox(hdc,100,100,100+WD,120,0xff00ffff,false);
		drawBox(hdc,100,100,100+WD*hp/hp_max,120,0xff00ffff,true);
		win.releaseDC(hdc);
		
		if(hp > 0) --hp;
		else if(hp == 0 && win.key()[DIK_SPACE]==1) hp = hp_max;
	}
	return 0;
}
