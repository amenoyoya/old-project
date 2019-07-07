#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace app{

Void Module_obj::__construct()
{
HX_STACK_FRAME("lime.app.Module","new",0x17f937a4,"lime.app.Module.new","lime/app/Module.hx",15,0x653a538a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Module_obj::~Module_obj() { }

Dynamic Module_obj::__CreateEmpty() { return  new Module_obj; }
hx::ObjectPtr< Module_obj > Module_obj::__new()
{  hx::ObjectPtr< Module_obj > result = new Module_obj();
	result->__construct();
	return result;}

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Module_obj > result = new Module_obj();
	result->__construct();
	return result;}

hx::Object *Module_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Void Module_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Module","init",0xded02f4c,"lime.app.Module.init","lime/app/Module.hx",28,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,init,(void))

Void Module_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadAxisMove",0x43570df8,"lime.app.Module.onGamepadAxisMove","lime/app/Module.hx",31,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onGamepadAxisMove,(void))

Void Module_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonDown",0xdb9e1a9a,"lime.app.Module.onGamepadButtonDown","lime/app/Module.hx",32,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonDown,(void))

Void Module_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadButtonUp",0x0f950a93,"lime.app.Module.onGamepadButtonUp","lime/app/Module.hx",33,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onGamepadButtonUp,(void))

Void Module_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadConnect",0xa4a7b504,"lime.app.Module.onGamepadConnect","lime/app/Module.hx",34,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadConnect,(void))

Void Module_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Module","onGamepadDisconnect",0x987e1782,"lime.app.Module.onGamepadDisconnect","lime/app/Module.hx",35,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onGamepadDisconnect,(void))

Void Module_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyDown",0x83d25486,"lime.app.Module.onKeyDown","lime/app/Module.hx",43,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onKeyDown,(void))

Void Module_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Module","onKeyUp",0x3060b17f,"lime.app.Module.onKeyUp","lime/app/Module.hx",51,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onKeyUp,(void))

Void Module_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseDown",0xff09df4c,"lime.app.Module.onMouseDown","lime/app/Module.hx",60,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseDown,(void))

Void Module_obj::onMouseMove( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseMove",0x04fcc9fb,"lime.app.Module.onMouseMove","lime/app/Module.hx",69,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseMove,(void))

Void Module_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Module","onMouseUp",0xa7fddec5,"lime.app.Module.onMouseUp","lime/app/Module.hx",78,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onMouseUp,(void))

Void Module_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Module","onMouseWheel",0x15885a71,"lime.app.Module.onMouseWheel","lime/app/Module.hx",86,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onMouseWheel,(void))

Void Module_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextLost",0xd88ecae2,"lime.app.Module.onRenderContextLost","lime/app/Module.hx",92,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onRenderContextLost,(void))

Void Module_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Module","onRenderContextRestored",0x4a587554,"lime.app.Module.onRenderContextRestored","lime/app/Module.hx",99,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,onRenderContextRestored,(void))

Void Module_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Module","onTouchEnd",0xb20c62d7,"lime.app.Module.onTouchEnd","lime/app/Module.hx",108,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onTouchEnd,(void))

Void Module_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Module","onTouchMove",0x1e14a095,"lime.app.Module.onTouchMove","lime/app/Module.hx",117,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onTouchMove,(void))

Void Module_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Module","onTouchStart",0xab9d8a5e,"lime.app.Module.onTouchStart","lime/app/Module.hx",126,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Module_obj,onTouchStart,(void))

Void Module_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowActivate",0xa3ae477e,"lime.app.Module.onWindowActivate","lime/app/Module.hx",132,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowActivate,(void))

Void Module_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowClose",0x4c406f0d,"lime.app.Module.onWindowClose","lime/app/Module.hx",138,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowClose,(void))

Void Module_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowDeactivate",0x1fbe50bf,"lime.app.Module.onWindowDeactivate","lime/app/Module.hx",144,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowDeactivate,(void))

Void Module_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusIn",0xf8e4dc72,"lime.app.Module.onWindowFocusIn","lime/app/Module.hx",150,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowFocusIn,(void))

Void Module_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFocusOut",0xcf609b61,"lime.app.Module.onWindowFocusOut","lime/app/Module.hx",156,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowFocusOut,(void))

Void Module_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowFullscreen",0xdd712ec6,"lime.app.Module.onWindowFullscreen","lime/app/Module.hx",159,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowFullscreen,(void))

Void Module_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMinimize",0xdf7b6ae9,"lime.app.Module.onWindowMinimize","lime/app/Module.hx",160,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowMinimize,(void))

Void Module_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Module","onWindowMove",0x01388d5c,"lime.app.Module.onWindowMove","lime/app/Module.hx",168,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onWindowMove,(void))

Void Module_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Module","onWindowResize",0x664a6cff,"lime.app.Module.onWindowResize","lime/app/Module.hx",176,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Module_obj,onWindowResize,(void))

Void Module_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("lime.app.Module","onWindowRestore",0x2211fde3,"lime.app.Module.onWindowRestore","lime/app/Module.hx",179,0x653a538a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Module_obj,onWindowRestore,(void))

Void Module_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Module","render",0xc490e692,"lime.app.Module.render","lime/app/Module.hx",186,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,render,(void))

Void Module_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Module","update",0x466d0145,"lime.app.Module.update","lime/app/Module.hx",193,0x653a538a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,update,(void))


Module_obj::Module_obj()
{
}

Dynamic Module_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Module_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("onGamepadAxisMove"),
	HX_CSTRING("onGamepadButtonDown"),
	HX_CSTRING("onGamepadButtonUp"),
	HX_CSTRING("onGamepadConnect"),
	HX_CSTRING("onGamepadDisconnect"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowFullscreen"),
	HX_CSTRING("onWindowMinimize"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("onWindowRestore"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Module_obj::__mClass,"__mClass");
};

#endif

Class Module_obj::__mClass;

void Module_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Module"), hx::TCanCast< Module_obj> ,sStaticFields,sMemberFields,
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

void Module_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
