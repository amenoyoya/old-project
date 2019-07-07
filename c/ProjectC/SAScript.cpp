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
		����́A�X�N���v�g���O���ł͂Ȃ��A�����ɋL�q����T���v���ł��B;\
		#delay 2000 ;\
		������Ɠ��삵�Ă���ł��傤���H";
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