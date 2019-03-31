#include <hxcpp.h>

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
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
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
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
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
namespace utils{

Void VertexArray_obj::__construct(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","new",0x2bd75746,"openfl._internal.renderer.opengl.utils.VertexArray.new","openfl/_internal/renderer/opengl/utils/VertexArray.hx",9,0x59dc110d)
HX_STACK_THIS(this)
HX_STACK_ARG(attributes,"attributes")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_isStatic,"isStatic")
Dynamic size = __o_size.Default(0);
bool isStatic = __o_isStatic.Default(false);
{
	HX_STACK_LINE(18)
	this->isStatic = false;
	HX_STACK_LINE(15)
	this->size = (int)0;
	HX_STACK_LINE(13)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	this->size = size;
	HX_STACK_LINE(22)
	this->attributes = attributes;
	HX_STACK_LINE(24)
	if (((size > (int)0))){
		HX_STACK_LINE(25)
		::lime::utils::ByteArray _g = ::lime::utils::ByteArray_obj::__new(size);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->buffer = _g;
	}
	HX_STACK_LINE(28)
	this->isStatic = isStatic;
}
;
	return null();
}

//VertexArray_obj::~VertexArray_obj() { }

Dynamic VertexArray_obj::__CreateEmpty() { return  new VertexArray_obj; }
hx::ObjectPtr< VertexArray_obj > VertexArray_obj::__new(Array< ::Dynamic > attributes,Dynamic __o_size,hx::Null< bool >  __o_isStatic)
{  hx::ObjectPtr< VertexArray_obj > result = new VertexArray_obj();
	result->__construct(attributes,__o_size,__o_isStatic);
	return result;}

Dynamic VertexArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexArray_obj > result = new VertexArray_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void VertexArray_obj::bind( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","bind",0x28a97817,"openfl._internal.renderer.opengl.utils.VertexArray.bind","openfl/_internal/renderer/opengl/utils/VertexArray.hx",32,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::lime::graphics::opengl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(32)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,bind,(void))

Void VertexArray_obj::unbind( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","unbind",0x31e74970,"openfl._internal.renderer.opengl.utils.VertexArray.unbind","openfl/_internal/renderer/opengl/utils/VertexArray.hx",36,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ARRAY_BUFFER,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,unbind,(void))

Void VertexArray_obj::upload( ::lime::utils::ArrayBufferView view){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","upload",0x5f5516db,"openfl._internal.renderer.opengl.utils.VertexArray.upload","openfl/_internal/renderer/opengl/utils/VertexArray.hx",40,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(40)
		::lime::utils::ByteArray _g = view->getByteBuffer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		int _g1 = view->getStart();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		int _g2 = view->getLength();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(40)
		::lime::graphics::opengl::GL_obj::lime_gl_buffer_sub_data(this->gl->ARRAY_BUFFER,(int)0,_g,_g1,_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexArray_obj,upload,(void))

Void VertexArray_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","destroy",0xed6e1ee0,"openfl._internal.renderer.opengl.utils.VertexArray.destroy","openfl/_internal/renderer/opengl/utils/VertexArray.hx",43,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::lime::graphics::opengl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(44)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(45)
		this->buffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,destroy,(void))

Void VertexArray_obj::setContext( ::lime::graphics::GLRenderContext gl,::lime::utils::ArrayBufferView view){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","setContext",0xd2427c47,"openfl._internal.renderer.opengl.utils.VertexArray.setContext","openfl/_internal/renderer/opengl/utils/VertexArray.hx",48,0x59dc110d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(view,"view")
		HX_STACK_LINE(49)
		this->gl = gl;
		HX_STACK_LINE(51)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		this->glBuffer = _g2;
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::graphics::opengl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(53)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::lime::utils::ByteArray _g3 = view->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(55)
			int _g4 = view->getStart();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(55)
			int _g5 = view->getLength();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(55)
			::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g3,_g4,_g5,(  ((this->isStatic)) ? int(gl->STATIC_DRAW) : int(gl->DYNAMIC_DRAW) ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VertexArray_obj,setContext,(void))

int VertexArray_obj::get_stride( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexArray","get_stride",0x67a351bc,"openfl._internal.renderer.opengl.utils.VertexArray.get_stride","openfl/_internal/renderer/opengl/utils/VertexArray.hx",58,0x59dc110d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int s = (int)0;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(61)
			if ((a->enabled)){
				struct _Function_4_1{
					inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/VertexArray.hx",61,0x59dc110d)
						{
							HX_STACK_LINE(61)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_5_1{
								inline static int Block( int &_g2){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/VertexArray.hx",61,0x59dc110d)
									{
										HX_STACK_LINE(61)
										switch( (int)(_g2)){
											case (int)5120: case (int)5121: {
												HX_STACK_LINE(61)
												return (int)1;
											}
											;break;
											case (int)5122: case (int)5123: {
												HX_STACK_LINE(61)
												return (int)2;
											}
											;break;
											default: {
												HX_STACK_LINE(61)
												return (int)4;
											}
										}
									}
									return null();
								}
							};
							HX_STACK_LINE(61)
							return _Function_5_1::Block(_g2);
						}
						return null();
					}
				};
				HX_STACK_LINE(61)
				int _g2 = ::Math_obj::floor((Float((a->components * _Function_4_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(61)
				int _g11 = (_g2 * (int)4);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(61)
				hx::AddEq(s,_g11);
			}
		}
	}
	HX_STACK_LINE(63)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexArray_obj,get_stride,return )


VertexArray_obj::VertexArray_obj()
{
}

void VertexArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexArray);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(isStatic,"isStatic");
	HX_MARK_END_CLASS();
}

void VertexArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(isStatic,"isStatic");
}

Dynamic VertexArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"stride") ) { return get_stride(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return get_stride_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { isStatic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("glBuffer"));
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("stride"));
	outFields->push(HX_CSTRING("isStatic"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(VertexArray_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(VertexArray_obj,glBuffer),HX_CSTRING("glBuffer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(VertexArray_obj,attributes),HX_CSTRING("attributes")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(VertexArray_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(VertexArray_obj,size),HX_CSTRING("size")},
	{hx::fsBool,(int)offsetof(VertexArray_obj,isStatic),HX_CSTRING("isStatic")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("glBuffer"),
	HX_CSTRING("attributes"),
	HX_CSTRING("buffer"),
	HX_CSTRING("size"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("bind"),
	HX_CSTRING("unbind"),
	HX_CSTRING("upload"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setContext"),
	HX_CSTRING("get_stride"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexArray_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexArray_obj::__mClass,"__mClass");
};

#endif

Class VertexArray_obj::__mClass;

void VertexArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.VertexArray"), hx::TCanCast< VertexArray_obj> ,sStaticFields,sMemberFields,
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

void VertexArray_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
