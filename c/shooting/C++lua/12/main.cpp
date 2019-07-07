#define _WindowsSystem
#include "game.h"

int app_Main(){
	DxString fps;
	
	game_Open();
	fps.init(gWin.device());
	while(game_Run() && !di_GetKey(DIK_ESCAPE)){
		_GameEvent(0){
			game_Load();
			game_Init();
			game_state = 100;
		}
		_GameEvent(100){
			game_Draw();
		}
		
		fps.regist(~str_Format("FPS: %03ld", gWin.fps()));
		fps.Draw3D(550, 5, d3d_RGB(200,100,0));
	}
	return 0;
}
