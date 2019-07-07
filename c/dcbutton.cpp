#define __WindowMode__
#include "#parts.h"

__declareDCButton(saishouka,MinMap,slib::DefWndMap)
__declareDCButton(end,DCMap,MinMap)
__defineBringEventMap(BMap,DCMap)

__beginWndEventMap(Map)
__event(PAINT){
	RECT rc;
	slib::PaintDC dc(hWnd);
	slib::Bitmap bmp(dc,"caption_bar001.bmp");
	GetClientRect(hWnd,&rc);
	bmp.StretchDraw(0,0,rc.right,30);
	saishouka.Init();
	saishouka.Draw(dc,9980,"-",rc.right-50,5,20,20);
	end.Init();
	end.Draw(dc,4416,"Å~",rc.right-25,5,20,20);
}
__event(COMMAND){
	if(COMMAND_ID==4416) PostQuitMessage(0);
	if(COMMAND_ID==9980) ShowWindow(hWnd,SW_MINIMIZE);
}
__event(LBUTTONDOWN){
	RECT rc;
	GetClientRect(hWnd,&rc);
	rc.bottom=30;
	if(slib::IsInRect(MOUSE_X,MOUSE_Y,rc)){
		if(!slib::IsInRect(MOUSE_X,MOUSE_Y,end.GetRect())){
			if(!slib::IsInRect(MOUSE_X,MOUSE_Y,saishouka.GetRect()))
				slib::StartBringWindow(hWnd,MOUSE_X,MOUSE_Y);
		}
	}
}
__event(LBUTTONUP){
	slib::EndBringWindow(hWnd,MOUSE_X,MOUSE_Y);
}
__endWndEventMap(BMap)

__appMain(){
	slib::Window win;
	win.exStyle=WS_EX_CLIENTEDGE;
	win.style=WS_POPUP|WS_VISIBLE;
	win.Create(Map);
	return slib::MsgLoop();
}