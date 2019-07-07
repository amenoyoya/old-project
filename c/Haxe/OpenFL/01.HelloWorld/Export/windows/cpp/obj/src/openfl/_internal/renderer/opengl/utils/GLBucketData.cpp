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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
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

Void GLBucketData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","new",0x4b51a26c,"openfl._internal.renderer.opengl.utils.GLBucketData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1411,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1431)
	this->available = false;
	HX_STACK_LINE(1429)
	this->rawIndices = false;
	HX_STACK_LINE(1424)
	this->stride = (int)0;
	HX_STACK_LINE(1423)
	this->rawVerts = false;
	HX_STACK_LINE(1421)
	this->lastVertsSize = (int)0;
	HX_STACK_LINE(1417)
	this->glStart = (int)0;
	HX_STACK_LINE(1416)
	this->glLength = (int)0;
	HX_STACK_LINE(1436)
	this->gl = gl;
	HX_STACK_LINE(1437)
	this->drawMode = gl->TRIANGLE_STRIP;
	HX_STACK_LINE(1438)
	this->verts = Array_obj< Float >::__new();
	HX_STACK_LINE(1439)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1440)
	::openfl::_internal::renderer::opengl::utils::VertexArray _g = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(Array_obj< ::Dynamic >::__new(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1440)
	this->vertexArray = _g;
}
;
	return null();
}

//GLBucketData_obj::~GLBucketData_obj() { }

Dynamic GLBucketData_obj::__CreateEmpty() { return  new GLBucketData_obj; }
hx::ObjectPtr< GLBucketData_obj > GLBucketData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBucketData_obj > result = new GLBucketData_obj();
	result->__construct(gl);
	return result;}

Dynamic GLBucketData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBucketData_obj > result = new GLBucketData_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GLBucketData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","reset",0x4a67b6db,"openfl._internal.renderer.opengl.utils.GLBucketData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1443,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1444)
		this->available = true;
		HX_STACK_LINE(1445)
		this->verts = Array_obj< Float >::__new();
		HX_STACK_LINE(1446)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1447)
		this->glLength = (int)0;
		HX_STACK_LINE(1448)
		this->glStart = (int)0;
		HX_STACK_LINE(1449)
		this->stride = (int)0;
		HX_STACK_LINE(1450)
		this->rawVerts = false;
		HX_STACK_LINE(1451)
		this->rawIndices = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,reset,(void))

Void GLBucketData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","upload",0x5439c775,"openfl._internal.renderer.opengl.utils.GLBucketData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1454,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1457)
		if (((bool((bool((bool(this->rawVerts) && bool((this->glVerts != null())))) && bool((this->glVerts->length > (int)0)))) || bool((this->verts->length > (int)0))))){
			HX_STACK_LINE(1459)
			if ((!(this->rawVerts))){
				HX_STACK_LINE(1459)
				::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(this->verts,null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1459)
				this->glVerts = _g;
			}
			HX_STACK_LINE(1461)
			this->vertexArray->buffer = this->glVerts->buffer;
			HX_STACK_LINE(1463)
			if (((this->glVerts->length <= this->lastVertsSize))){
				HX_STACK_LINE(1464)
				{
					HX_STACK_LINE(1464)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = this->vertexArray;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1464)
					{
						HX_STACK_LINE(1464)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1464)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
					}
				}
				HX_STACK_LINE(1465)
				int end = ((this->glLength * (int)4) * this->stride);		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(1466)
				if (((bool((this->glLength > (int)0)) && bool((this->lastVertsSize > end))))){
					HX_STACK_LINE(1467)
					::lime::utils::Float32Array view = this->glVerts->subarray((int)0,end);		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(1468)
					this->vertexArray->upload(view);
				}
				else{
					HX_STACK_LINE(1470)
					this->vertexArray->upload(this->glVerts);
				}
			}
			else{
				HX_STACK_LINE(1473)
				this->vertexArray->setContext(this->gl,this->glVerts);
				HX_STACK_LINE(1474)
				this->lastVertsSize = this->glVerts->length;
			}
		}
		HX_STACK_LINE(1480)
		if (((bool((this->glLength == (int)0)) && bool(((bool((bool((bool(this->rawIndices) && bool((this->glIndices != null())))) && bool((this->glIndices->length > (int)0)))) || bool((this->indices->length > (int)0)))))))){
			HX_STACK_LINE(1482)
			if (((this->indexBuffer == null()))){
				HX_STACK_LINE(1483)
				int _g1 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1483)
				Dynamic _g2 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1483)
				::lime::graphics::opengl::GLBuffer _g3 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1483)
				this->indexBuffer = _g3;
			}
			HX_STACK_LINE(1486)
			if ((!(this->rawIndices))){
				HX_STACK_LINE(1486)
				::lime::utils::UInt16Array _g4 = ::lime::utils::UInt16Array_obj::__new(this->indices,null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1486)
				this->glIndices = _g4;
			}
			HX_STACK_LINE(1487)
			{
				HX_STACK_LINE(1487)
				::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1487)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
			HX_STACK_LINE(1488)
			{
				HX_STACK_LINE(1488)
				::lime::utils::ArrayBufferView data = this->glIndices;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1488)
				{
					HX_STACK_LINE(1488)
					::lime::utils::ByteArray _g5 = data->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1488)
					int _g6 = data->getStart();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1488)
					int _g7 = data->getLength();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1488)
					::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(this->gl->ELEMENT_ARRAY_BUFFER,_g5,_g6,_g7,this->gl->STREAM_DRAW);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,upload,(void))


GLBucketData_obj::GLBucketData_obj()
{
}

void GLBucketData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBucketData);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(drawMode,"drawMode");
	HX_MARK_MEMBER_NAME(glLength,"glLength");
	HX_MARK_MEMBER_NAME(glStart,"glStart");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(glVerts,"glVerts");
	HX_MARK_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_MARK_MEMBER_NAME(verts,"verts");
	HX_MARK_MEMBER_NAME(rawVerts,"rawVerts");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(rawIndices,"rawIndices");
	HX_MARK_MEMBER_NAME(available,"available");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void GLBucketData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(drawMode,"drawMode");
	HX_VISIT_MEMBER_NAME(glLength,"glLength");
	HX_VISIT_MEMBER_NAME(glStart,"glStart");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(glVerts,"glVerts");
	HX_VISIT_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_VISIT_MEMBER_NAME(verts,"verts");
	HX_VISIT_MEMBER_NAME(rawVerts,"rawVerts");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(rawIndices,"rawIndices");
	HX_VISIT_MEMBER_NAME(available,"available");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic GLBucketData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { return verts; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return stride; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { return glStart; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { return glVerts; }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { return drawMode; }
		if (HX_FIELD_EQ(inName,"glLength") ) { return glLength; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { return rawVerts; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		if (HX_FIELD_EQ(inName,"available") ) { return available; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { return rawIndices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { return lastVertsSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBucketData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketDataType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { verts=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GLBucket >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { glStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { glVerts=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { drawMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glLength") ) { glLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { rawVerts=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"available") ) { available=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { rawIndices=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { lastVertsSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBucketData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("drawMode"));
	outFields->push(HX_CSTRING("glLength"));
	outFields->push(HX_CSTRING("glStart"));
	outFields->push(HX_CSTRING("vertexArray"));
	outFields->push(HX_CSTRING("glVerts"));
	outFields->push(HX_CSTRING("lastVertsSize"));
	outFields->push(HX_CSTRING("verts"));
	outFields->push(HX_CSTRING("rawVerts"));
	outFields->push(HX_CSTRING("stride"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("glIndices"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("rawIndices"));
	outFields->push(HX_CSTRING("available"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketDataType*/ ,(int)offsetof(GLBucketData_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBucketData_obj,gl),HX_CSTRING("gl")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,drawMode),HX_CSTRING("drawMode")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glLength),HX_CSTRING("glLength")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glStart),HX_CSTRING("glStart")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(GLBucketData_obj,vertexArray),HX_CSTRING("vertexArray")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(GLBucketData_obj,glVerts),HX_CSTRING("glVerts")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,lastVertsSize),HX_CSTRING("lastVertsSize")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLBucketData_obj,verts),HX_CSTRING("verts")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawVerts),HX_CSTRING("rawVerts")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,stride),HX_CSTRING("stride")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLBucketData_obj,indexBuffer),HX_CSTRING("indexBuffer")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(GLBucketData_obj,glIndices),HX_CSTRING("glIndices")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLBucketData_obj,indices),HX_CSTRING("indices")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawIndices),HX_CSTRING("rawIndices")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,available),HX_CSTRING("available")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLBucket*/ ,(int)offsetof(GLBucketData_obj,parent),HX_CSTRING("parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("gl"),
	HX_CSTRING("drawMode"),
	HX_CSTRING("glLength"),
	HX_CSTRING("glStart"),
	HX_CSTRING("vertexArray"),
	HX_CSTRING("glVerts"),
	HX_CSTRING("lastVertsSize"),
	HX_CSTRING("verts"),
	HX_CSTRING("rawVerts"),
	HX_CSTRING("stride"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("glIndices"),
	HX_CSTRING("indices"),
	HX_CSTRING("rawIndices"),
	HX_CSTRING("available"),
	HX_CSTRING("parent"),
	HX_CSTRING("reset"),
	HX_CSTRING("upload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#endif

Class GLBucketData_obj::__mClass;

void GLBucketData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GLBucketData"), hx::TCanCast< GLBucketData_obj> ,sStaticFields,sMemberFields,
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

void GLBucketData_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
