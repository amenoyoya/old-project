#include <s3/exp.h>

using namespace s3;

#define __port __declspec(dllexport)

extern "C"{
	__port void *newFileWriter(const char *filename){
		return new File(Path(filename), "w");
	}
	
	__port void deleteFileWriter(void *obj){
		if(obj) delete (File*)obj;
	}
	
	__port void FileWriter_puts(void *obj, const char *str){
		((File*)obj)->puts(str);
	}
	
	__port const char *File_load(const char *filename){
		static string str;
		return (str = File::load(Path(filename))).c_str();
	}
}

static int loadFile(lua_State *L){
	Lua lua(L);
	
	lua.pushStr(File::load(Path(lua.toStr(1))));
	return 1;
}

extern "C" __port int luaopen_file(lua_State *L){
	Lua lua(L);
	
	lua.regist("LoadFile", loadFile);
	return 0;
}
