#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#include <lime/_backend/native/_NativeApplication/KeyEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_MouseEventInfo
#include <lime/_backend/native/_NativeApplication/MouseEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo
#include <lime/_backend/native/_NativeApplication/UpdateEventInfo.h>
#endif
#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#include <lime/_backend/native/_NativeApplication/WindowEventInfo.h>
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
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeApplication_obj::__construct(::lime::app::Application parent)
{
HX_STACK_FRAME("lime._backend.native.NativeApplication","new",0xf81a1e94,"lime._backend.native.NativeApplication.new","lime/_backend/native/NativeApplication.hx",21,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(30)
	this->windowEventInfo = ::lime::_backend::native::_NativeApplication::WindowEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(29)
	this->updateEventInfo = ::lime::_backend::native::_NativeApplication::UpdateEventInfo_obj::__new(null(),null());
	HX_STACK_LINE(28)
	this->touchEventInfo = ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(27)
	this->renderEventInfo = ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__new((int)0,null());
	HX_STACK_LINE(26)
	this->mouseEventInfo = ::lime::_backend::native::_NativeApplication::MouseEventInfo_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(25)
	this->keyEventInfo = ::lime::_backend::native::_NativeApplication::KeyEventInfo_obj::__new(null(),null(),null());
	HX_STACK_LINE(24)
	this->gamepadEventInfo = ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(null(),null(),null(),null(),null());
	HX_STACK_LINE(39)
	this->parent = parent;
	HX_STACK_LINE(41)
	::lime::audio::AudioManager_obj::init(null());
}
;
	return null();
}

//NativeApplication_obj::~NativeApplication_obj() { }

Dynamic NativeApplication_obj::__CreateEmpty() { return  new NativeApplication_obj; }
hx::ObjectPtr< NativeApplication_obj > NativeApplication_obj::__new(::lime::app::Application parent)
{  hx::ObjectPtr< NativeApplication_obj > result = new NativeApplication_obj();
	result->__construct(parent);
	return result;}

Dynamic NativeApplication_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeApplication_obj > result = new NativeApplication_obj();
	result->__construct(inArgs[0]);
	return result;}

Void NativeApplication_obj::create( Dynamic config){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","create",0xd50cf148,"lime._backend.native.NativeApplication.create","lime/_backend/native/NativeApplication.hx",46,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(48)
		this->parent->config = config;
		HX_STACK_LINE(50)
		Dynamic _g = ::lime::_backend::native::NativeApplication_obj::lime_application_create(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->handle = _g;
		HX_STACK_LINE(52)
		if (((config != null()))){
			HX_STACK_LINE(54)
			::lime::ui::Window window = ::lime::ui::Window_obj::__new(config);		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(55)
			::lime::graphics::Renderer renderer = ::lime::graphics::Renderer_obj::__new(window);		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(56)
			this->parent->addWindow(window);
			HX_STACK_LINE(57)
			this->parent->addRenderer(renderer);
			HX_STACK_LINE(58)
			this->parent->init(renderer->context);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeApplication_obj,create,(void))

int NativeApplication_obj::exec( ){
	HX_STACK_FRAME("lime._backend.native.NativeApplication","exec",0x18dc12dd,"lime._backend.native.NativeApplication.exec","lime/_backend/native/NativeApplication.hx",65,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::lime::_backend::native::NativeApplication_obj::lime_gamepad_event_manager_register(this->handleGamepadEvent_dyn(),this->gamepadEventInfo);
	HX_STACK_LINE(68)
	::lime::_backend::native::NativeApplication_obj::lime_key_event_manager_register(this->handleKeyEvent_dyn(),this->keyEventInfo);
	HX_STACK_LINE(69)
	::lime::_backend::native::NativeApplication_obj::lime_mouse_event_manager_register(this->handleMouseEvent_dyn(),this->mouseEventInfo);
	HX_STACK_LINE(70)
	::lime::_backend::native::NativeApplication_obj::lime_render_event_manager_register(this->handleRenderEvent_dyn(),this->renderEventInfo);
	HX_STACK_LINE(71)
	::lime::_backend::native::NativeApplication_obj::lime_touch_event_manager_register(this->handleTouchEvent_dyn(),this->touchEventInfo);
	HX_STACK_LINE(72)
	::lime::_backend::native::NativeApplication_obj::lime_update_event_manager_register(this->handleUpdateEvent_dyn(),this->updateEventInfo);
	HX_STACK_LINE(73)
	::lime::_backend::native::NativeApplication_obj::lime_window_event_manager_register(this->handleWindowEvent_dyn(),this->windowEventInfo);
	HX_STACK_LINE(100)
	return ::lime::_backend::native::NativeApplication_obj::lime_application_exec(this->handle);
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,exec,return )

Void NativeApplication_obj::handleGamepadEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleGamepadEvent",0x54f9e7cd,"lime._backend.native.NativeApplication.handleGamepadEvent","lime/_backend/native/NativeApplication.hx",113,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		if (((this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >() != null()))){
			HX_STACK_LINE(115)
			int _g = this->gamepadEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadAxisMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadAxisMove->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(119)
						::lime::ui::Gamepad _g1 = ::lime::ui::Gamepad_obj::devices->get(this->gamepadEventInfo->id);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(_g1,this->gamepadEventInfo->axis,this->gamepadEventInfo->value).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadAxisMove->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(123)
						::lime::ui::Gamepad _g1 = ::lime::ui::Gamepad_obj::devices->get(this->gamepadEventInfo->id);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(_g1,this->gamepadEventInfo->button).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonDown->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(127)
						::lime::ui::Gamepad _g2 = ::lime::ui::Gamepad_obj::devices->get(this->gamepadEventInfo->id);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(_g2,this->gamepadEventInfo->button).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadButtonUp->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(131)
					::lime::ui::Gamepad gamepad = ::lime::ui::Gamepad_obj::__new(this->gamepadEventInfo->id);		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(132)
					::lime::ui::Gamepad_obj::devices->set(this->gamepadEventInfo->id,gamepad);
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadConnect->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadConnect->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(gamepad).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadConnect->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(137)
					::lime::ui::Gamepad gamepad = ::lime::ui::Gamepad_obj::devices->get(this->gamepadEventInfo->id);		HX_STACK_VAR(gamepad,"gamepad");
					HX_STACK_LINE(138)
					if (((gamepad != null()))){
						HX_STACK_LINE(138)
						gamepad->connected = false;
					}
					HX_STACK_LINE(139)
					::lime::ui::Gamepad_obj::devices->remove(this->gamepadEventInfo->id);
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadDisconnect->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadDisconnect->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(gamepad).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onGamepadDisconnect->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleGamepadEvent,(void))

Void NativeApplication_obj::handleKeyEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleKeyEvent",0xe8484c0f,"lime._backend.native.NativeApplication.handleKeyEvent","lime/_backend/native/NativeApplication.hx",151,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		if (((this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >() != null()))){
			HX_STACK_LINE(153)
			int _g = this->keyEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->keyEventInfo->keyCode,this->keyEventInfo->modifier).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyDown->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->keyEventInfo->keyCode,this->keyEventInfo->modifier).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onKeyUp->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleKeyEvent,(void))

Void NativeApplication_obj::handleMouseEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleMouseEvent",0xe26e46c9,"lime._backend.native.NativeApplication.handleMouseEvent","lime/_backend/native/NativeApplication.hx",172,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		if (((this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >() != null()))){
			HX_STACK_LINE(174)
			int _g = this->mouseEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(174)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseDown->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseDown->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->mouseEventInfo->x,this->mouseEventInfo->y,this->mouseEventInfo->button).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseDown->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseUp->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseUp->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->mouseEventInfo->x,this->mouseEventInfo->y,this->mouseEventInfo->button).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseUp->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseMove->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->mouseEventInfo->x,this->mouseEventInfo->y,this->mouseEventInfo->button).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseMove->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseWheel->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseWheel->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->mouseEventInfo->x,this->mouseEventInfo->y).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onMouseWheel->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleMouseEvent,(void))

Void NativeApplication_obj::handleRenderEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleRenderEvent",0xf3931b50,"lime._backend.native.NativeApplication.handleRenderEvent","lime/_backend/native/NativeApplication.hx",203,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		if (((this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >() != null()))){
			HX_STACK_LINE(205)
			int _g = this->renderEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRender->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRender->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRender->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
					HX_STACK_LINE(210)
					this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->flip();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(214)
					this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context = null();
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextLost->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextLost->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)().Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextLost->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(222)
					::lime::graphics::GLRenderContext _g1 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(222)
					::lime::graphics::RenderContext _g11 = ::lime::graphics::RenderContext_obj::OPENGL(_g1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(222)
					this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context = _g11;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextRestored->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextRestored->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->onRenderContextRestored->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleRenderEvent,(void))

Void NativeApplication_obj::handleTouchEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleTouchEvent",0xbe3236ef,"lime._backend.native.NativeApplication.handleTouchEvent","lime/_backend/native/NativeApplication.hx",236,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		if (((this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >() != null()))){
			HX_STACK_LINE(238)
			int _g = this->touchEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchStart->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchStart->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->touchEventInfo->x,this->touchEventInfo->y,this->touchEventInfo->id).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchStart->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchEnd->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchEnd->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->touchEventInfo->x,this->touchEventInfo->y,this->touchEventInfo->id).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchEnd->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchMove->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchMove->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)(this->touchEventInfo->x,this->touchEventInfo->y,this->touchEventInfo->id).Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onTouchMove->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleTouchEvent,(void))

Void NativeApplication_obj::handleUpdateEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleUpdateEvent",0x0d7a57bd,"lime._backend.native.NativeApplication.handleUpdateEvent","lime/app/Event.hx",50,0xbda45bec)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		Dynamic listeners = this->parent->onUpdate->listeners;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(53)
		Array< bool > repeat = this->parent->onUpdate->repeat;		HX_STACK_VAR(repeat,"repeat");
		HX_STACK_LINE(54)
		int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(55)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((i < length))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(59)
			listeners->__GetItem(i)(this->updateEventInfo->deltaTime).Cast< Void >();
			HX_STACK_LINE(61)
			if ((!(repeat->__get(i)))){
				HX_STACK_LINE(63)
				this->parent->onUpdate->remove(listeners->__GetItem(i));
				HX_STACK_LINE(64)
				(length)--;
			}
			else{
				HX_STACK_LINE(68)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleUpdateEvent,(void))

Void NativeApplication_obj::handleWindowEvent( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","handleWindowEvent",0x18b48476,"lime._backend.native.NativeApplication.handleWindowEvent","lime/_backend/native/NativeApplication.hx",270,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		if (((this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >() != null()))){
			HX_STACK_LINE(272)
			int _g = this->windowEventInfo->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(272)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowActivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowActivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)().Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowActivate->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowClose->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowClose->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)().Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowClose->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowDeactivate->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowDeactivate->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)().Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowDeactivate->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusIn->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusIn->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)().Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusIn->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(52)
					Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusOut->listeners;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(53)
					Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusOut->repeat;		HX_STACK_VAR(repeat,"repeat");
					HX_STACK_LINE(54)
					int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(55)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(57)
					while((true)){
						HX_STACK_LINE(57)
						if ((!(((i < length))))){
							HX_STACK_LINE(57)
							break;
						}
						HX_STACK_LINE(59)
						listeners->__GetItem(i)().Cast< Void >();
						HX_STACK_LINE(61)
						if ((!(repeat->__get(i)))){
							HX_STACK_LINE(63)
							this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowFocusOut->remove(listeners->__GetItem(i));
							HX_STACK_LINE(64)
							(length)--;
						}
						else{
							HX_STACK_LINE(68)
							(i)++;
						}
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(296)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__minimized = true;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMinimize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMinimize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)().Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMinimize->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(301)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__x = this->windowEventInfo->x;
					HX_STACK_LINE(302)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__y = this->windowEventInfo->y;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMove->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMove->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(this->windowEventInfo->x,this->windowEventInfo->y).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowMove->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(307)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__width = this->windowEventInfo->width;
					HX_STACK_LINE(308)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__height = this->windowEventInfo->height;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowResize->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowResize->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)(this->windowEventInfo->width,this->windowEventInfo->height).Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowResize->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(313)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__fullscreen = false;
					HX_STACK_LINE(314)
					this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__minimized = false;
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(52)
						Dynamic listeners = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowRestore->listeners;		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(53)
						Array< bool > repeat = this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowRestore->repeat;		HX_STACK_VAR(repeat,"repeat");
						HX_STACK_LINE(54)
						int length = listeners->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(55)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(57)
						while((true)){
							HX_STACK_LINE(57)
							if ((!(((i < length))))){
								HX_STACK_LINE(57)
								break;
							}
							HX_STACK_LINE(59)
							listeners->__GetItem(i)().Cast< Void >();
							HX_STACK_LINE(61)
							if ((!(repeat->__get(i)))){
								HX_STACK_LINE(63)
								this->parent->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->onWindowRestore->remove(listeners->__GetItem(i));
								HX_STACK_LINE(64)
								(length)--;
							}
							else{
								HX_STACK_LINE(68)
								(i)++;
							}
						}
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,handleWindowEvent,(void))

Void NativeApplication_obj::__cleanup( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeApplication","__cleanup",0x39614a38,"lime._backend.native.NativeApplication.__cleanup","lime/_backend/native/NativeApplication.hx",326,0xb13849fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		::lime::audio::AudioManager_obj::shutdown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeApplication_obj,__cleanup,(void))

Dynamic NativeApplication_obj::lime_application_create;

Dynamic NativeApplication_obj::lime_application_exec;

Dynamic NativeApplication_obj::lime_application_init;

Dynamic NativeApplication_obj::lime_application_update;

Dynamic NativeApplication_obj::lime_application_quit;

Dynamic NativeApplication_obj::lime_application_get_ticks;

Dynamic NativeApplication_obj::lime_gamepad_event_manager_register;

Dynamic NativeApplication_obj::lime_key_event_manager_register;

Dynamic NativeApplication_obj::lime_mouse_event_manager_register;

Dynamic NativeApplication_obj::lime_render_event_manager_register;

Dynamic NativeApplication_obj::lime_touch_event_manager_register;

Dynamic NativeApplication_obj::lime_update_event_manager_register;

Dynamic NativeApplication_obj::lime_window_event_manager_register;


NativeApplication_obj::NativeApplication_obj()
{
}

void NativeApplication_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeApplication);
	HX_MARK_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_MARK_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_MARK_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_MARK_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_MARK_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_MARK_MEMBER_NAME(updateEventInfo,"updateEventInfo");
	HX_MARK_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeApplication_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepadEventInfo,"gamepadEventInfo");
	HX_VISIT_MEMBER_NAME(keyEventInfo,"keyEventInfo");
	HX_VISIT_MEMBER_NAME(mouseEventInfo,"mouseEventInfo");
	HX_VISIT_MEMBER_NAME(renderEventInfo,"renderEventInfo");
	HX_VISIT_MEMBER_NAME(touchEventInfo,"touchEventInfo");
	HX_VISIT_MEMBER_NAME(updateEventInfo,"updateEventInfo");
	HX_VISIT_MEMBER_NAME(windowEventInfo,"windowEventInfo");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeApplication_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__cleanup") ) { return __cleanup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { return keyEventInfo; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { return mouseEventInfo; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { return touchEventInfo; }
		if (HX_FIELD_EQ(inName,"handleKeyEvent") ) { return handleKeyEvent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { return renderEventInfo; }
		if (HX_FIELD_EQ(inName,"updateEventInfo") ) { return updateEventInfo; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { return windowEventInfo; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { return gamepadEventInfo; }
		if (HX_FIELD_EQ(inName,"handleMouseEvent") ) { return handleMouseEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleTouchEvent") ) { return handleTouchEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleRenderEvent") ) { return handleRenderEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleUpdateEvent") ) { return handleUpdateEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"handleWindowEvent") ) { return handleWindowEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleGamepadEvent") ) { return handleGamepadEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { return lime_application_exec; }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { return lime_application_init; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { return lime_application_quit; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { return lime_application_create; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { return lime_application_update; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_application_get_ticks") ) { return lime_application_get_ticks; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { return lime_key_event_manager_register; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { return lime_mouse_event_manager_register; }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { return lime_touch_event_manager_register; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { return lime_render_event_manager_register; }
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { return lime_update_event_manager_register; }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { return lime_window_event_manager_register; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { return lime_gamepad_event_manager_register; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeApplication_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keyEventInfo") ) { keyEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::KeyEventInfo >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseEventInfo") ) { mouseEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::MouseEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEventInfo") ) { touchEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::TouchEventInfo >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderEventInfo") ) { renderEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::RenderEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateEventInfo") ) { updateEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::UpdateEventInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowEventInfo") ) { windowEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::WindowEventInfo >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gamepadEventInfo") ) { gamepadEventInfo=inValue.Cast< ::lime::_backend::native::_NativeApplication::GamepadEventInfo >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_application_exec") ) { lime_application_exec=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_application_init") ) { lime_application_init=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_application_quit") ) { lime_application_quit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_application_create") ) { lime_application_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_application_update") ) { lime_application_update=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_application_get_ticks") ) { lime_application_get_ticks=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_key_event_manager_register") ) { lime_key_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_mouse_event_manager_register") ) { lime_mouse_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_touch_event_manager_register") ) { lime_touch_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_render_event_manager_register") ) { lime_render_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_update_event_manager_register") ) { lime_update_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_window_event_manager_register") ) { lime_window_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gamepad_event_manager_register") ) { lime_gamepad_event_manager_register=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeApplication_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gamepadEventInfo"));
	outFields->push(HX_CSTRING("keyEventInfo"));
	outFields->push(HX_CSTRING("mouseEventInfo"));
	outFields->push(HX_CSTRING("renderEventInfo"));
	outFields->push(HX_CSTRING("touchEventInfo"));
	outFields->push(HX_CSTRING("updateEventInfo"));
	outFields->push(HX_CSTRING("windowEventInfo"));
	outFields->push(HX_CSTRING("handle"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_application_create"),
	HX_CSTRING("lime_application_exec"),
	HX_CSTRING("lime_application_init"),
	HX_CSTRING("lime_application_update"),
	HX_CSTRING("lime_application_quit"),
	HX_CSTRING("lime_application_get_ticks"),
	HX_CSTRING("lime_gamepad_event_manager_register"),
	HX_CSTRING("lime_key_event_manager_register"),
	HX_CSTRING("lime_mouse_event_manager_register"),
	HX_CSTRING("lime_render_event_manager_register"),
	HX_CSTRING("lime_touch_event_manager_register"),
	HX_CSTRING("lime_update_event_manager_register"),
	HX_CSTRING("lime_window_event_manager_register"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::GamepadEventInfo*/ ,(int)offsetof(NativeApplication_obj,gamepadEventInfo),HX_CSTRING("gamepadEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::KeyEventInfo*/ ,(int)offsetof(NativeApplication_obj,keyEventInfo),HX_CSTRING("keyEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::MouseEventInfo*/ ,(int)offsetof(NativeApplication_obj,mouseEventInfo),HX_CSTRING("mouseEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::RenderEventInfo*/ ,(int)offsetof(NativeApplication_obj,renderEventInfo),HX_CSTRING("renderEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::TouchEventInfo*/ ,(int)offsetof(NativeApplication_obj,touchEventInfo),HX_CSTRING("touchEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::UpdateEventInfo*/ ,(int)offsetof(NativeApplication_obj,updateEventInfo),HX_CSTRING("updateEventInfo")},
	{hx::fsObject /*::lime::_backend::native::_NativeApplication::WindowEventInfo*/ ,(int)offsetof(NativeApplication_obj,windowEventInfo),HX_CSTRING("windowEventInfo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeApplication_obj,handle),HX_CSTRING("handle")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(NativeApplication_obj,parent),HX_CSTRING("parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gamepadEventInfo"),
	HX_CSTRING("keyEventInfo"),
	HX_CSTRING("mouseEventInfo"),
	HX_CSTRING("renderEventInfo"),
	HX_CSTRING("touchEventInfo"),
	HX_CSTRING("updateEventInfo"),
	HX_CSTRING("windowEventInfo"),
	HX_CSTRING("handle"),
	HX_CSTRING("parent"),
	HX_CSTRING("create"),
	HX_CSTRING("exec"),
	HX_CSTRING("handleGamepadEvent"),
	HX_CSTRING("handleKeyEvent"),
	HX_CSTRING("handleMouseEvent"),
	HX_CSTRING("handleRenderEvent"),
	HX_CSTRING("handleTouchEvent"),
	HX_CSTRING("handleUpdateEvent"),
	HX_CSTRING("handleWindowEvent"),
	HX_CSTRING("__cleanup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_application_get_ticks,"lime_application_get_ticks");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
	HX_MARK_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_create,"lime_application_create");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_exec,"lime_application_exec");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_init,"lime_application_init");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_update,"lime_application_update");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_quit,"lime_application_quit");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_application_get_ticks,"lime_application_get_ticks");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_gamepad_event_manager_register,"lime_gamepad_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_key_event_manager_register,"lime_key_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_mouse_event_manager_register,"lime_mouse_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_render_event_manager_register,"lime_render_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_touch_event_manager_register,"lime_touch_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_update_event_manager_register,"lime_update_event_manager_register");
	HX_VISIT_MEMBER_NAME(NativeApplication_obj::lime_window_event_manager_register,"lime_window_event_manager_register");
};

#endif

Class NativeApplication_obj::__mClass;

void NativeApplication_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native.NativeApplication"), hx::TCanCast< NativeApplication_obj> ,sStaticFields,sMemberFields,
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

void NativeApplication_obj::__boot()
{
	lime_application_create= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_create"),(int)1,null());
	lime_application_exec= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_exec"),(int)1,null());
	lime_application_init= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_init"),(int)1,null());
	lime_application_update= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_update"),(int)1,null());
	lime_application_quit= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_quit"),(int)1,null());
	lime_application_get_ticks= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_application_get_ticks"),(int)0,null());
	lime_gamepad_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gamepad_event_manager_register"),(int)2,null());
	lime_key_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_key_event_manager_register"),(int)2,null());
	lime_mouse_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_event_manager_register"),(int)2,null());
	lime_render_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_render_event_manager_register"),(int)2,null());
	lime_touch_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_touch_event_manager_register"),(int)2,null());
	lime_update_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_update_event_manager_register"),(int)2,null());
	lime_window_event_manager_register= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_window_event_manager_register"),(int)2,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
