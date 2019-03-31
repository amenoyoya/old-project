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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLGraphicsData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","new",0xf5d27d4d,"openfl._internal.renderer.opengl.utils.GLGraphicsData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1508,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1522)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1518)
	this->data = Array_obj< Float >::__new();
	HX_STACK_LINE(1516)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1515)
	this->mode = (int)0;
	HX_STACK_LINE(1514)
	this->dirty = true;
	HX_STACK_LINE(1513)
	this->alpha = 1.0;
	HX_STACK_LINE(1512)
	this->tint = Array_obj< Float >::__new().Add(1.0).Add(1.0).Add(1.0);
	HX_STACK_LINE(1529)
	this->gl = gl;
	HX_STACK_LINE(1531)
	int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1531)
	Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1531)
	::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1531)
	this->dataBuffer = _g2;
	HX_STACK_LINE(1532)
	int _g3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(1532)
	Dynamic _g4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(1532)
	::lime::graphics::opengl::GLBuffer _g5 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(1532)
	this->indexBuffer = _g5;
}
;
	return null();
}

//GLGraphicsData_obj::~GLGraphicsData_obj() { }

Dynamic GLGraphicsData_obj::__CreateEmpty() { return  new GLGraphicsData_obj; }
hx::ObjectPtr< GLGraphicsData_obj > GLGraphicsData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLGraphicsData_obj > result = new GLGraphicsData_obj();
	result->__construct(gl);
	return result;}

Dynamic GLGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLGraphicsData_obj > result = new GLGraphicsData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GLGraphicsData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","reset",0x3afdcbfc,"openfl._internal.renderer.opengl.utils.GLGraphicsData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1537,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1539)
		this->data = Array_obj< Float >::__new();
		HX_STACK_LINE(1540)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1541)
		this->lastIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,reset,(void))

Void GLGraphicsData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","upload",0xe6f62f34,"openfl._internal.renderer.opengl.utils.GLGraphicsData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1546,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1548)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(this->data,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1548)
		this->glData = _g;
		HX_STACK_LINE(1549)
		{
			HX_STACK_LINE(1549)
			::lime::graphics::opengl::GLBuffer buffer = this->dataBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1549)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1550)
		{
			HX_STACK_LINE(1550)
			::lime::utils::ArrayBufferView data = this->glData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1550)
			{
				HX_STACK_LINE(1550)
				::lime::utils::ByteArray _g1 = data->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1550)
				int _g2 = data->getStart();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1550)
				int _g3 = data->getLength();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1550)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(this->gl->ARRAY_BUFFER,_g1,_g2,_g3,this->gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(1553)
		::lime::utils::UInt16Array _g4 = ::lime::utils::UInt16Array_obj::__new(this->indices,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1553)
		this->glIndices = _g4;
		HX_STACK_LINE(1554)
		{
			HX_STACK_LINE(1554)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1554)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1555)
		{
			HX_STACK_LINE(1555)
			::lime::utils::ArrayBufferView data = this->glIndices;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1555)
			{
				HX_STACK_LINE(1555)
				::lime::utils::ByteArray _g5 = data->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1555)
				int _g6 = data->getStart();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1555)
				int _g7 = data->getLength();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(1555)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(this->gl->ELEMENT_ARRAY_BUFFER,_g5,_g6,_g7,this->gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(1557)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,upload,(void))


GLGraphicsData_obj::GLGraphicsData_obj()
{
}

void GLGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLGraphicsData);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(tint,"tint");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(glData,"glData");
	HX_MARK_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_END_CLASS();
}

void GLGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(tint,"tint");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(glData,"glData");
	HX_VISIT_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
}

Dynamic GLGraphicsData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { return tint; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { return glData; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { return dataBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLGraphicsData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { tint=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { glData=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { dataBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("tint"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("lastIndex"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("glData"));
	outFields->push(HX_CSTRING("dataBuffer"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("glIndices"));
	outFields->push(HX_CSTRING("indexBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLGraphicsData_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,tint),HX_CSTRING("tint")},
	{hx::fsFloat,(int)offsetof(GLGraphicsData_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsBool,(int)offsetof(GLGraphicsData_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,mode),HX_CSTRING("mode")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,lastIndex),HX_CSTRING("lastIndex")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(GLGraphicsData_obj,glData),HX_CSTRING("glData")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,dataBuffer),HX_CSTRING("dataBuffer")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLGraphicsData_obj,indices),HX_CSTRING("indices")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(GLGraphicsData_obj,glIndices),HX_CSTRING("glIndices")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,indexBuffer),HX_CSTRING("indexBuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("tint"),
	HX_CSTRING("alpha"),
	HX_CSTRING("dirty"),
	HX_CSTRING("mode"),
	HX_CSTRING("lastIndex"),
	HX_CSTRING("data"),
	HX_CSTRING("glData"),
	HX_CSTRING("dataBuffer"),
	HX_CSTRING("indices"),
	HX_CSTRING("glIndices"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("reset"),
	HX_CSTRING("upload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#endif

Class GLGraphicsData_obj::__mClass;

void GLGraphicsData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GLGraphicsData"), hx::TCanCast< GLGraphicsData_obj> ,sStaticFields,sMemberFields,
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

void GLGraphicsData_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
