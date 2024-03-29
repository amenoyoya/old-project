#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
namespace openfl{
namespace events{

Void KeyboardEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,Dynamic keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{
HX_STACK_FRAME("openfl.events.KeyboardEvent","new",0xa9982e4e,"openfl.events.KeyboardEvent.new","openfl/events/KeyboardEvent.hx",123,0xce5f4702)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_charCodeValue,"charCodeValue")
HX_STACK_ARG(__o_keyCodeValue,"keyCodeValue")
HX_STACK_ARG(keyLocationValue,"keyLocationValue")
HX_STACK_ARG(__o_ctrlKeyValue,"ctrlKeyValue")
HX_STACK_ARG(__o_altKeyValue,"altKeyValue")
HX_STACK_ARG(__o_shiftKeyValue,"shiftKeyValue")
HX_STACK_ARG(__o_controlKeyValue,"controlKeyValue")
HX_STACK_ARG(__o_commandKeyValue,"commandKeyValue")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int charCodeValue = __o_charCodeValue.Default(0);
int keyCodeValue = __o_keyCodeValue.Default(0);
bool ctrlKeyValue = __o_ctrlKeyValue.Default(false);
bool altKeyValue = __o_altKeyValue.Default(false);
bool shiftKeyValue = __o_shiftKeyValue.Default(false);
bool controlKeyValue = __o_controlKeyValue.Default(false);
bool commandKeyValue = __o_commandKeyValue.Default(false);
{
	HX_STACK_LINE(125)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(127)
	this->charCode = charCodeValue;
	HX_STACK_LINE(128)
	this->keyCode = keyCodeValue;
	HX_STACK_LINE(129)
	if (((keyLocationValue != null()))){
		HX_STACK_LINE(129)
		this->keyLocation = keyLocationValue;
	}
	else{
		HX_STACK_LINE(129)
		this->keyLocation = (int)0;
	}
	HX_STACK_LINE(130)
	this->ctrlKey = ctrlKeyValue;
	HX_STACK_LINE(131)
	this->altKey = altKeyValue;
	HX_STACK_LINE(132)
	this->shiftKey = shiftKeyValue;
	HX_STACK_LINE(133)
	this->controlKey = controlKeyValue;
	HX_STACK_LINE(134)
	this->commandKey = commandKeyValue;
}
;
	return null();
}

//KeyboardEvent_obj::~KeyboardEvent_obj() { }

Dynamic KeyboardEvent_obj::__CreateEmpty() { return  new KeyboardEvent_obj; }
hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,Dynamic keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{  hx::ObjectPtr< KeyboardEvent_obj > result = new KeyboardEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_charCodeValue,__o_keyCodeValue,keyLocationValue,__o_ctrlKeyValue,__o_altKeyValue,__o_shiftKeyValue,__o_controlKeyValue,__o_commandKeyValue);
	return result;}

Dynamic KeyboardEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardEvent_obj > result = new KeyboardEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

::openfl::events::Event KeyboardEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.KeyboardEvent","clone",0x11ed48cb,"openfl.events.KeyboardEvent.clone","openfl/events/KeyboardEvent.hx",143,0xce5f4702)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return ::openfl::events::KeyboardEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->charCode,this->keyCode,this->keyLocation,this->ctrlKey,this->altKey,this->shiftKey,this->controlKey,this->commandKey);
}


::String KeyboardEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.KeyboardEvent","toString",0xd22933fe,"openfl.events.KeyboardEvent.toString","openfl/events/KeyboardEvent.hx",148,0xce5f4702)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	::String _g = ::Std_obj::string(this->bubbles);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(150)
	::String _g1 = (((HX_CSTRING("[KeyboardEvent type=") + this->type) + HX_CSTRING(" bubbles=")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(150)
	::String _g2 = (_g1 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(150)
	::String _g3 = ::Std_obj::string(this->cancelable);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(150)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(150)
	::String _g5 = (_g4 + HX_CSTRING(" charCode="));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(150)
	::String _g6 = (_g5 + this->charCode);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(150)
	::String _g7 = (_g6 + HX_CSTRING(" keyCode="));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(150)
	::String _g8 = (_g7 + this->keyCode);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(150)
	::String _g9 = (_g8 + HX_CSTRING(" keyLocation="));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(150)
	::String _g10 = ::Std_obj::string(this->keyLocation);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(150)
	::String _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(150)
	::String _g12 = (_g11 + HX_CSTRING(" ctrlKey="));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(150)
	::String _g13 = ::Std_obj::string(this->ctrlKey);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(150)
	::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(150)
	::String _g15 = (_g14 + HX_CSTRING(" altKey="));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(150)
	::String _g16 = ::Std_obj::string(this->altKey);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(150)
	::String _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(150)
	::String _g18 = (_g17 + HX_CSTRING(" shiftKey="));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(150)
	::String _g19 = ::Std_obj::string(this->shiftKey);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(150)
	::String _g20 = (_g18 + _g19);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(150)
	return (_g20 + HX_CSTRING("]"));
}


::String KeyboardEvent_obj::KEY_DOWN;

::String KeyboardEvent_obj::KEY_UP;


KeyboardEvent_obj::KeyboardEvent_obj()
{
}

Dynamic KeyboardEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { return KEY_UP; }
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { return KEY_DOWN; }
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return controlKey; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { return keyLocation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyboardEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { KEY_UP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { KEY_DOWN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { keyLocation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("altKey"));
	outFields->push(HX_CSTRING("charCode"));
	outFields->push(HX_CSTRING("ctrlKey"));
	outFields->push(HX_CSTRING("commandKey"));
	outFields->push(HX_CSTRING("controlKey"));
	outFields->push(HX_CSTRING("keyCode"));
	outFields->push(HX_CSTRING("keyLocation"));
	outFields->push(HX_CSTRING("shiftKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("KEY_DOWN"),
	HX_CSTRING("KEY_UP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,altKey),HX_CSTRING("altKey")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,charCode),HX_CSTRING("charCode")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,ctrlKey),HX_CSTRING("ctrlKey")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,commandKey),HX_CSTRING("commandKey")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,controlKey),HX_CSTRING("controlKey")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyCode),HX_CSTRING("keyCode")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyLocation),HX_CSTRING("keyLocation")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,shiftKey),HX_CSTRING("shiftKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("altKey"),
	HX_CSTRING("charCode"),
	HX_CSTRING("ctrlKey"),
	HX_CSTRING("commandKey"),
	HX_CSTRING("controlKey"),
	HX_CSTRING("keyCode"),
	HX_CSTRING("keyLocation"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#endif

Class KeyboardEvent_obj::__mClass;

void KeyboardEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.KeyboardEvent"), hx::TCanCast< KeyboardEvent_obj> ,sStaticFields,sMemberFields,
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

void KeyboardEvent_obj::__boot()
{
	KEY_DOWN= HX_CSTRING("keyDown");
	KEY_UP= HX_CSTRING("keyUp");
}

} // end namespace openfl
} // end namespace events
