#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace ui{

Void Window_obj::__construct(Dynamic config)
{
HX_STACK_FRAME("lime.ui.Window","new",0xbff4f5c3,"lime.ui.Window.new","lime/ui/Window.hx",11,0x6ac7286d)
HX_STACK_THIS(this)
HX_STACK_ARG(config,"config")
{
	HX_STACK_LINE(42)
	this->onWindowRestore = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(41)
	this->onWindowResize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(40)
	this->onWindowMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(39)
	this->onWindowMinimize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(38)
	this->onWindowFullscreen = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(37)
	this->onWindowFocusOut = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(36)
	this->onWindowFocusIn = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(35)
	this->onWindowDeactivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(34)
	this->onWindowClose = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(33)
	this->onWindowActivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(32)
	this->onTouchStart = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(31)
	this->onTouchMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(30)
	this->onTouchEnd = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(29)
	this->onMouseWheel = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(28)
	this->onMouseUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(27)
	this->onMouseMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(26)
	this->onMouseDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(25)
	this->onKeyUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(24)
	this->onKeyDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(23)
	this->onGamepadDisconnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(22)
	this->onGamepadConnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(21)
	this->onGamepadButtonUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(20)
	this->onGamepadButtonDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(19)
	this->onGamepadAxisMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(58)
	this->config = config;
	HX_STACK_LINE(60)
	this->__width = (int)0;
	HX_STACK_LINE(61)
	this->__height = (int)0;
	HX_STACK_LINE(62)
	this->__fullscreen = false;
	HX_STACK_LINE(63)
	this->__x = (int)0;
	HX_STACK_LINE(64)
	this->__y = (int)0;
	HX_STACK_LINE(66)
	if (((config != null()))){
		HX_STACK_LINE(70)
		if ((::Reflect_obj::hasField(config,HX_CSTRING("width")))){
			HX_STACK_LINE(70)
			this->__width = config->__Field(HX_CSTRING("width"),true);
		}
		HX_STACK_LINE(71)
		if ((::Reflect_obj::hasField(config,HX_CSTRING("height")))){
			HX_STACK_LINE(71)
			this->__height = config->__Field(HX_CSTRING("height"),true);
		}
		HX_STACK_LINE(72)
		if ((::Reflect_obj::hasField(config,HX_CSTRING("fullscreen")))){
			HX_STACK_LINE(72)
			this->__fullscreen = config->__Field(HX_CSTRING("fullscreen"),true);
		}
	}
	HX_STACK_LINE(76)
	::lime::_backend::native::NativeWindow _g = ::lime::_backend::native::NativeWindow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	this->backend = _g;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(config);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Window_obj::close( ){
{
		HX_STACK_FRAME("lime.ui.Window","close",0x0ea29bdb,"lime.ui.Window.close","lime/ui/Window.hx",83,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->backend->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.ui.Window","create",0x2d638179,"lime.ui.Window.create","lime/ui/Window.hx",88,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(90)
		this->backend->create(application);
		HX_STACK_LINE(92)
		if (((this->currentRenderer != null()))){
			HX_STACK_LINE(94)
			this->currentRenderer->create();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,create,(void))

Void Window_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime.ui.Window","move",0x35c0744e,"lime.ui.Window.move","lime/ui/Window.hx",101,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(103)
		this->backend->move(x,y);
		HX_STACK_LINE(105)
		this->__x = x;
		HX_STACK_LINE(106)
		this->__y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

Void Window_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime.ui.Window","resize",0xb9cf7471,"lime.ui.Window.resize","lime/ui/Window.hx",111,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(113)
		this->backend->resize(width,height);
		HX_STACK_LINE(115)
		this->__width = width;
		HX_STACK_LINE(116)
		this->__height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.ui.Window","setIcon",0x837a3b1e,"lime.ui.Window.setIcon","lime/ui/Window.hx",121,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(123)
		if (((image == null()))){
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(129)
		this->backend->setIcon(image);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setIcon,(void))

bool Window_obj::get_fullscreen( ){
	HX_STACK_FRAME("lime.ui.Window","get_fullscreen",0x19882201,"lime.ui.Window.get_fullscreen","lime/ui/Window.hx",143,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return this->__fullscreen;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_fullscreen",0x39a80a75,"lime.ui.Window.set_fullscreen","lime/ui/Window.hx",148,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	bool _g = this->backend->setFullscreen(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	return this->__fullscreen = _g;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

int Window_obj::get_height( ){
	HX_STACK_FRAME("lime.ui.Window","get_height",0x425314ad,"lime.ui.Window.get_height","lime/ui/Window.hx",157,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return this->__height;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::set_height( int value){
	HX_STACK_FRAME("lime.ui.Window","set_height",0x45d0b321,"lime.ui.Window.set_height","lime/ui/Window.hx",162,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	this->resize(this->__width,value);
	HX_STACK_LINE(165)
	return this->__height;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

bool Window_obj::get_minimized( ){
	HX_STACK_FRAME("lime.ui.Window","get_minimized",0xd866ae80,"lime.ui.Window.get_minimized","lime/ui/Window.hx",172,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	return this->__minimized;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_minimized,return )

bool Window_obj::set_minimized( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_minimized",0x1d6c908c,"lime.ui.Window.set_minimized","lime/ui/Window.hx",177,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	bool _g = this->backend->setMinimized(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(179)
	return this->__minimized = _g;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_minimized,return )

int Window_obj::get_width( ){
	HX_STACK_FRAME("lime.ui.Window","get_width",0x6b63e400,"lime.ui.Window.get_width","lime/ui/Window.hx",186,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	return this->__width;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::set_width( int value){
	HX_STACK_FRAME("lime.ui.Window","set_width",0x4eb4d00c,"lime.ui.Window.set_width","lime/ui/Window.hx",191,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(193)
	this->resize(value,this->__height);
	HX_STACK_LINE(194)
	return this->__width;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::get_x( ){
	HX_STACK_FRAME("lime.ui.Window","get_x",0x57a02972,"lime.ui.Window.get_x","lime/ui/Window.hx",201,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	return this->__x;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::set_x( int value){
	HX_STACK_FRAME("lime.ui.Window","set_x",0x406f1f7e,"lime.ui.Window.set_x","lime/ui/Window.hx",206,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(208)
	this->move(value,this->__y);
	HX_STACK_LINE(209)
	return this->__x;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::get_y( ){
	HX_STACK_FRAME("lime.ui.Window","get_y",0x57a02973,"lime.ui.Window.get_y","lime/ui/Window.hx",216,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return this->__y;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::set_y( int value){
	HX_STACK_FRAME("lime.ui.Window","set_y",0x406f1f7f,"lime.ui.Window.set_y","lime/ui/Window.hx",221,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(223)
	this->move(this->__x,value);
	HX_STACK_LINE(224)
	return this->__y;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_MARK_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_MARK_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_MARK_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_MARK_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_MARK_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_MARK_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_MARK_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_MARK_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_MARK_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_MARK_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_MARK_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_MARK_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_MARK_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_MARK_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_MARK_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_MARK_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__minimized,"__minimized");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_VISIT_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_VISIT_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_VISIT_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_VISIT_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_VISIT_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_VISIT_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_VISIT_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_VISIT_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_VISIT_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_VISIT_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_VISIT_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_VISIT_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_VISIT_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_VISIT_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_VISIT_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_VISIT_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__minimized,"__minimized");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { return get_minimized(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { return __minimized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose; }
		if (HX_FIELD_EQ(inName,"get_minimized") ) { return get_minimized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimized") ) { return set_minimized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize; }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { return currentRenderer; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { return set_minimized(inValue); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { onTouchEnd=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { onTouchMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { __minimized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { onTouchStart=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { onWindowMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { onWindowClose=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { onWindowResize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { currentRenderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { onWindowFocusIn=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { onWindowRestore=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { onGamepadConnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { onWindowActivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { onWindowFocusOut=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { onWindowMinimize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { onGamepadAxisMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { onGamepadButtonUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { onWindowDeactivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { onWindowFullscreen=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { onGamepadButtonDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { onGamepadDisconnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentRenderer"));
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("fullscreen"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("minimized"));
	outFields->push(HX_CSTRING("onGamepadAxisMove"));
	outFields->push(HX_CSTRING("onGamepadButtonDown"));
	outFields->push(HX_CSTRING("onGamepadButtonUp"));
	outFields->push(HX_CSTRING("onGamepadConnect"));
	outFields->push(HX_CSTRING("onGamepadDisconnect"));
	outFields->push(HX_CSTRING("onKeyDown"));
	outFields->push(HX_CSTRING("onKeyUp"));
	outFields->push(HX_CSTRING("onMouseDown"));
	outFields->push(HX_CSTRING("onMouseMove"));
	outFields->push(HX_CSTRING("onMouseUp"));
	outFields->push(HX_CSTRING("onMouseWheel"));
	outFields->push(HX_CSTRING("onTouchEnd"));
	outFields->push(HX_CSTRING("onTouchMove"));
	outFields->push(HX_CSTRING("onTouchStart"));
	outFields->push(HX_CSTRING("onWindowActivate"));
	outFields->push(HX_CSTRING("onWindowClose"));
	outFields->push(HX_CSTRING("onWindowDeactivate"));
	outFields->push(HX_CSTRING("onWindowFocusIn"));
	outFields->push(HX_CSTRING("onWindowFocusOut"));
	outFields->push(HX_CSTRING("onWindowFullscreen"));
	outFields->push(HX_CSTRING("onWindowMinimize"));
	outFields->push(HX_CSTRING("onWindowMove"));
	outFields->push(HX_CSTRING("onWindowResize"));
	outFields->push(HX_CSTRING("onWindowRestore"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("backend"));
	outFields->push(HX_CSTRING("__fullscreen"));
	outFields->push(HX_CSTRING("__height"));
	outFields->push(HX_CSTRING("__minimized"));
	outFields->push(HX_CSTRING("__width"));
	outFields->push(HX_CSTRING("__x"));
	outFields->push(HX_CSTRING("__y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Window_obj,currentRenderer),HX_CSTRING("currentRenderer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadAxisMove),HX_CSTRING("onGamepadAxisMove")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonDown),HX_CSTRING("onGamepadButtonDown")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonUp),HX_CSTRING("onGamepadButtonUp")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadConnect),HX_CSTRING("onGamepadConnect")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadDisconnect),HX_CSTRING("onGamepadDisconnect")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyDown),HX_CSTRING("onKeyDown")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyUp),HX_CSTRING("onKeyUp")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseDown),HX_CSTRING("onMouseDown")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseMove),HX_CSTRING("onMouseMove")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseUp),HX_CSTRING("onMouseUp")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseWheel),HX_CSTRING("onMouseWheel")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchEnd),HX_CSTRING("onTouchEnd")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchMove),HX_CSTRING("onTouchMove")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchStart),HX_CSTRING("onTouchStart")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowActivate),HX_CSTRING("onWindowActivate")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowClose),HX_CSTRING("onWindowClose")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowDeactivate),HX_CSTRING("onWindowDeactivate")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusIn),HX_CSTRING("onWindowFocusIn")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusOut),HX_CSTRING("onWindowFocusOut")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFullscreen),HX_CSTRING("onWindowFullscreen")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMinimize),HX_CSTRING("onWindowMinimize")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMove),HX_CSTRING("onWindowMove")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowResize),HX_CSTRING("onWindowResize")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowRestore),HX_CSTRING("onWindowRestore")},
	{hx::fsObject /*::lime::_backend::native::NativeWindow*/ ,(int)offsetof(Window_obj,backend),HX_CSTRING("backend")},
	{hx::fsBool,(int)offsetof(Window_obj,__fullscreen),HX_CSTRING("__fullscreen")},
	{hx::fsInt,(int)offsetof(Window_obj,__height),HX_CSTRING("__height")},
	{hx::fsBool,(int)offsetof(Window_obj,__minimized),HX_CSTRING("__minimized")},
	{hx::fsInt,(int)offsetof(Window_obj,__width),HX_CSTRING("__width")},
	{hx::fsInt,(int)offsetof(Window_obj,__x),HX_CSTRING("__x")},
	{hx::fsInt,(int)offsetof(Window_obj,__y),HX_CSTRING("__y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentRenderer"),
	HX_CSTRING("config"),
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
	HX_CSTRING("backend"),
	HX_CSTRING("__fullscreen"),
	HX_CSTRING("__height"),
	HX_CSTRING("__minimized"),
	HX_CSTRING("__width"),
	HX_CSTRING("__x"),
	HX_CSTRING("__y"),
	HX_CSTRING("close"),
	HX_CSTRING("create"),
	HX_CSTRING("move"),
	HX_CSTRING("resize"),
	HX_CSTRING("setIcon"),
	HX_CSTRING("get_fullscreen"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_minimized"),
	HX_CSTRING("set_minimized"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
}

} // end namespace lime
} // end namespace ui
