#include <eve.luabind.h>
#include <eve.luabind.func.h>
#include "game.h"

int _WinMain(){
	game_Open();
	while(game_Run() && !di_GetKey(DIK_ESCAPE)){
		_GameEvent(0){
			game_Load();
			game_Init();
			gametable["state"] = 100;
		}
		_GameEvent(100){
			game_Draw();
		}
	}
	return 0;
}
