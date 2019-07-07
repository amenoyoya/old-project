#define _WindowsSystem
#include <kiri/win32.h>

int kmain(){
	GWindow win("‘‹1†");
	Bitmap back("back.bmp");
	
	win.style = WS::gamewindow;
	win.main_func = [&back](Window *pWindow){
		static GWindow *win = (GWindow *)pWindow;
		static char
			*str1 = "”wŒi‚ª•t‚­‚ÆA•µˆÍ‹C‚¾‚¯‚Í•ªƒQ[ƒ€‚ç‚µ‚­‚È",
			*str2 = "‚Á‚Ä‚«‚Ü‚µ‚½‚Ë¥¥¥i^^j—]’k‚Å‚·‚ªAADV‚âƒmƒx",
			*str3 = "ƒ‹‚Í‘½­ƒvƒƒOƒ‰ƒ€‚ª‚Ö‚Á‚Û‚±‚Å‚àAŠï—í‚È‚¨Žo",
			*str4 = "‚³‚ñ‚ª‰æ–Ê‚Éo‚é‚¾‚¯‚Å‹–‚³‚ê‚Ü‚·ôi”šÎj";
		
		win->begin_scene();
		win->gdi().draw_bmp(back, 0,0,640,480);
		win->gdi().text_out3D(20, 20,color_rgb(255,255,255),color_rgb(0,50,50),str1);
		win->gdi().text_out3D(20, 50,color_rgb(255,255,255),color_rgb(0,50,50),str2);
		win->gdi().text_out3D(20, 80,color_rgb(255,255,255),color_rgb(0,50,50),str3);
		win->gdi().text_out3D(20,110,color_rgb(255,255,255),color_rgb(0,50,50),str4);
		
		// FPS•\Ž¦
		win->gdi().text_out3D(600,450,color_rgb(255,50,255),color_rgb(0,50,0),
			str_format("%03ld", win->fps()));
	};
	win.open("‚½‚¢‚Æ‚é");
	win.font(25, 600, "‚l‚r –¾’©");
	return win.run();
}
