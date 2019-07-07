#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{

Void RenderSession_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.RenderSession","new",0x2c15cbb7,"openfl._internal.renderer.RenderSession.new","openfl/_internal/renderer/RenderSession.hx",50,0x8a77a218)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//RenderSession_obj::~RenderSession_obj() { }

Dynamic RenderSession_obj::__CreateEmpty() { return  new RenderSession_obj; }
hx::ObjectPtr< RenderSession_obj > RenderSession_obj::__new()
{  hx::ObjectPtr< RenderSession_obj > result = new RenderSession_obj();
	result->__construct();
	return result;}

Dynamic RenderSession_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderSession_obj > result = new RenderSession_obj();
	result->__construct();
	return result;}


RenderSession_obj::RenderSession_obj()
{
}

void RenderSession_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderSession);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(roundPixels,"roundPixels");
	HX_MARK_MEMBER_NAME(transformProperty,"transformProperty");
	HX_MARK_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_MARK_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(drawCount,"drawCount");
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_END_CLASS();
}

void RenderSession_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(roundPixels,"roundPixels");
	HX_VISIT_MEMBER_NAME(transformProperty,"transformProperty");
	HX_VISIT_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_VISIT_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(drawCount,"drawCount");
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
}

Dynamic RenderSession_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"element") ) { return element; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { return drawCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { return roundPixels; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return maskManager; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return spriteBatch; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { return vendorPrefix; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return shaderManager; }
		if (HX_FIELD_EQ(inName,"filterManager") ) { return filterManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return stencilManager; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return projectionMatrix; }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return blendModeManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { return transformProperty; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { return transformOriginProperty; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderSession_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::CanvasRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast< ::lime::graphics::DOMRenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { drawCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { vendorPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { transformProperty=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { transformOriginProperty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderSession_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	outFields->push(HX_CSTRING("element"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("projectionMatrix"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("roundPixels"));
	outFields->push(HX_CSTRING("transformProperty"));
	outFields->push(HX_CSTRING("transformOriginProperty"));
	outFields->push(HX_CSTRING("vendorPrefix"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("drawCount"));
	outFields->push(HX_CSTRING("currentBlendMode"));
	outFields->push(HX_CSTRING("projection"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("shaderManager"));
	outFields->push(HX_CSTRING("maskManager"));
	outFields->push(HX_CSTRING("filterManager"));
	outFields->push(HX_CSTRING("blendModeManager"));
	outFields->push(HX_CSTRING("spriteBatch"));
	outFields->push(HX_CSTRING("stencilManager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(RenderSession_obj,context),HX_CSTRING("context")},
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(RenderSession_obj,element),HX_CSTRING("element")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(RenderSession_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(RenderSession_obj,projectionMatrix),HX_CSTRING("projectionMatrix")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(RenderSession_obj,renderer),HX_CSTRING("renderer")},
	{hx::fsBool,(int)offsetof(RenderSession_obj,roundPixels),HX_CSTRING("roundPixels")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformProperty),HX_CSTRING("transformProperty")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformOriginProperty),HX_CSTRING("transformOriginProperty")},
	{hx::fsString,(int)offsetof(RenderSession_obj,vendorPrefix),HX_CSTRING("vendorPrefix")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,z),HX_CSTRING("z")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,drawCount),HX_CSTRING("drawCount")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(RenderSession_obj,currentBlendMode),HX_CSTRING("currentBlendMode")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(RenderSession_obj,projection),HX_CSTRING("projection")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(RenderSession_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(RenderSession_obj,shaderManager),HX_CSTRING("shaderManager")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderSession_obj,maskManager),HX_CSTRING("maskManager")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(RenderSession_obj,filterManager),HX_CSTRING("filterManager")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(RenderSession_obj,blendModeManager),HX_CSTRING("blendModeManager")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(RenderSession_obj,spriteBatch),HX_CSTRING("spriteBatch")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(RenderSession_obj,stencilManager),HX_CSTRING("stencilManager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("element"),
	HX_CSTRING("gl"),
	HX_CSTRING("projectionMatrix"),
	HX_CSTRING("renderer"),
	HX_CSTRING("roundPixels"),
	HX_CSTRING("transformProperty"),
	HX_CSTRING("transformOriginProperty"),
	HX_CSTRING("vendorPrefix"),
	HX_CSTRING("z"),
	HX_CSTRING("drawCount"),
	HX_CSTRING("currentBlendMode"),
	HX_CSTRING("projection"),
	HX_CSTRING("offset"),
	HX_CSTRING("shaderManager"),
	HX_CSTRING("maskManager"),
	HX_CSTRING("filterManager"),
	HX_CSTRING("blendModeManager"),
	HX_CSTRING("spriteBatch"),
	HX_CSTRING("stencilManager"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#endif

Class RenderSession_obj::__mClass;

void RenderSession_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.RenderSession"), hx::TCanCast< RenderSession_obj> ,sStaticFields,sMemberFields,
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

void RenderSession_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
