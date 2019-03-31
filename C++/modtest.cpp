#include <sltk2/utils.h>
using namespace Sltk;

int foreach(lua_State *L){
	Lua lua(L);
	int N = lua.getInteger(1), func = lua.store();
	for(int i = 0; i < N; ++i){
		lua.getStoredValue(func);
		lua.pushNumber(i);
		lua.call(1, 0);
	}
	return 0;
}

__main(){
	Lua lua;
	
	setSeleneTalkMode(true);
	lua.registerCFunction("foreach", foreach);
	if(!lua.doString(Encoding::toUtf8(loadFile("modtest.sltk")), "modtest.sltk")){
		Console::writeLine(getMessage(&lua));
		return System::execute("pause");
	}
	return 0;
}
