#define USE_SOURCE
#define WIN_MODE
#include <system.hpp>
#include <d3d9.hpp>

namespace ILib{
	bool isInRect(const Point &pt,const Rect &rc){
		if(pt.x > rc.left && pt.x < rc.right &&
			pt.y > rc.top && pt.y < rc.bottom) return true;
		return false;
	}
}

bool ILib::main(){
	DXWindow win(L"win");
	DXTexture tex;
	Rect to=BOUNDS(256,256,128,128);
	
	win.open(L"",BOUNDS(10,10,640,480));
	tex.open(win,L"BMP\\マーボーm00.bmp");
	while(getProcMsg()){
		win.getKeyState();
		win.beginScene(0xff000000);
		win.draw(tex,BOUNDS(0,0,128,128),to);
		win.endScene();
		if(win.mouse().buttons[0]){
			to.left+=win.mouse().lX;
			to.top+=win.mouse().lY;
		}
		if(win.key(DIK_ESCAPE)==1) break;
	}
	return true;
}