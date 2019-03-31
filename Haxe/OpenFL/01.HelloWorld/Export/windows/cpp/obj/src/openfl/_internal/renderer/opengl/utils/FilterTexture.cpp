#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void FilterTexture_obj::__construct(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","new",0x6b047474,"openfl._internal.renderer.opengl.utils.FilterTexture.new","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",22,0x699b425f)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(true);
{
	HX_STACK_LINE(24)
	this->gl = gl;
	HX_STACK_LINE(26)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	::lime::graphics::opengl::GLFramebuffer _g2 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	this->frameBuffer = _g2;
	HX_STACK_LINE(27)
	int _g3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(27)
	Dynamic _g4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(27)
	::lime::graphics::opengl::GLTexture _g5 = ::lime::graphics::opengl::GLTexture_obj::__new(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(27)
	this->texture = _g5;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::lime::graphics::opengl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(29)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
	}
	HX_STACK_LINE(30)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(31)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,(  ((smoothing)) ? int(gl->LINEAR) : int(gl->NEAREST) ));
	HX_STACK_LINE(32)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GLFramebuffer framebuffer = this->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
	}
	HX_STACK_LINE(36)
	::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_texture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,gl->TEXTURE_2D,this->texture->id,(int)0);
	HX_STACK_LINE(38)
	int _g6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(38)
	Dynamic _g7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(38)
	::lime::graphics::opengl::GLRenderbuffer _g8 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(38)
	this->renderBuffer = _g8;
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GLRenderbuffer renderbuffer = this->renderBuffer;		HX_STACK_VAR(renderbuffer,"renderbuffer");
		HX_STACK_LINE(39)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_renderbuffer(gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
	}
	HX_STACK_LINE(40)
	::lime::graphics::opengl::GL_obj::lime_gl_framebuffer_renderbuffer(gl->FRAMEBUFFER,gl->DEPTH_STENCIL_ATTACHMENT,gl->RENDERBUFFER,this->renderBuffer->id);
	HX_STACK_LINE(42)
	this->resize(width,height);
}
;
	return null();
}

//FilterTexture_obj::~FilterTexture_obj() { }

Dynamic FilterTexture_obj::__CreateEmpty() { return  new FilterTexture_obj; }
hx::ObjectPtr< FilterTexture_obj > FilterTexture_obj::__new(::lime::graphics::GLRenderContext gl,int width,int height,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< FilterTexture_obj > result = new FilterTexture_obj();
	result->__construct(gl,width,height,__o_smoothing);
	return result;}

Dynamic FilterTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterTexture_obj > result = new FilterTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FilterTexture_obj::clear( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","clear",0x3b8c42a1,"openfl._internal.renderer.opengl.utils.FilterTexture.clear","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",47,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::lime::graphics::opengl::GL_obj::lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
		HX_STACK_LINE(50)
		::lime::graphics::opengl::GL_obj::lime_gl_clear(this->gl->COLOR_BUFFER_BIT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterTexture_obj,clear,(void))

Void FilterTexture_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","destroy",0xe25c6b0e,"openfl._internal.renderer.opengl.utils.FilterTexture.destroy","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",55,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::lime::graphics::opengl::GLFramebuffer framebuffer = this->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_framebuffer(framebuffer->id);
				HX_STACK_LINE(57)
				framebuffer->invalidate();
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::lime::graphics::opengl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(texture->id);
				HX_STACK_LINE(58)
				texture->invalidate();
			}
		}
		HX_STACK_LINE(60)
		this->frameBuffer = null();
		HX_STACK_LINE(61)
		this->texture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterTexture_obj,destroy,(void))

Void FilterTexture_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterTexture","resize",0xe0017a60,"openfl._internal.renderer.opengl.utils.FilterTexture.resize","openfl/_internal/renderer/opengl/utils/FilterTexture.hx",66,0x699b425f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(68)
		if (((bool((this->width == width)) && bool((this->height == height))))){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(70)
		this->width = width;
		HX_STACK_LINE(71)
		this->height = height;
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GLTexture texture = this->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(73)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::lime::utils::ByteArray _g = null();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			Dynamic _g1 = null();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(this->gl->TEXTURE_2D,(int)0,this->gl->RGBA,width,height,(int)0,this->gl->RGBA,this->gl->UNSIGNED_BYTE,_g,_g1);
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GLRenderbuffer renderbuffer = this->renderBuffer;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(76)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_renderbuffer(this->gl->RENDERBUFFER,(  (((renderbuffer == null()))) ? int((int)0) : int(renderbuffer->id) ));
		}
		HX_STACK_LINE(77)
		::lime::graphics::opengl::GL_obj::lime_gl_renderbuffer_storage(this->gl->RENDERBUFFER,this->gl->DEPTH_STENCIL,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FilterTexture_obj,resize,(void))


FilterTexture_obj::FilterTexture_obj()
{
}

void FilterTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterTexture);
	HX_MARK_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void FilterTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameBuffer,"frameBuffer");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderBuffer,"renderBuffer");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic FilterTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { return frameBuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { return renderBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"frameBuffer") ) { frameBuffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderBuffer") ) { renderBuffer=inValue.Cast< ::lime::graphics::opengl::GLRenderbuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameBuffer"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("renderBuffer"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(FilterTexture_obj,frameBuffer),HX_CSTRING("frameBuffer")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(FilterTexture_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::lime::graphics::opengl::GLRenderbuffer*/ ,(int)offsetof(FilterTexture_obj,renderBuffer),HX_CSTRING("renderBuffer")},
	{hx::fsBool,(int)offsetof(FilterTexture_obj,smoothing),HX_CSTRING("smoothing")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(FilterTexture_obj,texture),HX_CSTRING("texture")},
	{hx::fsInt,(int)offsetof(FilterTexture_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(FilterTexture_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frameBuffer"),
	HX_CSTRING("gl"),
	HX_CSTRING("renderBuffer"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("texture"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("clear"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterTexture_obj::__mClass,"__mClass");
};

#endif

Class FilterTexture_obj::__mClass;

void FilterTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.FilterTexture"), hx::TCanCast< FilterTexture_obj> ,sStaticFields,sMemberFields,
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

void FilterTexture_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
