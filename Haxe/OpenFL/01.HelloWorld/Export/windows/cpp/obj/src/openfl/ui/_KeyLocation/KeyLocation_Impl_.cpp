#include <hxcpp.h>

#ifndef INCLUDED_openfl_ui__KeyLocation_KeyLocation_Impl_
#include <openfl/ui/_KeyLocation/KeyLocation_Impl_.h>
#endif
namespace openfl{
namespace ui{
namespace _KeyLocation{

Void KeyLocation_Impl__obj::__construct()
{
	return null();
}

//KeyLocation_Impl__obj::~KeyLocation_Impl__obj() { }

Dynamic KeyLocation_Impl__obj::__CreateEmpty() { return  new KeyLocation_Impl__obj; }
hx::ObjectPtr< KeyLocation_Impl__obj > KeyLocation_Impl__obj::__new()
{  hx::ObjectPtr< KeyLocation_Impl__obj > result = new KeyLocation_Impl__obj();
	result->__construct();
	return result;}

Dynamic KeyLocation_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyLocation_Impl__obj > result = new KeyLocation_Impl__obj();
	result->__construct();
	return result;}

int KeyLocation_Impl__obj::STANDARD;

int KeyLocation_Impl__obj::LEFT;

int KeyLocation_Impl__obj::RIGHT;

int KeyLocation_Impl__obj::NUM_PAD;


KeyLocation_Impl__obj::KeyLocation_Impl__obj()
{
}

Dynamic KeyLocation_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic KeyLocation_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyLocation_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STANDARD"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("NUM_PAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyLocation_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyLocation_Impl__obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(KeyLocation_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(KeyLocation_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(KeyLocation_Impl__obj::NUM_PAD,"NUM_PAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyLocation_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyLocation_Impl__obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(KeyLocation_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(KeyLocation_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(KeyLocation_Impl__obj::NUM_PAD,"NUM_PAD");
};

#endif

Class KeyLocation_Impl__obj::__mClass;

void KeyLocation_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.ui._KeyLocation.KeyLocation_Impl_"), hx::TCanCast< KeyLocation_Impl__obj> ,sStaticFields,sMemberFields,
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

void KeyLocation_Impl__obj::__boot()
{
	STANDARD= (int)0;
	LEFT= (int)1;
	RIGHT= (int)2;
	NUM_PAD= (int)3;
}

} // end namespace openfl
} // end namespace ui
} // end namespace _KeyLocation
