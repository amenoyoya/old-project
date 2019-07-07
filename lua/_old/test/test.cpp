#define _UseLuabind
#include <eve/script.h>

struct test_t{
	int x, y;
	string str;
}g_test[10];

Lua lua;

luaB_object GetTest(){
	luaB_object obj = luaB_NewTable(lua);
	
	for(int i=0; i<10; ++i) obj[i] = boost::ref(g_test[i]);
	return obj;
}

int app_Main(){
	luaB_Open(lua);
	luaB_Module(lua)[
	luaB_Class<test_t>("test_t")
		.def(luaB_Constructor<>())
		.def_readwrite("x", &test_t::x)
		.def_readwrite("y", &test_t::y)
		.def_readwrite("str", &test_t::str),
	luaB_Def("GetTest", &GetTest)
	];
	
	if(!lua.dofile("test.lua")){
		puts(~lua.tostr(-1));
	}
	for(int i=0; i<10; ++i){
		printf("%d %d\n", g_test[i].x, g_test[i].y);
	}
	return system("pause");
}
