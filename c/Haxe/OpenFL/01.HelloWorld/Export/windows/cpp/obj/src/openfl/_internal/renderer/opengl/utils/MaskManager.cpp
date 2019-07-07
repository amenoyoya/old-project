#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_MaskManager
#include <openfl/_internal/renderer/opengl/utils/MaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
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
namespace opengl{
namespace utils{

Void MaskManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.MaskManager","new",0x8f0d6492,"openfl._internal.renderer.opengl.utils.MaskManager.new","openfl/_internal/renderer/opengl/utils/MaskManager.hx",13,0x58023141)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(13)
	this->setContext(gl);
}
;
	return null();
}

//MaskManager_obj::~MaskManager_obj() { }

Dynamic MaskManager_obj::__CreateEmpty() { return  new MaskManager_obj; }
hx::ObjectPtr< MaskManager_obj > MaskManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< MaskManager_obj > result = new MaskManager_obj();
	result->__construct(gl);
	return result;}

Dynamic MaskManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaskManager_obj > result = new MaskManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MaskManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.MaskManager","destroy",0x1ba2c22c,"openfl._internal.renderer.opengl.utils.MaskManager.destroy","openfl/_internal/renderer/opengl/utils/MaskManager.hx",17,0x58023141)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MaskManager_obj,destroy,(void))

Void MaskManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.MaskManager","setContext",0x6c91f07b,"openfl._internal.renderer.opengl.utils.MaskManager.setContext","openfl/_internal/renderer/opengl/utils/MaskManager.hx",21,0x58023141)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(21)
		this->gl = gl;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MaskManager_obj,setContext,(void))

Void MaskManager_obj::pushMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.MaskManager","pushMask",0x592d6a74,"openfl._internal.renderer.opengl.utils.MaskManager.pushMask","openfl/_internal/renderer/opengl/utils/MaskManager.hx",25,0x58023141)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(25)
		renderSession->stencilManager->pushMask(object,renderSession);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaskManager_obj,pushMask,(void))

Void MaskManager_obj::popMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.MaskManager","popMask",0x3a2dfc4f,"openfl._internal.renderer.opengl.utils.MaskManager.popMask","openfl/_internal/renderer/opengl/utils/MaskManager.hx",29,0x58023141)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(29)
		renderSession->stencilManager->popMask(object,renderSession);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MaskManager_obj,popMask,(void))


MaskManager_obj::MaskManager_obj()
{
}

void MaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MaskManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void MaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic MaskManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"popMask") ) { return popMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return pushMask_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MaskManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(MaskManager_obj,gl),HX_CSTRING("gl")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setContext"),
	HX_CSTRING("pushMask"),
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.MaskManager"), hx::TCanCast< MaskManager_obj> ,sStaticFields,sMemberFields,
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
} // end namespace opengl
} // end namespace utils
