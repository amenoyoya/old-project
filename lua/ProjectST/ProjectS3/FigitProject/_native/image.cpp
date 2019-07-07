#include <figit/core.h>
#define _UseSource
#include <figit/irrSDL.h>

using namespace figit;

__main(){
	sdl::init();
	auto win = sdl::Object::newWindow(sdl::Color(50, 0, 100));
	win->open("direct3d", -1, -1, 800, 600, sdl::Window::DIRECT3D9);
	auto img = sdl::Object::newTexture("014.png");
	if(img->failed()){
		msgbox(sdl::getLastError());
		sdl::quit();
		return 0;
	}
	float alpha = 255;
	while(sdl::pollEvent()){
		printf("%d\r", win->fps()); // non sleep 2800fps, sleep: 460fps
		sdl::getAllKeyStates();
		if(sdl::getKey(sdl::KEY_LALT) > 0 || sdl::getKey(sdl::KEY_RALT) > 0){
			if(sdl::getKey(sdl::KEY_F4) == 1) sdl::pushQuitEvent();
		}
		win->beginScene();
		sdl::setLighting(false);
		sdl::setMaterialType(sdl::MT_TRANSPARENT_VERTEX_ALPHA|sdl::MT_TRANSPARENT_ALPHA_CHANNEL);
		img->setColors(sdl::Color(255,255,255,(int)alpha))->draw(100, 100);
		sdl::drawBox(5, 5, 50, 50, 0xffff0000, false);
		sdl::drawOval(100, 100, 30, 50, 0x88f0000f, false);
		sdl::drawCircle(200, 200, 100, 0x32f000ff, true);
		win->endScene();
		//alpha -= 0.1f;
		sleep(1);
	}
	sdl::quit();
	return 0;
}
