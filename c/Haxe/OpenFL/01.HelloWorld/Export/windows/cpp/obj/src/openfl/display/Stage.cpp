#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl_display_StageQuality
#include <openfl/display/StageQuality.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
namespace openfl{
namespace display{

Void Stage_obj::__construct(int width,int height,Dynamic color)
{
HX_STACK_FRAME("openfl.display.Stage","new",0x908e7106,"openfl.display.Stage.new","openfl/display/Stage.hx",167,0xadca4c2c)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(533)
	this->__mouseY = (int)0;
	HX_STACK_LINE(532)
	this->__mouseX = (int)0;
	HX_STACK_LINE(531)
	this->__mouseOutStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(553)
	super::__construct();
	HX_STACK_LINE(555)
	if (((color == null()))){
		HX_STACK_LINE(557)
		this->__transparent = true;
		HX_STACK_LINE(558)
		this->set_color((int)0);
	}
	else{
		HX_STACK_LINE(562)
		this->set_color(color);
	}
	HX_STACK_LINE(566)
	this->set_name(null());
	HX_STACK_LINE(568)
	this->__displayState = ::openfl::display::StageDisplayState_obj::NORMAL;
	HX_STACK_LINE(569)
	this->__mouseX = (int)0;
	HX_STACK_LINE(570)
	this->__mouseY = (int)0;
	HX_STACK_LINE(572)
	this->stageWidth = width;
	HX_STACK_LINE(573)
	this->stageHeight = height;
	HX_STACK_LINE(575)
	this->stage = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(577)
	this->align = ::openfl::display::StageAlign_obj::TOP_LEFT;
	HX_STACK_LINE(578)
	this->allowsFullScreen = false;
	HX_STACK_LINE(579)
	this->frameRate = (int)60;
	HX_STACK_LINE(580)
	this->quality = ::openfl::display::StageQuality_obj::HIGH;
	HX_STACK_LINE(581)
	this->scaleMode = ::openfl::display::StageScaleMode_obj::NO_SCALE;
	HX_STACK_LINE(582)
	this->stageFocusRect = true;
	HX_STACK_LINE(584)
	this->__clearBeforeRender = true;
	HX_STACK_LINE(585)
	this->__stack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(587)
	Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Stage.hx",587,0xadca4c2c)
			{
				HX_STACK_LINE(587)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(587)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(587)
				this1 = _g;
				HX_STACK_LINE(587)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(587)
	_g1 = _Function_1_1::Block();
	HX_STACK_LINE(587)
	this->stage3Ds = _g1;
	HX_STACK_LINE(588)
	{
		HX_STACK_LINE(588)
		::openfl::display::Stage3D x = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(588)
		this->stage3Ds->push(x);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(int width,int height,Dynamic color)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(width,height,color);
	return result;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

::openfl::geom::Point Stage_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","globalToLocal",0xdbaa7af3,"openfl.display.Stage.globalToLocal","openfl/display/Stage.hx",595,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(595)
	return pos;
}


Void Stage_obj::init( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","init",0xe8cd2baa,"openfl.display.Stage.init","openfl/display/Stage.hx",602,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(602)
		switch( (int)(context->__Index())){
			case (int)0: {
				HX_STACK_LINE(602)
				::lime::graphics::GLRenderContext gl = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(604)
				{
					HX_STACK_LINE(606)
					::openfl::_internal::renderer::opengl::GLRenderer _g = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(this->stageWidth,this->stageHeight,gl,null(),null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(606)
					this->__renderer = _g;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(602)
				::lime::graphics::CanvasRenderContext context1 = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(context1,"context1");
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(610)
					::openfl::_internal::renderer::canvas::CanvasRenderer _g1 = ::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__new(this->stageWidth,this->stageHeight,context1);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(610)
					this->__renderer = _g1;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(602)
				::lime::graphics::DOMRenderContext element = (::lime::graphics::RenderContext(context))->__Param(0);		HX_STACK_VAR(element,"element");
				HX_STACK_LINE(612)
				{
					HX_STACK_LINE(614)
					::openfl::_internal::renderer::dom::DOMRenderer _g2 = ::openfl::_internal::renderer::dom::DOMRenderer_obj::__new(this->stageWidth,this->stageHeight,element);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(614)
					this->__renderer = _g2;
				}
			}
			;break;
			default: {
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,init,(void))

Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","invalidate",0x70397995,"openfl.display.Stage.invalidate","openfl/display/Stage.hx",647,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(647)
		this->__invalidated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

::openfl::geom::Point Stage_obj::localToGlobal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","localToGlobal",0xb7e76def,"openfl.display.Stage.localToGlobal","openfl/display/Stage.hx",654,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(654)
	return pos;
}


Void Stage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadAxisMove",0xc5912eda,"openfl.display.Stage.onGamepadAxisMove","openfl/display/Stage.hx",659,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onGamepadAxisMove,(void))

Void Stage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonDown",0xf94bb7fc,"openfl.display.Stage.onGamepadButtonDown","openfl/display/Stage.hx",666,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonDown,(void))

Void Stage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonUp",0x91cf2b75,"openfl.display.Stage.onGamepadButtonUp","openfl/display/Stage.hx",673,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonUp,(void))

Void Stage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadConnect",0xd0dcc662,"openfl.display.Stage.onGamepadConnect","openfl/display/Stage.hx",680,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadConnect,(void))

Void Stage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadDisconnect",0xb62bb4e4,"openfl.display.Stage.onGamepadDisconnect","openfl/display/Stage.hx",687,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadDisconnect,(void))

Void Stage_obj::onKeyDown( int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyDown",0x4ccfc368,"openfl.display.Stage.onKeyDown","openfl/display/Stage.hx",696,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(696)
		this->__onKey(::openfl::events::KeyboardEvent_obj::KEY_DOWN,keyCode,modifier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onKeyDown,(void))

Void Stage_obj::onKeyUp( int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyUp",0x5bcb43e1,"openfl.display.Stage.onKeyUp","openfl/display/Stage.hx",703,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(703)
		this->__onKey(::openfl::events::KeyboardEvent_obj::KEY_UP,keyCode,modifier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onKeyUp,(void))

Void Stage_obj::onMouseDown( Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseDown",0x156a4aae,"openfl.display.Stage.onMouseDown","openfl/display/Stage.hx",708,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(710)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(710)
		switch( (int)(button)){
			case (int)1: {
				HX_STACK_LINE(712)
				type = ::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(713)
				type = ::openfl::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;
			}
			;break;
			default: {
				HX_STACK_LINE(714)
				type = ::openfl::events::MouseEvent_obj::MOUSE_DOWN;
			}
		}
		HX_STACK_LINE(718)
		this->__onMouse(type,x,y,button);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseDown,(void))

Void Stage_obj::onMouseMove( Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMove",0x1b5d355d,"openfl.display.Stage.onMouseMove","openfl/display/Stage.hx",725,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(725)
		this->__onMouse(::openfl::events::MouseEvent_obj::MOUSE_MOVE,x,y,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMove,(void))

Void Stage_obj::onMouseUp( Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseUp",0x70fb4da7,"openfl.display.Stage.onMouseUp","openfl/display/Stage.hx",730,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(732)
		::String type;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(732)
		switch( (int)(button)){
			case (int)1: {
				HX_STACK_LINE(734)
				type = ::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_UP;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(735)
				type = ::openfl::events::MouseEvent_obj::RIGHT_MOUSE_UP;
			}
			;break;
			default: {
				HX_STACK_LINE(736)
				type = ::openfl::events::MouseEvent_obj::MOUSE_UP;
			}
		}
		HX_STACK_LINE(740)
		this->__onMouse(type,x,y,button);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseUp,(void))

Void Stage_obj::onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseWheel",0x9385e4cf,"openfl.display.Stage.onMouseWheel","openfl/display/Stage.hx",747,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(747)
		this->__onMouseWheel(deltaX,deltaY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onMouseWheel,(void))

Void Stage_obj::onRenderContextLost( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextLost",0xf63c6844,"openfl.display.Stage.onRenderContextLost","openfl/display/Stage.hx",752,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onRenderContextLost,(void))

Void Stage_obj::onRenderContextRestored( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextRestored",0x98dd6bb6,"openfl.display.Stage.onRenderContextRestored","openfl/display/Stage.hx",759,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRenderContextRestored,(void))

Void Stage_obj::onTouchMove( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchMove",0x34750bf7,"openfl.display.Stage.onTouchMove","openfl/display/Stage.hx",768,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(768)
		this->__onTouch(HX_CSTRING("touchMove"),x,y,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onTouchMove,(void))

Void Stage_obj::onTouchEnd( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchEnd",0xc6cff9b5,"openfl.display.Stage.onTouchEnd","openfl/display/Stage.hx",775,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(775)
		this->__onTouch(HX_CSTRING("touchEnd"),x,y,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onTouchEnd,(void))

Void Stage_obj::onTouchStart( Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchStart",0x299b14bc,"openfl.display.Stage.onTouchStart","openfl/display/Stage.hx",782,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(782)
		this->__onTouch(HX_CSTRING("touchBegin"),x,y,id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onTouchStart,(void))

Void Stage_obj::onWindowActivate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowActivate",0xcfe358dc,"openfl.display.Stage.onWindowActivate","openfl/display/Stage.hx",787,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(789)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ACTIVATE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(790)
		this->__broadcast(event,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowActivate,(void))

Void Stage_obj::onWindowClose( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowClose",0x0c1bf6ef,"openfl.display.Stage.onWindowClose","openfl/display/Stage.hx",795,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowClose,(void))

Void Stage_obj::onWindowDeactivate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDeactivate",0x9060f59d,"openfl.display.Stage.onWindowDeactivate","openfl/display/Stage.hx",802,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(804)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::DEACTIVATE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(805)
		this->__broadcast(event,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowDeactivate,(void))

Void Stage_obj::onWindowFocusIn( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusIn",0x0c9ba0d4,"openfl.display.Stage.onWindowFocusIn","openfl/display/Stage.hx",810,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowFocusIn,(void))

Void Stage_obj::onWindowFocusOut( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusOut",0xfb95acbf,"openfl.display.Stage.onWindowFocusOut","openfl/display/Stage.hx",817,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowFocusOut,(void))

Void Stage_obj::onWindowFullscreen( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFullscreen",0x4e13d3a4,"openfl.display.Stage.onWindowFullscreen","openfl/display/Stage.hx",824,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowFullscreen,(void))

Void Stage_obj::onWindowMinimize( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMinimize",0x0bb07c47,"openfl.display.Stage.onWindowMinimize","openfl/display/Stage.hx",831,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowMinimize,(void))

Void Stage_obj::onWindowMove( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMove",0x7f3617ba,"openfl.display.Stage.onWindowMove","openfl/display/Stage.hx",838,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowMove,(void))

Void Stage_obj::onWindowResize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowResize",0x8685cadd,"openfl.display.Stage.onWindowResize","openfl/display/Stage.hx",845,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(847)
		this->stageWidth = width;
		HX_STACK_LINE(848)
		this->stageHeight = height;
		HX_STACK_LINE(850)
		if (((this->__renderer != null()))){
			HX_STACK_LINE(852)
			this->__renderer->resize(width,height);
		}
		HX_STACK_LINE(856)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::RESIZE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(857)
		this->__broadcast(event,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowResize,(void))

Void Stage_obj::onWindowRestore( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowRestore",0x35c8c245,"openfl.display.Stage.onWindowRestore","openfl/display/Stage.hx",862,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onWindowRestore,(void))

Void Stage_obj::render( ::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","render",0x050c3670,"openfl.display.Stage.render","openfl/display/Stage.hx",869,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(871)
		if ((this->__rendering)){
			HX_STACK_LINE(871)
			return null();
		}
		HX_STACK_LINE(872)
		this->__rendering = true;
		HX_STACK_LINE(874)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ENTER_FRAME,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(874)
		this->__broadcast(_g,true);
		HX_STACK_LINE(876)
		if ((this->__invalidated)){
			HX_STACK_LINE(878)
			this->__invalidated = false;
			HX_STACK_LINE(879)
			::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::RENDER,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(879)
			this->__broadcast(_g1,true);
		}
		HX_STACK_LINE(883)
		this->__renderable = true;
		HX_STACK_LINE(884)
		this->__update(false,true,null());
		HX_STACK_LINE(886)
		if (((this->__renderer != null()))){
			HX_STACK_LINE(888)
			this->__renderer->render(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(892)
		this->__rendering = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,render,(void))

Void Stage_obj::update( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.Stage","update",0x86e85123,"openfl.display.Stage.update","openfl/display/Stage.hx",897,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,update,(void))

int Stage_obj::__convertKeyCode( int keyCode){
	HX_STACK_FRAME("openfl.display.Stage","__convertKeyCode",0x67363b73,"openfl.display.Stage.__convertKeyCode","openfl/display/Stage.hx",906,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(906)
	switch( (int)(keyCode)){
		case (int)8: {
			HX_STACK_LINE(908)
			return (int)8;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(909)
			return (int)9;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(910)
			return (int)13;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(911)
			return (int)27;
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(912)
			return (int)32;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(919)
			return (int)222;
		}
		;break;
		case (int)44: {
			HX_STACK_LINE(924)
			return (int)188;
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(925)
			return (int)189;
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(926)
			return (int)190;
		}
		;break;
		case (int)47: {
			HX_STACK_LINE(927)
			return (int)191;
		}
		;break;
		case (int)48: {
			HX_STACK_LINE(928)
			return (int)48;
		}
		;break;
		case (int)49: {
			HX_STACK_LINE(929)
			return (int)49;
		}
		;break;
		case (int)50: {
			HX_STACK_LINE(930)
			return (int)50;
		}
		;break;
		case (int)51: {
			HX_STACK_LINE(931)
			return (int)51;
		}
		;break;
		case (int)52: {
			HX_STACK_LINE(932)
			return (int)52;
		}
		;break;
		case (int)53: {
			HX_STACK_LINE(933)
			return (int)53;
		}
		;break;
		case (int)54: {
			HX_STACK_LINE(934)
			return (int)54;
		}
		;break;
		case (int)55: {
			HX_STACK_LINE(935)
			return (int)55;
		}
		;break;
		case (int)56: {
			HX_STACK_LINE(936)
			return (int)56;
		}
		;break;
		case (int)57: {
			HX_STACK_LINE(937)
			return (int)57;
		}
		;break;
		case (int)59: {
			HX_STACK_LINE(939)
			return (int)186;
		}
		;break;
		case (int)61: {
			HX_STACK_LINE(941)
			return (int)187;
		}
		;break;
		case (int)91: {
			HX_STACK_LINE(945)
			return (int)219;
		}
		;break;
		case (int)92: {
			HX_STACK_LINE(946)
			return (int)220;
		}
		;break;
		case (int)93: {
			HX_STACK_LINE(947)
			return (int)221;
		}
		;break;
		case (int)96: {
			HX_STACK_LINE(950)
			return (int)192;
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(951)
			return (int)65;
		}
		;break;
		case (int)98: {
			HX_STACK_LINE(952)
			return (int)66;
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(953)
			return (int)67;
		}
		;break;
		case (int)100: {
			HX_STACK_LINE(954)
			return (int)68;
		}
		;break;
		case (int)101: {
			HX_STACK_LINE(955)
			return (int)69;
		}
		;break;
		case (int)102: {
			HX_STACK_LINE(956)
			return (int)70;
		}
		;break;
		case (int)103: {
			HX_STACK_LINE(957)
			return (int)71;
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(958)
			return (int)72;
		}
		;break;
		case (int)105: {
			HX_STACK_LINE(959)
			return (int)73;
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(960)
			return (int)74;
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(961)
			return (int)75;
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(962)
			return (int)76;
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(963)
			return (int)77;
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(964)
			return (int)78;
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(965)
			return (int)79;
		}
		;break;
		case (int)112: {
			HX_STACK_LINE(966)
			return (int)80;
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(967)
			return (int)81;
		}
		;break;
		case (int)114: {
			HX_STACK_LINE(968)
			return (int)82;
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(969)
			return (int)83;
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(970)
			return (int)84;
		}
		;break;
		case (int)117: {
			HX_STACK_LINE(971)
			return (int)85;
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(972)
			return (int)86;
		}
		;break;
		case (int)119: {
			HX_STACK_LINE(973)
			return (int)87;
		}
		;break;
		case (int)120: {
			HX_STACK_LINE(974)
			return (int)88;
		}
		;break;
		case (int)121: {
			HX_STACK_LINE(975)
			return (int)89;
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(976)
			return (int)90;
		}
		;break;
		case (int)127: {
			HX_STACK_LINE(977)
			return (int)46;
		}
		;break;
		case (int)1073741881: {
			HX_STACK_LINE(978)
			return (int)20;
		}
		;break;
		case (int)1073741882: {
			HX_STACK_LINE(979)
			return (int)112;
		}
		;break;
		case (int)1073741883: {
			HX_STACK_LINE(980)
			return (int)113;
		}
		;break;
		case (int)1073741884: {
			HX_STACK_LINE(981)
			return (int)114;
		}
		;break;
		case (int)1073741885: {
			HX_STACK_LINE(982)
			return (int)115;
		}
		;break;
		case (int)1073741886: {
			HX_STACK_LINE(983)
			return (int)116;
		}
		;break;
		case (int)1073741887: {
			HX_STACK_LINE(984)
			return (int)117;
		}
		;break;
		case (int)1073741888: {
			HX_STACK_LINE(985)
			return (int)118;
		}
		;break;
		case (int)1073741889: {
			HX_STACK_LINE(986)
			return (int)119;
		}
		;break;
		case (int)1073741890: {
			HX_STACK_LINE(987)
			return (int)120;
		}
		;break;
		case (int)1073741891: {
			HX_STACK_LINE(988)
			return (int)121;
		}
		;break;
		case (int)1073741892: {
			HX_STACK_LINE(989)
			return (int)122;
		}
		;break;
		case (int)1073741893: {
			HX_STACK_LINE(990)
			return (int)123;
		}
		;break;
		case (int)1073741897: {
			HX_STACK_LINE(994)
			return (int)45;
		}
		;break;
		case (int)1073741898: {
			HX_STACK_LINE(995)
			return (int)36;
		}
		;break;
		case (int)1073741899: {
			HX_STACK_LINE(996)
			return (int)33;
		}
		;break;
		case (int)1073741901: {
			HX_STACK_LINE(997)
			return (int)35;
		}
		;break;
		case (int)1073741902: {
			HX_STACK_LINE(998)
			return (int)34;
		}
		;break;
		case (int)1073741903: {
			HX_STACK_LINE(999)
			return (int)39;
		}
		;break;
		case (int)1073741904: {
			HX_STACK_LINE(1000)
			return (int)37;
		}
		;break;
		case (int)1073741905: {
			HX_STACK_LINE(1001)
			return (int)40;
		}
		;break;
		case (int)1073741906: {
			HX_STACK_LINE(1002)
			return (int)38;
		}
		;break;
		case (int)1073741908: {
			HX_STACK_LINE(1004)
			return (int)111;
		}
		;break;
		case (int)1073741909: {
			HX_STACK_LINE(1005)
			return (int)106;
		}
		;break;
		case (int)1073741910: {
			HX_STACK_LINE(1006)
			return (int)109;
		}
		;break;
		case (int)1073741911: {
			HX_STACK_LINE(1007)
			return (int)107;
		}
		;break;
		case (int)1073741912: {
			HX_STACK_LINE(1008)
			return (int)108;
		}
		;break;
		case (int)1073741913: {
			HX_STACK_LINE(1009)
			return (int)97;
		}
		;break;
		case (int)1073741914: {
			HX_STACK_LINE(1010)
			return (int)98;
		}
		;break;
		case (int)1073741915: {
			HX_STACK_LINE(1011)
			return (int)99;
		}
		;break;
		case (int)1073741916: {
			HX_STACK_LINE(1012)
			return (int)100;
		}
		;break;
		case (int)1073741917: {
			HX_STACK_LINE(1013)
			return (int)101;
		}
		;break;
		case (int)1073741918: {
			HX_STACK_LINE(1014)
			return (int)102;
		}
		;break;
		case (int)1073741919: {
			HX_STACK_LINE(1015)
			return (int)103;
		}
		;break;
		case (int)1073741920: {
			HX_STACK_LINE(1016)
			return (int)104;
		}
		;break;
		case (int)1073741921: {
			HX_STACK_LINE(1017)
			return (int)105;
		}
		;break;
		case (int)1073741922: {
			HX_STACK_LINE(1018)
			return (int)96;
		}
		;break;
		case (int)1073741923: {
			HX_STACK_LINE(1019)
			return (int)110;
		}
		;break;
		case (int)1073741928: {
			HX_STACK_LINE(1023)
			return (int)124;
		}
		;break;
		case (int)1073741929: {
			HX_STACK_LINE(1024)
			return (int)125;
		}
		;break;
		case (int)1073741930: {
			HX_STACK_LINE(1025)
			return (int)126;
		}
		;break;
		case (int)1073742048: {
			HX_STACK_LINE(1109)
			return (int)17;
		}
		;break;
		case (int)1073742049: {
			HX_STACK_LINE(1110)
			return (int)16;
		}
		;break;
		case (int)1073742050: {
			HX_STACK_LINE(1111)
			return (int)18;
		}
		;break;
		case (int)1073742052: {
			HX_STACK_LINE(1113)
			return (int)17;
		}
		;break;
		case (int)1073742053: {
			HX_STACK_LINE(1114)
			return (int)16;
		}
		;break;
		case (int)1073742054: {
			HX_STACK_LINE(1115)
			return (int)18;
		}
		;break;
		default: {
			HX_STACK_LINE(1143)
			return keyCode;
		}
	}
	HX_STACK_LINE(906)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__convertKeyCode,return )

Void Stage_obj::__drag( ::openfl::geom::Point mouse){
{
		HX_STACK_FRAME("openfl.display.Stage","__drag",0xf14b5a2e,"openfl.display.Stage.__drag","openfl/display/Stage.hx",1150,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(1152)
		::openfl::display::DisplayObjectContainer parent = this->__dragObject->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(1153)
		if (((parent != null()))){
			HX_STACK_LINE(1155)
			::openfl::geom::Point _g = parent->globalToLocal(mouse);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1155)
			mouse = _g;
		}
		HX_STACK_LINE(1159)
		Float x = (mouse->x + this->__dragOffsetX);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1160)
		Float y = (mouse->y + this->__dragOffsetY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1162)
		if (((this->__dragBounds != null()))){
			HX_STACK_LINE(1164)
			if (((x < this->__dragBounds->x))){
				HX_STACK_LINE(1166)
				x = this->__dragBounds->x;
			}
			else{
				HX_STACK_LINE(1168)
				Float _g1 = this->__dragBounds->get_right();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1168)
				if (((x > _g1))){
					HX_STACK_LINE(1170)
					Float _g2 = this->__dragBounds->get_right();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1170)
					x = _g2;
				}
			}
			HX_STACK_LINE(1174)
			if (((y < this->__dragBounds->y))){
				HX_STACK_LINE(1176)
				y = this->__dragBounds->y;
			}
			else{
				HX_STACK_LINE(1178)
				Float _g3 = this->__dragBounds->get_bottom();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1178)
				if (((y > _g3))){
					HX_STACK_LINE(1180)
					Float _g4 = this->__dragBounds->get_bottom();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1180)
					y = _g4;
				}
			}
		}
		HX_STACK_LINE(1186)
		this->__dragObject->set_x(x);
		HX_STACK_LINE(1187)
		this->__dragObject->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Void Stage_obj::__fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.Stage","__fireEvent",0xa3fe300a,"openfl.display.Stage.__fireEvent","openfl/display/Stage.hx",1192,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(1194)
		int length = stack->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(1196)
		if (((length == (int)0))){
			HX_STACK_LINE(1198)
			event->eventPhase = ::openfl::events::EventPhase_obj::AT_TARGET;
			HX_STACK_LINE(1199)
			event->target->__Field(HX_CSTRING("__broadcast"),true)(event,false);
		}
		else{
			HX_STACK_LINE(1203)
			event->eventPhase = ::openfl::events::EventPhase_obj::CAPTURING_PHASE;
			HX_STACK_LINE(1204)
			event->target = stack->__get((stack->length - (int)1)).StaticCast< ::openfl::display::DisplayObject >();
			HX_STACK_LINE(1206)
			{
				HX_STACK_LINE(1206)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1206)
				int _g = (length - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1206)
				while((true)){
					HX_STACK_LINE(1206)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(1206)
						break;
					}
					HX_STACK_LINE(1206)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1208)
					stack->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__broadcast(event,false);
					HX_STACK_LINE(1210)
					if ((event->__isCancelled)){
						HX_STACK_LINE(1212)
						return null();
					}
				}
			}
			HX_STACK_LINE(1218)
			event->eventPhase = ::openfl::events::EventPhase_obj::AT_TARGET;
			HX_STACK_LINE(1219)
			event->target->__Field(HX_CSTRING("__broadcast"),true)(event,false);
			HX_STACK_LINE(1221)
			if ((event->__isCancelled)){
				HX_STACK_LINE(1223)
				return null();
			}
			HX_STACK_LINE(1227)
			if ((event->bubbles)){
				HX_STACK_LINE(1229)
				event->eventPhase = ::openfl::events::EventPhase_obj::BUBBLING_PHASE;
				HX_STACK_LINE(1230)
				int i = (length - (int)2);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1232)
				while((true)){
					HX_STACK_LINE(1232)
					if ((!(((i >= (int)0))))){
						HX_STACK_LINE(1232)
						break;
					}
					HX_STACK_LINE(1234)
					stack->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__broadcast(event,false);
					HX_STACK_LINE(1236)
					if ((event->__isCancelled)){
						HX_STACK_LINE(1238)
						return null();
					}
					HX_STACK_LINE(1242)
					(i)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__fireEvent,(void))

Void Stage_obj::__getInteractive( Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.Stage","__getInteractive",0xdc3c8ba6,"openfl.display.Stage.__getInteractive","openfl/display/Stage.hx",1255,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(1255)
		stack->push(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Stage_obj::__onKey( ::String type,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","__onKey",0x83566246,"openfl.display.Stage.__onKey","openfl/display/Stage.hx",1260,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(1262)
		bool _g = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1262)
		::openfl::events::MouseEvent_obj::__altKey = _g;
		HX_STACK_LINE(1263)
		bool _g1 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1263)
		::openfl::events::MouseEvent_obj::__commandKey = _g1;
		HX_STACK_LINE(1264)
		bool _g2 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1264)
		::openfl::events::MouseEvent_obj::__ctrlKey = _g2;
		HX_STACK_LINE(1265)
		bool _g3 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1265)
		::openfl::events::MouseEvent_obj::__shiftKey = _g3;
		HX_STACK_LINE(1267)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1269)
		if (((this->__focus == null()))){
			HX_STACK_LINE(1271)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(1275)
			this->__focus->__getInteractive(stack);
		}
		HX_STACK_LINE(1279)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(1281)
			int keyCode1 = this->__convertKeyCode(keyCode);		HX_STACK_VAR(keyCode1,"keyCode1");
			HX_STACK_LINE(1282)
			int charCode = keyCode1;		HX_STACK_VAR(charCode,"charCode");
			HX_STACK_LINE(1284)
			bool _g4 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1284)
			bool _g5 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1284)
			bool _g6 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1284)
			bool _g7 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1284)
			::openfl::events::KeyboardEvent event = ::openfl::events::KeyboardEvent_obj::__new(type,true,false,charCode,keyCode1,null(),_g4,_g5,_g6,_g7,null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1286)
			stack->reverse();
			HX_STACK_LINE(1287)
			this->__fireEvent(event,stack);
			HX_STACK_LINE(1291)
			if (((  (((  (((  (((  (((  (((  (((keyCode1 == (int)13))) ? bool(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(modifier)) : bool(false) ))) ? bool((type == ::openfl::events::KeyboardEvent_obj::KEY_DOWN)) : bool(false) ))) ? bool(!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(modifier))) : bool(false) ))) ? bool(!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(modifier))) : bool(false) ))) ? bool(!(::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(modifier))) : bool(false) ))) ? bool(!(event->isDefaultPrevented())) : bool(false) ))){
				HX_STACK_LINE(1293)
				::openfl::display::StageDisplayState _g8 = this->__displayState;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1293)
				switch( (int)(_g8->__Index())){
					case (int)0: {
						HX_STACK_LINE(1295)
						this->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
					}
					;break;
					default: {
						HX_STACK_LINE(1296)
						this->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onKey,(void))

Void Stage_obj::__onMouse( ::String type,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouse",0xfccea68c,"openfl.display.Stage.__onMouse","openfl/display/Stage.hx",1322,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(1324)
		if (((button > (int)2))){
			HX_STACK_LINE(1324)
			return null();
		}
		HX_STACK_LINE(1326)
		this->__mouseX = x;
		HX_STACK_LINE(1327)
		this->__mouseY = y;
		HX_STACK_LINE(1329)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1330)
		::openfl::display::InteractiveObject target = null();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1331)
		::openfl::geom::Point targetPoint = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1333)
		if ((this->__hitTest(x,y,false,stack,true))){
			HX_STACK_LINE(1335)
			target = stack->__get((stack->length - (int)1)).StaticCast< ::openfl::display::DisplayObject >();
		}
		else{
			HX_STACK_LINE(1339)
			target = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(1340)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1344)
		::openfl::geom::Point _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1344)
		if (((target == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(1344)
			_g = targetPoint;
		}
		else{
			HX_STACK_LINE(1344)
			_g = target->globalToLocal(targetPoint);
		}
		HX_STACK_LINE(1344)
		::openfl::events::MouseEvent _g1 = ::openfl::events::MouseEvent_obj::__create(type,button,this->__mouseX,this->__mouseY,_g,target,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1344)
		this->__fireEvent(_g1,stack);
		HX_STACK_LINE(1346)
		::String clickType;		HX_STACK_VAR(clickType,"clickType");
		HX_STACK_LINE(1346)
		::String _switch_1 = (type);
		if (  ( _switch_1==::openfl::events::MouseEvent_obj::MOUSE_UP)){
			HX_STACK_LINE(1348)
			clickType = ::openfl::events::MouseEvent_obj::CLICK;
		}
		else if (  ( _switch_1==::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_UP)){
			HX_STACK_LINE(1349)
			clickType = ::openfl::events::MouseEvent_obj::MIDDLE_CLICK;
		}
		else if (  ( _switch_1==::openfl::events::MouseEvent_obj::RIGHT_MOUSE_UP)){
			HX_STACK_LINE(1350)
			clickType = ::openfl::events::MouseEvent_obj::RIGHT_CLICK;
		}
		else  {
			HX_STACK_LINE(1351)
			clickType = null();
		}
;
;
		HX_STACK_LINE(1355)
		if (((clickType != null()))){
			HX_STACK_LINE(1357)
			::openfl::geom::Point _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1357)
			if (((target == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(1357)
				_g2 = targetPoint;
			}
			else{
				HX_STACK_LINE(1357)
				_g2 = target->globalToLocal(targetPoint);
			}
			HX_STACK_LINE(1357)
			::openfl::events::MouseEvent _g3 = ::openfl::events::MouseEvent_obj::__create(clickType,button,this->__mouseX,this->__mouseY,_g2,target,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1357)
			this->__fireEvent(_g3,stack);
			HX_STACK_LINE(1359)
			if (((bool((type == ::openfl::events::MouseEvent_obj::MOUSE_UP)) && bool((hx::TCast< openfl::display::InteractiveObject >::cast(target))->doubleClickEnabled)))){
				HX_STACK_LINE(1361)
				int currentTime = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(currentTime,"currentTime");
				HX_STACK_LINE(1362)
				if ((((currentTime - this->__lastClickTime) < (int)500))){
					HX_STACK_LINE(1364)
					::openfl::geom::Point _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1364)
					if (((target == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(1364)
						_g4 = targetPoint;
					}
					else{
						HX_STACK_LINE(1364)
						_g4 = target->globalToLocal(targetPoint);
					}
					HX_STACK_LINE(1364)
					::openfl::events::MouseEvent _g5 = ::openfl::events::MouseEvent_obj::__create(::openfl::events::MouseEvent_obj::DOUBLE_CLICK,button,this->__mouseX,this->__mouseY,_g4,target,null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1364)
					this->__fireEvent(_g5,stack);
					HX_STACK_LINE(1365)
					this->__lastClickTime = (int)0;
				}
				else{
					HX_STACK_LINE(1369)
					this->__lastClickTime = currentTime;
				}
			}
		}
		HX_STACK_LINE(1377)
		if ((::Std_obj::is(target,hx::ClassOf< ::openfl::display::Sprite >()))){
			HX_STACK_LINE(1379)
			::openfl::display::Sprite targetSprite = target;		HX_STACK_VAR(targetSprite,"targetSprite");
			HX_STACK_LINE(1381)
			if (((bool(targetSprite->buttonMode) && bool(targetSprite->useHandCursor)))){
				HX_STACK_LINE(1383)
				::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::POINTER);
			}
			else{
				HX_STACK_LINE(1387)
				::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
			}
		}
		else{
			HX_STACK_LINE(1391)
			if ((::Std_obj::is(target,hx::ClassOf< ::openfl::display::SimpleButton >()))){
				HX_STACK_LINE(1393)
				::openfl::display::SimpleButton targetButton = target;		HX_STACK_VAR(targetButton,"targetButton");
				HX_STACK_LINE(1395)
				if ((targetButton->useHandCursor)){
					HX_STACK_LINE(1397)
					::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::POINTER);
				}
				else{
					HX_STACK_LINE(1401)
					::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
				}
			}
			else{
				HX_STACK_LINE(1405)
				if ((::Std_obj::is(target,hx::ClassOf< ::openfl::text::TextField >()))){
					HX_STACK_LINE(1407)
					::openfl::text::TextField targetTextField = target;		HX_STACK_VAR(targetTextField,"targetTextField");
					HX_STACK_LINE(1409)
					if (((targetTextField->type == ::openfl::text::TextFieldType_obj::INPUT))){
						HX_STACK_LINE(1411)
						::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::TEXT);
					}
					else{
						HX_STACK_LINE(1415)
						::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
					}
				}
				else{
					HX_STACK_LINE(1421)
					::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
				}
			}
		}
		HX_STACK_LINE(1425)
		{
			HX_STACK_LINE(1425)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1425)
			Array< ::Dynamic > _g11 = this->__mouseOutStack;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1425)
			while((true)){
				HX_STACK_LINE(1425)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(1425)
					break;
				}
				HX_STACK_LINE(1425)
				::openfl::display::DisplayObject target1 = _g11->__get(_g2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1425)
				++(_g2);
				HX_STACK_LINE(1427)
				int _g6 = stack->indexOf(target1,null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1427)
				if (((_g6 == (int)-1))){
					HX_STACK_LINE(1429)
					this->__mouseOutStack->remove(target1);
					HX_STACK_LINE(1431)
					::openfl::geom::Point localPoint = target1->globalToLocal(targetPoint);		HX_STACK_VAR(localPoint,"localPoint");
					HX_STACK_LINE(1432)
					::openfl::events::MouseEvent _g7 = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_OUT,false,false,localPoint->x,localPoint->y,target1,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1432)
					target1->dispatchEvent(_g7);
				}
			}
		}
		HX_STACK_LINE(1438)
		{
			HX_STACK_LINE(1438)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1438)
			while((true)){
				HX_STACK_LINE(1438)
				if ((!(((_g2 < stack->length))))){
					HX_STACK_LINE(1438)
					break;
				}
				HX_STACK_LINE(1438)
				::openfl::display::DisplayObject target1 = stack->__get(_g2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1438)
				++(_g2);
				HX_STACK_LINE(1440)
				int _g8 = this->__mouseOutStack->indexOf(target1,null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1440)
				if (((_g8 == (int)-1))){
					HX_STACK_LINE(1442)
					if ((target1->hasEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER))){
						HX_STACK_LINE(1444)
						::openfl::geom::Point localPoint = target1->globalToLocal(targetPoint);		HX_STACK_VAR(localPoint,"localPoint");
						HX_STACK_LINE(1445)
						::openfl::events::MouseEvent _g9 = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::MOUSE_OVER,false,false,localPoint->x,localPoint->y,target1,null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(1445)
						target1->dispatchEvent(_g9);
					}
					HX_STACK_LINE(1449)
					if ((target1->hasEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT))){
						HX_STACK_LINE(1451)
						this->__mouseOutStack->push(target1);
					}
				}
			}
		}
		HX_STACK_LINE(1459)
		if (((this->__dragObject != null()))){
			HX_STACK_LINE(1461)
			this->__drag(targetPoint);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onMouse,(void))

Void Stage_obj::__onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouseWheel",0x6d35c26f,"openfl.display.Stage.__onMouseWheel","openfl/display/Stage.hx",1468,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(1470)
		Float x = this->__mouseX;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1471)
		Float y = this->__mouseY;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1473)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1475)
		if ((!(this->__hitTest(x,y,false,stack,true)))){
			HX_STACK_LINE(1477)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1481)
		::openfl::display::InteractiveObject target = stack->__get((stack->length - (int)1)).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1482)
		::openfl::geom::Point targetPoint = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1483)
		int delta = ::Std_obj::_int(deltaY);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(1485)
		::openfl::geom::Point _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1485)
		if (((target == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(1485)
			_g = targetPoint;
		}
		else{
			HX_STACK_LINE(1485)
			_g = target->globalToLocal(targetPoint);
		}
		HX_STACK_LINE(1485)
		::openfl::events::MouseEvent _g1 = ::openfl::events::MouseEvent_obj::__create(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,(int)0,this->__mouseX,this->__mouseY,_g,target,delta);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1485)
		this->__fireEvent(_g1,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onMouseWheel,(void))

Void Stage_obj::__onTouch( ::String type,Float x,Float y,int id){
{
		HX_STACK_FRAME("openfl.display.Stage","__onTouch",0x049ca826,"openfl.display.Stage.__onTouch","openfl/display/Stage.hx",1490,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(1509)
		::openfl::geom::Point point = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1511)
		this->__mouseX = point->x;
		HX_STACK_LINE(1512)
		this->__mouseY = point->y;
		HX_STACK_LINE(1514)
		Array< ::Dynamic > __stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(__stack,"__stack");
		HX_STACK_LINE(1516)
		::String mouseType;		HX_STACK_VAR(mouseType,"mouseType");
		HX_STACK_LINE(1516)
		::String _switch_2 = (type);
		if (  ( _switch_2==HX_CSTRING("touchBegin"))){
			HX_STACK_LINE(1518)
			mouseType = ::openfl::events::MouseEvent_obj::MOUSE_DOWN;
		}
		else if (  ( _switch_2==HX_CSTRING("touchMove"))){
			HX_STACK_LINE(1519)
			mouseType = ::openfl::events::MouseEvent_obj::MOUSE_MOVE;
		}
		else if (  ( _switch_2==HX_CSTRING("touchEnd"))){
			HX_STACK_LINE(1520)
			mouseType = ::openfl::events::MouseEvent_obj::MOUSE_UP;
		}
		else  {
			HX_STACK_LINE(1521)
			mouseType = null();
		}
;
;
		HX_STACK_LINE(1525)
		if ((this->__hitTest(x,y,false,__stack,true))){
			HX_STACK_LINE(1527)
			::openfl::display::DisplayObject target = __stack->__get((__stack->length - (int)1)).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(1528)
			::openfl::geom::Point localPoint = target->globalToLocal(point);		HX_STACK_VAR(localPoint,"localPoint");
			HX_STACK_LINE(1530)
			::openfl::events::TouchEvent touchEvent = ::openfl::events::TouchEvent_obj::__create(type,null(),this->__mouseX,this->__mouseY,localPoint,target);		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1531)
			touchEvent->touchPointID = id;
			HX_STACK_LINE(1533)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1535)
			::openfl::events::MouseEvent mouseEvent = ::openfl::events::MouseEvent_obj::__create(mouseType,(int)0,this->__mouseX,this->__mouseY,localPoint,target,null());		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(1536)
			mouseEvent->buttonDown = (type != HX_CSTRING("touchEnd"));
			HX_STACK_LINE(1538)
			this->__fireEvent(touchEvent,__stack);
			HX_STACK_LINE(1539)
			this->__fireEvent(mouseEvent,__stack);
		}
		else{
			HX_STACK_LINE(1543)
			::openfl::events::TouchEvent touchEvent = ::openfl::events::TouchEvent_obj::__create(type,null(),this->__mouseX,this->__mouseY,point,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1544)
			touchEvent->touchPointID = id;
			HX_STACK_LINE(1546)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1548)
			::openfl::events::MouseEvent mouseEvent = ::openfl::events::MouseEvent_obj::__create(mouseType,(int)0,this->__mouseX,this->__mouseY,point,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(1549)
			mouseEvent->buttonDown = (type != HX_CSTRING("touchEnd"));
			HX_STACK_LINE(1551)
			this->__fireEvent(touchEvent,Array_obj< ::Dynamic >::__new().Add(this->stage));
			HX_STACK_LINE(1552)
			this->__fireEvent(mouseEvent,Array_obj< ::Dynamic >::__new().Add(this->stage));
		}
		HX_STACK_LINE(1556)
		if (((bool((type == HX_CSTRING("touchMove"))) && bool((this->__dragObject != null()))))){
			HX_STACK_LINE(1558)
			this->__drag(point);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onTouch,(void))

Void Stage_obj::__resize( ){
{
		HX_STACK_FRAME("openfl.display.Stage","__resize",0x872a0aae,"openfl.display.Stage.__resize","openfl/display/Stage.hx",1565,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__resize,(void))

Void Stage_obj::__startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl.display.Stage","__startDrag",0x2df4a4fc,"openfl.display.Stage.__startDrag","openfl/display/Stage.hx",1626,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1628)
		::openfl::geom::Rectangle _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1628)
		if (((bounds == null()))){
			HX_STACK_LINE(1628)
			_g = null();
		}
		else{
			HX_STACK_LINE(1628)
			_g = bounds->clone();
		}
		HX_STACK_LINE(1628)
		this->__dragBounds = _g;
		HX_STACK_LINE(1629)
		this->__dragObject = sprite;
		HX_STACK_LINE(1631)
		if (((this->__dragObject != null()))){
			HX_STACK_LINE(1633)
			if ((lockCenter)){
				HX_STACK_LINE(1635)
				Float _g1 = -(this->__dragObject->get_width());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1635)
				Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1635)
				this->__dragOffsetX = _g2;
				HX_STACK_LINE(1636)
				Float _g3 = -(this->__dragObject->get_height());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1636)
				Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1636)
				this->__dragOffsetY = _g4;
			}
			else{
				HX_STACK_LINE(1640)
				Float _g5 = this->get_mouseX();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1640)
				Float _g6 = this->get_mouseY();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1640)
				::openfl::geom::Point mouse = ::openfl::geom::Point_obj::__new(_g5,_g6);		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1641)
				::openfl::display::DisplayObjectContainer parent = this->__dragObject->parent;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1643)
				if (((parent != null()))){
					HX_STACK_LINE(1645)
					::openfl::geom::Point _g7 = parent->globalToLocal(mouse);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1645)
					mouse = _g7;
				}
				HX_STACK_LINE(1649)
				Float _g8 = this->__dragObject->get_x();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1649)
				Float _g9 = (_g8 - mouse->x);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1649)
				this->__dragOffsetX = _g9;
				HX_STACK_LINE(1650)
				Float _g10 = this->__dragObject->get_y();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1650)
				Float _g11 = (_g10 - mouse->y);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1650)
				this->__dragOffsetY = _g11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl.display.Stage","__stopDrag",0x21724450,"openfl.display.Stage.__stopDrag","openfl/display/Stage.hx",1659,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(1661)
		this->__dragBounds = null();
		HX_STACK_LINE(1662)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics){
{
		HX_STACK_FRAME("openfl.display.Stage","__update",0x05b436c3,"openfl.display.Stage.__update","openfl/display/Stage.hx",1669,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGrahpics,"maskGrahpics")
		HX_STACK_LINE(1669)
		if ((transformOnly)){
			HX_STACK_LINE(1671)
			if (((::openfl::display::DisplayObject_obj::__worldTransformDirty > (int)0))){
				HX_STACK_LINE(1673)
				this->super::__update(true,updateChildren,maskGrahpics);
				HX_STACK_LINE(1675)
				if ((updateChildren)){
					HX_STACK_LINE(1677)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1678)
					this->__dirty = true;
				}
			}
		}
		else{
			HX_STACK_LINE(1686)
			if (((bool((bool((::openfl::display::DisplayObject_obj::__worldTransformDirty > (int)0)) || bool(this->__dirty))) || bool((::openfl::display::DisplayObject_obj::__worldRenderDirty > (int)0))))){
				HX_STACK_LINE(1688)
				this->super::__update(false,updateChildren,maskGrahpics);
				HX_STACK_LINE(1690)
				if ((updateChildren)){
					HX_STACK_LINE(1696)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1697)
					::openfl::display::DisplayObject_obj::__worldRenderDirty = (int)0;
					HX_STACK_LINE(1698)
					this->__dirty = false;
				}
			}
		}
	}
return null();
}


Float Stage_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseX",0xa5a51a76,"openfl.display.Stage.get_mouseX","openfl/display/Stage.hx",1731,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1731)
	return this->__mouseX;
}


Float Stage_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseY",0xa5a51a77,"openfl.display.Stage.get_mouseY","openfl/display/Stage.hx",1738,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1738)
	return this->__mouseY;
}


int Stage_obj::get_color( ){
	HX_STACK_FRAME("openfl.display.Stage","get_color",0x66e36ee0,"openfl.display.Stage.get_color","openfl/display/Stage.hx",1775,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1775)
	return this->__color;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	HX_STACK_FRAME("openfl.display.Stage","set_color",0x4a345aec,"openfl.display.Stage.set_color","openfl/display/Stage.hx",1780,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1782)
	int r = hx::UShr(((int(value) & int((int)16711680))),(int)16);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1783)
	int g = hx::UShr(((int(value) & int((int)65280))),(int)8);		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1784)
	int b = (int(value) & int((int)255));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1786)
	this->__colorSplit = Array_obj< Float >::__new().Add((Float(r) / Float((int)255))).Add((Float(g) / Float((int)255))).Add((Float(b) / Float((int)255)));
	HX_STACK_LINE(1787)
	::String _g = ::StringTools_obj::hex(value,(int)6);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1787)
	::String _g1 = (HX_CSTRING("#") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1787)
	this->__colorString = _g1;
	HX_STACK_LINE(1789)
	return this->__color = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

::openfl::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl.display.Stage","get_focus",0x21105d55,"openfl.display.Stage.get_focus","openfl/display/Stage.hx",1796,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1796)
	return this->__focus;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::display::InteractiveObject Stage_obj::set_focus( ::openfl::display::InteractiveObject value){
	HX_STACK_FRAME("openfl.display.Stage","set_focus",0x04614961,"openfl.display.Stage.set_focus","openfl/display/Stage.hx",1801,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1803)
	if (((value != this->__focus))){
		HX_STACK_LINE(1805)
		if (((this->__focus != null()))){
			HX_STACK_LINE(1807)
			::openfl::events::FocusEvent event = ::openfl::events::FocusEvent_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_OUT,true,false,value,false,(int)0);		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1808)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1809)
			this->__focus->__getInteractive(this->__stack);
			HX_STACK_LINE(1810)
			this->__stack->reverse();
			HX_STACK_LINE(1811)
			this->__fireEvent(event,this->__stack);
		}
		HX_STACK_LINE(1815)
		if (((value != null()))){
			HX_STACK_LINE(1817)
			::openfl::events::FocusEvent event = ::openfl::events::FocusEvent_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_IN,true,false,this->__focus,false,(int)0);		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1818)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1819)
			value->__getInteractive(this->__stack);
			HX_STACK_LINE(1820)
			this->__stack->reverse();
			HX_STACK_LINE(1821)
			this->__fireEvent(event,this->__stack);
		}
		HX_STACK_LINE(1825)
		this->__focus = value;
	}
	HX_STACK_LINE(1829)
	return this->__focus;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

::openfl::display::StageDisplayState Stage_obj::get_displayState( ){
	HX_STACK_FRAME("openfl.display.Stage","get_displayState",0x7908a892,"openfl.display.Stage.get_displayState","openfl/display/Stage.hx",1836,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1836)
	return this->__displayState;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

::openfl::display::StageDisplayState Stage_obj::set_displayState( ::openfl::display::StageDisplayState value){
	HX_STACK_FRAME("openfl.display.Stage","set_displayState",0xcf4a9606,"openfl.display.Stage.set_displayState","openfl/display/Stage.hx",1841,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1843)
	switch( (int)(value->__Index())){
		case (int)0: {
			HX_STACK_LINE(1848)
			::openfl::Lib_obj::application->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->set_fullscreen(false);
		}
		;break;
		default: {
			HX_STACK_LINE(1853)
			::openfl::Lib_obj::application->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->set_fullscreen(true);
		}
	}
	HX_STACK_LINE(1857)
	return this->__displayState = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_MARK_MEMBER_NAME(__color,"__color");
	HX_MARK_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_MARK_MEMBER_NAME(__colorString,"__colorString");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayState,"__displayState");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focus,"__focus");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__invalidated,"__invalidated");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_MARK_MEMBER_NAME(__mouseX,"__mouseX");
	HX_MARK_MEMBER_NAME(__mouseY,"__mouseY");
	HX_MARK_MEMBER_NAME(__originalWidth,"__originalWidth");
	HX_MARK_MEMBER_NAME(__originalHeight,"__originalHeight");
	HX_MARK_MEMBER_NAME(__renderer,"__renderer");
	HX_MARK_MEMBER_NAME(__rendering,"__rendering");
	HX_MARK_MEMBER_NAME(__stack,"__stack");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_VISIT_MEMBER_NAME(__color,"__color");
	HX_VISIT_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_VISIT_MEMBER_NAME(__colorString,"__colorString");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayState,"__displayState");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focus,"__focus");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__invalidated,"__invalidated");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_VISIT_MEMBER_NAME(__mouseX,"__mouseX");
	HX_VISIT_MEMBER_NAME(__mouseY,"__mouseY");
	HX_VISIT_MEMBER_NAME(__originalWidth,"__originalWidth");
	HX_VISIT_MEMBER_NAME(__originalHeight,"__originalHeight");
	HX_VISIT_MEMBER_NAME(__renderer,"__renderer");
	HX_VISIT_MEMBER_NAME(__rendering,"__rendering");
	HX_VISIT_MEMBER_NAME(__stack,"__stack");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return get_focus(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		if (HX_FIELD_EQ(inName,"__color") ) { return __color; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__focus") ) { return __focus; }
		if (HX_FIELD_EQ(inName,"__stack") ) { return __stack; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { return __mouseX; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { return __mouseY; }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { return __renderer; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { return __wasDirty; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { return __rendering; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__fireEvent") ) { return __fireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { return __colorSplit; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { return __colorString; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { return __invalidated; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return stageFocusRect; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { return __displayState; }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouseWheel") ) { return __onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { return __mouseOutStack; }
		if (HX_FIELD_EQ(inName,"__originalWidth") ) { return __originalWidth; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"__originalHeight") ) { return __originalHeight; }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		if (HX_FIELD_EQ(inName,"__convertKeyCode") ) { return __convertKeyCode_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
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
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { return __clearBeforeRender; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::openfl::display::StageAlign >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { return set_focus(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< ::openfl::display::StageQuality >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { __color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focus") ) { __focus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stack") ) { __stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { __mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { __mouseY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< ::openfl::display::StageScaleMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { __renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { __wasDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { __rendering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { __colorSplit=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { __colorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { __invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { stageFocusRect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { __displayState=inValue.Cast< ::openfl::display::StageDisplayState >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { __mouseOutStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__originalWidth") ) { __originalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__originalHeight") ) { __originalHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { __clearBeforeRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("allowsFullScreen"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("displayState"));
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("quality"));
	outFields->push(HX_CSTRING("scaleMode"));
	outFields->push(HX_CSTRING("stage3Ds"));
	outFields->push(HX_CSTRING("stageFocusRect"));
	outFields->push(HX_CSTRING("stageHeight"));
	outFields->push(HX_CSTRING("stageWidth"));
	outFields->push(HX_CSTRING("__clearBeforeRender"));
	outFields->push(HX_CSTRING("__color"));
	outFields->push(HX_CSTRING("__colorSplit"));
	outFields->push(HX_CSTRING("__colorString"));
	outFields->push(HX_CSTRING("__dirty"));
	outFields->push(HX_CSTRING("__displayState"));
	outFields->push(HX_CSTRING("__dragBounds"));
	outFields->push(HX_CSTRING("__dragObject"));
	outFields->push(HX_CSTRING("__dragOffsetX"));
	outFields->push(HX_CSTRING("__dragOffsetY"));
	outFields->push(HX_CSTRING("__focus"));
	outFields->push(HX_CSTRING("__fullscreen"));
	outFields->push(HX_CSTRING("__invalidated"));
	outFields->push(HX_CSTRING("__lastClickTime"));
	outFields->push(HX_CSTRING("__mouseOutStack"));
	outFields->push(HX_CSTRING("__mouseX"));
	outFields->push(HX_CSTRING("__mouseY"));
	outFields->push(HX_CSTRING("__originalWidth"));
	outFields->push(HX_CSTRING("__originalHeight"));
	outFields->push(HX_CSTRING("__renderer"));
	outFields->push(HX_CSTRING("__rendering"));
	outFields->push(HX_CSTRING("__stack"));
	outFields->push(HX_CSTRING("__transparent"));
	outFields->push(HX_CSTRING("__wasDirty"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::StageAlign*/ ,(int)offsetof(Stage_obj,align),HX_CSTRING("align")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_CSTRING("allowsFullScreen")},
	{hx::fsFloat,(int)offsetof(Stage_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsObject /*::openfl::display::StageQuality*/ ,(int)offsetof(Stage_obj,quality),HX_CSTRING("quality")},
	{hx::fsObject /*::openfl::display::StageScaleMode*/ ,(int)offsetof(Stage_obj,scaleMode),HX_CSTRING("scaleMode")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_CSTRING("stage3Ds")},
	{hx::fsBool,(int)offsetof(Stage_obj,stageFocusRect),HX_CSTRING("stageFocusRect")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_CSTRING("stageHeight")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_CSTRING("stageWidth")},
	{hx::fsBool,(int)offsetof(Stage_obj,__clearBeforeRender),HX_CSTRING("__clearBeforeRender")},
	{hx::fsInt,(int)offsetof(Stage_obj,__color),HX_CSTRING("__color")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Stage_obj,__colorSplit),HX_CSTRING("__colorSplit")},
	{hx::fsString,(int)offsetof(Stage_obj,__colorString),HX_CSTRING("__colorString")},
	{hx::fsBool,(int)offsetof(Stage_obj,__dirty),HX_CSTRING("__dirty")},
	{hx::fsObject /*::openfl::display::StageDisplayState*/ ,(int)offsetof(Stage_obj,__displayState),HX_CSTRING("__displayState")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_CSTRING("__dragBounds")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_CSTRING("__dragObject")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_CSTRING("__dragOffsetX")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_CSTRING("__dragOffsetY")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__focus),HX_CSTRING("__focus")},
	{hx::fsBool,(int)offsetof(Stage_obj,__fullscreen),HX_CSTRING("__fullscreen")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalidated),HX_CSTRING("__invalidated")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_CSTRING("__lastClickTime")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__mouseOutStack),HX_CSTRING("__mouseOutStack")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseX),HX_CSTRING("__mouseX")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseY),HX_CSTRING("__mouseY")},
	{hx::fsInt,(int)offsetof(Stage_obj,__originalWidth),HX_CSTRING("__originalWidth")},
	{hx::fsInt,(int)offsetof(Stage_obj,__originalHeight),HX_CSTRING("__originalHeight")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(Stage_obj,__renderer),HX_CSTRING("__renderer")},
	{hx::fsBool,(int)offsetof(Stage_obj,__rendering),HX_CSTRING("__rendering")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__stack),HX_CSTRING("__stack")},
	{hx::fsBool,(int)offsetof(Stage_obj,__transparent),HX_CSTRING("__transparent")},
	{hx::fsBool,(int)offsetof(Stage_obj,__wasDirty),HX_CSTRING("__wasDirty")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("align"),
	HX_CSTRING("allowsFullScreen"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("quality"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("stage3Ds"),
	HX_CSTRING("stageFocusRect"),
	HX_CSTRING("stageHeight"),
	HX_CSTRING("stageWidth"),
	HX_CSTRING("__clearBeforeRender"),
	HX_CSTRING("__color"),
	HX_CSTRING("__colorSplit"),
	HX_CSTRING("__colorString"),
	HX_CSTRING("__dirty"),
	HX_CSTRING("__displayState"),
	HX_CSTRING("__dragBounds"),
	HX_CSTRING("__dragObject"),
	HX_CSTRING("__dragOffsetX"),
	HX_CSTRING("__dragOffsetY"),
	HX_CSTRING("__focus"),
	HX_CSTRING("__fullscreen"),
	HX_CSTRING("__invalidated"),
	HX_CSTRING("__lastClickTime"),
	HX_CSTRING("__mouseOutStack"),
	HX_CSTRING("__mouseX"),
	HX_CSTRING("__mouseY"),
	HX_CSTRING("__originalWidth"),
	HX_CSTRING("__originalHeight"),
	HX_CSTRING("__renderer"),
	HX_CSTRING("__rendering"),
	HX_CSTRING("__stack"),
	HX_CSTRING("__transparent"),
	HX_CSTRING("__wasDirty"),
	HX_CSTRING("globalToLocal"),
	HX_CSTRING("init"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("localToGlobal"),
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
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchEnd"),
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
	HX_CSTRING("__convertKeyCode"),
	HX_CSTRING("__drag"),
	HX_CSTRING("__fireEvent"),
	HX_CSTRING("__getInteractive"),
	HX_CSTRING("__onKey"),
	HX_CSTRING("__onMouse"),
	HX_CSTRING("__onMouseWheel"),
	HX_CSTRING("__onTouch"),
	HX_CSTRING("__resize"),
	HX_CSTRING("__startDrag"),
	HX_CSTRING("__stopDrag"),
	HX_CSTRING("__update"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_focus"),
	HX_CSTRING("set_focus"),
	HX_CSTRING("get_displayState"),
	HX_CSTRING("set_displayState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#endif

Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Stage"), hx::TCanCast< Stage_obj> ,sStaticFields,sMemberFields,
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

void Stage_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
