#include <figit2/SDL.h>

using namespace figit;

bool eventProc(sdl::Event *ev){
	if(ev->type == sdl::QUIT){
		if(IDYES == msgbox(_U8("終了しますか？"), _U8("確認"), MB_YESNO|MB_ICONQUESTION)) return false;
	}
	return true;
}

sdl::Font font(sdl::Font::getFromSystem("msgothic"), 16);

bool drawText(s32 x, s32 y, const string &text, const sdl::Color &col){
	if(font.handle()){
		sdl::Texture tex(font.createSurface(text), true);
		return tex.setColor(col) && tex.draw(x, y);
	}
	return false;
}

__main(){
	sdl::init();
	sdl::Window win;
	
	win.open();
	
	sdl::Texture img(sdl::loadImage(Path("media/leki.png")), true);
	//sdl::Texture layer(600, 400, sdl::TEXTURE_TARGET);
	/*sdl::Music bgm(Path("media/desire.ogg"));
	
	bgm.volume(5);
	//bgm.play();*/
	
	//sdl::setRenderTarget(&layer);
	//sdl::drawLine(320, 0, 320, 480, sdl::Color(255,0,0));
	//img.draw(0, 0);
	//drawText(400, 200, "Hello", sdl::Color(0,200,255));
	//sdl::setRenderTarget();
	
	while(sdl::pollEvent(eventProc)){
		win.setCurrent();
		sdl::getAllKeyStates();
		sdl::clearScreen();
		//layer.draw(0, 0);
		img.draw(0, 0);
		win.swap();
		sleep(1);
	}
	sdl::quit();
	return 0;
}
