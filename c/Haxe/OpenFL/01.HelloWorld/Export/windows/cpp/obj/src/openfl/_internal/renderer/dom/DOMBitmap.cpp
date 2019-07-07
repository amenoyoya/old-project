#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMBitmap
#include <openfl/_internal/renderer/dom/DOMBitmap.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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

Void DOMBitmap_obj::__construct()
{
	return null();
}

//DOMBitmap_obj::~DOMBitmap_obj() { }

Dynamic DOMBitmap_obj::__CreateEmpty() { return  new DOMBitmap_obj; }
hx::ObjectPtr< DOMBitmap_obj > DOMBitmap_obj::__new()
{  hx::ObjectPtr< DOMBitmap_obj > result = new DOMBitmap_obj();
	result->__construct();
	return result;}

Dynamic DOMBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMBitmap_obj > result = new DOMBitmap_obj();
	result->__construct();
	return result;}

Void DOMBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","render",0x729dea7a,"openfl._internal.renderer.dom.DOMBitmap.render","openfl/_internal/renderer/dom/DOMBitmap.hx",20,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,render,(void))

Void DOMBitmap_obj::renderCanvas( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","renderCanvas",0x22facaf2,"openfl._internal.renderer.dom.DOMBitmap.renderCanvas","openfl/_internal/renderer/dom/DOMBitmap.hx",59,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderCanvas,(void))

Void DOMBitmap_obj::renderImage( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMBitmap","renderImage",0x8ed26a81,"openfl._internal.renderer.dom.DOMBitmap.renderImage","openfl/_internal/renderer/dom/DOMBitmap.hx",100,0x32124034)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderImage,(void))


DOMBitmap_obj::DOMBitmap_obj()
{
}

Dynamic DOMBitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderImage") ) { return renderImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderCanvas") ) { return renderCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMBitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMBitmap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("renderCanvas"),
	HX_CSTRING("renderImage"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMBitmap_obj::__mClass,"__mClass");
};

#endif

Class DOMBitmap_obj::__mClass;

void DOMBitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.dom.DOMBitmap"), hx::TCanCast< DOMBitmap_obj> ,sStaticFields,sMemberFields,
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

void DOMBitmap_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
