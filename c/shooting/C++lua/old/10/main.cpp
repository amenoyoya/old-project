#include "engine.h"
#include "engine.cpp"

lily_ICON(../icon/gear02.ico)

int lily_WinMain(){
	DxLibEngine engine("�G�o��", 640, 480, true, 100);
	
	g_mainFunc = first_ini;
	return engine.run([](DxLibEngine &engine)->bool{
		engine.getHitPadState(pad1, 14);
		if(_InputStart(engine, ==1)) return false;
		if(g_mainFunc) g_mainFunc(engine);
		DrawFormatString(0, 0, GetColor(255,255,255),
			"%.1fFPS", engine.fps());
		return true;
	});
}
