#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace events{

Void MouseEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{
HX_STACK_FRAME("openfl.events.MouseEvent","new",0x5c6da59e,"openfl.events.MouseEvent.new","openfl/events/MouseEvent.hx",291,0xd3783172)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_localX,"localX")
HX_STACK_ARG(__o_localY,"localY")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_ctrlKey,"ctrlKey")
HX_STACK_ARG(__o_altKey,"altKey")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_buttonDown,"buttonDown")
HX_STACK_ARG(__o_delta,"delta")
HX_STACK_ARG(__o_commandKey,"commandKey")
HX_STACK_ARG(__o_clickCount,"clickCount")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
{
	HX_STACK_LINE(293)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(295)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(296)
	this->altKey = altKey;
	HX_STACK_LINE(297)
	this->ctrlKey = ctrlKey;
	HX_STACK_LINE(298)
	this->bubbles = bubbles;
	HX_STACK_LINE(299)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(300)
	this->delta = delta;
	HX_STACK_LINE(301)
	this->localX = localX;
	HX_STACK_LINE(302)
	this->localY = localY;
	HX_STACK_LINE(303)
	this->buttonDown = buttonDown;
	HX_STACK_LINE(304)
	this->commandKey = commandKey;
	HX_STACK_LINE(305)
	this->clickCount = clickCount;
}
;
	return null();
}

//MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{  hx::ObjectPtr< MouseEvent_obj > result = new MouseEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return result;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > result = new MouseEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return result;}

::openfl::events::Event MouseEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.MouseEvent","clone",0x3e8b341b,"openfl.events.MouseEvent.clone","openfl/events/MouseEvent.hx",336,0xd3783172)
	HX_STACK_THIS(this)
	HX_STACK_LINE(336)
	return ::openfl::events::MouseEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->localX,this->localY,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->buttonDown,this->delta,this->commandKey,this->clickCount);
}


::String MouseEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.MouseEvent","toString",0x2fb13aae,"openfl.events.MouseEvent.toString","openfl/events/MouseEvent.hx",341,0xd3783172)
	HX_STACK_THIS(this)
	HX_STACK_LINE(343)
	::String _g = ::Std_obj::string(this->bubbles);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(343)
	::String _g1 = (((HX_CSTRING("[MouseEvent type=") + this->type) + HX_CSTRING(" bubbles=")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(343)
	::String _g2 = (_g1 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(343)
	::String _g3 = ::Std_obj::string(this->cancelable);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(343)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(343)
	::String _g5 = (_g4 + HX_CSTRING(" localX="));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(343)
	::String _g6 = (_g5 + this->localX);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(343)
	::String _g7 = (_g6 + HX_CSTRING(" localY="));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(343)
	::String _g8 = (_g7 + this->localY);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(343)
	::String _g9 = (_g8 + HX_CSTRING(" relatedObject="));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(343)
	::String _g10 = ::Std_obj::string(this->relatedObject);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(343)
	::String _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(343)
	::String _g12 = (_g11 + HX_CSTRING(" ctrlKey="));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(343)
	::String _g13 = ::Std_obj::string(this->ctrlKey);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(343)
	::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(343)
	::String _g15 = (_g14 + HX_CSTRING(" altKey="));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(343)
	::String _g16 = ::Std_obj::string(this->altKey);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(343)
	::String _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(343)
	::String _g18 = (_g17 + HX_CSTRING(" shiftKey="));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(343)
	::String _g19 = ::Std_obj::string(this->shiftKey);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(343)
	::String _g20 = (_g18 + _g19);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(343)
	::String _g21 = (_g20 + HX_CSTRING(" buttonDown="));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(343)
	::String _g22 = ::Std_obj::string(this->buttonDown);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(343)
	::String _g23 = (_g21 + _g22);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(343)
	::String _g24 = (_g23 + HX_CSTRING(" delta="));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(343)
	::String _g25 = (_g24 + this->delta);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(343)
	return (_g25 + HX_CSTRING("]"));
}


Void MouseEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl.events.MouseEvent","updateAfterEvent",0xc76737c9,"openfl.events.MouseEvent.updateAfterEvent","openfl/events/MouseEvent.hx",353,0xd3783172)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,updateAfterEvent,(void))

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::DOUBLE_CLICK;

::String MouseEvent_obj::MIDDLE_CLICK;

::String MouseEvent_obj::MIDDLE_MOUSE_DOWN;

::String MouseEvent_obj::MIDDLE_MOUSE_UP;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;

::String MouseEvent_obj::ROLL_OUT;

::String MouseEvent_obj::ROLL_OVER;

bool MouseEvent_obj::__altKey;

Array< bool > MouseEvent_obj::__buttonDown;

bool MouseEvent_obj::__commandKey;

bool MouseEvent_obj::__ctrlKey;

bool MouseEvent_obj::__shiftKey;

::openfl::events::MouseEvent MouseEvent_obj::__create( ::String type,int button,Float stageX,Float stageY,::openfl::geom::Point local,::openfl::display::InteractiveObject target,hx::Null< int >  __o_delta){
int delta = __o_delta.Default(0);
	HX_STACK_FRAME("openfl.events.MouseEvent","__create",0x1b813c1e,"openfl.events.MouseEvent.__create","openfl/events/MouseEvent.hx",310,0xd3783172)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(button,"button")
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_ARG(local,"local")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(delta,"delta")
{
		HX_STACK_LINE(312)
		::String _switch_1 = (type);
		if (  ( _switch_1==::openfl::events::MouseEvent_obj::MOUSE_DOWN) ||  ( _switch_1==::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN) ||  ( _switch_1==::openfl::events::MouseEvent_obj::RIGHT_MOUSE_DOWN)){
			HX_STACK_LINE(316)
			::openfl::events::MouseEvent_obj::__buttonDown[button] = true;
		}
		else if (  ( _switch_1==::openfl::events::MouseEvent_obj::MOUSE_UP) ||  ( _switch_1==::openfl::events::MouseEvent_obj::MIDDLE_MOUSE_UP) ||  ( _switch_1==::openfl::events::MouseEvent_obj::RIGHT_MOUSE_UP)){
			HX_STACK_LINE(320)
			::openfl::events::MouseEvent_obj::__buttonDown[button] = false;
		}
		HX_STACK_LINE(324)
		::openfl::events::MouseEvent event = ::openfl::events::MouseEvent_obj::__new(type,true,false,local->x,local->y,null(),::openfl::events::MouseEvent_obj::__ctrlKey,::openfl::events::MouseEvent_obj::__altKey,::openfl::events::MouseEvent_obj::__shiftKey,::openfl::events::MouseEvent_obj::__buttonDown->__get(button),delta,::openfl::events::MouseEvent_obj::__commandKey,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(325)
		event->stageX = stageX;
		HX_STACK_LINE(326)
		event->stageY = stageY;
		HX_STACK_LINE(327)
		event->target = target;
		HX_STACK_LINE(329)
		return event;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(MouseEvent_obj,__create,return )


MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(clickCount,"clickCount");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(clickCount,"clickCount");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { return CLICK; }
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { return MOUSE_UP; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { return ROLL_OUT; }
		if (HX_FIELD_EQ(inName,"__altKey") ) { return __altKey; }
		if (HX_FIELD_EQ(inName,"__create") ) { return __create_dyn(); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { return MOUSE_OUT; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { return ROLL_OVER; }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { return __ctrlKey; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { return MOUSE_DOWN; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { return MOUSE_MOVE; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { return MOUSE_OVER; }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { return __shiftKey; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { return clickCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { return MOUSE_WHEEL; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { return RIGHT_CLICK; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { return DOUBLE_CLICK; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { return MIDDLE_CLICK; }
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { return __buttonDown; }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { return __commandKey; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { return RIGHT_MOUSE_UP; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { return MIDDLE_MOUSE_UP; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { return RIGHT_MOUSE_DOWN; }
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { return MIDDLE_MOUSE_DOWN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { ROLL_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__altKey") ) { __altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { MOUSE_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { ROLL_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__ctrlKey") ) { __ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { MOUSE_MOVE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { MOUSE_OVER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shiftKey") ) { __shiftKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { clickCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { MOUSE_WHEEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { RIGHT_CLICK=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { DOUBLE_CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { MIDDLE_CLICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buttonDown") ) { __buttonDown=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__commandKey") ) { __commandKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { RIGHT_MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { MIDDLE_MOUSE_UP=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { RIGHT_MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { MIDDLE_MOUSE_DOWN=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("altKey"));
	outFields->push(HX_CSTRING("buttonDown"));
	outFields->push(HX_CSTRING("commandKey"));
	outFields->push(HX_CSTRING("clickCount"));
	outFields->push(HX_CSTRING("ctrlKey"));
	outFields->push(HX_CSTRING("delta"));
	outFields->push(HX_CSTRING("localX"));
	outFields->push(HX_CSTRING("localY"));
	outFields->push(HX_CSTRING("relatedObject"));
	outFields->push(HX_CSTRING("shiftKey"));
	outFields->push(HX_CSTRING("stageX"));
	outFields->push(HX_CSTRING("stageY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK"),
	HX_CSTRING("DOUBLE_CLICK"),
	HX_CSTRING("MIDDLE_CLICK"),
	HX_CSTRING("MIDDLE_MOUSE_DOWN"),
	HX_CSTRING("MIDDLE_MOUSE_UP"),
	HX_CSTRING("MOUSE_DOWN"),
	HX_CSTRING("MOUSE_MOVE"),
	HX_CSTRING("MOUSE_OUT"),
	HX_CSTRING("MOUSE_OVER"),
	HX_CSTRING("MOUSE_UP"),
	HX_CSTRING("MOUSE_WHEEL"),
	HX_CSTRING("RIGHT_CLICK"),
	HX_CSTRING("RIGHT_MOUSE_DOWN"),
	HX_CSTRING("RIGHT_MOUSE_UP"),
	HX_CSTRING("ROLL_OUT"),
	HX_CSTRING("ROLL_OVER"),
	HX_CSTRING("__altKey"),
	HX_CSTRING("__buttonDown"),
	HX_CSTRING("__commandKey"),
	HX_CSTRING("__ctrlKey"),
	HX_CSTRING("__shiftKey"),
	HX_CSTRING("__create"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MouseEvent_obj,altKey),HX_CSTRING("altKey")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_CSTRING("buttonDown")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,commandKey),HX_CSTRING("commandKey")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,clickCount),HX_CSTRING("clickCount")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,ctrlKey),HX_CSTRING("ctrlKey")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,delta),HX_CSTRING("delta")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localX),HX_CSTRING("localX")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localY),HX_CSTRING("localY")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(MouseEvent_obj,relatedObject),HX_CSTRING("relatedObject")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,shiftKey),HX_CSTRING("shiftKey")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageX),HX_CSTRING("stageX")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageY),HX_CSTRING("stageY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("altKey"),
	HX_CSTRING("buttonDown"),
	HX_CSTRING("commandKey"),
	HX_CSTRING("clickCount"),
	HX_CSTRING("ctrlKey"),
	HX_CSTRING("delta"),
	HX_CSTRING("localX"),
	HX_CSTRING("localY"),
	HX_CSTRING("relatedObject"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("stageX"),
	HX_CSTRING("stageY"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	HX_CSTRING("updateAfterEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__altKey,"__altKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__buttonDown,"__buttonDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__commandKey,"__commandKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__ctrlKey,"__ctrlKey");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__shiftKey,"__shiftKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__altKey,"__altKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__buttonDown,"__buttonDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__commandKey,"__commandKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__ctrlKey,"__ctrlKey");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__shiftKey,"__shiftKey");
};

#endif

Class MouseEvent_obj::__mClass;

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.MouseEvent"), hx::TCanCast< MouseEvent_obj> ,sStaticFields,sMemberFields,
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

void MouseEvent_obj::__boot()
{
	CLICK= HX_CSTRING("click");
	DOUBLE_CLICK= HX_CSTRING("doubleClick");
	MIDDLE_CLICK= HX_CSTRING("middleClick");
	MIDDLE_MOUSE_DOWN= HX_CSTRING("middleMouseDown");
	MIDDLE_MOUSE_UP= HX_CSTRING("middleMouseUp");
	MOUSE_DOWN= HX_CSTRING("mouseDown");
	MOUSE_MOVE= HX_CSTRING("mouseMove");
	MOUSE_OUT= HX_CSTRING("mouseOut");
	MOUSE_OVER= HX_CSTRING("mouseOver");
	MOUSE_UP= HX_CSTRING("mouseUp");
	MOUSE_WHEEL= HX_CSTRING("mouseWheel");
	RIGHT_CLICK= HX_CSTRING("rightClick");
	RIGHT_MOUSE_DOWN= HX_CSTRING("rightMouseDown");
	RIGHT_MOUSE_UP= HX_CSTRING("rightMouseUp");
	ROLL_OUT= HX_CSTRING("rollOut");
	ROLL_OVER= HX_CSTRING("rollOver");
	__buttonDown= Array_obj< bool >::__new().Add(false).Add(false).Add(false);
}

} // end namespace openfl
} // end namespace events
