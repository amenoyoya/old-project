#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
namespace lime{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > result = new Mouse_obj();
	result->__construct();
	return result;}

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("lime.ui.Mouse","hide",0x4d58708c,"lime.ui.Mouse.hide","lime/ui/Mouse.hx",12,0x9aa406fa)
		HX_STACK_LINE(12)
		::lime::_backend::native::NativeMouse_obj::hide();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("lime.ui.Mouse","show",0x549d10c7,"lime.ui.Mouse.show","lime/ui/Mouse.hx",19,0x9aa406fa)
		HX_STACK_LINE(19)
		::lime::_backend::native::NativeMouse_obj::show();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

::lime::ui::MouseCursor Mouse_obj::get_cursor( ){
	HX_STACK_FRAME("lime.ui.Mouse","get_cursor",0xcd882de9,"lime.ui.Mouse.get_cursor","lime/ui/Mouse.hx",33,0x9aa406fa)
	HX_STACK_LINE(33)
	return ::lime::_backend::native::NativeMouse_obj::get_cursor();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::lime::ui::MouseCursor Mouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	HX_STACK_FRAME("lime.ui.Mouse","set_cursor",0xd105cc5d,"lime.ui.Mouse.set_cursor","lime/ui/Mouse.hx",40,0x9aa406fa)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	return ::lime::_backend::native::NativeMouse_obj::set_cursor(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )


Mouse_obj::Mouse_obj()
{
}

Dynamic Mouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return get_cursor(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { return get_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return set_cursor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return set_cursor(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mouse_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("get_cursor"),
	HX_CSTRING("set_cursor"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

Class Mouse_obj::__mClass;

void Mouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.Mouse"), hx::TCanCast< Mouse_obj> ,sStaticFields,sMemberFields,
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

void Mouse_obj::__boot()
{
}

} // end namespace lime
} // end namespace ui
