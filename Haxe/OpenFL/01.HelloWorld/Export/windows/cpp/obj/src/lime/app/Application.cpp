#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
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
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace app{

Void Application_obj::__construct()
{
HX_STACK_FRAME("lime.app.Application","new",0x9354427c,"lime.app.Application.new","lime/app/Application.hx",20,0x8bc55476)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->onUpdate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	if (((::lime::app::Application_obj::current == null()))){
		HX_STACK_LINE(48)
		::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(52)
	Array< ::lime::app::IModule > _g = Array_obj< ::lime::app::IModule >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->modules = _g;
	HX_STACK_LINE(53)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	this->renderers = _g1;
	HX_STACK_LINE(54)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	this->windows = _g2;
	HX_STACK_LINE(55)
	::lime::_backend::native::NativeApplication _g3 = ::lime::_backend::native::NativeApplication_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(55)
	this->backend = _g3;
	HX_STACK_LINE(57)
	this->onUpdate->add(this->update_dyn(),null(),null());
}
;
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Void Application_obj::addModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","addModule",0x673258c9,"lime.app.Application.addModule","lime/app/Application.hx",66,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(68)
		this->modules->push(module);
		HX_STACK_LINE(70)
		if (((bool(this->initialized) && bool((this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >() != null()))))){
			HX_STACK_LINE(72)
			module->init(this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addModule,(void))

Void Application_obj::addRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","addRenderer",0x0a61eaa0,"lime.app.Application.addRenderer","lime/app/Application.hx",84,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(86)
		renderer->onRender->add(this->render_dyn(),null(),null());
		HX_STACK_LINE(87)
		renderer->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
		HX_STACK_LINE(88)
		renderer->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
		HX_STACK_LINE(90)
		this->renderers->push(renderer);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addRenderer,(void))

Void Application_obj::addWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","addWindow",0xf8ebb80d,"lime.app.Application.addWindow","lime/app/Application.hx",100,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(102)
		this->windows->push(window);
		HX_STACK_LINE(104)
		window->onGamepadAxisMove->add(this->onGamepadAxisMove_dyn(),null(),null());
		HX_STACK_LINE(105)
		window->onGamepadButtonDown->add(this->onGamepadButtonDown_dyn(),null(),null());
		HX_STACK_LINE(106)
		window->onGamepadButtonUp->add(this->onGamepadButtonUp_dyn(),null(),null());
		HX_STACK_LINE(107)
		window->onGamepadConnect->add(this->onGamepadConnect_dyn(),null(),null());
		HX_STACK_LINE(108)
		window->onGamepadDisconnect->add(this->onGamepadDisconnect_dyn(),null(),null());
		HX_STACK_LINE(109)
		window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
		HX_STACK_LINE(110)
		window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
		HX_STACK_LINE(111)
		window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
		HX_STACK_LINE(112)
		window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
		HX_STACK_LINE(113)
		window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
		HX_STACK_LINE(114)
		window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
		HX_STACK_LINE(115)
		window->onTouchStart->add(this->onTouchStart_dyn(),null(),null());
		HX_STACK_LINE(116)
		window->onTouchMove->add(this->onTouchMove_dyn(),null(),null());
		HX_STACK_LINE(117)
		window->onTouchEnd->add(this->onTouchEnd_dyn(),null(),null());
		HX_STACK_LINE(118)
		window->onWindowActivate->add(this->onWindowActivate_dyn(),null(),null());
		HX_STACK_LINE(119)
		window->onWindowClose->add(this->onWindowClose_dyn(),null(),null());
		HX_STACK_LINE(120)
		window->onWindowDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
		HX_STACK_LINE(121)
		window->onWindowFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
		HX_STACK_LINE(122)
		window->onWindowFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
		HX_STACK_LINE(123)
		window->onWindowFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
		HX_STACK_LINE(124)
		window->onWindowMinimize->add(this->onWindowMinimize_dyn(),null(),null());
		HX_STACK_LINE(125)
		window->onWindowMove->add(this->onWindowMove_dyn(),null(),null());
		HX_STACK_LINE(126)
		window->onWindowResize->add(this->onWindowResize_dyn(),null(),null());
		HX_STACK_LINE(127)
		window->onWindowRestore->add(this->onWindowRestore_dyn(),null(),null());
		HX_STACK_LINE(129)
		window->create(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,addWindow,(void))

Void Application_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime.app.Application","create",0x35e42e60,"lime.app.Application.create","lime/app/Application.hx",142,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(142)
		this->backend->create(config);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,create,(void))

int Application_obj::exec( ){
	HX_STACK_FRAME("lime.app.Application","exec",0x508159f5,"lime.app.Application.exec","lime/app/Application.hx",153,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	::lime::app::Application_obj::current = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(157)
	return this->backend->exec();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,return )

Void Application_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","init",0x531ea174,"lime.app.Application.init","lime/app/Application.hx",162,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
				HX_STACK_LINE(164)
				++(_g);
				HX_STACK_LINE(166)
				module->init(context);
			}
		}
		HX_STACK_LINE(170)
		this->initialized = true;
	}
return null();
}


Void Application_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadAxisMove",0x507e62d0,"lime.app.Application.onGamepadAxisMove","lime/app/Application.hx",177,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(177)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(177)
		while((true)){
			HX_STACK_LINE(177)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(177)
				break;
			}
			HX_STACK_LINE(177)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(177)
			++(_g);
			HX_STACK_LINE(179)
			module->onGamepadAxisMove(gamepad,axis,value);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonDown",0x00e65572,"lime.app.Application.onGamepadButtonDown","lime/app/Application.hx",188,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(188)
			++(_g);
			HX_STACK_LINE(190)
			module->onGamepadButtonDown(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadButtonUp",0x1cbc5f6b,"lime.app.Application.onGamepadButtonUp","lime/app/Application.hx",199,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(199)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(199)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(199)
			++(_g);
			HX_STACK_LINE(201)
			module->onGamepadButtonUp(gamepad,button);
		}
	}
return null();
}


Void Application_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadConnect",0xf3ecc32c,"lime.app.Application.onGamepadConnect","lime/app/Application.hx",210,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(210)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		while((true)){
			HX_STACK_LINE(210)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(210)
				break;
			}
			HX_STACK_LINE(210)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(210)
			++(_g);
			HX_STACK_LINE(212)
			module->onGamepadConnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("lime.app.Application","onGamepadDisconnect",0xbdc6525a,"lime.app.Application.onGamepadDisconnect","lime/app/Application.hx",221,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(221)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		while((true)){
			HX_STACK_LINE(221)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(221)
				break;
			}
			HX_STACK_LINE(221)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(221)
			++(_g);
			HX_STACK_LINE(223)
			module->onGamepadDisconnect(gamepad);
		}
	}
return null();
}


Void Application_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyDown",0x622d115e,"lime.app.Application.onKeyDown","lime/app/Application.hx",232,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(232)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(232)
			++(_g);
			HX_STACK_LINE(234)
			module->onKeyDown(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("lime.app.Application","onKeyUp",0x55960857,"lime.app.Application.onKeyUp","lime/app/Application.hx",243,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(243)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		while((true)){
			HX_STACK_LINE(243)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(243)
				break;
			}
			HX_STACK_LINE(243)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(243)
			++(_g);
			HX_STACK_LINE(245)
			module->onKeyUp(keyCode,modifier);
		}
	}
return null();
}


Void Application_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseDown",0x372f8224,"lime.app.Application.onMouseDown","lime/app/Application.hx",254,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(254)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(254)
		while((true)){
			HX_STACK_LINE(254)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(254)
				break;
			}
			HX_STACK_LINE(254)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(254)
			++(_g);
			HX_STACK_LINE(256)
			module->onMouseDown(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseMove( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseMove",0x3d226cd3,"lime.app.Application.onMouseMove","lime/app/Application.hx",265,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(265)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(265)
		while((true)){
			HX_STACK_LINE(265)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(265)
				break;
			}
			HX_STACK_LINE(265)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(265)
			++(_g);
			HX_STACK_LINE(267)
			module->onMouseMove(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("lime.app.Application","onMouseUp",0x86589b9d,"lime.app.Application.onMouseUp","lime/app/Application.hx",276,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(276)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(276)
			++(_g);
			HX_STACK_LINE(278)
			module->onMouseUp(x,y,button);
		}
	}
return null();
}


Void Application_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("lime.app.Application","onMouseWheel",0xfe513499,"lime.app.Application.onMouseWheel","lime/app/Application.hx",287,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(287)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(287)
		while((true)){
			HX_STACK_LINE(287)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(287)
				break;
			}
			HX_STACK_LINE(287)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(287)
			++(_g);
			HX_STACK_LINE(289)
			module->onMouseWheel(deltaX,deltaY);
		}
	}
return null();
}


Void Application_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextLost",0xfdd705ba,"lime.app.Application.onRenderContextLost","lime/app/Application.hx",298,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(298)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(298)
		while((true)){
			HX_STACK_LINE(298)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(298)
				break;
			}
			HX_STACK_LINE(298)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(298)
			++(_g);
			HX_STACK_LINE(300)
			module->onRenderContextLost();
		}
	}
return null();
}


Void Application_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","onRenderContextRestored",0x4fd2fc2c,"lime.app.Application.onRenderContextRestored","lime/app/Application.hx",309,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(309)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(309)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(309)
		while((true)){
			HX_STACK_LINE(309)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(309)
				break;
			}
			HX_STACK_LINE(309)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(309)
			++(_g);
			HX_STACK_LINE(311)
			module->onRenderContextRestored(context);
		}
	}
return null();
}


Void Application_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchEnd",0x6316e2ff,"lime.app.Application.onTouchEnd","lime/app/Application.hx",320,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(320)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(320)
			++(_g);
			HX_STACK_LINE(322)
			module->onTouchEnd(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchMove",0x563a436d,"lime.app.Application.onTouchMove","lime/app/Application.hx",331,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(331)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(331)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(331)
		while((true)){
			HX_STACK_LINE(331)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(331)
				break;
			}
			HX_STACK_LINE(331)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(331)
			++(_g);
			HX_STACK_LINE(333)
			module->onTouchMove(x,y,id);
		}
	}
return null();
}


Void Application_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("lime.app.Application","onTouchStart",0x94666486,"lime.app.Application.onTouchStart","lime/app/Application.hx",342,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(342)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(342)
		while((true)){
			HX_STACK_LINE(342)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(342)
				break;
			}
			HX_STACK_LINE(342)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(342)
			++(_g);
			HX_STACK_LINE(344)
			module->onTouchStart(x,y,id);
		}
	}
return null();
}


Void Application_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowActivate",0xf2f355a6,"lime.app.Application.onWindowActivate","lime/app/Application.hx",353,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(353)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(353)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(353)
		while((true)){
			HX_STACK_LINE(353)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(353)
				break;
			}
			HX_STACK_LINE(353)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(353)
			++(_g);
			HX_STACK_LINE(355)
			module->onWindowActivate();
		}
	}
return null();
}


Void Application_obj::onWindowClose( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowClose",0x133677e5,"lime.app.Application.onWindowClose","lime/app/Application.hx",364,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(364)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(364)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(364)
		while((true)){
			HX_STACK_LINE(364)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(364)
				break;
			}
			HX_STACK_LINE(364)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(364)
			++(_g);
			HX_STACK_LINE(366)
			module->onWindowClose();
		}
	}
return null();
}


Void Application_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowDeactivate",0x950138e7,"lime.app.Application.onWindowDeactivate","lime/app/Application.hx",375,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(375)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		while((true)){
			HX_STACK_LINE(375)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(375)
				break;
			}
			HX_STACK_LINE(375)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(375)
			++(_g);
			HX_STACK_LINE(377)
			module->onWindowDeactivate();
		}
	}
return null();
}


Void Application_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusIn",0xf010cb4a,"lime.app.Application.onWindowFocusIn","lime/app/Application.hx",386,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(386)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(386)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(386)
		while((true)){
			HX_STACK_LINE(386)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(386)
				break;
			}
			HX_STACK_LINE(386)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(386)
			++(_g);
			HX_STACK_LINE(388)
			module->onWindowFocusIn();
		}
	}
return null();
}


Void Application_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFocusOut",0x1ea5a989,"lime.app.Application.onWindowFocusOut","lime/app/Application.hx",397,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(397)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(397)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(397)
		while((true)){
			HX_STACK_LINE(397)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(397)
				break;
			}
			HX_STACK_LINE(397)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(397)
			++(_g);
			HX_STACK_LINE(399)
			module->onWindowFocusOut();
		}
	}
return null();
}


Void Application_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowFullscreen",0x52b416ee,"lime.app.Application.onWindowFullscreen","lime/app/Application.hx",408,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(408)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(408)
		while((true)){
			HX_STACK_LINE(408)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(408)
				break;
			}
			HX_STACK_LINE(408)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(408)
			++(_g);
			HX_STACK_LINE(410)
			module->onWindowFullscreen();
		}
	}
return null();
}


Void Application_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMinimize",0x2ec07911,"lime.app.Application.onWindowMinimize","lime/app/Application.hx",419,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(419)
		while((true)){
			HX_STACK_LINE(419)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(419)
				break;
			}
			HX_STACK_LINE(419)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(419)
			++(_g);
			HX_STACK_LINE(421)
			module->onWindowMinimize();
		}
	}
return null();
}


Void Application_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("lime.app.Application","onWindowMove",0xea016784,"lime.app.Application.onWindowMove","lime/app/Application.hx",430,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(430)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(430)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(430)
		while((true)){
			HX_STACK_LINE(430)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(430)
				break;
			}
			HX_STACK_LINE(430)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(430)
			++(_g);
			HX_STACK_LINE(432)
			module->onWindowMove(x,y);
		}
	}
return null();
}


Void Application_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("lime.app.Application","onWindowResize",0xb69c2127,"lime.app.Application.onWindowResize","lime/app/Application.hx",441,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(441)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(441)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(441)
		while((true)){
			HX_STACK_LINE(441)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(441)
				break;
			}
			HX_STACK_LINE(441)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(441)
			++(_g);
			HX_STACK_LINE(443)
			module->onWindowResize(width,height);
		}
	}
return null();
}


Void Application_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("lime.app.Application","onWindowRestore",0x193decbb,"lime.app.Application.onWindowRestore","lime/app/Application.hx",452,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_LINE(452)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(452)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(452)
		while((true)){
			HX_STACK_LINE(452)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(452)
				break;
			}
			HX_STACK_LINE(452)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(452)
			++(_g);
			HX_STACK_LINE(454)
			module->onWindowRestore();
		}
	}
return null();
}


Void Application_obj::removeModule( ::lime::app::IModule module){
{
		HX_STACK_FRAME("lime.app.Application","removeModule",0x6e873a74,"lime.app.Application.removeModule","lime/app/Application.hx",467,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(module,"module")
		HX_STACK_LINE(467)
		this->modules->remove(module);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeModule,(void))

Void Application_obj::removeRenderer( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("lime.app.Application","removeRenderer",0x39f2cd0b,"lime.app.Application.removeRenderer","lime/app/Application.hx",478,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::graphics::Renderer &renderer){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",478,0x8bc55476)
				{
					HX_STACK_LINE(478)
					int _g = __this->renderers->indexOf(renderer,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(478)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(478)
		if (((  (((renderer != null()))) ? bool(_Function_1_1::Block(this,renderer)) : bool(false) ))){
			HX_STACK_LINE(480)
			this->renderers->remove(renderer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeRenderer,(void))

Void Application_obj::removeWindow( ::lime::ui::Window window){
{
		HX_STACK_FRAME("lime.app.Application","removeWindow",0x004099b8,"lime.app.Application.removeWindow","lime/app/Application.hx",493,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::lime::app::Application_obj > __this,::lime::ui::Window &window){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/app/Application.hx",493,0x8bc55476)
				{
					HX_STACK_LINE(493)
					int _g = __this->windows->indexOf(window,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(493)
					return (_g > (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(493)
		if (((  (((window != null()))) ? bool(_Function_1_1::Block(this,window)) : bool(false) ))){
			HX_STACK_LINE(495)
			window->close();
			HX_STACK_LINE(496)
			this->windows->remove(window);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Application_obj,removeWindow,(void))

Void Application_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("lime.app.Application","render",0xbefe32ba,"lime.app.Application.render","lime/app/Application.hx",505,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(505)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(505)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(505)
		while((true)){
			HX_STACK_LINE(505)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(505)
				break;
			}
			HX_STACK_LINE(505)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(505)
			++(_g);
			HX_STACK_LINE(507)
			module->render(context);
		}
	}
return null();
}


Void Application_obj::update( int deltaTime){
{
		HX_STACK_FRAME("lime.app.Application","update",0x40da4d6d,"lime.app.Application.update","lime/app/Application.hx",516,0x8bc55476)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(516)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(516)
		Array< ::lime::app::IModule > _g1 = this->modules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(516)
		while((true)){
			HX_STACK_LINE(516)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(516)
				break;
			}
			HX_STACK_LINE(516)
			::lime::app::IModule module = _g1->__get(_g);		HX_STACK_VAR(module,"module");
			HX_STACK_LINE(516)
			++(_g);
			HX_STACK_LINE(518)
			module->update(deltaTime);
		}
	}
return null();
}


::lime::graphics::Renderer Application_obj::get_renderer( ){
	HX_STACK_FRAME("lime.app.Application","get_renderer",0xa67be3b0,"lime.app.Application.get_renderer","lime/app/Application.hx",534,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(534)
	return this->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_renderer,return )

::lime::ui::Window Application_obj::get_window( ){
	HX_STACK_FRAME("lime.app.Application","get_window",0xc86a4d1d,"lime.app.Application.get_window","lime/app/Application.hx",541,0x8bc55476)
	HX_STACK_THIS(this)
	HX_STACK_LINE(541)
	return this->windows->__get((int)0).StaticCast< ::lime::ui::Window >();
}


HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_window,return )

::lime::app::Application Application_obj::current;


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(modules,"modules");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(renderers,"renderers");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windows,"windows");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(modules,"modules");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(renderers,"renderers");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windows,"windows");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
}

Dynamic Application_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"window") ) { return inCallProp ? get_window() : window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"modules") ) { return modules; }
		if (HX_FIELD_EQ(inName,"windows") ) { return windows; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return inCallProp ? get_renderer() : renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { return renderers; }
		if (HX_FIELD_EQ(inName,"addModule") ) { return addModule_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"get_window") ) { return get_window_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"addRenderer") ) { return addRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		if (HX_FIELD_EQ(inName,"removeModule") ) { return removeModule_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_renderer") ) { return get_renderer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderer") ) { return removeRenderer_dyn(); }
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

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modules") ) { modules=inValue.Cast< Array< ::lime::app::IModule > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windows") ) { windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeApplication >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"renderers") ) { renderers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("modules"));
	outFields->push(HX_CSTRING("onUpdate"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("renderers"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("windows"));
	outFields->push(HX_CSTRING("backend"));
	outFields->push(HX_CSTRING("initialized"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("current"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Application_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*Array< ::lime::app::IModule >*/ ,(int)offsetof(Application_obj,modules),HX_CSTRING("modules")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Application_obj,onUpdate),HX_CSTRING("onUpdate")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Application_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,renderers),HX_CSTRING("renderers")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Application_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Application_obj,windows),HX_CSTRING("windows")},
	{hx::fsObject /*::lime::_backend::native::NativeApplication*/ ,(int)offsetof(Application_obj,backend),HX_CSTRING("backend")},
	{hx::fsBool,(int)offsetof(Application_obj,initialized),HX_CSTRING("initialized")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("modules"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("renderer"),
	HX_CSTRING("renderers"),
	HX_CSTRING("window"),
	HX_CSTRING("windows"),
	HX_CSTRING("backend"),
	HX_CSTRING("initialized"),
	HX_CSTRING("addModule"),
	HX_CSTRING("addRenderer"),
	HX_CSTRING("addWindow"),
	HX_CSTRING("create"),
	HX_CSTRING("exec"),
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
	HX_CSTRING("removeModule"),
	HX_CSTRING("removeRenderer"),
	HX_CSTRING("removeWindow"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("get_renderer"),
	HX_CSTRING("get_window"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::current,"current");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::current,"current");
};

#endif

Class Application_obj::__mClass;

void Application_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.Application"), hx::TCanCast< Application_obj> ,sStaticFields,sMemberFields,
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

void Application_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
