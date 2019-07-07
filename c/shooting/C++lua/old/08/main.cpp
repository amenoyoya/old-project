#include "engine.h"
#include "engine.cpp"

lily_ICON(../icon/gear02.ico)

int lily_WinMain(){
	DxLibEngine engine("キーボード＆パッド入力対応",
		640, 480, true, 100);
	
	g_mainFunc = first_ini;
	return engine.run([](DxLibEngine &engine)->bool{
		engine.getHitPadState(pad1, 14);
		if(engine.key(KEY_INPUT_ESCAPE) == 1) return false;
		if(g_mainFunc) g_mainFunc(engine);
		return true;
	});
}
