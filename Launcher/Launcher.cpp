#define __WindowMode__
#include "#tools.h"
#include "#windowsx.h"

POINT g_mousePoint;

bool LoadText(const String &text,slib::StringFolder &data){
	slib::File file;
	if(!file.Open("Launcher.text")) return false;
	while(!file.Eof()){
		String buf=file.GetLine();
		if(buf[0]=='@') data.PushKey(buf.substr(1,buf.size()-1));
		else data.PushData(buf);
	}
	return true;
}

_BeginWndMap(Map)
_Event(ACTIVATE){
	if(IS_ACTIVE){
		slib::Menu<slib::PopupMenu> menu;
		Vector<slib::Menu<slib::PopupMenu>> subMenu;
		slib::StringFolder data;
		if(!LoadText("Launcher.text",data)) PostQuitMessage(0);
		subMenu.resize(data.GetKeySize());
		for(int i=0;i<data.GetKeySize();++i){
			for(int n=0;n<data.GetDataSize(data.GetKey(i));++n){
				subMenu[i].Insert(10*i+n,n,data.GetData(data.GetKey(i),n));
			}
			menu.Insert(subMenu[i],i,data.GetKey(i));
		}
		menu.Insert(4416,data.GetKeySize(),"CANCEL");
		slib::TrackPopupMenu(hWnd,g_mousePoint.x,g_mousePoint.y,menu);
	}
	if(IS_INACTIVE) PostQuitMessage(0);
}
_Event(COMMAND){
	if(COMMAND_ID==4416) PostQuitMessage(0);
}
_EndWndMap(DefWindowProc)

int __appMain(){
	slib::Window window;
	GetCursorPos(&g_mousePoint);
	window.style=0;
	window.Create(Map,"test launcher");
	return slib::MsgLoop();
}