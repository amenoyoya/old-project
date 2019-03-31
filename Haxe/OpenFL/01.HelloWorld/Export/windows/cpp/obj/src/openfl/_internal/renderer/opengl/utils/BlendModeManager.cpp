#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void BlendModeManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","new",0x5ae5c54c,"openfl._internal.renderer.opengl.utils.BlendModeManager.new","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",15,0x974feaa1)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(17)
	this->gl = gl;
	HX_STACK_LINE(18)
	this->currentBlendMode = null();
}
;
	return null();
}

//BlendModeManager_obj::~BlendModeManager_obj() { }

Dynamic BlendModeManager_obj::__CreateEmpty() { return  new BlendModeManager_obj; }
hx::ObjectPtr< BlendModeManager_obj > BlendModeManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< BlendModeManager_obj > result = new BlendModeManager_obj();
	result->__construct(gl);
	return result;}

Dynamic BlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlendModeManager_obj > result = new BlendModeManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BlendModeManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","destroy",0x43b307e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.destroy","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",25,0x974feaa1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BlendModeManager_obj,destroy,(void))

bool BlendModeManager_obj::setBlendMode( ::openfl::display::BlendMode blendMode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.BlendModeManager","setBlendMode",0xbabdb1e6,"openfl._internal.renderer.opengl.utils.BlendModeManager.setBlendMode","openfl/_internal/renderer/opengl/utils/BlendModeManager.hx",30,0x974feaa1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_LINE(32)
	if (((blendMode == null()))){
		HX_STACK_LINE(32)
		blendMode = ::openfl::display::BlendMode_obj::NORMAL;
	}
	HX_STACK_LINE(33)
	if (((this->currentBlendMode == blendMode))){
		HX_STACK_LINE(35)
		return false;
	}
	HX_STACK_LINE(39)
	this->currentBlendMode = blendMode;
	HX_STACK_LINE(41)
	Array< int > blendModeWebGL = ::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->get(this->currentBlendMode);		HX_STACK_VAR(blendModeWebGL,"blendModeWebGL");
	HX_STACK_LINE(42)
	::lime::graphics::opengl::GL_obj::lime_gl_blend_func(blendModeWebGL->__get((int)0),blendModeWebGL->__get((int)1));
	HX_STACK_LINE(44)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BlendModeManager_obj,setBlendMode,return )


BlendModeManager_obj::BlendModeManager_obj()
{
}

void BlendModeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlendModeManager);
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void BlendModeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic BlendModeManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return setBlendMode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return currentBlendMode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlendModeManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlendModeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentBlendMode"));
	outFields->push(HX_CSTRING("gl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BlendModeManager_obj,currentBlendMode),HX_CSTRING("currentBlendMode")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(BlendModeManager_obj,gl),HX_CSTRING("gl")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentBlendMode"),
	HX_CSTRING("gl"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setBlendMode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendModeManager_obj::__mClass,"__mClass");
};

#endif

Class BlendModeManager_obj::__mClass;

void BlendModeManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.BlendModeManager"), hx::TCanCast< BlendModeManager_obj> ,sStaticFields,sMemberFields,
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

void BlendModeManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
