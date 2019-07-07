#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace ui{

Void Gamepad_obj::__construct(int id)
{
HX_STACK_FRAME("lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",18,0x36bc843e)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(20)
	this->id = id;
	HX_STACK_LINE(21)
	this->connected = true;
}
;
	return null();
}

//Gamepad_obj::~Gamepad_obj() { }

Dynamic Gamepad_obj::__CreateEmpty() { return  new Gamepad_obj; }
hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id)
{  hx::ObjectPtr< Gamepad_obj > result = new Gamepad_obj();
	result->__construct(id);
	return result;}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gamepad_obj > result = new Gamepad_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Gamepad_obj::get_guid( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",36,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::lime::ui::Gamepad_obj::lime_gamepad_get_device_name(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name( ){
	HX_STACK_FRAME("lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",47,0x36bc843e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return ::lime::ui::Gamepad_obj::lime_gamepad_get_device_name(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

::haxe::ds::IntMap Gamepad_obj::devices;

Dynamic Gamepad_obj::lime_gamepad_get_device_guid;

Dynamic Gamepad_obj::lime_gamepad_get_device_name;


Gamepad_obj::Gamepad_obj()
{
}

Dynamic Gamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { return get_guid(); }
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { return devices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return get_guid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { return lime_gamepad_get_device_guid; }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { return lime_gamepad_get_device_name; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { lime_gamepad_get_device_guid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { lime_gamepad_get_device_name=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("connected"));
	outFields->push(HX_CSTRING("guid"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("devices"),
	HX_CSTRING("lime_gamepad_get_device_guid"),
	HX_CSTRING("lime_gamepad_get_device_name"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_CSTRING("connected")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("connected"),
	HX_CSTRING("id"),
	HX_CSTRING("get_guid"),
	HX_CSTRING("get_name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_guid,"lime_gamepad_get_device_guid");
	HX_MARK_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_name,"lime_gamepad_get_device_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_guid,"lime_gamepad_get_device_guid");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::lime_gamepad_get_device_name,"lime_gamepad_get_device_name");
};

#endif

Class Gamepad_obj::__mClass;

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.Gamepad"), hx::TCanCast< Gamepad_obj> ,sStaticFields,sMemberFields,
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

void Gamepad_obj::__boot()
{
	devices= ::haxe::ds::IntMap_obj::__new();
	lime_gamepad_get_device_guid= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gamepad_get_device_guid"),(int)1,null());
	lime_gamepad_get_device_name= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gamepad_get_device_name"),(int)1,null());
}

} // end namespace lime
} // end namespace ui
