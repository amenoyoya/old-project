#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
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
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void Shader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","new",0xad7101bd,"openfl._internal.renderer.opengl.shaders2.Shader.new","openfl/_internal/renderer/opengl/shaders2/Shader.hx",10,0x6ac2be14)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(19)
	this->uniforms = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(18)
	this->attributes = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(26)
	int _g = (::openfl::_internal::renderer::opengl::shaders2::Shader_obj::UID)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->ID = _g;
	HX_STACK_LINE(27)
	this->gl = gl;
	HX_STACK_LINE(29)
	this->program = null();
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(gl);
	return result;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > result = new Shader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Shader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","init",0x12293b13,"openfl._internal.renderer.opengl.shaders2.Shader.init","openfl/_internal/renderer/opengl/shaders2/Shader.hx",32,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::lime::graphics::opengl::GLProgram _g = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileProgram(this->gl,this->vertexSrc,this->fragmentSrc);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->program = _g;
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::lime::graphics::opengl::GLProgram program = this->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(34)
			::lime::graphics::opengl::GL_obj::lime_gl_use_program((  (((program == null()))) ? int((int)0) : int(program->id) ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,init,(void))

Void Shader_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","destroy",0x52d3d0d7,"openfl._internal.renderer.opengl.shaders2.Shader.destroy","openfl/_internal/renderer/opengl/shaders2/Shader.hx",37,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		if (((this->program != null()))){
			HX_STACK_LINE(39)
			::lime::graphics::opengl::GLProgram program = this->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_program(program->id);
				HX_STACK_LINE(39)
				program->invalidate();
			}
		}
		HX_STACK_LINE(42)
		this->attributes = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,destroy,(void))

int Shader_obj::getAttribLocation( ::String attribute){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getAttribLocation",0x2bea14f2,"openfl._internal.renderer.opengl.shaders2.Shader.getAttribLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",45,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_LINE(46)
	if (((this->program == null()))){
		HX_STACK_LINE(47)
		HX_STACK_DO_THROW(HX_CSTRING("Shader isn't initialized"));
	}
	HX_STACK_LINE(49)
	if ((this->attributes->exists(attribute))){
		HX_STACK_LINE(50)
		return this->attributes->get(attribute);
	}
	else{
		HX_STACK_LINE(52)
		int location = ::lime::graphics::opengl::GL_obj::lime_gl_get_attrib_location(this->program->id,attribute);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(53)
		this->attributes->set(attribute,location);
		HX_STACK_LINE(54)
		return location;
	}
	HX_STACK_LINE(49)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getAttribLocation,return )

int Shader_obj::getUniformLocation( ::String uniform){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","getUniformLocation",0x7fb53ed6,"openfl._internal.renderer.opengl.shaders2.Shader.getUniformLocation","openfl/_internal/renderer/opengl/shaders2/Shader.hx",58,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(uniform,"uniform")
	HX_STACK_LINE(59)
	if (((this->program == null()))){
		HX_STACK_LINE(60)
		HX_STACK_DO_THROW(HX_CSTRING("Shader isn't initialized"));
	}
	HX_STACK_LINE(62)
	if ((this->uniforms->exists(uniform))){
		HX_STACK_LINE(63)
		return this->uniforms->get(uniform);
	}
	else{
		HX_STACK_LINE(65)
		int location = ::lime::graphics::opengl::GL_obj::lime_gl_get_uniform_location(this->program->id,uniform);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(66)
		this->uniforms->set(uniform,location);
		HX_STACK_LINE(67)
		return location;
	}
	HX_STACK_LINE(62)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,getUniformLocation,return )

Void Shader_obj::enableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,int stride,int offset){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","enableVertexAttribute",0x3cb9d972,"openfl._internal.renderer.opengl.shaders2.Shader.enableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",71,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(attribute,"attribute")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(73)
		int location = this->getAttribLocation(attribute->name);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(74)
		::lime::graphics::opengl::GL_obj::lime_gl_enable_vertex_attrib_array(location);
		HX_STACK_LINE(75)
		::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(location,attribute->components,attribute->type,attribute->normalized,stride,(offset * (int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,enableVertexAttribute,(void))

Void Shader_obj::disableVertexAttribute( ::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute,hx::Null< bool >  __o_setDefault){
bool setDefault = __o_setDefault.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","disableVertexAttribute",0xb20b27d3,"openfl._internal.renderer.opengl.shaders2.Shader.disableVertexAttribute","openfl/_internal/renderer/opengl/shaders2/Shader.hx",78,0x6ac2be14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attribute,"attribute")
	HX_STACK_ARG(setDefault,"setDefault")
{
		HX_STACK_LINE(79)
		int location = this->getAttribLocation(attribute->name);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(80)
		::lime::graphics::opengl::GL_obj::lime_gl_disable_vertex_attrib_array(location);
		HX_STACK_LINE(81)
		if ((setDefault)){
			HX_STACK_LINE(82)
			int _g = attribute->components;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(84)
					::lime::utils::Float32Array values = attribute->defaultValue->subarray((int)0,(int)1);		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						::lime::utils::ByteArray _g1 = values->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(84)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib1fv(location,_g1);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(86)
					::lime::utils::Float32Array values = attribute->defaultValue->subarray((int)0,(int)2);		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(86)
						::lime::utils::ByteArray _g1 = values->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(86)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib2fv(location,_g1);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(88)
					::lime::utils::Float32Array values = attribute->defaultValue->subarray((int)0,(int)3);		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						::lime::utils::ByteArray _g2 = values->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(88)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib3fv(location,_g2);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(90)
					::lime::utils::Float32Array values = attribute->defaultValue->subarray((int)0,(int)4);		HX_STACK_VAR(values,"values");
					HX_STACK_LINE(90)
					{
						HX_STACK_LINE(90)
						::lime::utils::ByteArray _g3 = values->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(90)
						::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib4fv(location,_g3);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,disableVertexAttribute,(void))

Void Shader_obj::bindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","bindVertexArray",0x3a7531b5,"openfl._internal.renderer.opengl.shaders2.Shader.bindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",95,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(96)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(97)
		int stride = va->get_stride();		HX_STACK_VAR(stride,"stride");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(attribute,"attribute");
				HX_STACK_LINE(99)
				++(_g);
				HX_STACK_LINE(100)
				if ((attribute->enabled)){
					HX_STACK_LINE(101)
					this->enableVertexAttribute(attribute,stride,offset);
					struct _Function_4_1{
						inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &attribute){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",102,0x6ac2be14)
							{
								HX_STACK_LINE(102)
								int _g2 = attribute->type;		HX_STACK_VAR(_g2,"_g2");
								struct _Function_5_1{
									inline static int Block( int &_g2){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/shaders2/Shader.hx",102,0x6ac2be14)
										{
											HX_STACK_LINE(102)
											switch( (int)(_g2)){
												case (int)5120: case (int)5121: {
													HX_STACK_LINE(102)
													return (int)1;
												}
												;break;
												case (int)5122: case (int)5123: {
													HX_STACK_LINE(102)
													return (int)2;
												}
												;break;
												default: {
													HX_STACK_LINE(102)
													return (int)4;
												}
											}
										}
										return null();
									}
								};
								HX_STACK_LINE(102)
								return _Function_5_1::Block(_g2);
							}
							return null();
						}
					};
					HX_STACK_LINE(102)
					int _g2 = ::Math_obj::floor((Float((attribute->components * _Function_4_1::Block(attribute))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(102)
					hx::AddEq(offset,_g2);
				}
				else{
					HX_STACK_LINE(104)
					this->disableVertexAttribute(attribute,true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,bindVertexArray,(void))

Void Shader_obj::unbindVertexArray( ::openfl::_internal::renderer::opengl::utils::VertexArray va){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","unbindVertexArray",0xe5df88bc,"openfl._internal.renderer.opengl.shaders2.Shader.unbindVertexArray","openfl/_internal/renderer/opengl/shaders2/Shader.hx",110,0x6ac2be14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(va,"va")
		HX_STACK_LINE(110)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		Array< ::Dynamic > _g1 = va->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		while((true)){
			HX_STACK_LINE(110)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(110)
				break;
			}
			HX_STACK_LINE(110)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute attribute = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(attribute,"attribute");
			HX_STACK_LINE(110)
			++(_g);
			HX_STACK_LINE(111)
			this->disableVertexAttribute(attribute,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,unbindVertexArray,(void))

int Shader_obj::UID;

::lime::graphics::opengl::GLProgram Shader_obj::compileProgram( ::lime::graphics::GLRenderContext gl,Array< ::String > vertexSrc,Array< ::String > fragmentSrc){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileProgram",0x7a6c7314,"openfl._internal.renderer.opengl.shaders2.Shader.compileProgram","openfl/_internal/renderer/opengl/shaders2/Shader.hx",116,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(vertexSrc,"vertexSrc")
	HX_STACK_ARG(fragmentSrc,"fragmentSrc")
	HX_STACK_LINE(117)
	::lime::graphics::opengl::GLShader vertexShader = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(gl,vertexSrc,gl->VERTEX_SHADER);		HX_STACK_VAR(vertexShader,"vertexShader");
	HX_STACK_LINE(118)
	::lime::graphics::opengl::GLShader fragmentShader = ::openfl::_internal::renderer::opengl::shaders2::Shader_obj::compileShader(gl,fragmentSrc,gl->FRAGMENT_SHADER);		HX_STACK_VAR(fragmentShader,"fragmentShader");
	HX_STACK_LINE(119)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(119)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(119)
	::lime::graphics::opengl::GLProgram program = ::lime::graphics::opengl::GLProgram_obj::__new(_g,_g1);		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(121)
	if (((bool((vertexShader != null())) && bool((fragmentShader != null()))))){
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			program->attach(vertexShader);
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,vertexShader->id);
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			program->attach(fragmentShader);
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GL_obj::lime_gl_attach_shader(program->id,fragmentShader->id);
		}
		HX_STACK_LINE(124)
		::lime::graphics::opengl::GL_obj::lime_gl_link_program(program->id);
		HX_STACK_LINE(126)
		int _g2 = ::lime::graphics::opengl::GL_obj::lime_gl_get_program_parameter(program->id,gl->LINK_STATUS);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(126)
		if (((_g2 == (int)0))){
			HX_STACK_LINE(127)
			::haxe::Log_obj::trace(HX_CSTRING("Could not initialize shaders"),hx::SourceInfo(HX_CSTRING("Shader.hx"),127,HX_CSTRING("openfl._internal.renderer.opengl.shaders2.Shader"),HX_CSTRING("compileProgram")));
		}
	}
	HX_STACK_LINE(131)
	return program;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileProgram,return )

::lime::graphics::opengl::GLShader Shader_obj::compileShader( ::lime::graphics::GLRenderContext gl,Array< ::String > shaderSrc,int type){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.Shader","compileShader",0x5163d895,"openfl._internal.renderer.opengl.shaders2.Shader.compileShader","openfl/_internal/renderer/opengl/shaders2/Shader.hx",134,0x6ac2be14)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(shaderSrc,"shaderSrc")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(135)
	::String src = shaderSrc->join(HX_CSTRING("\n"));		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(136)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_shader(type);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(136)
	::lime::graphics::opengl::GLShader shader = ::lime::graphics::opengl::GLShader_obj::__new(_g,_g1);		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(137)
	::lime::graphics::opengl::GL_obj::lime_gl_shader_source(shader->id,src);
	HX_STACK_LINE(138)
	::lime::graphics::opengl::GL_obj::lime_gl_compile_shader(shader->id);
	HX_STACK_LINE(140)
	int _g2 = ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_parameter(shader->id,gl->COMPILE_STATUS);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(140)
	if (((_g2 == (int)0))){
		HX_STACK_LINE(141)
		::String _g3 = ::lime::graphics::opengl::GL_obj::lime_gl_get_shader_info_log(shader->id);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(141)
		::haxe::Log_obj::trace(_g3,hx::SourceInfo(HX_CSTRING("Shader.hx"),141,HX_CSTRING("openfl._internal.renderer.opengl.shaders2.Shader"),HX_CSTRING("compileShader")));
		HX_STACK_LINE(142)
		return null();
	}
	HX_STACK_LINE(145)
	return shader;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Shader_obj,compileShader,return )


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_MARK_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(vertexSrc,"vertexSrc");
	HX_VISIT_MEMBER_NAME(fragmentSrc,"fragmentSrc");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { return UID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { return vertexSrc; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { return fragmentSrc; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compileProgram") ) { return compileProgram_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindVertexArray") ) { return bindVertexArray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"unbindVertexArray") ) { return unbindVertexArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"enableVertexAttribute") ) { return enableVertexAttribute_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disableVertexAttribute") ) { return disableVertexAttribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"UID") ) { UID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::lime::graphics::opengl::GLProgram >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"vertexSrc") ) { vertexSrc=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fragmentSrc") ) { fragmentSrc=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("vertexSrc"));
	outFields->push(HX_CSTRING("fragmentSrc"));
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("uniforms"));
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("program"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("UID"),
	HX_CSTRING("compileProgram"),
	HX_CSTRING("compileShader"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(Shader_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,vertexSrc),HX_CSTRING("vertexSrc")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Shader_obj,fragmentSrc),HX_CSTRING("fragmentSrc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,attributes),HX_CSTRING("attributes")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Shader_obj,uniforms),HX_CSTRING("uniforms")},
	{hx::fsInt,(int)offsetof(Shader_obj,ID),HX_CSTRING("ID")},
	{hx::fsObject /*::lime::graphics::opengl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_CSTRING("program")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("vertexSrc"),
	HX_CSTRING("fragmentSrc"),
	HX_CSTRING("attributes"),
	HX_CSTRING("uniforms"),
	HX_CSTRING("ID"),
	HX_CSTRING("program"),
	HX_CSTRING("init"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getAttribLocation"),
	HX_CSTRING("getUniformLocation"),
	HX_CSTRING("enableVertexAttribute"),
	HX_CSTRING("disableVertexAttribute"),
	HX_CSTRING("bindVertexArray"),
	HX_CSTRING("unbindVertexArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Shader_obj::UID,"UID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Shader_obj::UID,"UID");
};

#endif

Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.shaders2.Shader"), hx::TCanCast< Shader_obj> ,sStaticFields,sMemberFields,
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

void Shader_obj::__boot()
{
	UID= (int)0;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
