#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeMouse_MouseCursorType_Impl_
#include <lime/_backend/native/_NativeMouse/MouseCursorType_Impl_.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeMouse{

Void MouseCursorType_Impl__obj::__construct()
{
	return null();
}

//MouseCursorType_Impl__obj::~MouseCursorType_Impl__obj() { }

Dynamic MouseCursorType_Impl__obj::__CreateEmpty() { return  new MouseCursorType_Impl__obj; }
hx::ObjectPtr< MouseCursorType_Impl__obj > MouseCursorType_Impl__obj::__new()
{  hx::ObjectPtr< MouseCursorType_Impl__obj > result = new MouseCursorType_Impl__obj();
	result->__construct();
	return result;}

Dynamic MouseCursorType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseCursorType_Impl__obj > result = new MouseCursorType_Impl__obj();
	result->__construct();
	return result;}

int MouseCursorType_Impl__obj::ARROW;

int MouseCursorType_Impl__obj::CROSSHAIR;

int MouseCursorType_Impl__obj::DEFAULT;

int MouseCursorType_Impl__obj::MOVE;

int MouseCursorType_Impl__obj::POINTER;

int MouseCursorType_Impl__obj::RESIZE_NESW;

int MouseCursorType_Impl__obj::RESIZE_NS;

int MouseCursorType_Impl__obj::RESIZE_NWSE;

int MouseCursorType_Impl__obj::RESIZE_WE;

int MouseCursorType_Impl__obj::TEXT;

int MouseCursorType_Impl__obj::WAIT;

int MouseCursorType_Impl__obj::WAIT_ARROW;


MouseCursorType_Impl__obj::MouseCursorType_Impl__obj()
{
}

Dynamic MouseCursorType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MouseCursorType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseCursorType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ARROW"),
	HX_CSTRING("CROSSHAIR"),
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("POINTER"),
	HX_CSTRING("RESIZE_NESW"),
	HX_CSTRING("RESIZE_NS"),
	HX_CSTRING("RESIZE_NWSE"),
	HX_CSTRING("RESIZE_WE"),
	HX_CSTRING("TEXT"),
	HX_CSTRING("WAIT"),
	HX_CSTRING("WAIT_ARROW"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::CROSSHAIR,"CROSSHAIR");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::POINTER,"POINTER");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NESW,"RESIZE_NESW");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NS,"RESIZE_NS");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_WE,"RESIZE_WE");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::WAIT,"WAIT");
	HX_MARK_MEMBER_NAME(MouseCursorType_Impl__obj::WAIT_ARROW,"WAIT_ARROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::CROSSHAIR,"CROSSHAIR");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::POINTER,"POINTER");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NESW,"RESIZE_NESW");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NS,"RESIZE_NS");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::RESIZE_WE,"RESIZE_WE");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::WAIT,"WAIT");
	HX_VISIT_MEMBER_NAME(MouseCursorType_Impl__obj::WAIT_ARROW,"WAIT_ARROW");
};

#endif

Class MouseCursorType_Impl__obj::__mClass;

void MouseCursorType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeMouse.MouseCursorType_Impl_"), hx::TCanCast< MouseCursorType_Impl__obj> ,sStaticFields,sMemberFields,
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

void MouseCursorType_Impl__obj::__boot()
{
	ARROW= (int)0;
	CROSSHAIR= (int)1;
	DEFAULT= (int)2;
	MOVE= (int)3;
	POINTER= (int)4;
	RESIZE_NESW= (int)5;
	RESIZE_NS= (int)6;
	RESIZE_NWSE= (int)7;
	RESIZE_WE= (int)8;
	TEXT= (int)9;
	WAIT= (int)10;
	WAIT_ARROW= (int)11;
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeMouse
