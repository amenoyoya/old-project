#define __WindowMode__
#include "#windowsx.h"
#include "#com.h"

BEGIN_WINEVENT_MAP(Map)
EVENT(DROPFILES){
	string file;
	string moto=slib::GetDropFiles(DROP_ID,1);
	string desktop=slib::GetFolderPath(CSIDL_DESKTOP);
	int i=moto.size()-1,n=0;
	while(moto[i]!='\\'){
		i--;
		n++;
	}
	file=moto.substr(i,n+2);
	slib::CreateShortcut(moto,desktop+"\\"+file);
}
END_WINEVENT_MAP(slib::DefWndProc)

__Main(){
	slib::Window win(hInstance);
	win.exStyle=WS_EX_ACCEPTFILES;
	win.Create(Map,"ショートカット作成ウィンドウ");
	return slib::MessageLoop();
}