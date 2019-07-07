#include <#window.h>
#include <engine/Engine0.h>

slib::Layer back;

__proc(WndProc){
	switch(msg){
	case WM_CREATE:
		back.Create(hWnd,640,480);
		break;
	}
	__return(DefWndProc);
}

inline int wMain(){
	slib::Window win;
	slib::engine0::TextEngine engine;
	MSG msg;
	char* mes="Hello World!!;\
		#delay 1000 ;\
		これは、スクリプトを外部ではなく、内部に記述するサンプルです。;\
		#delay 2000 ;\
		きちんと動作しているでしょうか？";
	engine.Init(&back,mes,false);
	win.Create(WndProc);
	win.Show();
	HDC hdc=GetDC(win.hWnd);
	while(true){
		if(PeekMessage(&msg,NULL,0,0,PM_NOREMOVE)){
			if(!GetMessage(&msg,NULL,0,0)) break;
			DispatchMessage(&msg);
			TranslateMessage(&msg);
		}else{
			if(engine.flag_delay) engine.Com_Delay_Task();
			else engine.Run();
			back.Flip(hdc,0,0,640,480);
			Sleep(1);
		}
	}
	return 0;
}