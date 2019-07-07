#include <eve.luabind.h>
#include <eve.luabind.func.h>
#include "SystemE.Sprite.h"

Lua lua;

inline lobj_t csv2table(_lpcSTR file){
	return csv_ToTable<lua>(file);
}

inline bool opendx(_lpcSTR title, int w, int h){
	dxwin_GetHandle().SetIcon("EVE_ICON");
	return dxwin_Open(title, w, h);
}

inline bool rundx(ulong_t fps){
	return dxwin_Run(fps);
}

inline void msgbox(_lpcSTR str, _lpcSTR title){
	MsgBox(str, title);
}

int _WinMain(){
	string target;
	
	lb_Open(lua);
	/* äÓñ{ÉÇÉWÉÖÅ[Éãìoò^ */
	lb_Module(lua)[
	lb_Def("csv2table", &csv2table),
	lb_Def("opendx", &opendx),
	lb_Def("rundx", &rundx),
	lb_Def("msgbox", &msgbox),
	lb_Def("modir", &dir_GetModule),
	lb_Def("dxRGB", &d3d_RGB),
	lb_Def("dxRGBA", &d3d_RGBA),
	lb_Def("key", &di_GetKey),
	lb_Def("jpadlx", &di_GetJPadLX),
	lb_Def("jpadly", &di_GetJPadLY),
	lb_Def("jpad", &di_GetJPadButton)
	];
	/* Spiritsìoò^ */
	RegistSpirits(lua);
	
	lua.dofile("ini.lua");
	target = lua.callstr("target_data");
	dir_SetCurrent(~dir_GetParent(~path_GetFull(~target)));
	if(!lua.dofile(~file_GetName(~target))){
		MsgBox(~lua.tostr(-1), "SystemE Error");
	}
	return 0;
}
