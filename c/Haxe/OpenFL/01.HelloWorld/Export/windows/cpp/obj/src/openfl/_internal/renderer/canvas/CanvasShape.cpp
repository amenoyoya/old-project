#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasShape
#include <openfl/_internal/renderer/canvas/CanvasShape.h>
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
namespace canvas{

Void CanvasShape_obj::__construct()
{
	return null();
}

//CanvasShape_obj::~CanvasShape_obj() { }

Dynamic CanvasShape_obj::__CreateEmpty() { return  new CanvasShape_obj; }
hx::ObjectPtr< CanvasShape_obj > CanvasShape_obj::__new()
{  hx::ObjectPtr< CanvasShape_obj > result = new CanvasShape_obj();
	result->__construct();
	return result;}

Dynamic CanvasShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasShape_obj > result = new CanvasShape_obj();
	result->__construct();
	return result;}

Void CanvasShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasShape","render",0x1f16b136,"openfl._internal.renderer.canvas.CanvasShape.render","openfl/_internal/renderer/canvas/CanvasShape.hx",13,0x418319d2)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasShape_obj,render,(void))


CanvasShape_obj::CanvasShape_obj()
{
}

Dynamic CanvasShape_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasShape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasShape_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#endif

Class CanvasShape_obj::__mClass;

void CanvasShape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasShape"), hx::TCanCast< CanvasShape_obj> ,sStaticFields,sMemberFields,
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

void CanvasShape_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
