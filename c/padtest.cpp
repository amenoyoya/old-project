#include <lily/dxlib.h>

lily_ICON(icon/gear.ico)

int lily_WinMain(){
	DxLibEngine dx;
	
	return dx.run([](DxLibEngine &dx)->bool{
		static int padkey[20];
		
		dx.getHitPadState(padkey, 20);
		for(int i=0; i<20; ++i){
			if(padkey[i]){
				DrawString(50, 50, toString(i).c_str(),
					GetColor(255, 255, 255));
			}
		}
		return true;
	});
}
