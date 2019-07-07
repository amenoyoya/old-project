#pragma once

#include <eve/ui.h>

struct Spirits: public DxSprite{
	bool open(_lpcSTR file, uint_t colorkey){
		return DxSprite::open(dxwin_GetHandle().device(), file, colorkey);
	}
	bool divopen(_lpcSTR file,  size_t xnum, size_t ynum,
		size_t w, size_t h, uint_t colorkey)
	{
		return DxSprite::DivOpen(dxwin_GetHandle().device(), file,
			xnum, ynum, w, h, colorkey);
	}
	
	bool draw(){
		return DxSprite::draw();
	}
	bool divdraw(size_t id){
		return DxSprite::draw(id);
	}
	void pos(float x, float y){
		DxSprite::SetPos(x, y);
	}
};

inline void RegistSpirits(Lua &lua){
	lb_Module(lua)[
	lb_Class<Spirits>("Spirits").def(lb_Ctor<>())
	.def("open", &Spirits::open)
	.def("divopen", &Spirits::divopen)
	.def("draw", &Spirits::draw)
	.def("divdraw", &Spirits::divdraw)
	.def("pos", &Spirits::pos)
	];
}
