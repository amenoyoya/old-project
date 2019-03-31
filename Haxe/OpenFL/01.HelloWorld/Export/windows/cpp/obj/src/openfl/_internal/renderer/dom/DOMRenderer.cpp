#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

Void DOMRenderer_obj::__construct(int width,int height,::lime::graphics::DOMRenderContext element)
{
HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","new",0x90a7aed0,"openfl._internal.renderer.dom.DOMRenderer.new","openfl/_internal/renderer/dom/DOMRenderer.hx",24,0xc812e2a0)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(element,"element")
{
	HX_STACK_LINE(26)
	super::__construct(width,height);
	HX_STACK_LINE(28)
	this->element = element;
	HX_STACK_LINE(30)
	::openfl::_internal::renderer::RenderSession _g = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->renderSession = _g;
	HX_STACK_LINE(31)
	this->renderSession->element = element;
	HX_STACK_LINE(32)
	this->renderSession->roundPixels = true;
	HX_STACK_LINE(56)
	this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//DOMRenderer_obj::~DOMRenderer_obj() { }

Dynamic DOMRenderer_obj::__CreateEmpty() { return  new DOMRenderer_obj; }
hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__new(int width,int height,::lime::graphics::DOMRenderContext element)
{  hx::ObjectPtr< DOMRenderer_obj > result = new DOMRenderer_obj();
	result->__construct(width,height,element);
	return result;}

Dynamic DOMRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DOMRenderer_obj > result = new DOMRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void DOMRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","render",0x321c32e6,"openfl._internal.renderer.dom.DOMRenderer.render","openfl/_internal/renderer/dom/DOMRenderer.hx",134,0xc812e2a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(136)
		this->element->style->__FieldRef(HX_CSTRING("background")) = stage->__colorString;
		HX_STACK_LINE(138)
		this->renderSession->z = (int)1;
		HX_STACK_LINE(139)
		stage->__renderDOM(this->renderSession);
	}
return null();
}


Void DOMRenderer_obj::applyStyle( ::openfl::display::DisplayObject displayObject,::openfl::_internal::renderer::RenderSession renderSession,bool setTransform,bool setAlpha,bool setClip){
{
		HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","applyStyle",0x6484f073,"openfl._internal.renderer.dom.DOMRenderer.applyStyle","openfl/_internal/renderer/dom/DOMRenderer.hx",61,0xc812e2a0)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(setTransform,"setTransform")
		HX_STACK_ARG(setAlpha,"setAlpha")
		HX_STACK_ARG(setClip,"setClip")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DOMRenderer_obj,applyStyle,(void))


DOMRenderer_obj::DOMRenderer_obj()
{
}

void DOMRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderer);
	HX_MARK_MEMBER_NAME(element,"element");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DOMRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return element; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DOMRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast< ::lime::graphics::DOMRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("element"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applyStyle"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(DOMRenderer_obj,element),HX_CSTRING("element")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("element"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#endif

Class DOMRenderer_obj::__mClass;

void DOMRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.dom.DOMRenderer"), hx::TCanCast< DOMRenderer_obj> ,sStaticFields,sMemberFields,
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

void DOMRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
