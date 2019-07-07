#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
namespace lime{
namespace graphics{

Void ConsoleRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","new",0x37aa2dde,"lime.graphics.ConsoleRenderContext.new","lime/graphics/ConsoleRenderContext.hx",74,0x16233b72)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ConsoleRenderContext_obj::~ConsoleRenderContext_obj() { }

Dynamic ConsoleRenderContext_obj::__CreateEmpty() { return  new ConsoleRenderContext_obj; }
hx::ObjectPtr< ConsoleRenderContext_obj > ConsoleRenderContext_obj::__new()
{  hx::ObjectPtr< ConsoleRenderContext_obj > result = new ConsoleRenderContext_obj();
	result->__construct();
	return result;}

Dynamic ConsoleRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleRenderContext_obj > result = new ConsoleRenderContext_obj();
	result->__construct();
	return result;}

Void ConsoleRenderContext_obj::clear( ){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clear",0xc822aa8b,"lime.graphics.ConsoleRenderContext.clear","lime/graphics/ConsoleRenderContext.hx",81,0x16233b72)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleRenderContext_obj,clear,(void))

Void ConsoleRenderContext_obj::clearColor( Float r,Float g,Float b,Float a){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearColor",0x991a1ed8,"lime.graphics.ConsoleRenderContext.clearColor","lime/graphics/ConsoleRenderContext.hx",82,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(a,"a")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ConsoleRenderContext_obj,clearColor,(void))

Void ConsoleRenderContext_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearDepth",0x25e79e78,"lime.graphics.ConsoleRenderContext.clearDepth","lime/graphics/ConsoleRenderContext.hx",83,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,clearDepth,(void))

Void ConsoleRenderContext_obj::clearStencil( int stencil){
{
		HX_STACK_FRAME("lime.graphics.ConsoleRenderContext","clearStencil",0x3b9f72b1,"lime.graphics.ConsoleRenderContext.clearStencil","lime/graphics/ConsoleRenderContext.hx",84,0x16233b72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stencil,"stencil")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleRenderContext_obj,clearStencil,(void))


ConsoleRenderContext_obj::ConsoleRenderContext_obj()
{
}

Dynamic ConsoleRenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("clearColor"),
	HX_CSTRING("clearDepth"),
	HX_CSTRING("clearStencil"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleRenderContext_obj::__mClass,"__mClass");
};

#endif

Class ConsoleRenderContext_obj::__mClass;

void ConsoleRenderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.ConsoleRenderContext"), hx::TCanCast< ConsoleRenderContext_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ConsoleRenderContext_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
