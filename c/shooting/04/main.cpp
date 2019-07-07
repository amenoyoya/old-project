#include "lib.gin.h"
#include "char.h"

struct App: public GameApp{
	CharObject charobj;
	
	App(): GameApp() {
		registobj(&charobj);
	}
}app;
