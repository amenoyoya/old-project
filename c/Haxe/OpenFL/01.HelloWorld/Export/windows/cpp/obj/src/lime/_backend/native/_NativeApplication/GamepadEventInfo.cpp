#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#include <lime/_backend/native/_NativeApplication/GamepadEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void GamepadEventInfo_obj::__construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.GamepadEventInfo","new",0xafb72336,"lime._backend.native._NativeApplication.GamepadEventInfo.new","lime/_backend/native/NativeApplication.hx",359,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_button,"button")
HX_STACK_ARG(__o_axis,"axis")
HX_STACK_ARG(__o_value,"value")
int id = __o_id.Default(0);
int button = __o_button.Default(0);
int axis = __o_axis.Default(0);
Float value = __o_value.Default(0);
{
	HX_STACK_LINE(361)
	this->type = type;
	HX_STACK_LINE(362)
	this->id = id;
	HX_STACK_LINE(363)
	this->button = button;
	HX_STACK_LINE(364)
	this->axis = axis;
	HX_STACK_LINE(365)
	this->value = value;
}
;
	return null();
}

//GamepadEventInfo_obj::~GamepadEventInfo_obj() { }

Dynamic GamepadEventInfo_obj::__CreateEmpty() { return  new GamepadEventInfo_obj; }
hx::ObjectPtr< GamepadEventInfo_obj > GamepadEventInfo_obj::__new(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value)
{  hx::ObjectPtr< GamepadEventInfo_obj > result = new GamepadEventInfo_obj();
	result->__construct(type,__o_id,__o_button,__o_axis,__o_value);
	return result;}

Dynamic GamepadEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadEventInfo_obj > result = new GamepadEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::lime::_backend::native::_NativeApplication::GamepadEventInfo GamepadEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.GamepadEventInfo","clone",0x156147b3,"lime._backend.native._NativeApplication.GamepadEventInfo.clone","lime/_backend/native/NativeApplication.hx",372,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	return ::lime::_backend::native::_NativeApplication::GamepadEventInfo_obj::__new(this->type,this->id,this->button,this->axis,this->value);
}


HX_DEFINE_DYNAMIC_FUNC0(GamepadEventInfo_obj,clone,return )


GamepadEventInfo_obj::GamepadEventInfo_obj()
{
}

Dynamic GamepadEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("button"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,axis),HX_CSTRING("axis")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,button),HX_CSTRING("button")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(GamepadEventInfo_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(GamepadEventInfo_obj,value),HX_CSTRING("value")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("axis"),
	HX_CSTRING("button"),
	HX_CSTRING("id"),
	HX_CSTRING("type"),
	HX_CSTRING("value"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadEventInfo_obj::__mClass,"__mClass");
};

#endif

Class GamepadEventInfo_obj::__mClass;

void GamepadEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.GamepadEventInfo"), hx::TCanCast< GamepadEventInfo_obj> ,sStaticFields,sMemberFields,
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

void GamepadEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
