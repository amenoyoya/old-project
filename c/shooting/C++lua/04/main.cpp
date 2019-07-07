#define _WindowsSystem
#include "game.h"

int app_Main(){
	game_Open();
	game_Load();
	while(game_Run() && !di_GetKey(DIK_ESCAPE)){
		game_Draw();
	}
	return 0;
}
