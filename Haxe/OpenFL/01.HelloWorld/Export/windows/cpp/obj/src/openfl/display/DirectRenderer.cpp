#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void DirectRenderer_obj::__construct(::String __o_type)
{
HX_STACK_FRAME("openfl.display.DirectRenderer","new",0xe4324b68,"openfl.display.DirectRenderer.new","openfl/display/DirectRenderer.hx",18,0x16986dc6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_CSTRING("DirectRenderer"));
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//DirectRenderer_obj::~DirectRenderer_obj() { }

Dynamic DirectRenderer_obj::__CreateEmpty() { return  new DirectRenderer_obj; }
hx::ObjectPtr< DirectRenderer_obj > DirectRenderer_obj::__new(::String __o_type)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(__o_type);
	return result;}

Dynamic DirectRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic DirectRenderer_obj::get_render( ){
	HX_STACK_FRAME("openfl.display.DirectRenderer","get_render",0x6ffb5117,"openfl.display.DirectRenderer.get_render","openfl/display/DirectRenderer.hx",32,0x16986dc6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return this->__render;
}


HX_DEFINE_DYNAMIC_FUNC0(DirectRenderer_obj,get_render,return )

Dynamic DirectRenderer_obj::set_render( Dynamic value){
	HX_STACK_FRAME("openfl.display.DirectRenderer","set_render",0x7378ef8b,"openfl.display.DirectRenderer.set_render","openfl/display/DirectRenderer.hx",39,0x16986dc6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(39)
	return this->__render = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,set_render,return )


DirectRenderer_obj::DirectRenderer_obj()
{
}

void DirectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectRenderer);
	HX_MARK_MEMBER_NAME(__render,"__render");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__render,"__render");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DirectRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return get_render(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { return __render; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_render") ) { return get_render_dyn(); }
		if (HX_FIELD_EQ(inName,"set_render") ) { return set_render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return set_render(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__render") ) { __render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("render"));
	outFields->push(HX_CSTRING("__render"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DirectRenderer_obj,__render),HX_CSTRING("__render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__render"),
	HX_CSTRING("get_render"),
	HX_CSTRING("set_render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
};

#endif

Class DirectRenderer_obj::__mClass;

void DirectRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DirectRenderer"), hx::TCanCast< DirectRenderer_obj> ,sStaticFields,sMemberFields,
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

void DirectRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
