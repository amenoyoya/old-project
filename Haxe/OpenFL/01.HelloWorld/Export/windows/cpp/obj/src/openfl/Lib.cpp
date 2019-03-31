#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
namespace openfl{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > result = new Lib_obj();
	result->__construct();
	return result;}

::lime::app::Application Lib_obj::application;

::openfl::display::MovieClip Lib_obj::current;

::haxe::ds::StringMap Lib_obj::__sentWarnings;

Dynamic Lib_obj::as( Dynamic v,::Class c){
	HX_STACK_FRAME("openfl.Lib","as",0x3965ffb9,"openfl.Lib.as","openfl/Lib.hx",35,0x62fb7c98)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(35)
	if ((::Std_obj::is(v,c))){
		HX_STACK_LINE(35)
		return v;
	}
	else{
		HX_STACK_LINE(35)
		return null();
	}
	HX_STACK_LINE(35)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

::openfl::display::MovieClip Lib_obj::attach( ::String name){
	HX_STACK_FRAME("openfl.Lib","attach",0xe350160c,"openfl.Lib.attach","openfl/Lib.hx",46,0x62fb7c98)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(46)
	return ::openfl::display::MovieClip_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

int Lib_obj::getTimer( ){
	HX_STACK_FRAME("openfl.Lib","getTimer",0xd73d4956,"openfl.Lib.getTimer","openfl/Lib.hx",85,0x62fb7c98)
	HX_STACK_LINE(85)
	return ::lime::system::System_obj::getTimer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

Void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
{
		HX_STACK_FRAME("openfl.Lib","getURL",0xa66862c0,"openfl.Lib.getURL","openfl/Lib.hx",93,0x62fb7c98)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(93)
		if (((target == null()))){
			HX_STACK_LINE(95)
			target = HX_CSTRING("_blank");
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

Void Lib_obj::notImplemented( ::String api){
{
		HX_STACK_FRAME("openfl.Lib","notImplemented",0x6ff873b6,"openfl.Lib.notImplemented","openfl/Lib.hx",110,0x62fb7c98)
		HX_STACK_ARG(api,"api")
		HX_STACK_LINE(110)
		if ((!(::openfl::Lib_obj::__sentWarnings->exists(api)))){
			HX_STACK_LINE(112)
			::openfl::Lib_obj::__sentWarnings->set(api,true);
			HX_STACK_LINE(114)
			::haxe::Log_obj::trace(((HX_CSTRING("Warning: ") + api) + HX_CSTRING(" is not implemented")),hx::SourceInfo(HX_CSTRING("Lib.hx"),114,HX_CSTRING("openfl.Lib"),HX_CSTRING("notImplemented")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

Void Lib_obj::preventDefaultTouchMove( ){
{
		HX_STACK_FRAME("openfl.Lib","preventDefaultTouchMove",0x0727aa40,"openfl.Lib.preventDefaultTouchMove","openfl/Lib.hx",121,0x62fb7c98)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

Void Lib_obj::trace( Dynamic arg){
{
		HX_STACK_FRAME("openfl.Lib","trace",0xeba99a1e,"openfl.Lib.trace","openfl/Lib.hx",145,0x62fb7c98)
		HX_STACK_ARG(arg,"arg")
		HX_STACK_LINE(145)
		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_CSTRING("Lib.hx"),145,HX_CSTRING("openfl.Lib"),HX_CSTRING("trace")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))


Lib_obj::Lib_obj()
{
}

Dynamic Lib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return getURL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { return __sentWarnings; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { return notImplemented_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { return preventDefaultTouchMove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::openfl::display::MovieClip >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { __sentWarnings=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Lib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("application"),
	HX_CSTRING("current"),
	HX_CSTRING("__sentWarnings"),
	HX_CSTRING("as"),
	HX_CSTRING("attach"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("getURL"),
	HX_CSTRING("notImplemented"),
	HX_CSTRING("preventDefaultTouchMove"),
	HX_CSTRING("trace"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::application,"application");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::__sentWarnings,"__sentWarnings");
};

#endif

Class Lib_obj::__mClass;

void Lib_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Lib"), hx::TCanCast< Lib_obj> ,sStaticFields,sMemberFields,
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

void Lib_obj::__boot()
{
	current= ::openfl::display::MovieClip_obj::__new();
	__sentWarnings= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace openfl
