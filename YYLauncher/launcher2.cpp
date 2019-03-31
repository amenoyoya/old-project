/*[begin res]
100 ICON DISCARDABLE "icon/lemon_00.ico"
[end res]*/

#define __WindowMode__
#include "#windowsx.h"

_DefineBringWndMap(BringMap,slib::DefWndMap);

_DeclareMap(WndMap){
	static slib::Menu<POPUPMENU> menu;
	static Vector<String> path;
	static Vector<String> name;
	static int n=-1;
	static slib::File file;
	static slib::Icon icon;
	_Event(CREATE){
		int i=0;
		String buf;
		menu.Add(9999,"èIóπ");
		icon.hIcon=LoadIcon(__app::GetInstance(),MAKEINTRESOURCE(100));
		if(!file.Open("config2.txt")){
			file.Open("config2.txt","w");
			file.Open("config2.txt");
		}
		buf=file.Load();
		while(buf[i]!=EOF){
			++n;
			path.push_back("");
			name.push_back("");
			while(buf[i]!='/'){
				name[n].push_back(buf[i]);
				i++;
			}++i;
			while(buf[i]!='\n'){
				path[n].push_back(buf[i]);
				i++;
			}++i;
			menu.Add(100+2*n,name[n]);
		}
	}
	_Event(PAINT){
		PAINTSTRUCT ps;
		HDC hdc=BeginPaint(hWnd,&ps);
		icon.Draw(hdc,0,0,50,50);
		EndPaint(hWnd,&ps);
	}
	_Event(RBUTTONDOWN){
		POINT pt;
		pt.x=MOUSE_X;
		pt.y=MOUSE_Y;
		slib::PopupMenu(pt,hWnd,menu);
	}
	_Event(DROPFILES){
		int i=0;
		++n;
		path.push_back("");
		name.push_back("");
		path[n]=slib::GetDropFiles(DROP_ID,1);
		i=path[n].size();
		while(path[n][i]!='\\') --i;
		name[n]=path[n].substr(i+1,path[n].size());
		menu.Add(100+2*n,name[n]);
		file.Open("config2.txt","a");
		file.Print(name[n]+"/"+path[n]+'\n');
		file.Close();
	}
	_Event(LBUTTONDOWN){
		slib::BeginBringWindow(hWnd,MOUSE_X,MOUSE_Y);
	}
	_Event(LBUTTONUP){
		slib::EndBringWindow();
	}
	_Event(COMMAND){
		if(COMMAND_ID==9999){
			RECT rc;
			GetWindowRect(hWnd,&rc);
			slib::WriteIniInt("launcher2","x",rc.left,__path("launcher2.ini"));
			slib::WriteIniInt("launcher2","y",rc.top,__path("launcher2.ini"));
			PostQuitMessage(0);
		}
		for(int x=0;x<n+1;++x){
			if(COMMAND_ID==100+2*x) if(!slib::Launch(path[x]))
				slib::MsgBox("Cannot launch "+name[x]);
		}
	}
	_ReturnMap(BringMap);
}

inline int __appMain(){
	slib::TWindow win;
	win.icon=LoadIcon(__app::GetInstance(),MAKEINTRESOURCE(100));
	win.exStyle=WS_EX_ACCEPTFILES|WS_EX_TOOLWINDOW;
	win.style=WS_POPUP;
	win.key=RGB(0,0,0);
	win.bgColor=(int)GetStockObject(BLACK_BRUSH);
	win.Create(WndMap,"ÇÁÇÒÇøÇ·Å`",NULL,LWA_COLORKEY,
		slib::GetIniInt("launcher2","x",50,__path("launcher2.ini")),
		slib::GetIniInt("launcher2","y",50,__path("launcher2.ini")),
		50,50,false);
	win.Show();
	SetWindowPos(win,HWND_TOPMOST,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE);
	return slib::MsgLoop();
}