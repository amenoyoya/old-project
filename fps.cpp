#include <lily/dxlib.h>

lily_ICON(icon/gear.ico)

int lily_WinMain(){
	DxLibEngine dx("FPS", 640, 480, true, 100);
	
	return dx.run([](DxLibEngine &dx)->bool{
		DrawFormatString(0, 0, GetColor(255,255,255),
			"%.1fFPS", dx.fps());
		DrawFormatString(0, 20, GetColor(255,255,255),
			"%dms", dx.time());
		return true;
	});
}
