#include "ini.h"
#include "load.h"
#include "graph.h"

int lily_WinMain(){
	DxLibEngine engine;
	
	g_mainFunc = first_ini;
	return engine.run([&engine]()->bool{
		if(engine.key(KEY_INPUT_ESCAPE) == 1) return false;
		if(g_mainFunc) g_mainFunc(engine);
		return true;
	});
}
