#include "lib.gin.h"
#include "shot.h"
#include "field.h"

struct App: public GameApp{
	void dxinit(){
		title = "���_�^�`�V���b�g���������Ă݂�`";
	}
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&shotenemyobj);
		registobj(&fieldobj);
	}
}app;
