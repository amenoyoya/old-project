#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_MaskManager
#include <openfl/_internal/renderer/canvas/MaskManager.h>
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
namespace canvas{

Void CanvasRenderer_obj::__construct(int width,int height,::lime::graphics::CanvasRenderContext context)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",18,0x1be544e6)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(20)
	super::__construct(width,height);
	HX_STACK_LINE(22)
	this->context = context;
	HX_STACK_LINE(24)
	::openfl::_internal::renderer::RenderSession _g = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->renderSession = _g;
	HX_STACK_LINE(25)
	this->renderSession->context = context;
	HX_STACK_LINE(26)
	this->renderSession->roundPixels = true;
	HX_STACK_LINE(27)
	this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(29)
	::openfl::_internal::renderer::canvas::MaskManager _g1 = ::openfl::_internal::renderer::canvas::MaskManager_obj::__new(this->renderSession);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->renderSession->maskManager = _g1;
}
;
	return null();
}

//CanvasRenderer_obj::~CanvasRenderer_obj() { }

Dynamic CanvasRenderer_obj::__CreateEmpty() { return  new CanvasRenderer_obj; }
hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new(int width,int height,::lime::graphics::CanvasRenderContext context)
{  hx::ObjectPtr< CanvasRenderer_obj > result = new CanvasRenderer_obj();
	result->__construct(width,height,context);
	return result;}

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CanvasRenderer_obj > result = new CanvasRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CanvasRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",35,0x1be544e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(37)
		this->context->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
		HX_STACK_LINE(38)
		this->context->globalAlpha = (int)1;
		HX_STACK_LINE(40)
		if (((bool(!(stage->__transparent)) && bool(stage->__clearBeforeRender)))){
			HX_STACK_LINE(42)
			this->context->fillStyle = stage->__colorString;
			HX_STACK_LINE(43)
			this->context->fillRect((int)0,(int)0,stage->stageWidth,stage->stageHeight);
		}
		else{
			HX_STACK_LINE(45)
			if (((bool(stage->__transparent) && bool(stage->__clearBeforeRender)))){
				HX_STACK_LINE(47)
				this->context->clearRect((int)0,(int)0,stage->stageWidth,stage->stageHeight);
			}
		}
		HX_STACK_LINE(51)
		stage->__renderCanvas(this->renderSession);
	}
return null();
}



CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CanvasRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CanvasRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_CSTRING("context")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.CanvasRenderer"), hx::TCanCast< CanvasRenderer_obj> ,sStaticFields,sMemberFields,
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

void CanvasRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
