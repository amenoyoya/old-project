#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void FilterManager_obj::__construct(::lime::graphics::GLRenderContext gl,bool transparent)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","new",0x6afe6f06,"openfl._internal.renderer.opengl.utils.FilterManager.new","openfl/_internal/renderer/opengl/utils/FilterManager.hx",37,0x7d1f400d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(transparent,"transparent")
{
	HX_STACK_LINE(39)
	this->transparent = transparent;
	HX_STACK_LINE(41)
	this->filterStack = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(43)
	this->offsetX = (int)0;
	HX_STACK_LINE(44)
	this->offsetY = (int)0;
	HX_STACK_LINE(46)
	this->setContext(gl);
}
;
	return null();
}

//FilterManager_obj::~FilterManager_obj() { }

Dynamic FilterManager_obj::__CreateEmpty() { return  new FilterManager_obj; }
hx::ObjectPtr< FilterManager_obj > FilterManager_obj::__new(::lime::graphics::GLRenderContext gl,bool transparent)
{  hx::ObjectPtr< FilterManager_obj > result = new FilterManager_obj();
	result->__construct(gl,transparent);
	return result;}

Dynamic FilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterManager_obj > result = new FilterManager_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FilterManager_obj::applyFilterPass( Dynamic filter,::openfl::geom::Rectangle filterArea,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","applyFilterPass",0xe07e4b5d,"openfl._internal.renderer.opengl.utils.FilterManager.applyFilterPass","openfl/_internal/renderer/opengl/utils/FilterManager.hx",51,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(filterArea,"filterArea")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FilterManager_obj,applyFilterPass,(void))

Void FilterManager_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","begin",0x11e1fe4f,"openfl._internal.renderer.opengl.utils.FilterManager.begin","openfl/_internal/renderer/opengl/utils/FilterManager.hx",102,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(104)
		this->renderSession = renderSession;
		HX_STACK_LINE(105)
		this->defaultShader = renderSession->shaderManager->defaultShader;
		HX_STACK_LINE(107)
		::openfl::geom::Point projection = renderSession->projection;		HX_STACK_VAR(projection,"projection");
		HX_STACK_LINE(109)
		int _g = ::Std_obj::_int((projection->x * (int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		this->width = _g;
		HX_STACK_LINE(110)
		int _g1 = ::Std_obj::_int((-(projection->y) * (int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		this->height = _g1;
		HX_STACK_LINE(111)
		this->buffer = buffer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FilterManager_obj,begin,(void))

Void FilterManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","destroy",0x105c16a0,"openfl._internal.renderer.opengl.utils.FilterManager.destroy","openfl/_internal/renderer/opengl/utils/FilterManager.hx",116,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(120)
		this->filterStack = null();
		HX_STACK_LINE(122)
		this->offsetX = (int)0;
		HX_STACK_LINE(123)
		this->offsetY = (int)0;
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			Array< ::Dynamic > _g1 = this->texturePool;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(125)
				::openfl::_internal::renderer::opengl::utils::FilterTexture texture = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >();		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(125)
				++(_g);
				HX_STACK_LINE(127)
				texture->destroy();
			}
		}
		HX_STACK_LINE(131)
		this->texturePool = null();
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::lime::graphics::opengl::GLBuffer buffer = this->vertexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(133)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GLBuffer buffer = this->uvBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(134)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::lime::graphics::opengl::GLBuffer buffer = this->colorBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(135)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(136)
			{
				HX_STACK_LINE(136)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(136)
				buffer->invalidate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,destroy,(void))

Void FilterManager_obj::initShaderBuffers( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","initShaderBuffers",0xfb7f8ac4,"openfl._internal.renderer.opengl.utils.FilterManager.initShaderBuffers","openfl/_internal/renderer/opengl/utils/FilterManager.hx",141,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(145)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(145)
		this->vertexBuffer = _g2;
		HX_STACK_LINE(146)
		int _g3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(146)
		Dynamic _g4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(146)
		::lime::graphics::opengl::GLBuffer _g5 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(146)
		this->uvBuffer = _g5;
		HX_STACK_LINE(147)
		int _g6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(147)
		Dynamic _g7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(147)
		::lime::graphics::opengl::GLBuffer _g8 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(147)
		this->colorBuffer = _g8;
		HX_STACK_LINE(148)
		int _g9 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(148)
		Dynamic _g10 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(148)
		::lime::graphics::opengl::GLBuffer _g11 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g9,_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(148)
		this->indexBuffer = _g11;
		HX_STACK_LINE(150)
		::lime::utils::Float32Array _g12 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(1.0).Add(1.0).Add(1.0),null(),null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(150)
		this->vertexArray = _g12;
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::lime::graphics::opengl::GLBuffer buffer = this->vertexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(152)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::lime::utils::ArrayBufferView data = this->vertexArray;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(153)
			{
				HX_STACK_LINE(153)
				::lime::utils::ByteArray _g13 = data->getByteBuffer();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(153)
				int _g14 = data->getStart();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(153)
				int _g15 = data->getLength();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(153)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g13,_g14,_g15,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(155)
		::lime::utils::Float32Array _g16 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(1.0).Add(1.0).Add(1.0),null(),null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(155)
		this->uvArray = _g16;
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::lime::graphics::opengl::GLBuffer buffer = this->uvBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(157)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			::lime::utils::ArrayBufferView data = this->uvArray;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				::lime::utils::ByteArray _g17 = data->getByteBuffer();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(158)
				int _g18 = data->getStart();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(158)
				int _g19 = data->getLength();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(158)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g17,_g18,_g19,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(160)
		::lime::utils::Float32Array _g20 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(1.0).Add((int)16777215).Add(1.0).Add((int)16777215).Add(1.0).Add((int)16777215).Add(1.0).Add((int)16777215),null(),null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(160)
		this->colorArray = _g20;
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::lime::graphics::opengl::GLBuffer buffer = this->colorBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(162)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			::lime::utils::ArrayBufferView data = this->colorArray;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::lime::utils::ByteArray _g21 = data->getByteBuffer();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(163)
				int _g22 = data->getStart();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(163)
				int _g23 = data->getLength();		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(163)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g21,_g22,_g23,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(165)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView data = ::lime::utils::UInt16Array_obj::__new(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)1).Add((int)3).Add((int)2),null(),null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				::lime::utils::ByteArray _g24 = data->getByteBuffer();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(166)
				int _g25 = data->getStart();		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(166)
				int _g26 = data->getLength();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(166)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ELEMENT_ARRAY_BUFFER,_g24,_g25,_g26,gl->STATIC_DRAW);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,initShaderBuffers,(void))

Void FilterManager_obj::popFilter( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","popFilter",0xfe0b134f,"openfl._internal.renderer.opengl.utils.FilterManager.popFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",171,0x7d1f400d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,popFilter,(void))

Void FilterManager_obj::pushFilter( Dynamic filterBlock){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","pushFilter",0xb0cfa74c,"openfl._internal.renderer.opengl.utils.FilterManager.pushFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",330,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filterBlock,"filterBlock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,pushFilter,(void))

Void FilterManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","setContext",0x4411dc87,"openfl._internal.renderer.opengl.utils.FilterManager.setContext","openfl/_internal/renderer/opengl/utils/FilterManager.hx",406,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(408)
		this->gl = gl;
		HX_STACK_LINE(409)
		this->texturePool = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(411)
		this->initShaderBuffers();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,setContext,(void))


FilterManager_obj::FilterManager_obj()
{
}

void FilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterManager);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(colorArray,"colorArray");
	HX_MARK_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_MEMBER_NAME(filterStack,"filterStack");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(texturePool,"texturePool");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(uvArray,"uvArray");
	HX_MARK_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void FilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(colorArray,"colorArray");
	HX_VISIT_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
	HX_VISIT_MEMBER_NAME(filterStack,"filterStack");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(texturePool,"texturePool");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(uvArray,"uvArray");
	HX_VISIT_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic FilterManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { return uvArray; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { return uvBuffer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popFilter") ) { return popFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { return colorArray; }
		if (HX_FIELD_EQ(inName,"pushFilter") ) { return pushFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { return colorBuffer; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { return filterStack; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { return texturePool; }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return vertexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyFilterPass") ) { return applyFilterPass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initShaderBuffers") ) { return initShaderBuffers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { uvArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { uvBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { colorArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { colorBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { filterStack=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { texturePool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DefaultShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("colorArray"));
	outFields->push(HX_CSTRING("colorBuffer"));
	outFields->push(HX_CSTRING("defaultShader"));
	outFields->push(HX_CSTRING("filterStack"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("renderSession"));
	outFields->push(HX_CSTRING("texturePool"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("uvArray"));
	outFields->push(HX_CSTRING("uvBuffer"));
	outFields->push(HX_CSTRING("vertexArray"));
	outFields->push(HX_CSTRING("vertexBuffer"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(FilterManager_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,colorArray),HX_CSTRING("colorArray")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,colorBuffer),HX_CSTRING("colorBuffer")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DefaultShader*/ ,(int)offsetof(FilterManager_obj,defaultShader),HX_CSTRING("defaultShader")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FilterManager_obj,filterStack),HX_CSTRING("filterStack")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(FilterManager_obj,gl),HX_CSTRING("gl")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,indexBuffer),HX_CSTRING("indexBuffer")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetX),HX_CSTRING("offsetX")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetY),HX_CSTRING("offsetY")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(FilterManager_obj,renderSession),HX_CSTRING("renderSession")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FilterManager_obj,texturePool),HX_CSTRING("texturePool")},
	{hx::fsBool,(int)offsetof(FilterManager_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,uvArray),HX_CSTRING("uvArray")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,uvBuffer),HX_CSTRING("uvBuffer")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,vertexArray),HX_CSTRING("vertexArray")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,vertexBuffer),HX_CSTRING("vertexBuffer")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,width),HX_CSTRING("width")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("colorArray"),
	HX_CSTRING("colorBuffer"),
	HX_CSTRING("defaultShader"),
	HX_CSTRING("filterStack"),
	HX_CSTRING("gl"),
	HX_CSTRING("height"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("renderSession"),
	HX_CSTRING("texturePool"),
	HX_CSTRING("transparent"),
	HX_CSTRING("uvArray"),
	HX_CSTRING("uvBuffer"),
	HX_CSTRING("vertexArray"),
	HX_CSTRING("vertexBuffer"),
	HX_CSTRING("width"),
	HX_CSTRING("applyFilterPass"),
	HX_CSTRING("begin"),
	HX_CSTRING("destroy"),
	HX_CSTRING("initShaderBuffers"),
	HX_CSTRING("popFilter"),
	HX_CSTRING("pushFilter"),
	HX_CSTRING("setContext"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#endif

Class FilterManager_obj::__mClass;

void FilterManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.FilterManager"), hx::TCanCast< FilterManager_obj> ,sStaticFields,sMemberFields,
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

void FilterManager_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
