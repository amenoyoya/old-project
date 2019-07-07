#include "lib.gin.h"
#include "char.h"
#include "enemy.h"
#include "field.h"

struct App: public GameApp{
	CharObject		charobj;
	EnemyObject		enemyobj;
	FieldObject		fieldobj;
	
	App(): GameApp() {
		registobj(&charobj);
		registobj(&enemyobj);
		registobj(&fieldobj);
	}
}app;
