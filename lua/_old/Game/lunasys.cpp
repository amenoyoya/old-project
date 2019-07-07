#include <lunasys/dxlib.h>

bool runscript(_rfcSTR dir){
	File::currentdir(dir);
	
	if(!File::isfile("main.lua")){
		msgbox("["+File::name(dir)+"]にmain.luaがありません",
			"lunasys::error", MB_OK|MB_ICONWARNING);
		return false;
	}else{
		if(!lua_engine_.dofile("main.lua")){
			msgbox(lua_engine_.tostr(-1),
				"lunasys::error", MB_OK|MB_ICONWARNING);
			return false;
		}
	}
	return true;
}

int _WinMain(){
	tolua_lunasys_core_open(lua_engine_);
	tolua_lunasys_win32_open(lua_engine_);
	tolua_lunasys_dxlib_open(lua_engine_);
	
	if(File::isdir(File::moduledir()+"\\lib")){
		vector<string> files;
		
		File::enumeration((vector_string*)&files,
			File::moduledir()+"\\lib", 3);
		for(auto it=files.begin(); it!=files.end(); ++it){
			if(File::extension(*it) == ".lua"){
				if(!lua_engine_.dofile(*it)){
					msgbox(lua_engine_.tostr(-1),
						"lunasys::error", MB_OK|MB_ICONWARNING);
				}
			}
		}
	}
	
	if(__argc > 1 && File::isdir(__argv[1])){
		if(!runscript(__argv[1])) return 1;
	}else if(File::isdir(File::moduledir()+"\\data")){
		if(!runscript(File::moduledir()+"\\data")) return 1;
	}else{
		string dir = getopendir("フォルダを選択してください");
		if(dir != "" && !runscript(dir)) return 1;
	}
	return 0;
}
