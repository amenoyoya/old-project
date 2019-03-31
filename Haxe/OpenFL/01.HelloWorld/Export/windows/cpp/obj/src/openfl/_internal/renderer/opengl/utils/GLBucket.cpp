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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_utils_Int16Array
#include <lime/utils/Int16Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLBucket_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","new",0x3de45b22,"openfl._internal.renderer.opengl.utils.GLBucket.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1187,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1217)
	this->uploadTileBuffer = true;
	HX_STACK_LINE(1207)
	this->textureSmooth = true;
	HX_STACK_LINE(1206)
	this->textureRepeat = false;
	HX_STACK_LINE(1201)
	this->lines = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1200)
	this->fills = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1196)
	this->fillIndex = (int)-1;
	HX_STACK_LINE(1221)
	this->gl = gl;
	HX_STACK_LINE(1223)
	this->color = Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((int)0);
	HX_STACK_LINE(1224)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1225)
	this->alpha = (int)1;
	HX_STACK_LINE(1226)
	this->dirty = true;
	HX_STACK_LINE(1228)
	this->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill;
	HX_STACK_LINE(1230)
	::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1230)
	this->textureMatrix = _g;
	HX_STACK_LINE(1231)
	::openfl::geom::Point _g1 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1231)
	this->textureTL = _g1;
	HX_STACK_LINE(1232)
	::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1232)
	this->textureBR = _g2;
}
;
	return null();
}

//GLBucket_obj::~GLBucket_obj() { }

Dynamic GLBucket_obj::__CreateEmpty() { return  new GLBucket_obj; }
hx::ObjectPtr< GLBucket_obj > GLBucket_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBucket_obj > result = new GLBucket_obj();
	result->__construct(gl);
	return result;}

Dynamic GLBucket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBucket_obj > result = new GLBucket_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_internal::renderer::opengl::utils::GLBucketData GLBucket_obj::getData( ::openfl::_internal::renderer::opengl::utils::BucketDataType type){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","getData",0x5a4019a2,"openfl._internal.renderer.opengl.utils.GLBucket.getData","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1235,0xd295150c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1236)
	Array< ::Dynamic > data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(1237)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(1239)
			data = this->fills;
		}
		;break;
		default: {
			HX_STACK_LINE(1241)
			data = this->lines;
		}
	}
	HX_STACK_LINE(1243)
	::openfl::_internal::renderer::opengl::utils::GLBucketData result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1244)
	bool remove = false;		HX_STACK_VAR(remove,"remove");
	HX_STACK_LINE(1245)
	{
		HX_STACK_LINE(1245)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1245)
		while((true)){
			HX_STACK_LINE(1245)
			if ((!(((_g < data->length))))){
				HX_STACK_LINE(1245)
				break;
			}
			HX_STACK_LINE(1245)
			::openfl::_internal::renderer::opengl::utils::GLBucketData d = data->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(1245)
			++(_g);
			HX_STACK_LINE(1246)
			if ((d->available)){
				HX_STACK_LINE(1247)
				result = d;
				HX_STACK_LINE(1248)
				remove = true;
				HX_STACK_LINE(1249)
				break;
			}
		}
	}
	HX_STACK_LINE(1253)
	if (((result == null()))){
		HX_STACK_LINE(1254)
		::openfl::_internal::renderer::opengl::utils::GLBucketData _g = ::openfl::_internal::renderer::opengl::utils::GLBucketData_obj::__new(this->gl);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1254)
		result = _g;
	}
	HX_STACK_LINE(1257)
	result->available = false;
	HX_STACK_LINE(1258)
	result->parent = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1259)
	result->type = type;
	HX_STACK_LINE(1261)
	if ((remove)){
		HX_STACK_LINE(1261)
		data->remove(result);
	}
	HX_STACK_LINE(1262)
	data->push(result);
	HX_STACK_LINE(1264)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(1266)
			::openfl::_internal::renderer::opengl::utils::BucketMode _g = this->mode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1266)
			switch( (int)(_g->__Index())){
				case (int)1: case (int)2: {
					HX_STACK_LINE(1268)
					result->vertexArray->attributes = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::fillVertexAttributes;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1271)
					Array< ::Dynamic > _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::drawTrianglesVertexAttributes->copy();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1271)
					result->vertexArray->attributes = _g1;
					HX_STACK_LINE(1272)
					result->vertexArray->attributes[(int)2] = result->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->copy();
				}
				;break;
				default: {
				}
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(1276)
			result->vertexArray->attributes = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::primitiveVertexAttributes;
		}
		;break;
	}
	HX_STACK_LINE(1281)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(GLBucket_obj,getData,return )

Void GLBucket_obj::optimize( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","optimize",0x868fc2db,"openfl._internal.renderer.opengl.utils.GLBucket.optimize","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1284,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1284)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1354)
		{
			HX_STACK_LINE(1354)
			Array< ::Dynamic > data = this->lines;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1354)
			if (((data->length > (int)1))){
				HX_STACK_LINE(1354)
				Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1354)
				::openfl::_internal::renderer::opengl::utils::GLBucketData tmp = null();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1354)
				::openfl::_internal::renderer::opengl::utils::GLBucketData last = null();		HX_STACK_VAR(last,"last");
				HX_STACK_LINE(1354)
				int idx = (int)0;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(1354)
				int vi = (int)0;		HX_STACK_VAR(vi,"vi");
				HX_STACK_LINE(1354)
				int ii = (int)0;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(1354)
				int before = data->length;		HX_STACK_VAR(before,"before");
				HX_STACK_LINE(1354)
				{
					HX_STACK_LINE(1354)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1354)
					while((true)){
						HX_STACK_LINE(1354)
						if ((!(((_g1 < data->length))))){
							HX_STACK_LINE(1354)
							break;
						}
						HX_STACK_LINE(1354)
						::openfl::_internal::renderer::opengl::utils::GLBucketData d = data->__get(_g1).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(d,"d");
						HX_STACK_LINE(1354)
						++(_g1);
						HX_STACK_LINE(1354)
						if (((bool((bool(d->available) || bool(d->rawVerts))) || bool(d->rawIndices)))){
							HX_STACK_LINE(1354)
							if (((tmp != null()))){
								HX_STACK_LINE(1354)
								result->push(tmp);
								HX_STACK_LINE(1354)
								tmp = null();
							}
							HX_STACK_LINE(1354)
							result->push(d);
							HX_STACK_LINE(1354)
							last = d;
							HX_STACK_LINE(1354)
							continue;
						}
						HX_STACK_LINE(1354)
						if (((bool((last == null())) || bool((last->drawMode == d->drawMode))))){
							HX_STACK_LINE(1354)
							if (((tmp == null()))){
								HX_STACK_LINE(1354)
								tmp = d;
							}
							else{
								HX_STACK_LINE(1354)
								vi = tmp->verts->length;
								HX_STACK_LINE(1354)
								ii = tmp->indices->length;
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1354)
									int _g11 = d->verts->length;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1354)
									while((true)){
										HX_STACK_LINE(1354)
										if ((!(((_g2 < _g11))))){
											HX_STACK_LINE(1354)
											break;
										}
										HX_STACK_LINE(1354)
										int j = (_g2)++;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1354)
										tmp->verts[(j + vi)] = d->verts->__get(j);
									}
								}
								HX_STACK_LINE(1354)
								{
									HX_STACK_LINE(1354)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(1354)
									int _g11 = d->indices->length;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(1354)
									while((true)){
										HX_STACK_LINE(1354)
										if ((!(((_g2 < _g11))))){
											HX_STACK_LINE(1354)
											break;
										}
										HX_STACK_LINE(1354)
										int j = (_g2)++;		HX_STACK_VAR(j,"j");
										HX_STACK_LINE(1354)
										tmp->indices[(j + ii)] = (d->indices->__get(j) + idx);
									}
								}
							}
							HX_STACK_LINE(1354)
							idx = (tmp->indices->__get((tmp->indices->length - (int)1)) + (int)1);
							HX_STACK_LINE(1354)
							last = d;
						}
						else{
							HX_STACK_LINE(1354)
							if (((tmp != null()))){
								HX_STACK_LINE(1354)
								result->push(tmp);
								HX_STACK_LINE(1354)
								tmp = null();
							}
							HX_STACK_LINE(1354)
							result->push(d);
							HX_STACK_LINE(1354)
							last = d;
							HX_STACK_LINE(1354)
							continue;
						}
					}
				}
				HX_STACK_LINE(1354)
				if (((bool((result->length == (int)0)) && bool((tmp != null()))))){
					HX_STACK_LINE(1354)
					result->push(tmp);
				}
				HX_STACK_LINE(1354)
				if (((result->length > (int)0))){
					HX_STACK_LINE(1354)
					switch( (int)(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line->__Index())){
						case (int)1: {
							HX_STACK_LINE(1354)
							_g->fills = result;
						}
						;break;
						default: {
							HX_STACK_LINE(1354)
							_g->lines = result;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,optimize,(void))

Void GLBucket_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","reset",0x11a28911,"openfl._internal.renderer.opengl.utils.GLBucket.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1360,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1361)
		{
			HX_STACK_LINE(1361)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1361)
			Array< ::Dynamic > _g1 = this->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1361)
			while((true)){
				HX_STACK_LINE(1361)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1361)
					break;
				}
				HX_STACK_LINE(1361)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1361)
				++(_g);
				HX_STACK_LINE(1362)
				fill->reset();
			}
		}
		HX_STACK_LINE(1365)
		{
			HX_STACK_LINE(1365)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1365)
			Array< ::Dynamic > _g1 = this->lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1365)
			while((true)){
				HX_STACK_LINE(1365)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1365)
					break;
				}
				HX_STACK_LINE(1365)
				::openfl::_internal::renderer::opengl::utils::GLBucketData line = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(1365)
				++(_g);
				HX_STACK_LINE(1366)
				line->reset();
			}
		}
		HX_STACK_LINE(1369)
		this->fillIndex = (int)-1;
		HX_STACK_LINE(1370)
		this->uploadTileBuffer = true;
		HX_STACK_LINE(1371)
		this->graphicType = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,reset,(void))

Void GLBucket_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucket","upload",0xe076e47f,"openfl._internal.renderer.opengl.utils.GLBucket.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1374,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1376)
		if ((this->uploadTileBuffer)){
			HX_STACK_LINE(1377)
			if (((this->tileBuffer == null()))){
				HX_STACK_LINE(1378)
				int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1378)
				Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1378)
				::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1378)
				this->tileBuffer = _g2;
				HX_STACK_LINE(1379)
				this->tile = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)4096).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)4096).Add((int)0).Add((int)1).Add((int)4096).Add((int)4096).Add((int)1).Add((int)1);
				HX_STACK_LINE(1385)
				::lime::utils::Int16Array _g3 = ::lime::utils::Int16Array_obj::__new(this->tile,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1385)
				this->glTile = _g3;
			}
			HX_STACK_LINE(1387)
			{
				HX_STACK_LINE(1387)
				::lime::graphics::opengl::GLBuffer buffer = this->tileBuffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1387)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
			HX_STACK_LINE(1388)
			{
				HX_STACK_LINE(1388)
				::lime::utils::ArrayBufferView data = this->glTile;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1388)
				{
					HX_STACK_LINE(1388)
					::lime::utils::ByteArray _g4 = data->getByteBuffer();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1388)
					int _g5 = data->getStart();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1388)
					int _g6 = data->getLength();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1388)
					::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(this->gl->ARRAY_BUFFER,_g4,_g5,_g6,this->gl->STATIC_DRAW);
				}
			}
			HX_STACK_LINE(1389)
			this->uploadTileBuffer = false;
		}
		HX_STACK_LINE(1392)
		if (((this->mode != ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line))){
			HX_STACK_LINE(1393)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1393)
			Array< ::Dynamic > _g1 = this->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1393)
			while((true)){
				HX_STACK_LINE(1393)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1393)
					break;
				}
				HX_STACK_LINE(1393)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1393)
				++(_g);
				HX_STACK_LINE(1394)
				if ((!(fill->available))){
					HX_STACK_LINE(1395)
					fill->upload();
				}
			}
		}
		HX_STACK_LINE(1400)
		{
			HX_STACK_LINE(1400)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1400)
			Array< ::Dynamic > _g1 = this->lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1400)
			while((true)){
				HX_STACK_LINE(1400)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1400)
					break;
				}
				HX_STACK_LINE(1400)
				::openfl::_internal::renderer::opengl::utils::GLBucketData line = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(1400)
				++(_g);
				HX_STACK_LINE(1401)
				if ((!(line->available))){
					HX_STACK_LINE(1402)
					line->upload();
				}
			}
		}
		HX_STACK_LINE(1406)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucket_obj,upload,(void))


GLBucket_obj::GLBucket_obj()
{
}

void GLBucket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBucket);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(graphicType,"graphicType");
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(fillIndex,"fillIndex");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(fills,"fills");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(textureMatrix,"textureMatrix");
	HX_MARK_MEMBER_NAME(textureRepeat,"textureRepeat");
	HX_MARK_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_MARK_MEMBER_NAME(textureTL,"textureTL");
	HX_MARK_MEMBER_NAME(textureBR,"textureBR");
	HX_MARK_MEMBER_NAME(overrideMatrix,"overrideMatrix");
	HX_MARK_MEMBER_NAME(tileBuffer,"tileBuffer");
	HX_MARK_MEMBER_NAME(glTile,"glTile");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(uploadTileBuffer,"uploadTileBuffer");
	HX_MARK_END_CLASS();
}

void GLBucket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(graphicType,"graphicType");
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(fillIndex,"fillIndex");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(fills,"fills");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(textureMatrix,"textureMatrix");
	HX_VISIT_MEMBER_NAME(textureRepeat,"textureRepeat");
	HX_VISIT_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_VISIT_MEMBER_NAME(textureTL,"textureTL");
	HX_VISIT_MEMBER_NAME(textureBR,"textureBR");
	HX_VISIT_MEMBER_NAME(overrideMatrix,"overrideMatrix");
	HX_VISIT_MEMBER_NAME(tileBuffer,"tileBuffer");
	HX_VISIT_MEMBER_NAME(glTile,"glTile");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(uploadTileBuffer,"uploadTileBuffer");
}

Dynamic GLBucket_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"tile") ) { return tile; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"fills") ) { return fills; }
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"glTile") ) { return glTile; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"optimize") ) { return optimize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
		if (HX_FIELD_EQ(inName,"fillIndex") ) { return fillIndex; }
		if (HX_FIELD_EQ(inName,"textureTL") ) { return textureTL; }
		if (HX_FIELD_EQ(inName,"textureBR") ) { return textureBR; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileBuffer") ) { return tileBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphicType") ) { return graphicType; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureMatrix") ) { return textureMatrix; }
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { return textureRepeat; }
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { return textureSmooth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadTileBuffer") ) { return uploadTileBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBucket_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fills") ) { fills=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glTile") ) { glTile=inValue.Cast< ::lime::utils::Int16Array >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillIndex") ) { fillIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureTL") ) { textureTL=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureBR") ) { textureBR=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileBuffer") ) { tileBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"graphicType") ) { graphicType=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GraphicType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureMatrix") ) { textureMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureRepeat") ) { textureRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { textureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { overrideMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadTileBuffer") ) { uploadTileBuffer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBucket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("graphicType"));
	outFields->push(HX_CSTRING("lastIndex"));
	outFields->push(HX_CSTRING("fillIndex"));
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("fills"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("textureMatrix"));
	outFields->push(HX_CSTRING("textureRepeat"));
	outFields->push(HX_CSTRING("textureSmooth"));
	outFields->push(HX_CSTRING("textureTL"));
	outFields->push(HX_CSTRING("textureBR"));
	outFields->push(HX_CSTRING("overrideMatrix"));
	outFields->push(HX_CSTRING("tileBuffer"));
	outFields->push(HX_CSTRING("glTile"));
	outFields->push(HX_CSTRING("tile"));
	outFields->push(HX_CSTRING("uploadTileBuffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBucket_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLBucket_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(GLBucket_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GraphicType*/ ,(int)offsetof(GLBucket_obj,graphicType),HX_CSTRING("graphicType")},
	{hx::fsInt,(int)offsetof(GLBucket_obj,lastIndex),HX_CSTRING("lastIndex")},
	{hx::fsInt,(int)offsetof(GLBucket_obj,fillIndex),HX_CSTRING("fillIndex")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketMode*/ ,(int)offsetof(GLBucket_obj,mode),HX_CSTRING("mode")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLBucket_obj,fills),HX_CSTRING("fills")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLBucket_obj,lines),HX_CSTRING("lines")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLBucket_obj,bitmap),HX_CSTRING("bitmap")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(GLBucket_obj,texture),HX_CSTRING("texture")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLBucket_obj,textureMatrix),HX_CSTRING("textureMatrix")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,textureRepeat),HX_CSTRING("textureRepeat")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,textureSmooth),HX_CSTRING("textureSmooth")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLBucket_obj,textureTL),HX_CSTRING("textureTL")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLBucket_obj,textureBR),HX_CSTRING("textureBR")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLBucket_obj,overrideMatrix),HX_CSTRING("overrideMatrix")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLBucket_obj,tileBuffer),HX_CSTRING("tileBuffer")},
	{hx::fsObject /*::lime::utils::Int16Array*/ ,(int)offsetof(GLBucket_obj,glTile),HX_CSTRING("glTile")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLBucket_obj,tile),HX_CSTRING("tile")},
	{hx::fsBool,(int)offsetof(GLBucket_obj,uploadTileBuffer),HX_CSTRING("uploadTileBuffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("color"),
	HX_CSTRING("alpha"),
	HX_CSTRING("dirty"),
	HX_CSTRING("graphicType"),
	HX_CSTRING("lastIndex"),
	HX_CSTRING("fillIndex"),
	HX_CSTRING("mode"),
	HX_CSTRING("fills"),
	HX_CSTRING("lines"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("texture"),
	HX_CSTRING("textureMatrix"),
	HX_CSTRING("textureRepeat"),
	HX_CSTRING("textureSmooth"),
	HX_CSTRING("textureTL"),
	HX_CSTRING("textureBR"),
	HX_CSTRING("overrideMatrix"),
	HX_CSTRING("tileBuffer"),
	HX_CSTRING("glTile"),
	HX_CSTRING("tile"),
	HX_CSTRING("uploadTileBuffer"),
	HX_CSTRING("getData"),
	HX_CSTRING("optimize"),
	HX_CSTRING("reset"),
	HX_CSTRING("upload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBucket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBucket_obj::__mClass,"__mClass");
};

#endif

Class GLBucket_obj::__mClass;

void GLBucket_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GLBucket"), hx::TCanCast< GLBucket_obj> ,sStaticFields,sMemberFields,
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

void GLBucket_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
