#include <#window.h>
#include <engine/Engine1.h>

slib::engine1::TextEngine engine;

__proc(WndProc){
	switch(msg){
	case WM_CREATE:
		engine.Init(hWnd,"default.txt");
		break;
	case WM_KEYDOWN:
		if(wprm==VK_ESCAPE) PostQuitMessage(0);
		else if(wprm==VK_SPACE||wprm==VK_RETURN){
			if(engine.flag_cursor_blink) engine.Com_CursorBlink_End();
			if(engine.flag_page) engine.Com_PageProc_End();
		}
		else if(wprm==VK_CONTROL) engine.Com_FastRead();
		break;
	case WM_KEYUP:
		if(wprm==VK_CONTROL) engine.Com_FastRead_End();
		break;
	case WM_LBUTTONUP:
		if(engine.flag_cursor_blink) engine.Com_CursorBlink_End();
		if(engine.flag_page) engine.Com_PageProc_End();
		break;
	}
	__return(slib::DefWndProc);
}

int wMain(){
	slib::Window win;
	MSG msg;
	win.Create(WndProc);
	win.Show();
	while(true){
		if(PeekMessage(&msg,NULL,0,0,PM_NOREMOVE)){
			if(!GetMessage(&msg,NULL,0,0)) break;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else{
			if(engine.flag_text) engine.Run();
			if(engine.flag_delay) engine.Com_Delay_Task();
			if(engine.flag_page) engine.Com_PageProc_Task();
			if(engine.flag_cursor_blink) engine.Com_CursorBlink_Task();
			engine.Send();
			Sleep(1);
		}
	}
	return msg.wParam;
}