#include <lemo/win32.h>

using namespace lemo;

_WndProc(wndproc){
	static Button button;
	
	_Event(CREATE){
		button.open("push me", hwnd, 100, true);
	}
	_Event(PAINT){
		static GDI gdi;
			
		gdi.beginPaint(hwnd);
		button.draw(gdi, 5, 5, 100, 25);
		gdi.endPaint();
	}
	_Event(COMMAND){
		if(LOWORD(wp) == 100) msgbox("ÉIÉTÉåån");
	}
	return _CallProc(baseWinProc);
}

int _WinMain(){
	Window win("testWin");
	
	win.setProc(wndproc);
	win.open();
	return win.run();
}
