#include <figit2/SDL.h>

using namespace figit;

struct Sprite{
	s32 x, y;
	float scale;
	sdl::Texture *handle;
	
	Sprite(): x(0), y(0), scale(1.0f) {}
	
	bool draw(){
		if(handle) return handle->draw(x, y, handle->width()*scale, handle->height()*scale);
		return false;
	}
};

/* FPS管理クラス */
class FPSManager{
	u32 m_fps, m_cnt;
	Timer m_keeptimer, m_timer;
public:
	FPSManager(): m_fps(0), m_cnt(0) {
		start();
	}
	
	/** Timerスタート **/
	void start(){
		m_keeptimer.start();
		m_timer.start();
	}
	
	/** FPSを調整=>trueが返ったら描画処理を行う **/
	bool averaged(s32 fps){
		/* FPS一定化 */
		if(fps > 0){ // FPSが0以下ならFPS調整は行わない
			if(!m_keeptimer.check(1000/fps)) return false;
			m_keeptimer.start();
		}
		
		/* FPS取得 */
		++m_cnt; // 呼ばれるたびにフレーム数をカウントしていく
		// 前回のチェック時刻から1秒（＝1000ミリ秒）経ったか？
		if(m_timer.check(1000)){
			// 1秒間のカウント数＝FPS
			m_fps = m_cnt;
			m_cnt = 0; //カウンタをゼロクリア
			m_timer.start();	//次のチェックのために現在時刻を保存
		}
		return true;
	}
	
	/** FPS値取得 **/
	const u32 &get() const{return m_fps;}
};

// drawText
sdl::Font *font = NULL;
sdl::Texture *tex = NULL;

bool drawText(s32 x, s32 y, const string &text, const sdl::Color &color=sdl::Color(255,255,255)){
	if(!tex) tex = sdl::newTexture(font->createSurface(text), true);
	else tex->open(font->createSurface(text), true);
	return tex->setColor(color) && tex->draw(x, y);
}


__WinMain(){
	auto win = sdl::newWindow(sdl::Color(0,0,100));
	FPSManager fpsMan;
	Sprite imgs[1000];
	
	mt_srand();
	sdl::init();
	win->open("HEAVY", -1, -1, 800, 600);
	font = sdl::newFont(sdl::Font::getFromSystem("msgothic"), 16);
	if(font->failed()) msgbox(sdl::getLastError());
	font->setStyle(sdl::FONT_BOLD);
	for(s32 i = 0; i < 1000; ++i){
		imgs[i].handle = sdl::newTexture(sdl::loadImage("icon000.png"), true);
		if(imgs[i].handle->failed()){
			msgbox(str::tostr(i)+": "+sdl::getLastError());
			sdl::quit();
			return 0;
		}
		imgs[i].x = i, imgs[i].y = i;
		imgs[i].scale = 2.0f;
	}
	fpsMan.start();
	while(sdl::pollEvent()){
		if(fpsMan.averaged(0)){
			sdl::getAllKeyStates();
			if(sdl::getKey(sdl::KEY_F) == 1) win->setWindowMode(false);
			else if(sdl::getKey(sdl::KEY_W) == 1) win->setWindowMode(true);
			
			win->setCurrent();
			sdl::clearScreen();
			for(s32 i = 0; i < 1000; ++i){
				imgs[i].x += mt_rand(-2, 2), imgs[i].y += mt_rand(-2, 2);
				imgs[i].draw();
			}
			drawText(0, 0, str::tostr(fpsMan.get()), sdl::Color(255,0,0));
			win->swap();
		}
	}
	sdl::quit();
	return 0;
}
