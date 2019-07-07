#include <hxcpp.h>

#ifndef INCLUDED_lime_system__System_SystemDirectory_Impl_
#include <lime/system/_System/SystemDirectory_Impl_.h>
#endif
namespace lime{
namespace system{
namespace _System{

Void SystemDirectory_Impl__obj::__construct()
{
	return null();
}

//SystemDirectory_Impl__obj::~SystemDirectory_Impl__obj() { }

Dynamic SystemDirectory_Impl__obj::__CreateEmpty() { return  new SystemDirectory_Impl__obj; }
hx::ObjectPtr< SystemDirectory_Impl__obj > SystemDirectory_Impl__obj::__new()
{  hx::ObjectPtr< SystemDirectory_Impl__obj > result = new SystemDirectory_Impl__obj();
	result->__construct();
	return result;}

Dynamic SystemDirectory_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemDirectory_Impl__obj > result = new SystemDirectory_Impl__obj();
	result->__construct();
	return result;}

int SystemDirectory_Impl__obj::APPLICATION;

int SystemDirectory_Impl__obj::APPLICATION_STORAGE;

int SystemDirectory_Impl__obj::DESKTOP;

int SystemDirectory_Impl__obj::DOCUMENTS;

int SystemDirectory_Impl__obj::FONTS;

int SystemDirectory_Impl__obj::USER;


SystemDirectory_Impl__obj::SystemDirectory_Impl__obj()
{
}

Dynamic SystemDirectory_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SystemDirectory_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SystemDirectory_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("APPLICATION"),
	HX_CSTRING("APPLICATION_STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCUMENTS"),
	HX_CSTRING("FONTS"),
	HX_CSTRING("USER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::APPLICATION,"APPLICATION");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::APPLICATION_STORAGE,"APPLICATION_STORAGE");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::DOCUMENTS,"DOCUMENTS");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::FONTS,"FONTS");
	HX_MARK_MEMBER_NAME(SystemDirectory_Impl__obj::USER,"USER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::APPLICATION,"APPLICATION");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::APPLICATION_STORAGE,"APPLICATION_STORAGE");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::DOCUMENTS,"DOCUMENTS");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::FONTS,"FONTS");
	HX_VISIT_MEMBER_NAME(SystemDirectory_Impl__obj::USER,"USER");
};

#endif

Class SystemDirectory_Impl__obj::__mClass;

void SystemDirectory_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.system._System.SystemDirectory_Impl_"), hx::TCanCast< SystemDirectory_Impl__obj> ,sStaticFields,sMemberFields,
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

void SystemDirectory_Impl__obj::__boot()
{
	APPLICATION= (int)0;
	APPLICATION_STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCUMENTS= (int)3;
	FONTS= (int)4;
	USER= (int)5;
}

} // end namespace lime
} // end namespace system
} // end namespace _System
