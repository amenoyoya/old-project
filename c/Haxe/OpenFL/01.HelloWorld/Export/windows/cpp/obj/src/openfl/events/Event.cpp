#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
namespace openfl{
namespace events{

Void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl.events.Event","new",0x2731c6f5,"openfl.events.Event.new","openfl/events/Event.hx",357,0x7220a03b)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(359)
	this->type = type;
	HX_STACK_LINE(360)
	this->bubbles = bubbles;
	HX_STACK_LINE(361)
	this->cancelable = cancelable;
	HX_STACK_LINE(362)
	this->eventPhase = ::openfl::events::EventPhase_obj::AT_TARGET;
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::openfl::events::Event Event_obj::clone( ){
	HX_STACK_FRAME("openfl.events.Event","clone",0x5b9b9932,"openfl.events.Event.clone","openfl/events/Event.hx",390,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	::openfl::events::Event event = ::openfl::events::Event_obj::__new(this->type,this->bubbles,this->cancelable);		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(393)
	event->eventPhase = this->eventPhase;
	HX_STACK_LINE(394)
	event->target = this->target;
	HX_STACK_LINE(395)
	event->currentTarget = this->currentTarget;
	HX_STACK_LINE(396)
	return event;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

bool Event_obj::isDefaultPrevented( ){
	HX_STACK_FRAME("openfl.events.Event","isDefaultPrevented",0x5475e94b,"openfl.events.Event.isDefaultPrevented","openfl/events/Event.hx",411,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(411)
	return (bool(this->__isCancelled) || bool(this->__isCancelledNow));
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,isDefaultPrevented,return )

Void Event_obj::stopImmediatePropagation( ){
{
		HX_STACK_FRAME("openfl.events.Event","stopImmediatePropagation",0xa67252c8,"openfl.events.Event.stopImmediatePropagation","openfl/events/Event.hx",427,0x7220a03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(429)
		this->__isCancelled = true;
		HX_STACK_LINE(430)
		this->__isCancelledNow = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

Void Event_obj::stopPropagation( ){
{
		HX_STACK_FRAME("openfl.events.Event","stopPropagation",0xb07183ff,"openfl.events.Event.stopPropagation","openfl/events/Event.hx",450,0x7220a03b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(450)
		this->__isCancelled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

::String Event_obj::toString( ){
	HX_STACK_FRAME("openfl.events.Event","toString",0x6e61ddf7,"openfl.events.Event.toString","openfl/events/Event.hx",464,0x7220a03b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(466)
	::String _g = ::Std_obj::string(this->bubbles);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(466)
	::String _g1 = (((HX_CSTRING("[Event type=") + this->type) + HX_CSTRING(" bubbles=")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(466)
	::String _g2 = (_g1 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(466)
	::String _g3 = ::Std_obj::string(this->cancelable);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(466)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(466)
	return (_g4 + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::CONTEXT3D_CREATE;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::UNLOAD;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(bubbles,"bubbles");
	HX_MARK_MEMBER_NAME(cancelable,"cancelable");
	HX_MARK_MEMBER_NAME(currentTarget,"currentTarget");
	HX_MARK_MEMBER_NAME(eventPhase,"eventPhase");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_MARK_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bubbles,"bubbles");
	HX_VISIT_MEMBER_NAME(cancelable,"cancelable");
	HX_VISIT_MEMBER_NAME(currentTarget,"currentTarget");
	HX_VISIT_MEMBER_NAME(eventPhase,"eventPhase");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_VISIT_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
}

Dynamic Event_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { return ID3; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { return INIT; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { return OPEN; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { return ADDED; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { return CLOSE; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { return CANCEL; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { return CHANGE; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { return RENDER; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { return RESIZE; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { return SCROLL; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { return SELECT; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { return UNLOAD; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { return CONNECT; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { return REMOVED; }
		if (HX_FIELD_EQ(inName,"bubbles") ) { return bubbles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { return ACTIVATE; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { return DEACTIVATE; }
		if (HX_FIELD_EQ(inName,"cancelable") ) { return cancelable; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { return eventPhase; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { return ENTER_FRAME; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { return MOUSE_LEAVE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { return currentTarget; }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { return __isCancelled; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { return ADDED_TO_STAGE; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { return SOUND_COMPLETE; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { return CONTEXT3D_CREATE; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { return TAB_INDEX_CHANGE; }
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { return __isCancelledNow; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { return REMOVED_FROM_STAGE; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { return TAB_ENABLED_CHANGE; }
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return isDefaultPrevented_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { return TAB_CHILDREN_CHANGE; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { ID3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { INIT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { SCROLL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { UNLOAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { CONNECT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bubbles") ) { bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cancelable") ) { cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { eventPhase=inValue.Cast< ::openfl::events::EventPhase >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { MOUSE_LEAVE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { __isCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { CONTEXT3D_CREATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { TAB_INDEX_CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { __isCancelledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { TAB_ENABLED_CHANGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { TAB_CHILDREN_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bubbles"));
	outFields->push(HX_CSTRING("cancelable"));
	outFields->push(HX_CSTRING("currentTarget"));
	outFields->push(HX_CSTRING("eventPhase"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("__isCancelled"));
	outFields->push(HX_CSTRING("__isCancelledNow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ACTIVATE"),
	HX_CSTRING("ADDED"),
	HX_CSTRING("ADDED_TO_STAGE"),
	HX_CSTRING("CANCEL"),
	HX_CSTRING("CHANGE"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("CONNECT"),
	HX_CSTRING("CONTEXT3D_CREATE"),
	HX_CSTRING("DEACTIVATE"),
	HX_CSTRING("ENTER_FRAME"),
	HX_CSTRING("ID3"),
	HX_CSTRING("INIT"),
	HX_CSTRING("MOUSE_LEAVE"),
	HX_CSTRING("OPEN"),
	HX_CSTRING("REMOVED"),
	HX_CSTRING("REMOVED_FROM_STAGE"),
	HX_CSTRING("RENDER"),
	HX_CSTRING("RESIZE"),
	HX_CSTRING("SCROLL"),
	HX_CSTRING("SELECT"),
	HX_CSTRING("SOUND_COMPLETE"),
	HX_CSTRING("TAB_CHILDREN_CHANGE"),
	HX_CSTRING("TAB_ENABLED_CHANGE"),
	HX_CSTRING("TAB_INDEX_CHANGE"),
	HX_CSTRING("UNLOAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,bubbles),HX_CSTRING("bubbles")},
	{hx::fsBool,(int)offsetof(Event_obj,cancelable),HX_CSTRING("cancelable")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,currentTarget),HX_CSTRING("currentTarget")},
	{hx::fsObject /*::openfl::events::EventPhase*/ ,(int)offsetof(Event_obj,eventPhase),HX_CSTRING("eventPhase")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,target),HX_CSTRING("target")},
	{hx::fsString,(int)offsetof(Event_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelled),HX_CSTRING("__isCancelled")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelledNow),HX_CSTRING("__isCancelledNow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bubbles"),
	HX_CSTRING("cancelable"),
	HX_CSTRING("currentTarget"),
	HX_CSTRING("eventPhase"),
	HX_CSTRING("target"),
	HX_CSTRING("type"),
	HX_CSTRING("__isCancelled"),
	HX_CSTRING("__isCancelledNow"),
	HX_CSTRING("clone"),
	HX_CSTRING("isDefaultPrevented"),
	HX_CSTRING("stopImmediatePropagation"),
	HX_CSTRING("stopPropagation"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_VISIT_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#endif

Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.Event"), hx::TCanCast< Event_obj> ,sStaticFields,sMemberFields,
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

void Event_obj::__boot()
{
	ACTIVATE= HX_CSTRING("activate");
	ADDED= HX_CSTRING("added");
	ADDED_TO_STAGE= HX_CSTRING("addedToStage");
	CANCEL= HX_CSTRING("cancel");
	CHANGE= HX_CSTRING("change");
	CLOSE= HX_CSTRING("close");
	COMPLETE= HX_CSTRING("complete");
	CONNECT= HX_CSTRING("connect");
	CONTEXT3D_CREATE= HX_CSTRING("context3DCreate");
	DEACTIVATE= HX_CSTRING("deactivate");
	ENTER_FRAME= HX_CSTRING("enterFrame");
	ID3= HX_CSTRING("id3");
	INIT= HX_CSTRING("init");
	MOUSE_LEAVE= HX_CSTRING("mouseLeave");
	OPEN= HX_CSTRING("open");
	REMOVED= HX_CSTRING("removed");
	REMOVED_FROM_STAGE= HX_CSTRING("removedFromStage");
	RENDER= HX_CSTRING("render");
	RESIZE= HX_CSTRING("resize");
	SCROLL= HX_CSTRING("scroll");
	SELECT= HX_CSTRING("select");
	SOUND_COMPLETE= HX_CSTRING("soundComplete");
	TAB_CHILDREN_CHANGE= HX_CSTRING("tabChildrenChange");
	TAB_ENABLED_CHANGE= HX_CSTRING("tabEnabledChange");
	TAB_INDEX_CHANGE= HX_CSTRING("tabIndexChange");
	UNLOAD= HX_CSTRING("unload");
}

} // end namespace openfl
} // end namespace events
