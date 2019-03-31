/*[begin res]
100 ICON DISCARDABLE "icon/lemon_00.ico"
[end res]*/

#define __WindowMode__
#include <#windowsx.h>

HINSTANCE instance=0;

BEGIN_WINEVENT_MAP(WndProc)
static slib::Menu<POPUPMENU> menu;
static POINT pt;
static vector<string> path;
static vector<string> name;
static int n=-1;
static string self;
static slib::File fl;
static int mx=0,my=0;
static bool move=false;
static slib::Icon icon;
EVENT(CREATE){
	int i=0;
	string buf;
	menu.Add(9999,"èIóπ");
	self=slib::GetModuleFolder();
	icon.hIcon=LoadIcon(instance,MAKEINTRESOURCE(100));
	if(!fl.Open(self+"\\config.txt")){
		fl.Open(self+"\\config.txt","w");
		fl.Open(self+"\\config.txt");
	}
	buf=fl.Scan();
	if(buf=="") return 0;
	while(buf[i]!=EOF){
		n++;
		path.push_back("");
		name.push_back("");
		while(buf[i]!='/'){
			name[n].push_back(buf[i]);
			i++;
		}i++;
		while(buf[i]!='\n'){
			path[n].push_back(buf[i]);
			i++;
		}i++;
		menu.Add(100+2*n,name[n]);
	}
}
EVENT(PAINT){
	slib::Layer<PAINTDC> hdc(hWnd);
	icon.Draw(hdc,0,0,50,50);
}
EVENT(RBUTTONDOWN){
	pt.x=MOUSE_X;
	pt.y=MOUSE_Y;
	slib::PopupMenu(pt,hWnd,menu);
}
EVENT(DROPFILES){
	int i=0;
	n++;
	path.push_back("");
	name.push_back("");
	path[n]=slib::GetDropFiles(DROP_ID,1);
	i=path[n].size();
	while(path[n][i]!='\\') i--;
	name[n]=path[n].substr(i+1,path[n].size());
	menu.Add(100+2*n,name[n]);
	fl.Open(self+"\\config.txt","a");
	fl.Print(name[n]+"/"+path[n]+"\n");
}
EVENT(LBUTTONDOWN){
	mx=MOUSE_X;
	my=MOUSE_Y;
	move=true;
	SetCapture(hWnd);
}
EVENT(LBUTTONUP){
	move=false;
	ReleaseCapture();
}
EVENT(MOUSEMOVE){
	if(move){
		GetCursorPos(&pt);
		MoveWindow(hWnd,pt.x-mx,pt.y-my,50,50,true);
	}
}
EVENT(COMMAND){
	if(COMMAND_ID==9999) PostQuitMessage(0);
	for(int x=0;x<10;x++){
		if(COMMAND_ID==100+2*x) if(!slib::Launch(path[x]))
			slib::MsgBox("Cannot launch "+name[x]);
	}
}
END_WINEVENT_MAP(slib::DefWndProc)

int wMain(){
	slib::TWindow win(hInst);
	instance=hInst;
	win.icon=LoadIcon(hInst,MAKEINTRESOURCE(100));
	win.exStyle=WS_EX_ACCEPTFILES|WS_EX_TOOLWINDOW;
	win.style=WS_POPUP;
	win.key=RGB(0,0,0);
	win.bgColor=(HBRUSH)GetStockObject(BLACK_BRUSH);
	win.Create(WndProc,"ÇÁÇÒÇøÇ·Å`",NULL,LWA_COLORKEY,50,50,50,50,false);
	win.MoveCenter();
	win.Show();
	SetWindowPos(win,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
	MSG_LOOP();
	return 0;
}