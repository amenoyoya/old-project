#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventType_Impl_
#include <lime/_backend/native/_NativeApplication/GamepadEventType_Impl_.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void GamepadEventType_Impl__obj::__construct()
{
	return null();
}

//GamepadEventType_Impl__obj::~GamepadEventType_Impl__obj() { }

Dynamic GamepadEventType_Impl__obj::__CreateEmpty() { return  new GamepadEventType_Impl__obj; }
hx::ObjectPtr< GamepadEventType_Impl__obj > GamepadEventType_Impl__obj::__new()
{  hx::ObjectPtr< GamepadEventType_Impl__obj > result = new GamepadEventType_Impl__obj();
	result->__construct();
	return result;}

Dynamic GamepadEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadEventType_Impl__obj > result = new GamepadEventType_Impl__obj();
	result->__construct();
	return result;}

int GamepadEventType_Impl__obj::AXIS_MOVE;

int GamepadEventType_Impl__obj::BUTTON_DOWN;

int GamepadEventType_Impl__obj::BUTTON_UP;

int GamepadEventType_Impl__obj::CONNECT;

int GamepadEventType_Impl__obj::DISCONNECT;


GamepadEventType_Impl__obj::GamepadEventType_Impl__obj()
{
}

Dynamic GamepadEventType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadEventType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEventType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AXIS_MOVE"),
	HX_CSTRING("BUTTON_DOWN"),
	HX_CSTRING("BUTTON_UP"),
	HX_CSTRING("CONNECT"),
	HX_CSTRING("DISCONNECT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::AXIS_MOVE,"AXIS_MOVE");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::BUTTON_UP,"BUTTON_UP");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(GamepadEventType_Impl__obj::DISCONNECT,"DISCONNECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::AXIS_MOVE,"AXIS_MOVE");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::BUTTON_UP,"BUTTON_UP");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(GamepadEventType_Impl__obj::DISCONNECT,"DISCONNECT");
};

#endif

Class GamepadEventType_Impl__obj::__mClass;

void GamepadEventType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.GamepadEventType_Impl_"), hx::TCanCast< GamepadEventType_Impl__obj> ,sStaticFields,sMemberFields,
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

void GamepadEventType_Impl__obj::__boot()
{
	AXIS_MOVE= (int)0;
	BUTTON_DOWN= (int)1;
	BUTTON_UP= (int)2;
	CONNECT= (int)3;
	DISCONNECT= (int)4;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
