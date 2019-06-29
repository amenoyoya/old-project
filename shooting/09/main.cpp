#include "lib.gin.h"
#include "char.h"
#include "field.h"

struct App: public GameApp{
	CharObject		charobj;
	FieldObject		fieldobj;
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&fieldobj);
	}
}app;
