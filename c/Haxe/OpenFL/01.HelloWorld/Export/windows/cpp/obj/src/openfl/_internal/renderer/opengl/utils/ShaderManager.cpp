#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_FillShader
#include <openfl/_internal/renderer/opengl/shaders2/FillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PatternFillShader
#include <openfl/_internal/renderer/opengl/shaders2/PatternFillShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void ShaderManager_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","new",0xb88adcb9,"openfl._internal.renderer.opengl.utils.ShaderManager.new","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",18,0x4c1b49ba)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(18)
	this->setContext(gl);
}
;
	return null();
}

//ShaderManager_obj::~ShaderManager_obj() { }

Dynamic ShaderManager_obj::__CreateEmpty() { return  new ShaderManager_obj; }
hx::ObjectPtr< ShaderManager_obj > ShaderManager_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< ShaderManager_obj > result = new ShaderManager_obj();
	result->__construct(gl);
	return result;}

Dynamic ShaderManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderManager_obj > result = new ShaderManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ShaderManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","setContext",0x78e2db34,"openfl._internal.renderer.opengl.utils.ShaderManager.setContext","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",21,0x4c1b49ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(22)
		this->gl = gl;
		HX_STACK_LINE(24)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader _g = ::openfl::_internal::renderer::opengl::shaders2::DefaultShader_obj::__new(gl);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->defaultShader = _g;
		HX_STACK_LINE(25)
		::openfl::_internal::renderer::opengl::shaders2::FillShader _g1 = ::openfl::_internal::renderer::opengl::shaders2::FillShader_obj::__new(gl);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		this->fillShader = _g1;
		HX_STACK_LINE(26)
		::openfl::_internal::renderer::opengl::shaders2::PatternFillShader _g2 = ::openfl::_internal::renderer::opengl::shaders2::PatternFillShader_obj::__new(gl);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->patternFillShader = _g2;
		HX_STACK_LINE(27)
		::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader _g3 = ::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader_obj::__new(gl);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(27)
		this->drawTrianglesShader = _g3;
		HX_STACK_LINE(28)
		::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader _g4 = ::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader_obj::__new(gl);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(28)
		this->primitiveShader = _g4;
		HX_STACK_LINE(30)
		this->setShader(this->defaultShader,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ShaderManager_obj,setContext,(void))

Void ShaderManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","destroy",0xd1dcd9d3,"openfl._internal.renderer.opengl.utils.ShaderManager.destroy","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",34,0x4c1b49ba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->defaultShader->destroy();
		HX_STACK_LINE(37)
		this->fillShader->destroy();
		HX_STACK_LINE(38)
		this->patternFillShader->destroy();
		HX_STACK_LINE(39)
		this->drawTrianglesShader->destroy();
		HX_STACK_LINE(40)
		this->primitiveShader->destroy();
		HX_STACK_LINE(42)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ShaderManager_obj,destroy,(void))

bool ShaderManager_obj::setShader( ::openfl::_internal::renderer::opengl::shaders2::Shader shader,Dynamic __o_force){
Dynamic force = __o_force.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.ShaderManager","setShader",0x2ec68980,"openfl._internal.renderer.opengl.utils.ShaderManager.setShader","openfl/_internal/renderer/opengl/utils/ShaderManager.hx",46,0x4c1b49ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(force,"force")
{
		HX_STACK_LINE(47)
		if (((bool(!(force)) && bool((this->currentShader->ID == shader->ID))))){
			HX_STACK_LINE(47)
			return false;
		}
		HX_STACK_LINE(48)
		this->currentShader = shader;
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::lime::graphics::opengl::GLProgram program = shader->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(50)
			::lime::graphics::opengl::GL_obj::lime_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
		}
		HX_STACK_LINE(51)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ShaderManager_obj,setShader,return )


ShaderManager_obj::ShaderManager_obj()
{
}

void ShaderManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderManager);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(currentShader,"currentShader");
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_MEMBER_NAME(fillShader,"fillShader");
	HX_MARK_MEMBER_NAME(patternFillShader,"patternFillShader");
	HX_MARK_MEMBER_NAME(drawTrianglesShader,"drawTrianglesShader");
	HX_MARK_MEMBER_NAME(primitiveShader,"primitiveShader");
	HX_MARK_END_CLASS();
}

void ShaderManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(currentShader,"currentShader");
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
	HX_VISIT_MEMBER_NAME(fillShader,"fillShader");
	HX_VISIT_MEMBER_NAME(patternFillShader,"patternFillShader");
	HX_VISIT_MEMBER_NAME(drawTrianglesShader,"drawTrianglesShader");
	HX_VISIT_MEMBER_NAME(primitiveShader,"primitiveShader");
}

Dynamic ShaderManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setShader") ) { return setShader_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillShader") ) { return fillShader; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { return currentShader; }
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"primitiveShader") ) { return primitiveShader; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"patternFillShader") ) { return patternFillShader; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawTrianglesShader") ) { return drawTrianglesShader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShaderManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillShader") ) { fillShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::FillShader >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentShader") ) { currentShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DefaultShader >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"primitiveShader") ) { primitiveShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"patternFillShader") ) { patternFillShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::PatternFillShader >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawTrianglesShader") ) { drawTrianglesShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("currentShader"));
	outFields->push(HX_CSTRING("defaultShader"));
	outFields->push(HX_CSTRING("fillShader"));
	outFields->push(HX_CSTRING("patternFillShader"));
	outFields->push(HX_CSTRING("drawTrianglesShader"));
	outFields->push(HX_CSTRING("primitiveShader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(ShaderManager_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(ShaderManager_obj,currentShader),HX_CSTRING("currentShader")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DefaultShader*/ ,(int)offsetof(ShaderManager_obj,defaultShader),HX_CSTRING("defaultShader")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::FillShader*/ ,(int)offsetof(ShaderManager_obj,fillShader),HX_CSTRING("fillShader")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::PatternFillShader*/ ,(int)offsetof(ShaderManager_obj,patternFillShader),HX_CSTRING("patternFillShader")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DrawTrianglesShader*/ ,(int)offsetof(ShaderManager_obj,drawTrianglesShader),HX_CSTRING("drawTrianglesShader")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader*/ ,(int)offsetof(ShaderManager_obj,primitiveShader),HX_CSTRING("primitiveShader")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("currentShader"),
	HX_CSTRING("defaultShader"),
	HX_CSTRING("fillShader"),
	HX_CSTRING("patternFillShader"),
	HX_CSTRING("drawTrianglesShader"),
	HX_CSTRING("primitiveShader"),
	HX_CSTRING("setContext"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setShader"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderManager_obj::__mClass,"__mClass");
};

#endif

Class ShaderManager_obj::__mClass;

void ShaderManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.ShaderManager"), hx::TCanCast< ShaderManager_obj> ,sStaticFields,sMemberFields,
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

void ShaderManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
