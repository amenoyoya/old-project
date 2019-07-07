#include "lib.gin.h"
#include "shot.h"
#include "field.h"

struct App: public GameApp{
	void dxinit(){
		title = "龍神録～ショットを撃たせてみる～";
	}
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&shotenemyobj);
		registobj(&fieldobj);
	}
}app;
