#include <luna_gui.h>

inline float getFloat(HWND hwnd){
	stringx str = getWindowText(hwnd);
	return str == ""? 0: stringTo<float>(str);
}

int _WinMain(){
	GWindow win("BitWindow::dlg");
	Edit edit[3];
	Button button;
	RECT rc[4] = {{10,10,100,25}, {150,10,100,25}, {130,50,100,25}, {120,100,70,30}};
	
	win.style = WS_GAMEWINDOW;
	win.create("ビットレート計算",50,50,300,200);
	
	button.create("計算", win, 100);
	setFont(button, win.font());
	
	for(int i=2; i>=0; --i){
		edit[i].create("", win, 0);
		setFont(edit[i], win.font());
	}
	
	win.eventFunc = [&win, &edit, &button, &rc]()->bool{
		static stringx result;
		
		if(getCommandID() == 100){
			float kbps, size, len;
			
			len = getFloat(edit[0])*60 + getFloat(edit[1]);
			size = getFloat(edit[2])*1000*1000*8/1024;
			kbps = size / len;
			result = stringxFormat("ビットレート：%.1f kbps", kbps);
		}
		
		_Event(WM_MAIN){
			win.beginScene();
			
			for(int i=0; i<3; ++i) edit[i].draw(win.gdi(), rc[i].left, rc[i].top,
				rc[i].right, rc[i].bottom);
			button.draw(win.gdi(), rc[3].left, rc[3].top, rc[3].right, rc[3].bottom);
			
			win.gdi().textOut(120,10,"分");
			win.gdi().textOut(260,10,"秒");
			win.gdi().textOut(10,50,"目標サイズ");
			win.gdi().textOut(240,50,"MB");
			win.gdi().textOut(10,150,result);
		}
		return true;
	};
	return win.run();
}
