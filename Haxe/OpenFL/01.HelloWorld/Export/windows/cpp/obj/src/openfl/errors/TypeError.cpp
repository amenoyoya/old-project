#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
namespace openfl{
namespace errors{

Void TypeError_obj::__construct(::String __o_inMessage)
{
HX_STACK_FRAME("openfl.errors.TypeError","new",0x4857781b,"openfl.errors.TypeError.new","openfl/errors/TypeError.hx",9,0xef0d65d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inMessage,"inMessage")
::String inMessage = __o_inMessage.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(9)
	super::__construct(inMessage,(int)0);
}
;
	return null();
}

//TypeError_obj::~TypeError_obj() { }

Dynamic TypeError_obj::__CreateEmpty() { return  new TypeError_obj; }
hx::ObjectPtr< TypeError_obj > TypeError_obj::__new(::String __o_inMessage)
{  hx::ObjectPtr< TypeError_obj > result = new TypeError_obj();
	result->__construct(__o_inMessage);
	return result;}

Dynamic TypeError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeError_obj > result = new TypeError_obj();
	result->__construct(inArgs[0]);
	return result;}


TypeError_obj::TypeError_obj()
{
}

Dynamic TypeError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TypeError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TypeError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeError_obj::__mClass,"__mClass");
};

#endif

Class TypeError_obj::__mClass;

void TypeError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.errors.TypeError"), hx::TCanCast< TypeError_obj> ,sStaticFields,sMemberFields,
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

void TypeError_obj::__boot()
{
}

} // end namespace openfl
} // end namespace errors
