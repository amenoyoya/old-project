#include <figit33/lua.h>

__main(){
	ii_Lua lua;
	
	if(!lua.doFile("test.lua")){
		ii_utf8_print(lua.lastError());
		return system("pause");
	}
	return 0;
}
