#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeMouse_obj::__construct()
{
	return null();
}

//NativeMouse_obj::~NativeMouse_obj() { }

Dynamic NativeMouse_obj::__CreateEmpty() { return  new NativeMouse_obj; }
hx::ObjectPtr< NativeMouse_obj > NativeMouse_obj::__new()
{  hx::ObjectPtr< NativeMouse_obj > result = new NativeMouse_obj();
	result->__construct();
	return result;}

Dynamic NativeMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeMouse_obj > result = new NativeMouse_obj();
	result->__construct();
	return result;}

::lime::ui::MouseCursor NativeMouse_obj::__cursor;

bool NativeMouse_obj::__hidden;

Void NativeMouse_obj::hide( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","hide",0xec289e99,"lime._backend.native.NativeMouse.hide","lime/_backend/native/NativeMouse.hx",17,0x1d44ad08)
		HX_STACK_LINE(17)
		if ((!(::lime::_backend::native::NativeMouse_obj::__hidden))){
			HX_STACK_LINE(19)
			::lime::_backend::native::NativeMouse_obj::__hidden = true;
			HX_STACK_LINE(21)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_hide();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,hide,(void))

Void NativeMouse_obj::show( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeMouse","show",0xf36d3ed4,"lime._backend.native.NativeMouse.show","lime/_backend/native/NativeMouse.hx",30,0x1d44ad08)
		HX_STACK_LINE(30)
		if ((::lime::_backend::native::NativeMouse_obj::__hidden)){
			HX_STACK_LINE(32)
			::lime::_backend::native::NativeMouse_obj::__hidden = false;
			HX_STACK_LINE(34)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_show();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,show,(void))

::lime::ui::MouseCursor NativeMouse_obj::get_cursor( ){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","get_cursor",0x6045e3b6,"lime._backend.native.NativeMouse.get_cursor","lime/_backend/native/NativeMouse.hx",48,0x1d44ad08)
	HX_STACK_LINE(50)
	if (((::lime::_backend::native::NativeMouse_obj::__cursor == null()))){
		HX_STACK_LINE(50)
		return ::lime::ui::MouseCursor_obj::DEFAULT;
	}
	HX_STACK_LINE(51)
	return ::lime::_backend::native::NativeMouse_obj::__cursor;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NativeMouse_obj,get_cursor,return )

::lime::ui::MouseCursor NativeMouse_obj::set_cursor( ::lime::ui::MouseCursor value){
	HX_STACK_FRAME("lime._backend.native.NativeMouse","set_cursor",0x63c3822a,"lime._backend.native.NativeMouse.set_cursor","lime/_backend/native/NativeMouse.hx",56,0x1d44ad08)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	if (((::lime::_backend::native::NativeMouse_obj::__cursor != value))){
		HX_STACK_LINE(60)
		if ((!(::lime::_backend::native::NativeMouse_obj::__hidden))){
			HX_STACK_LINE(62)
			int type;		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(62)
			switch( (int)(value->__Index())){
				case (int)0: {
					HX_STACK_LINE(64)
					type = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(65)
					type = (int)1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(66)
					type = (int)3;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(67)
					type = (int)4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(68)
					type = (int)5;
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(69)
					type = (int)6;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(70)
					type = (int)7;
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(71)
					type = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(72)
					type = (int)9;
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(73)
					type = (int)10;
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(74)
					type = (int)11;
				}
				;break;
				default: {
					HX_STACK_LINE(75)
					type = (int)2;
				}
			}
			HX_STACK_LINE(79)
			::lime::_backend::native::NativeMouse_obj::lime_mouse_set_cursor(type);
		}
		HX_STACK_LINE(83)
		::lime::_backend::native::NativeMouse_obj::__cursor = value;
	}
	HX_STACK_LINE(87)
	return ::lime::_backend::native::NativeMouse_obj::__cursor;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeMouse_obj,set_cursor,return )

Dynamic NativeMouse_obj::lime_mouse_hide;

Dynamic NativeMouse_obj::lime_mouse_set_cursor;

Dynamic NativeMouse_obj::lime_mouse_show;


NativeMouse_obj::NativeMouse_obj()
{
}

Dynamic NativeMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { return __cursor; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { return __hidden; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { return get_cursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { return set_cursor_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { return lime_mouse_hide; }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { return lime_mouse_show; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { return lime_mouse_set_cursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NativeMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { __cursor=inValue.Cast< ::lime::ui::MouseCursor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { __hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_mouse_hide") ) { lime_mouse_hide=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_mouse_show") ) { lime_mouse_show=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_mouse_set_cursor") ) { lime_mouse_set_cursor=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeMouse_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__cursor"),
	HX_CSTRING("__hidden"),
	HX_CSTRING("hide"),
	HX_CSTRING("show"),
	HX_CSTRING("get_cursor"),
	HX_CSTRING("set_cursor"),
	HX_CSTRING("lime_mouse_hide"),
	HX_CSTRING("lime_mouse_set_cursor"),
	HX_CSTRING("lime_mouse_show"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_hide,"lime_mouse_hide");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_cursor,"lime_mouse_set_cursor");
	HX_MARK_MEMBER_NAME(NativeMouse_obj::lime_mouse_show,"lime_mouse_show");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__cursor,"__cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::__hidden,"__hidden");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_hide,"lime_mouse_hide");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_set_cursor,"lime_mouse_set_cursor");
	HX_VISIT_MEMBER_NAME(NativeMouse_obj::lime_mouse_show,"lime_mouse_show");
};

#endif

Class NativeMouse_obj::__mClass;

void NativeMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native.NativeMouse"), hx::TCanCast< NativeMouse_obj> ,sStaticFields,sMemberFields,
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

void NativeMouse_obj::__boot()
{
	lime_mouse_hide= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_hide"),(int)0,null());
	lime_mouse_set_cursor= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_set_cursor"),(int)1,null());
	lime_mouse_show= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_mouse_show"),(int)0,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
