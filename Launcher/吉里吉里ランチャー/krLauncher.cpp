#include <sayo/win32.h>

using namespace sayo;

Menu g_menu(Menu::Popup);

bool isDrag = false;
POINT dragPos;

inline int getIntSetting(_rfcSTR key){
	return getIniInt("‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[", key, 0, getModuleDir()+"\\krLauncher.ini");
}

inline bool setIntSetting(_rfcSTR key, int val){
	return setIniInt("‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[", key, val, getModuleDir()+"\\krLauncher.ini");
}

inline string getStrSetting(_rfcSTR key){
	return getIniStr("‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[", key, "", getModuleDir()+"\\krLauncher.ini");
}

_WndProc(wndproc){
	_Event(RBUTTONDOWN){
		POINT pt;
		
		GetCursorPos(&pt);
		if(10 == g_menu.show(hwnd, pt.x, pt.y)) PostQuitMessage(0);
	}
	
	_Event(LBUTTONDOWN){
		dragPos.x = LOWORD(lp), dragPos.y = HIWORD(lp);
		isDrag = true;
	}
	_Event(LBUTTONUP) isDrag = false;
	
	_Event(DROPFILES){
		vector<string> files;
		
		getDropFiles(files, wp);
		for(size_t i=0; i<files.size(); ++i){
			if(isDir(files[i])){
				string path = getStrSetting("‹g—¢‹g—¢PATH");
				
				if(!shellExec(path, files[i])){
					msgbox("‹g—¢‹g—¢‚ğ‹N“®o—ˆ‚Ü‚¹‚ñ‚Å‚µ‚½\n"
						"[path] = "+path+"\n[target] = "+files[i],
						"‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[ƒGƒ‰[", MB_OK|MB_ICONWARNING);
				}
			}
		}
	}
	
	_Event(DESTROY){
		RECT rc;
		
		GetWindowRect(hwnd, &rc);
		setIntSetting("X", rc.left);
		setIntSetting("Y", rc.top);
	}
	return _CallProc(baseWinProc);
}

int _WinMain(){
	TWindow mainWin("krLauncherWindow");
	Bitmap icon(getModuleDir()+"\\krkr.bmp");
	
	if(icon.failed()){
		return msgbox("krkr.bmp‚ª‚ ‚è‚Ü‚¹‚ñI",
			"‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[ƒGƒ‰[", MB_OK|MB_ICONWARNING);
	}
	g_menu.append(0, 10, "I—¹");
	
	mainWin.setProc(wndproc);
	mainWin.setStyle(WS_POPUP);
	mainWin.setExStyle(WS_EX_TOPMOST|WS_EX_ACCEPTFILES|WS_EX_TOOLWINDOW);
	mainWin.setColorKey(RGB(255, 255, 255));
	mainWin.open("‹g—¢‹g—¢ƒ‰ƒ“ƒ`ƒƒ[", getIntSetting("X"), getIntSetting("Y"), 64, 64);
	while(mainWin.proc()){
		mainWin.gdi().drawBmp(icon, 0, 0, 64, 64);
		
		if(isDrag){
			POINT pt;
			
			GetCursorPos(&pt);
			SetWindowPos(mainWin, HWND_TOP, pt.x-dragPos.x, pt.y-dragPos.y,
				0, 0, SWP_NOSIZE);
		}
	}
	return 0;
}
