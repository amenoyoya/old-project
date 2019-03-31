#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTextField
#include <openfl/_internal/renderer/canvas/CanvasTextField.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void CanvasTextField_obj::__construct()
{
	return null();
}

//CanvasTextField_obj::~CanvasTextField_obj() { }

Dynamic CanvasTextField_obj::__CreateEmpty() { return  new CanvasTextField_obj; }
hx::ObjectPtr< CanvasTextField_obj > CanvasTextField_obj::__new()
{  hx::ObjectPtr< CanvasTextField_obj > result = new CanvasTextField_obj();
	result->__construct();
	return result;}

Dynamic CanvasTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasTextField_obj > result = new CanvasTextField_obj();
	result->__construct();
	return result;}

Void CanvasTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","render",0xbf0ed28a,"openfl._internal.renderer.canvas.CanvasTextField.render","openfl/_internal/renderer/canvas/CanvasTextField.hx",26,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTextField_obj,render,(void))

Void CanvasTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","renderText",0x30fed857,"openfl._internal.renderer.canvas.CanvasTextField.renderText","openfl/_internal/renderer/canvas/CanvasTextField.hx",69,0xcdf61a26)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CanvasTextField_obj,renderText,(void))

bool CanvasTextField_obj::update( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasTextField","update",0x40eaed3d,"openfl._internal.renderer.canvas.CanvasTextField.update","openfl/_internal/renderer/canvas/CanvasTextField.hx",281,0xcdf61a26)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(281)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasTextField_obj,update,return )


CanvasTextField_obj::CanvasTextField_obj()
{
}

Dynamic CanvasTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasTextField_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTextField_obj::__mClass,"__mClass");
};

#endif

Class CanvasTextField_obj::__mClass;

void CanvasTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasTextField"), hx::TCanCast< CanvasTextField_obj> ,sStaticFields,sMemberFields,
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

void CanvasTextField_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
