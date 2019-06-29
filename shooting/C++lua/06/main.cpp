#define _WindowsSystem
#include "game.h"

int app_Main(){
	game_Open();
	while(game_Run() && !di_GetKey(DIK_ESCAPE)){
		_GameEvent(0){
			game_Load();
			game_state = 100;
		}
		_GameEvent(100){
			game_Draw();
		}
	}
	return 0;
}
