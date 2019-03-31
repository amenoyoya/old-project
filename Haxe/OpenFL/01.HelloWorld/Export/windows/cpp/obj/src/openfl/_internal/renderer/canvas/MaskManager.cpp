#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_MaskManager
#include <openfl/_internal/renderer/canvas/MaskManager.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

Void MaskManager_obj::__construct(::openfl::_internal::renderer::RenderSession renderSession)
{
HX_STACK_FRAME("openfl._internal.renderer.canvas.MaskManager","new",0xc4909a38,"openfl._internal.renderer.canvas.MaskManager.new","openfl/_internal/renderer/canvas/MaskManager.hx",19,0xbf3b7d1a)
HX_STACK_THIS(this)
HX_STACK_ARG(renderSession,"renderSession")
{
	HX_STACK_LINE(19)
	this->renderSession = renderSession;
}
;
	return null();
}

//MaskManager_obj::~MaskManager_obj() { }

Dynamic MaskManager_obj::__CreateEmpty() { return  new MaskManager_obj; }
hx::ObjectPtr< MaskManager_obj > MaskManager_obj::__new(::openfl::_internal::renderer::RenderSession renderSession)
{  hx::ObjectPtr< MaskManager_obj > result = new MaskManager_obj();
	result->__construct(renderSession);
	return result;}

Dynamic MaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaskManager_obj > result = new MaskManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.MaskManager","pushMask",0x9227fb0e,"openfl._internal.renderer.canvas.MaskManager.pushMask","openfl/_internal/renderer/canvas/MaskManager.hx",24,0xbf3b7d1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(26)
		::lime::graphics::CanvasRenderContext context = this->renderSession->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(28)
		context->save();
		HX_STACK_LINE(31)
		::openfl::geom::Matrix transform = mask->__getTransform();		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(33)
		context->setTransform(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);
		HX_STACK_LINE(35)
		context->beginPath();
		HX_STACK_LINE(36)
		mask->__renderMask(this->renderSession);
		HX_STACK_LINE(38)
		context->clip();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaskManager_obj,pushMask,(void))

Void MaskManager_obj::pushRect( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix transform){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.MaskManager","pushRect",0x95790746,"openfl._internal.renderer.canvas.MaskManager.pushRect","openfl/_internal/renderer/canvas/MaskManager.hx",45,0xbf3b7d1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(47)
		::lime::graphics::CanvasRenderContext context = this->renderSession->context;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(48)
		context->save();
		HX_STACK_LINE(50)
		context->setTransform(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty);
		HX_STACK_LINE(52)
		context->beginPath();
		HX_STACK_LINE(53)
		context->rect(rect->x,rect->y,rect->width,rect->height);
		HX_STACK_LINE(54)
		context->clip();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaskManager_obj,pushRect,(void))

Void MaskManager_obj::popMask( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.canvas.MaskManager","popMask",0xbe73fcf5,"openfl._internal.renderer.canvas.MaskManager.popMask","openfl/_internal/renderer/canvas/MaskManager.hx",61,0xbf3b7d1a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->renderSession->context->restore();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaskManager_obj,popMask,(void))


MaskManager_obj::MaskManager_obj()
{
}

void MaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaskManager);
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void MaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic MaskManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return pushRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("renderSession"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(MaskManager_obj,renderSession),HX_CSTRING("renderSession")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("renderSession"),
	HX_CSTRING("pushMask"),
	HX_CSTRING("pushRect"),
	HX_CSTRING("popMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaskManager_obj::__mClass,"__mClass");
};

#endif

Class MaskManager_obj::__mClass;

void MaskManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.canvas.MaskManager"), hx::TCanCast< MaskManager_obj> ,sStaticFields,sMemberFields,
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

void MaskManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
