#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TouchEventInfo
#include <lime/_backend/native/_NativeApplication/TouchEventInfo.h>
#endif
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

Void TouchEventInfo_obj::__construct(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("lime._backend.native._NativeApplication.TouchEventInfo","new",0x974ae818,"lime._backend.native._NativeApplication.TouchEventInfo.new","lime/_backend/native/NativeApplication.hx",509,0xb13849fd)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_id,"id")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int id = __o_id.Default(0);
{
	HX_STACK_LINE(511)
	this->type = type;
	HX_STACK_LINE(512)
	this->x = x;
	HX_STACK_LINE(513)
	this->y = y;
	HX_STACK_LINE(514)
	this->id = id;
}
;
	return null();
}

//TouchEventInfo_obj::~TouchEventInfo_obj() { }

Dynamic TouchEventInfo_obj::__CreateEmpty() { return  new TouchEventInfo_obj; }
hx::ObjectPtr< TouchEventInfo_obj > TouchEventInfo_obj::__new(Dynamic type,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_id)
{  hx::ObjectPtr< TouchEventInfo_obj > result = new TouchEventInfo_obj();
	result->__construct(type,__o_x,__o_y,__o_id);
	return result;}

Dynamic TouchEventInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventInfo_obj > result = new TouchEventInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::lime::_backend::native::_NativeApplication::TouchEventInfo TouchEventInfo_obj::clone( ){
	HX_STACK_FRAME("lime._backend.native._NativeApplication.TouchEventInfo","clone",0xdd198915,"lime._backend.native._NativeApplication.TouchEventInfo.clone","lime/_backend/native/NativeApplication.hx",521,0xb13849fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	return ::lime::_backend::native::_NativeApplication::TouchEventInfo_obj::__new(this->type,this->x,this->y,this->id);
}


HX_DEFINE_DYNAMIC_FUNC0(TouchEventInfo_obj,clone,return )


TouchEventInfo_obj::TouchEventInfo_obj()
{
}

Dynamic TouchEventInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TouchEventInfo_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(TouchEventInfo_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(TouchEventInfo_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("type"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventInfo_obj::__mClass,"__mClass");
};

#endif

Class TouchEventInfo_obj::__mClass;

void TouchEventInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime._backend.native._NativeApplication.TouchEventInfo"), hx::TCanCast< TouchEventInfo_obj> ,sStaticFields,sMemberFields,
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

void TouchEventInfo_obj::__boot()
{
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
