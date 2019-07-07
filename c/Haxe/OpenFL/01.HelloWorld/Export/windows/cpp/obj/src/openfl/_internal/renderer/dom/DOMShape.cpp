#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMShape
#include <openfl/_internal/renderer/dom/DOMShape.h>
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
namespace _internal{
namespace renderer{
namespace dom{

Void DOMShape_obj::__construct()
{
	return null();
}

//DOMShape_obj::~DOMShape_obj() { }

Dynamic DOMShape_obj::__CreateEmpty() { return  new DOMShape_obj; }
hx::ObjectPtr< DOMShape_obj > DOMShape_obj::__new()
{  hx::ObjectPtr< DOMShape_obj > result = new DOMShape_obj();
	result->__construct();
	return result;}

Dynamic DOMShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMShape_obj > result = new DOMShape_obj();
	result->__construct();
	return result;}

Void DOMShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMShape","render",0x498be01e,"openfl._internal.renderer.dom.DOMShape.render","openfl/_internal/renderer/dom/DOMShape.hx",19,0xad9b03d8)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMShape_obj,render,(void))


DOMShape_obj::DOMShape_obj()
{
}

Dynamic DOMShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMShape_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("render"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMShape_obj::__mClass,"__mClass");
};

#endif

Class DOMShape_obj::__mClass;

void DOMShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.dom.DOMShape"), hx::TCanCast< DOMShape_obj> ,sStaticFields,sMemberFields,
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

void DOMShape_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
