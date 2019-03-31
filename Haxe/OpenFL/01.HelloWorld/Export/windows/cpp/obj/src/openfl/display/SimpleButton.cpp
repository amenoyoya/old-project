#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace display{

Void SimpleButton_obj::__construct(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState)
{
HX_STACK_FRAME("openfl.display.SimpleButton","new",0x26b2c720,"openfl.display.SimpleButton.new","openfl/display/SimpleButton.hx",121,0x4b6b858e)
HX_STACK_THIS(this)
HX_STACK_ARG(upState,"upState")
HX_STACK_ARG(overState,"overState")
HX_STACK_ARG(downState,"downState")
HX_STACK_ARG(hitTestState,"hitTestState")
{
	HX_STACK_LINE(123)
	super::__construct();
	HX_STACK_LINE(125)
	this->enabled = true;
	HX_STACK_LINE(126)
	this->trackAsMenu = false;
	HX_STACK_LINE(127)
	this->useHandCursor = true;
	HX_STACK_LINE(130)
	this->mouseChildren = false;
	HX_STACK_LINE(132)
	::openfl::display::DisplayObject _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(132)
	if (((upState != null()))){
		HX_STACK_LINE(132)
		_g = upState;
	}
	else{
		HX_STACK_LINE(132)
		_g = this->__generateDefaultState();
	}
	HX_STACK_LINE(132)
	this->set_upState(_g);
	HX_STACK_LINE(133)
	::openfl::display::DisplayObject _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(133)
	if (((overState != null()))){
		HX_STACK_LINE(133)
		_g1 = overState;
	}
	else{
		HX_STACK_LINE(133)
		_g1 = this->__generateDefaultState();
	}
	HX_STACK_LINE(133)
	this->set_overState(_g1);
	HX_STACK_LINE(134)
	::openfl::display::DisplayObject _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(134)
	if (((downState != null()))){
		HX_STACK_LINE(134)
		_g2 = downState;
	}
	else{
		HX_STACK_LINE(134)
		_g2 = this->__generateDefaultState();
	}
	HX_STACK_LINE(134)
	this->set_downState(_g2);
	HX_STACK_LINE(135)
	::openfl::display::DisplayObject _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(135)
	if (((hitTestState != null()))){
		HX_STACK_LINE(135)
		_g3 = hitTestState;
	}
	else{
		HX_STACK_LINE(135)
		_g3 = this->__generateDefaultState();
	}
	HX_STACK_LINE(135)
	this->set_hitTestState(_g3);
	HX_STACK_LINE(137)
	this->set___currentState(this->upState);
}
;
	return null();
}

//SimpleButton_obj::~SimpleButton_obj() { }

Dynamic SimpleButton_obj::__CreateEmpty() { return  new SimpleButton_obj; }
hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState)
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct(upState,overState,downState,hitTestState);
	return result;}

Dynamic SimpleButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void SimpleButton_obj::switchState( ::openfl::display::DisplayObject state){
{
		HX_STACK_FRAME("openfl.display.SimpleButton","switchState",0x5bdebe3d,"openfl.display.SimpleButton.switchState","openfl/display/SimpleButton.hx",142,0x4b6b858e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(144)
		if (((bool((this->__currentState != null())) && bool((this->__currentState->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(146)
			this->removeChild(this->__currentState);
		}
		HX_STACK_LINE(150)
		if (((state != null()))){
			HX_STACK_LINE(152)
			this->addChild(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,switchState,(void))

::openfl::display::DisplayObject SimpleButton_obj::__generateDefaultState( ){
	HX_STACK_FRAME("openfl.display.SimpleButton","__generateDefaultState",0xfb3ebcc5,"openfl.display.SimpleButton.__generateDefaultState","openfl/display/SimpleButton.hx",161,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return ::openfl::display::DisplayObject_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,__generateDefaultState,return )

::openfl::display::DisplayObject SimpleButton_obj::set_downState( ::openfl::display::DisplayObject downState){
	HX_STACK_FRAME("openfl.display.SimpleButton","set_downState",0x0a49e6f2,"openfl.display.SimpleButton.set_downState","openfl/display/SimpleButton.hx",173,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(downState,"downState")
	HX_STACK_LINE(175)
	if (((bool((this->downState != null())) && bool((this->__currentState == this->downState))))){
		HX_STACK_LINE(175)
		this->set___currentState(downState);
	}
	HX_STACK_LINE(176)
	return this->downState = downState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_downState,return )

::openfl::display::DisplayObject SimpleButton_obj::set_hitTestState( ::openfl::display::DisplayObject hitTestState){
	HX_STACK_FRAME("openfl.display.SimpleButton","set_hitTestState",0x437c16c9,"openfl.display.SimpleButton.set_hitTestState","openfl/display/SimpleButton.hx",181,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitTestState,"hitTestState")
	HX_STACK_LINE(183)
	if (((hitTestState != this->hitTestState))){
		HX_STACK_LINE(185)
		if (((bool((this->hitTestState != null())) && bool((this->hitTestState->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(187)
			this->removeChild(this->hitTestState);
		}
		HX_STACK_LINE(191)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->__this_onMouseDown_dyn(),null());
		HX_STACK_LINE(192)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->__this_onMouseOut_dyn(),null());
		HX_STACK_LINE(193)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->__this_onMouseOver_dyn(),null());
		HX_STACK_LINE(194)
		this->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->__this_onMouseUp_dyn(),null());
		HX_STACK_LINE(196)
		if (((hitTestState != null()))){
			HX_STACK_LINE(198)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->__this_onMouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(199)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->__this_onMouseOut_dyn(),null(),null(),null());
			HX_STACK_LINE(200)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->__this_onMouseOver_dyn(),null(),null(),null());
			HX_STACK_LINE(201)
			this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->__this_onMouseUp_dyn(),null(),null(),null());
			HX_STACK_LINE(203)
			hitTestState->set_alpha(0.0);
			HX_STACK_LINE(204)
			this->addChild(hitTestState);
		}
	}
	HX_STACK_LINE(210)
	return this->hitTestState = hitTestState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_hitTestState,return )

::openfl::display::DisplayObject SimpleButton_obj::set_overState( ::openfl::display::DisplayObject overState){
	HX_STACK_FRAME("openfl.display.SimpleButton","set_overState",0x57f5a0c0,"openfl.display.SimpleButton.set_overState","openfl/display/SimpleButton.hx",215,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(overState,"overState")
	HX_STACK_LINE(217)
	if (((bool((this->overState != null())) && bool((this->__currentState == this->overState))))){
		HX_STACK_LINE(217)
		this->set___currentState(overState);
	}
	HX_STACK_LINE(218)
	return this->overState = overState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_overState,return )

::openfl::media::SoundTransform SimpleButton_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl.display.SimpleButton","get_soundTransform",0x1d7d70a6,"openfl.display.SimpleButton.get_soundTransform","openfl/display/SimpleButton.hx",223,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	if (((this->__soundTransform == null()))){
		HX_STACK_LINE(227)
		::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		this->__soundTransform = _g;
	}
	HX_STACK_LINE(231)
	return ::openfl::media::SoundTransform_obj::__new(this->__soundTransform->volume,this->__soundTransform->pan);
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,get_soundTransform,return )

::openfl::media::SoundTransform SimpleButton_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl.display.SimpleButton","set_soundTransform",0xfa2ca31a,"openfl.display.SimpleButton.set_soundTransform","openfl/display/SimpleButton.hx",236,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(238)
	::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new(value->volume,value->pan);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(238)
	this->__soundTransform = _g;
	HX_STACK_LINE(239)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_soundTransform,return )

::openfl::display::DisplayObject SimpleButton_obj::set_upState( ::openfl::display::DisplayObject upState){
	HX_STACK_FRAME("openfl.display.SimpleButton","set_upState",0x553bb399,"openfl.display.SimpleButton.set_upState","openfl/display/SimpleButton.hx",244,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(upState,"upState")
	HX_STACK_LINE(246)
	if (((bool((this->upState != null())) && bool((this->__currentState == this->upState))))){
		HX_STACK_LINE(246)
		this->set___currentState(upState);
	}
	HX_STACK_LINE(247)
	return this->upState = upState;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set_upState,return )

::openfl::display::DisplayObject SimpleButton_obj::set___currentState( ::openfl::display::DisplayObject state){
	HX_STACK_FRAME("openfl.display.SimpleButton","set___currentState",0xc32592b5,"openfl.display.SimpleButton.set___currentState","openfl/display/SimpleButton.hx",252,0x4b6b858e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(254)
	if (((this->__currentState == state))){
		HX_STACK_LINE(254)
		return state;
	}
	HX_STACK_LINE(255)
	this->switchState(state);
	HX_STACK_LINE(257)
	return this->__currentState = state;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,set___currentState,return )

Void SimpleButton_obj::__this_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.display.SimpleButton","__this_onMouseDown",0x383f91c7,"openfl.display.SimpleButton.__this_onMouseDown","openfl/display/SimpleButton.hx",271,0x4b6b858e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(271)
		this->set___currentState(this->downState);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseDown,(void))

Void SimpleButton_obj::__this_onMouseOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.display.SimpleButton","__this_onMouseOut",0x6c31fac9,"openfl.display.SimpleButton.__this_onMouseOut","openfl/display/SimpleButton.hx",278,0x4b6b858e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(278)
		if (((this->upState != this->__currentState))){
			HX_STACK_LINE(280)
			this->set___currentState(this->upState);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseOut,(void))

Void SimpleButton_obj::__this_onMouseOver( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.display.SimpleButton","__this_onMouseOver",0x3f8a2ab9,"openfl.display.SimpleButton.__this_onMouseOver","openfl/display/SimpleButton.hx",289,0x4b6b858e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(289)
		if (((this->overState != this->__currentState))){
			HX_STACK_LINE(291)
			this->set___currentState(this->overState);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseOver,(void))

Void SimpleButton_obj::__this_onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("openfl.display.SimpleButton","__this_onMouseUp",0xd7286c80,"openfl.display.SimpleButton.__this_onMouseUp","openfl/display/SimpleButton.hx",300,0x4b6b858e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(300)
		this->set___currentState(this->overState);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,__this_onMouseUp,(void))


SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(downState,"downState");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(hitTestState,"hitTestState");
	HX_MARK_MEMBER_NAME(overState,"overState");
	HX_MARK_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_MARK_MEMBER_NAME(upState,"upState");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(__currentState,"__currentState");
	HX_MARK_MEMBER_NAME(__soundTransform,"__soundTransform");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(downState,"downState");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(hitTestState,"hitTestState");
	HX_VISIT_MEMBER_NAME(overState,"overState");
	HX_VISIT_MEMBER_NAME(trackAsMenu,"trackAsMenu");
	HX_VISIT_MEMBER_NAME(upState,"upState");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(__currentState,"__currentState");
	HX_VISIT_MEMBER_NAME(__soundTransform,"__soundTransform");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"upState") ) { return upState; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { return downState; }
		if (HX_FIELD_EQ(inName,"overState") ) { return overState; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { return trackAsMenu; }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_upState") ) { return set_upState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { return hitTestState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"set_downState") ) { return set_downState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overState") ) { return set_overState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return get_soundTransform(); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { return __currentState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return __soundTransform; }
		if (HX_FIELD_EQ(inName,"set_hitTestState") ) { return set_hitTestState_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseUp") ) { return __this_onMouseUp_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__this_onMouseOut") ) { return __this_onMouseOut_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set___currentState") ) { return set___currentState_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseDown") ) { return __this_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"__this_onMouseOver") ) { return __this_onMouseOver_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__generateDefaultState") ) { return __generateDefaultState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upState") ) { if (inCallProp) return set_upState(inValue);upState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"downState") ) { if (inCallProp) return set_downState(inValue);downState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overState") ) { if (inCallProp) return set_overState(inValue);overState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"trackAsMenu") ) { trackAsMenu=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestState") ) { if (inCallProp) return set_hitTestState(inValue);hitTestState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return set_soundTransform(inValue); }
		if (HX_FIELD_EQ(inName,"__currentState") ) { if (inCallProp) return set___currentState(inValue);__currentState=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { __soundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("downState"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("hitTestState"));
	outFields->push(HX_CSTRING("overState"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("trackAsMenu"));
	outFields->push(HX_CSTRING("upState"));
	outFields->push(HX_CSTRING("useHandCursor"));
	outFields->push(HX_CSTRING("__currentState"));
	outFields->push(HX_CSTRING("__soundTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,downState),HX_CSTRING("downState")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,hitTestState),HX_CSTRING("hitTestState")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,overState),HX_CSTRING("overState")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,trackAsMenu),HX_CSTRING("trackAsMenu")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,upState),HX_CSTRING("upState")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,useHandCursor),HX_CSTRING("useHandCursor")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,__currentState),HX_CSTRING("__currentState")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(SimpleButton_obj,__soundTransform),HX_CSTRING("__soundTransform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("downState"),
	HX_CSTRING("enabled"),
	HX_CSTRING("hitTestState"),
	HX_CSTRING("overState"),
	HX_CSTRING("trackAsMenu"),
	HX_CSTRING("upState"),
	HX_CSTRING("useHandCursor"),
	HX_CSTRING("__currentState"),
	HX_CSTRING("__soundTransform"),
	HX_CSTRING("switchState"),
	HX_CSTRING("__generateDefaultState"),
	HX_CSTRING("set_downState"),
	HX_CSTRING("set_hitTestState"),
	HX_CSTRING("set_overState"),
	HX_CSTRING("get_soundTransform"),
	HX_CSTRING("set_soundTransform"),
	HX_CSTRING("set_upState"),
	HX_CSTRING("set___currentState"),
	HX_CSTRING("__this_onMouseDown"),
	HX_CSTRING("__this_onMouseOut"),
	HX_CSTRING("__this_onMouseOver"),
	HX_CSTRING("__this_onMouseUp"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
};

#endif

Class SimpleButton_obj::__mClass;

void SimpleButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.SimpleButton"), hx::TCanCast< SimpleButton_obj> ,sStaticFields,sMemberFields,
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

void SimpleButton_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
