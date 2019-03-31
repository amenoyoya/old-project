#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt32Array
#include <lime/utils/UInt32Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
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

Void GraphicsRenderer_obj::__construct()
{
	return null();
}

//GraphicsRenderer_obj::~GraphicsRenderer_obj() { }

Dynamic GraphicsRenderer_obj::__CreateEmpty() { return  new GraphicsRenderer_obj; }
hx::ObjectPtr< GraphicsRenderer_obj > GraphicsRenderer_obj::__new()
{  hx::ObjectPtr< GraphicsRenderer_obj > result = new GraphicsRenderer_obj();
	result->__construct();
	return result;}

Dynamic GraphicsRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsRenderer_obj > result = new GraphicsRenderer_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > GraphicsRenderer_obj::fillVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::drawTrianglesVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::primitiveVertexAttributes;

Array< ::Dynamic > GraphicsRenderer_obj::graphicsDataPool;

Array< ::Dynamic > GraphicsRenderer_obj::bucketPool;

::openfl::geom::Point GraphicsRenderer_obj::objectPosition;

::openfl::geom::Rectangle GraphicsRenderer_obj::objectBounds;

::lime::graphics::opengl::GLBuffer GraphicsRenderer_obj::lastVertsBuffer;

::openfl::_internal::renderer::opengl::utils::BucketMode GraphicsRenderer_obj::lastBucketMode;

::lime::graphics::opengl::GLTexture GraphicsRenderer_obj::lastTexture;

bool GraphicsRenderer_obj::lastTextureRepeat;

bool GraphicsRenderer_obj::lastTextureSmooth;

::openfl::geom::Matrix GraphicsRenderer_obj::overrideMatrix;

Void GraphicsRenderer_obj::buildCircle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildCircle",0x5396c8ff,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildCircle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",75,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(76)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(78)
		Float x = rectData->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(79)
		Float y = rectData->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(80)
		Float width = rectData->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(81)
		Float height;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(81)
		if (((rectData->length == (int)3))){
			HX_STACK_LINE(81)
			height = width;
		}
		else{
			HX_STACK_LINE(81)
			height = rectData->__get((int)3);
		}
		HX_STACK_LINE(83)
		if (((path->type == ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Ellipse))){
			HX_STACK_LINE(84)
			hx::DivEq(width,(int)2);
			HX_STACK_LINE(85)
			hx::DivEq(height,(int)2);
			HX_STACK_LINE(86)
			hx::AddEq(x,width);
			HX_STACK_LINE(87)
			hx::AddEq(y,height);
		}
		HX_STACK_LINE(90)
		if ((localCoords)){
			HX_STACK_LINE(91)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(92)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(95)
		int totalSegs = (int)40;		HX_STACK_VAR(totalSegs,"totalSegs");
		HX_STACK_LINE(96)
		Float seg = (Float((::Math_obj::PI * (int)2)) / Float(totalSegs));		HX_STACK_VAR(seg,"seg");
		HX_STACK_LINE(98)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(99)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(101)
		if (((fill != null()))){
			HX_STACK_LINE(102)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(103)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(105)
			int vertPos = ::Std_obj::_int((Float(verts->length) / Float((int)2)));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(107)
			indices->push(vertPos);
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(109)
				int _g = (totalSegs + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(109)
				while((true)){
					HX_STACK_LINE(109)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(109)
						break;
					}
					HX_STACK_LINE(109)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(111)
					verts->push(x);
					HX_STACK_LINE(112)
					verts->push(y);
					HX_STACK_LINE(114)
					Float _g2 = ::Math_obj::sin((seg * i));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(114)
					Float _g11 = (_g2 * width);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(114)
					Float _g21 = (x + _g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(114)
					verts->push(_g21);
					HX_STACK_LINE(115)
					Float _g3 = ::Math_obj::cos((seg * i));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(115)
					Float _g4 = (_g3 * height);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(115)
					Float _g5 = (y + _g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(115)
					verts->push(_g5);
					HX_STACK_LINE(117)
					int _g6 = (vertPos)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(117)
					indices->push(_g6);
					HX_STACK_LINE(118)
					int _g7 = (vertPos)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(118)
					indices->push(_g7);
				}
			}
			HX_STACK_LINE(122)
			indices->push((vertPos - (int)1));
		}
		HX_STACK_LINE(127)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(129)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(130)
			path->points = Array_obj< Float >::__new();
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(132)
				int _g = (totalSegs + (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(132)
				while((true)){
					HX_STACK_LINE(132)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(132)
						break;
					}
					HX_STACK_LINE(132)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(134)
					Float _g8 = ::Math_obj::sin((seg * i));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(134)
					Float _g9 = (_g8 * width);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(134)
					Float _g10 = (x + _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(134)
					path->points->push(_g10);
					HX_STACK_LINE(135)
					Float _g11 = ::Math_obj::cos((seg * i));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(135)
					Float _g12 = (_g11 * height);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(135)
					Float _g13 = (y + _g12);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(135)
					path->points->push(_g13);
				}
			}
			HX_STACK_LINE(139)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(140)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildCircle,(void))

Void GraphicsRenderer_obj::buildComplexPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildComplexPoly",0xd9b80f4d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildComplexPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",146,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(148)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(150)
		if (((path->points->length >= (int)6))){
			HX_STACK_LINE(151)
			Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
			HX_STACK_LINE(153)
			if ((localCoords)){
				HX_STACK_LINE(154)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(154)
				int _g = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(154)
				while((true)){
					HX_STACK_LINE(154)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(154)
						break;
					}
					HX_STACK_LINE(154)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(155)
					hx::SubEq(points[(i * (int)2)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(156)
					hx::SubEq(points[((i * (int)2) + (int)1)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
				}
			}
			HX_STACK_LINE(161)
			::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(161)
			bucket = _g;
			HX_STACK_LINE(162)
			::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
			HX_STACK_LINE(163)
			fill->drawMode = glStack->gl->TRIANGLE_FAN;
			HX_STACK_LINE(164)
			fill->verts = points;
			HX_STACK_LINE(166)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(167)
			int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(168)
				while((true)){
					HX_STACK_LINE(168)
					if ((!(((_g1 < length))))){
						HX_STACK_LINE(168)
						break;
					}
					HX_STACK_LINE(168)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(170)
					indices->push(i);
				}
			}
		}
		HX_STACK_LINE(175)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(177)
			if (((bucket == null()))){
				HX_STACK_LINE(178)
				::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(178)
				bucket = _g1;
			}
			HX_STACK_LINE(180)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,localCoords);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildComplexPoly,(void))

Void GraphicsRenderer_obj::buildLine( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLBucket bucket,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildLine",0xe6638523,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildLine","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",185,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(187)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(188)
		if (((points->length == (int)0))){
			HX_STACK_LINE(188)
			return null();
		}
		HX_STACK_LINE(190)
		::openfl::_internal::renderer::opengl::utils::GLBucketData line = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Line);		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(192)
		if ((localCoords)){
			HX_STACK_LINE(193)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			int _g = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(194)
				hx::SubEq(points[(i * (int)2)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
				HX_STACK_LINE(195)
				hx::SubEq(points[((i * (int)2) + (int)1)],::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
			}
		}
		HX_STACK_LINE(199)
		if (((hx::Mod(path->line->width,(int)2) > (int)0))){
			HX_STACK_LINE(201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			int _g = points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(203)
				hx::AddEq(points[i],0.5);
			}
		}
		HX_STACK_LINE(209)
		::openfl::geom::Point firstPoint = ::openfl::geom::Point_obj::__new(points->__get((int)0),points->__get((int)1));		HX_STACK_VAR(firstPoint,"firstPoint");
		HX_STACK_LINE(210)
		int _g = ::Std_obj::_int((points->length - (int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(210)
		Float _g1 = points->__get(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		int _g2 = ::Std_obj::_int((points->length - (int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(210)
		Float _g3 = points->__get(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(210)
		::openfl::geom::Point lastPoint = ::openfl::geom::Point_obj::__new(_g1,_g3);		HX_STACK_VAR(lastPoint,"lastPoint");
		HX_STACK_LINE(212)
		if (((bool((firstPoint->x == lastPoint->x)) && bool((firstPoint->y == lastPoint->y))))){
			HX_STACK_LINE(214)
			Array< Float > _g4 = points->copy();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(214)
			points = _g4;
			HX_STACK_LINE(216)
			points->pop();
			HX_STACK_LINE(217)
			points->pop();
			HX_STACK_LINE(219)
			int _g5 = ::Std_obj::_int((points->length - (int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(219)
			Float _g6 = points->__get(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(219)
			int _g7 = ::Std_obj::_int((points->length - (int)1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(219)
			Float _g8 = points->__get(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(219)
			::openfl::geom::Point _g9 = ::openfl::geom::Point_obj::__new(_g6,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(219)
			lastPoint = _g9;
			HX_STACK_LINE(221)
			Float midPointX = (lastPoint->x + (((firstPoint->x - lastPoint->x)) * 0.5));		HX_STACK_VAR(midPointX,"midPointX");
			HX_STACK_LINE(222)
			Float midPointY = (lastPoint->y + (((firstPoint->y - lastPoint->y)) * 0.5));		HX_STACK_VAR(midPointY,"midPointY");
			HX_STACK_LINE(224)
			points->unshift(midPointY);
			HX_STACK_LINE(225)
			points->unshift(midPointX);
			HX_STACK_LINE(226)
			points->push(midPointX);
			HX_STACK_LINE(227)
			points->push(midPointY);
		}
		HX_STACK_LINE(231)
		Array< Float > verts = line->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(232)
		Array< int > indices = line->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(233)
		int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(234)
		int indexCount = points->length;		HX_STACK_VAR(indexCount,"indexCount");
		HX_STACK_LINE(235)
		int indexStart = ::Std_obj::_int((Float(verts->length) / Float((int)6)));		HX_STACK_VAR(indexStart,"indexStart");
		HX_STACK_LINE(237)
		Float width = (Float(path->line->width) / Float((int)2));		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(239)
		Array< Float > color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			Dynamic hex = path->line->color;		HX_STACK_VAR(hex,"hex");
			HX_STACK_LINE(239)
			if (((hex == null()))){
				HX_STACK_LINE(239)
				color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
			}
			else{
				HX_STACK_LINE(239)
				color = Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255)));
			}
		}
		HX_STACK_LINE(240)
		Dynamic alpha = path->line->alpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(241)
		Float r = (color->__get((int)0) * alpha);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(242)
		Float g = (color->__get((int)1) * alpha);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(243)
		Float b = (color->__get((int)2) * alpha);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(245)
		Float px;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(245)
		Float py;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(245)
		Float p1x;		HX_STACK_VAR(p1x,"p1x");
		HX_STACK_LINE(245)
		Float p1y;		HX_STACK_VAR(p1y,"p1y");
		HX_STACK_LINE(245)
		Float p2x;		HX_STACK_VAR(p2x,"p2x");
		HX_STACK_LINE(245)
		Float p2y;		HX_STACK_VAR(p2y,"p2y");
		HX_STACK_LINE(245)
		Float p3x;		HX_STACK_VAR(p3x,"p3x");
		HX_STACK_LINE(245)
		Float p3y;		HX_STACK_VAR(p3y,"p3y");
		HX_STACK_LINE(246)
		Float perpx;		HX_STACK_VAR(perpx,"perpx");
		HX_STACK_LINE(246)
		Float perpy;		HX_STACK_VAR(perpy,"perpy");
		HX_STACK_LINE(246)
		Float perp2x;		HX_STACK_VAR(perp2x,"perp2x");
		HX_STACK_LINE(246)
		Float perp2y;		HX_STACK_VAR(perp2y,"perp2y");
		HX_STACK_LINE(246)
		Float perp3x;		HX_STACK_VAR(perp3x,"perp3x");
		HX_STACK_LINE(246)
		Float perp3y;		HX_STACK_VAR(perp3y,"perp3y");
		HX_STACK_LINE(247)
		Float a1;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(247)
		Float b1;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(247)
		Float c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(247)
		Float a2;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(247)
		Float b2;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(247)
		Float c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(248)
		Float denom;		HX_STACK_VAR(denom,"denom");
		HX_STACK_LINE(248)
		Float pdist;		HX_STACK_VAR(pdist,"pdist");
		HX_STACK_LINE(248)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(250)
		p1x = points->__get((int)0);
		HX_STACK_LINE(251)
		p1y = points->__get((int)1);
		HX_STACK_LINE(253)
		p2x = points->__get((int)2);
		HX_STACK_LINE(254)
		p2y = points->__get((int)3);
		HX_STACK_LINE(256)
		perpx = -(((p1y - p2y)));
		HX_STACK_LINE(257)
		perpy = (p1x - p2x);
		HX_STACK_LINE(259)
		Float _g10 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(259)
		Float _g11 = ::Math_obj::sqrt(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(259)
		dist = _g11;
		HX_STACK_LINE(261)
		perpx = (Float(perpx) / Float(dist));
		HX_STACK_LINE(262)
		perpy = (Float(perpy) / Float(dist));
		HX_STACK_LINE(263)
		perpx = (perpx * width);
		HX_STACK_LINE(264)
		perpy = (perpy * width);
		HX_STACK_LINE(266)
		verts->push((p1x - perpx));
		HX_STACK_LINE(267)
		verts->push((p1y - perpy));
		HX_STACK_LINE(268)
		verts->push(r);
		HX_STACK_LINE(269)
		verts->push(g);
		HX_STACK_LINE(270)
		verts->push(b);
		HX_STACK_LINE(271)
		verts->push(alpha);
		HX_STACK_LINE(273)
		verts->push((p1x + perpx));
		HX_STACK_LINE(274)
		verts->push((p1y + perpy));
		HX_STACK_LINE(275)
		verts->push(r);
		HX_STACK_LINE(276)
		verts->push(g);
		HX_STACK_LINE(277)
		verts->push(b);
		HX_STACK_LINE(278)
		verts->push(alpha);
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			int _g12 = (int)1;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(280)
			int _g4 = (length - (int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(280)
			while((true)){
				HX_STACK_LINE(280)
				if ((!(((_g12 < _g4))))){
					HX_STACK_LINE(280)
					break;
				}
				HX_STACK_LINE(280)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(282)
				p1x = points->__get((((i - (int)1)) * (int)2));
				HX_STACK_LINE(283)
				p1y = points->__get(((((i - (int)1)) * (int)2) + (int)1));
				HX_STACK_LINE(284)
				p2x = points->__get((i * (int)2));
				HX_STACK_LINE(285)
				p2y = points->__get(((i * (int)2) + (int)1));
				HX_STACK_LINE(286)
				p3x = points->__get((((i + (int)1)) * (int)2));
				HX_STACK_LINE(287)
				p3y = points->__get(((((i + (int)1)) * (int)2) + (int)1));
				HX_STACK_LINE(289)
				perpx = -(((p1y - p2y)));
				HX_STACK_LINE(290)
				perpy = (p1x - p2x);
				HX_STACK_LINE(292)
				Float _g121 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(292)
				Float _g13 = ::Math_obj::sqrt(_g121);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(292)
				dist = _g13;
				HX_STACK_LINE(293)
				perpx = (Float(perpx) / Float(dist));
				HX_STACK_LINE(294)
				perpy = (Float(perpy) / Float(dist));
				HX_STACK_LINE(295)
				perpx = (perpx * width);
				HX_STACK_LINE(296)
				perpy = (perpy * width);
				HX_STACK_LINE(298)
				perp2x = -(((p2y - p3y)));
				HX_STACK_LINE(299)
				perp2y = (p2x - p3x);
				HX_STACK_LINE(301)
				Float _g14 = ::Math_obj::abs(((perp2x * perp2x) + (perp2y * perp2y)));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(301)
				Float _g15 = ::Math_obj::sqrt(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(301)
				dist = _g15;
				HX_STACK_LINE(302)
				perp2x = (Float(perp2x) / Float(dist));
				HX_STACK_LINE(303)
				perp2y = (Float(perp2y) / Float(dist));
				HX_STACK_LINE(304)
				perp2x = (perp2x * width);
				HX_STACK_LINE(305)
				perp2y = (perp2y * width);
				HX_STACK_LINE(307)
				a1 = ((-(perpy) + p1y) - ((-(perpy) + p2y)));
				HX_STACK_LINE(308)
				b1 = ((-(perpx) + p2x) - ((-(perpx) + p1x)));
				HX_STACK_LINE(309)
				c1 = ((((-(perpx) + p1x)) * ((-(perpy) + p2y))) - (((-(perpx) + p2x)) * ((-(perpy) + p1y))));
				HX_STACK_LINE(310)
				a2 = ((-(perp2y) + p3y) - ((-(perp2y) + p2y)));
				HX_STACK_LINE(311)
				b2 = ((-(perp2x) + p2x) - ((-(perp2x) + p3x)));
				HX_STACK_LINE(312)
				c2 = ((((-(perp2x) + p3x)) * ((-(perp2y) + p2y))) - (((-(perp2x) + p2x)) * ((-(perp2y) + p3y))));
				HX_STACK_LINE(314)
				denom = ((a1 * b2) - (a2 * b1));
				HX_STACK_LINE(316)
				Float _g16 = ::Math_obj::abs(denom);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(316)
				if (((_g16 < 0.1))){
					HX_STACK_LINE(318)
					hx::AddEq(denom,10.1);
					HX_STACK_LINE(320)
					verts->push((p2x - perpx));
					HX_STACK_LINE(321)
					verts->push((p2y - perpy));
					HX_STACK_LINE(322)
					verts->push(r);
					HX_STACK_LINE(323)
					verts->push(g);
					HX_STACK_LINE(324)
					verts->push(b);
					HX_STACK_LINE(325)
					verts->push(alpha);
					HX_STACK_LINE(327)
					verts->push((p2x + perpx));
					HX_STACK_LINE(328)
					verts->push((p2y + perpy));
					HX_STACK_LINE(329)
					verts->push(r);
					HX_STACK_LINE(330)
					verts->push(g);
					HX_STACK_LINE(331)
					verts->push(b);
					HX_STACK_LINE(332)
					verts->push(alpha);
					HX_STACK_LINE(334)
					continue;
				}
				HX_STACK_LINE(338)
				px = (Float((((b1 * c2) - (b2 * c1)))) / Float(denom));
				HX_STACK_LINE(339)
				py = (Float((((a2 * c1) - (a1 * c2)))) / Float(denom));
				HX_STACK_LINE(341)
				pdist = (((((px - p2x)) * ((px - p2x))) + ((py - p2y))) + ((py - p2y)));
				HX_STACK_LINE(343)
				if (((pdist > (int)19600))){
					HX_STACK_LINE(345)
					perp3x = (perpx - perp2x);
					HX_STACK_LINE(346)
					perp3y = (perpy - perp2y);
					HX_STACK_LINE(348)
					Float _g17 = ::Math_obj::abs(((perp3x * perp3x) + (perp3y * perp3y)));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(348)
					Float _g18 = ::Math_obj::sqrt(_g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(348)
					dist = _g18;
					HX_STACK_LINE(349)
					perp3x = (Float(perp3x) / Float(dist));
					HX_STACK_LINE(350)
					perp3y = (Float(perp3y) / Float(dist));
					HX_STACK_LINE(351)
					perp3x = (perp3x * width);
					HX_STACK_LINE(352)
					perp3y = (perp3y * width);
					HX_STACK_LINE(354)
					verts->push((p2x - perp3x));
					HX_STACK_LINE(355)
					verts->push((p2y - perp3y));
					HX_STACK_LINE(356)
					verts->push(r);
					HX_STACK_LINE(357)
					verts->push(g);
					HX_STACK_LINE(358)
					verts->push(b);
					HX_STACK_LINE(359)
					verts->push(alpha);
					HX_STACK_LINE(361)
					verts->push((p2x + perp3x));
					HX_STACK_LINE(362)
					verts->push((p2y + perp3y));
					HX_STACK_LINE(363)
					verts->push(r);
					HX_STACK_LINE(364)
					verts->push(g);
					HX_STACK_LINE(365)
					verts->push(b);
					HX_STACK_LINE(366)
					verts->push(alpha);
					HX_STACK_LINE(368)
					verts->push((p2x - perp3x));
					HX_STACK_LINE(369)
					verts->push((p2y - perp3y));
					HX_STACK_LINE(370)
					verts->push(r);
					HX_STACK_LINE(371)
					verts->push(g);
					HX_STACK_LINE(372)
					verts->push(b);
					HX_STACK_LINE(373)
					verts->push(alpha);
					HX_STACK_LINE(375)
					(indexCount)++;
				}
				else{
					HX_STACK_LINE(379)
					verts->push(px);
					HX_STACK_LINE(380)
					verts->push(py);
					HX_STACK_LINE(381)
					verts->push(r);
					HX_STACK_LINE(382)
					verts->push(g);
					HX_STACK_LINE(383)
					verts->push(b);
					HX_STACK_LINE(384)
					verts->push(alpha);
					HX_STACK_LINE(386)
					verts->push((p2x - ((px - p2x))));
					HX_STACK_LINE(387)
					verts->push((p2y - ((py - p2y))));
					HX_STACK_LINE(388)
					verts->push(r);
					HX_STACK_LINE(389)
					verts->push(g);
					HX_STACK_LINE(390)
					verts->push(b);
					HX_STACK_LINE(391)
					verts->push(alpha);
				}
			}
		}
		HX_STACK_LINE(397)
		p1x = points->__get((((length - (int)2)) * (int)2));
		HX_STACK_LINE(398)
		p1y = points->__get(((((length - (int)2)) * (int)2) + (int)1));
		HX_STACK_LINE(399)
		p2x = points->__get((((length - (int)1)) * (int)2));
		HX_STACK_LINE(400)
		p2y = points->__get(((((length - (int)1)) * (int)2) + (int)1));
		HX_STACK_LINE(401)
		perpx = -(((p1y - p2y)));
		HX_STACK_LINE(402)
		perpy = (p1x - p2x);
		HX_STACK_LINE(404)
		Float _g19 = ::Math_obj::abs(((perpx * perpx) + (perpy * perpy)));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(404)
		Float _g20 = ::Math_obj::sqrt(_g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(404)
		dist = _g20;
		HX_STACK_LINE(405)
		if ((!(::Math_obj::isFinite(dist)))){
			HX_STACK_LINE(405)
			::haxe::Log_obj::trace(((perpx * perpx) + (perpy * perpy)),hx::SourceInfo(HX_CSTRING("GraphicsRenderer.hx"),405,HX_CSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer"),HX_CSTRING("buildLine")));
		}
		HX_STACK_LINE(406)
		perpx = (Float(perpx) / Float(dist));
		HX_STACK_LINE(407)
		perpy = (Float(perpy) / Float(dist));
		HX_STACK_LINE(408)
		perpx = (perpx * width);
		HX_STACK_LINE(409)
		perpy = (perpy * width);
		HX_STACK_LINE(411)
		verts->push((p2x - perpx));
		HX_STACK_LINE(412)
		verts->push((p2y - perpy));
		HX_STACK_LINE(413)
		verts->push(r);
		HX_STACK_LINE(414)
		verts->push(g);
		HX_STACK_LINE(415)
		verts->push(b);
		HX_STACK_LINE(416)
		verts->push(alpha);
		HX_STACK_LINE(418)
		verts->push((p2x + perpx));
		HX_STACK_LINE(419)
		verts->push((p2y + perpy));
		HX_STACK_LINE(420)
		verts->push(r);
		HX_STACK_LINE(421)
		verts->push(g);
		HX_STACK_LINE(422)
		verts->push(b);
		HX_STACK_LINE(423)
		verts->push(alpha);
		HX_STACK_LINE(425)
		indices->push(indexStart);
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(427)
			while((true)){
				HX_STACK_LINE(427)
				if ((!(((_g4 < indexCount))))){
					HX_STACK_LINE(427)
					break;
				}
				HX_STACK_LINE(427)
				int i = (_g4)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(429)
				int _g21 = (indexStart)++;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(429)
				indices->push(_g21);
			}
		}
		HX_STACK_LINE(433)
		indices->push((indexStart - (int)1));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildLine,(void))

Void GraphicsRenderer_obj::buildPoly( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildPoly",0xe90ceb7b,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildPoly","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",436,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(437)
		if (((path->points->length < (int)6))){
			HX_STACK_LINE(437)
			return null();
		}
		HX_STACK_LINE(438)
		Array< Float > points = path->points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(440)
		int l = points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(441)
		Float sx = points->__get((int)0);		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(441)
		Float sy = points->__get((int)1);		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(442)
		Float ex = points->__get((l - (int)2));		HX_STACK_VAR(ex,"ex");
		HX_STACK_LINE(442)
		Float ey = points->__get((l - (int)1));		HX_STACK_VAR(ey,"ey");
		HX_STACK_LINE(444)
		if (((bool((sx != ex)) || bool((sy != ey))))){
			HX_STACK_LINE(445)
			points->push(sx);
			HX_STACK_LINE(446)
			points->push(sy);
		}
		HX_STACK_LINE(449)
		int length = ::Std_obj::_int((Float(points->length) / Float((int)2)));		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(451)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(452)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(453)
		Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(454)
		Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(456)
		if (((fill != null()))){
			HX_STACK_LINE(457)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(points);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(458)
			Float vertPos = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(460)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(461)
			while((true)){
				HX_STACK_LINE(461)
				if ((!(((i < triangles->length))))){
					HX_STACK_LINE(461)
					break;
				}
				HX_STACK_LINE(463)
				int _g = ::Std_obj::_int((triangles->__get(i) + vertPos));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(463)
				indices->push(_g);
				HX_STACK_LINE(464)
				int _g1 = ::Std_obj::_int((triangles->__get(i) + vertPos));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(464)
				indices->push(_g1);
				HX_STACK_LINE(465)
				int _g2 = ::Std_obj::_int((triangles->__get((i + (int)1)) + vertPos));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(465)
				indices->push(_g2);
				HX_STACK_LINE(466)
				int _g3 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vertPos));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(466)
				indices->push(_g3);
				HX_STACK_LINE(467)
				int _g4 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vertPos));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(467)
				indices->push(_g4);
				HX_STACK_LINE(468)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(472)
			{
				HX_STACK_LINE(472)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(472)
				while((true)){
					HX_STACK_LINE(472)
					if ((!(((_g < length))))){
						HX_STACK_LINE(472)
						break;
					}
					HX_STACK_LINE(472)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(474)
					verts->push(points->__get((i1 * (int)2)));
					HX_STACK_LINE(475)
					verts->push(points->__get(((i1 * (int)2) + (int)1)));
				}
			}
		}
		HX_STACK_LINE(480)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(482)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildPoly,(void))

Void GraphicsRenderer_obj::buildRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRectangle",0xede73ca0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",487,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(488)
		Array< Float > rectData = path->points;		HX_STACK_VAR(rectData,"rectData");
		HX_STACK_LINE(489)
		Float x = rectData->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(490)
		Float y = rectData->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(491)
		Float width = rectData->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(492)
		Float height = rectData->__get((int)3);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(494)
		if ((localCoords)){
			HX_STACK_LINE(495)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(496)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(499)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(500)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(502)
		if (((fill != null()))){
			HX_STACK_LINE(503)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(504)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(506)
			int vertPos = ::Std_obj::_int((Float(verts->length) / Float((int)2)));		HX_STACK_VAR(vertPos,"vertPos");
			HX_STACK_LINE(508)
			verts->push(x);
			HX_STACK_LINE(509)
			verts->push(y);
			HX_STACK_LINE(510)
			verts->push((x + width));
			HX_STACK_LINE(511)
			verts->push(y);
			HX_STACK_LINE(512)
			verts->push(x);
			HX_STACK_LINE(513)
			verts->push((y + height));
			HX_STACK_LINE(514)
			verts->push((x + width));
			HX_STACK_LINE(515)
			verts->push((y + height));
			HX_STACK_LINE(517)
			indices->push(vertPos);
			HX_STACK_LINE(518)
			indices->push(vertPos);
			HX_STACK_LINE(519)
			indices->push((vertPos + (int)1));
			HX_STACK_LINE(520)
			indices->push((vertPos + (int)2));
			HX_STACK_LINE(521)
			indices->push((vertPos + (int)3));
			HX_STACK_LINE(522)
			indices->push((vertPos + (int)3));
		}
		HX_STACK_LINE(526)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(528)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(529)
			path->points = Array_obj< Float >::__new().Add(x).Add(y).Add((x + width)).Add(y).Add((x + width)).Add((y + height)).Add(x).Add((y + height)).Add(x).Add(y);
			HX_STACK_LINE(530)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(531)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRectangle,(void))

Void GraphicsRenderer_obj::buildRoundedRectangle( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildRoundedRectangle",0x47de3df1,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildRoundedRectangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",536,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(537)
		Array< Float > points = path->points->copy();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(538)
		Float x = points->__get((int)0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(539)
		Float y = points->__get((int)1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(540)
		Float width = points->__get((int)2);		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(541)
		Float height = points->__get((int)3);		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(542)
		Float radius = points->__get((int)4);		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(544)
		if ((localCoords)){
			HX_STACK_LINE(545)
			hx::SubEq(x,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
			HX_STACK_LINE(546)
			hx::SubEq(y,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
		}
		HX_STACK_LINE(549)
		Array< Float > recPoints = Array_obj< Float >::__new();		HX_STACK_VAR(recPoints,"recPoints");
		HX_STACK_LINE(550)
		recPoints->push(x);
		HX_STACK_LINE(551)
		recPoints->push((y + radius));
		HX_STACK_LINE(553)
		Array< Float > _g = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::quadraticBezierCurve(x,((y + height) - radius),x,(y + height),(x + radius),(y + height));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(553)
		Array< Float > _g1 = recPoints->concat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(553)
		recPoints = _g1;
		HX_STACK_LINE(554)
		Array< Float > _g2 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::quadraticBezierCurve(((x + width) - radius),(y + height),(x + width),(y + height),(x + width),((y + height) - radius));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(554)
		Array< Float > _g3 = recPoints->concat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(554)
		recPoints = _g3;
		HX_STACK_LINE(555)
		Array< Float > _g4 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::quadraticBezierCurve((x + width),(y + radius),(x + width),y,((x + width) - radius),y);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(555)
		Array< Float > _g5 = recPoints->concat(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(555)
		recPoints = _g5;
		HX_STACK_LINE(556)
		Array< Float > _g6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::quadraticBezierCurve((x + radius),y,x,y,x,(y + radius));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(556)
		Array< Float > _g7 = recPoints->concat(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(556)
		recPoints = _g7;
		HX_STACK_LINE(558)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(559)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(561)
		if (((fill != null()))){
			HX_STACK_LINE(562)
			Array< Float > verts = fill->verts;		HX_STACK_VAR(verts,"verts");
			HX_STACK_LINE(563)
			Array< int > indices = fill->indices;		HX_STACK_VAR(indices,"indices");
			HX_STACK_LINE(565)
			Float vecPos = (Float(verts->length) / Float((int)2));		HX_STACK_VAR(vecPos,"vecPos");
			HX_STACK_LINE(567)
			Array< int > triangles = ::openfl::_internal::renderer::opengl::utils::PolyK_obj::triangulate(recPoints);		HX_STACK_VAR(triangles,"triangles");
			HX_STACK_LINE(569)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(570)
			while((true)){
				HX_STACK_LINE(570)
				if ((!(((i < triangles->length))))){
					HX_STACK_LINE(570)
					break;
				}
				HX_STACK_LINE(572)
				int _g8 = ::Std_obj::_int((triangles->__get(i) + vecPos));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(572)
				indices->push(_g8);
				HX_STACK_LINE(573)
				int _g9 = ::Std_obj::_int((triangles->__get(i) + vecPos));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(573)
				indices->push(_g9);
				HX_STACK_LINE(574)
				int _g10 = ::Std_obj::_int((triangles->__get((i + (int)1)) + vecPos));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(574)
				indices->push(_g10);
				HX_STACK_LINE(575)
				int _g11 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vecPos));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(575)
				indices->push(_g11);
				HX_STACK_LINE(576)
				int _g12 = ::Std_obj::_int((triangles->__get((i + (int)2)) + vecPos));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(576)
				indices->push(_g12);
				HX_STACK_LINE(577)
				hx::AddEq(i,(int)3);
			}
			HX_STACK_LINE(581)
			i = (int)0;
			HX_STACK_LINE(582)
			while((true)){
				HX_STACK_LINE(582)
				if ((!(((i < recPoints->length))))){
					HX_STACK_LINE(582)
					break;
				}
				HX_STACK_LINE(584)
				verts->push(recPoints->__get(i));
				HX_STACK_LINE(585)
				int _g13 = ++(i);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(585)
				Float _g14 = recPoints->__get(_g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(585)
				verts->push(_g14);
				HX_STACK_LINE(586)
				(i)++;
			}
		}
		HX_STACK_LINE(590)
		if (((path->line->width > (int)0))){
			HX_STACK_LINE(592)
			Array< Float > tempPoints = path->points;		HX_STACK_VAR(tempPoints,"tempPoints");
			HX_STACK_LINE(593)
			path->points = recPoints;
			HX_STACK_LINE(594)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildLine(path,bucket,null());
			HX_STACK_LINE(595)
			path->points = tempPoints;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,buildRoundedRectangle,(void))

Void GraphicsRenderer_obj::buildDrawTriangles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::display::DisplayObject object,::openfl::_internal::renderer::opengl::utils::GLStack glStack,hx::Null< bool >  __o_localCoords){
bool localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTriangles",0xec6e38f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",600,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(602)
		Dynamic args = ::Type_obj::enumParameters(path->type);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(604)
		Array< Float > vertices = args->__GetItem((int)0);		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(605)
		Array< int > indices = args->__GetItem((int)1);		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(606)
		Array< Float > uvtData = args->__GetItem((int)2);		HX_STACK_VAR(uvtData,"uvtData");
		HX_STACK_LINE(607)
		::openfl::display::TriangleCulling culling = args->__GetItem((int)3);		HX_STACK_VAR(culling,"culling");
		HX_STACK_LINE(608)
		Array< int > colors = args->__GetItem((int)4);		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(609)
		int blendMode = args->__GetItem((int)5);		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(611)
		Float a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(611)
		Float b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(611)
		Float c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(611)
		Float d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(611)
		Float tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(611)
		Float ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(613)
		if ((localCoords)){
			HX_STACK_LINE(614)
			a = 1.0;
			HX_STACK_LINE(615)
			b = 0.0;
			HX_STACK_LINE(616)
			c = 0.0;
			HX_STACK_LINE(617)
			d = 1.0;
			HX_STACK_LINE(618)
			tx = 0.0;
			HX_STACK_LINE(619)
			ty = 0.0;
		}
		else{
			HX_STACK_LINE(621)
			a = object->__worldTransform->a;
			HX_STACK_LINE(622)
			b = object->__worldTransform->b;
			HX_STACK_LINE(623)
			c = object->__worldTransform->c;
			HX_STACK_LINE(624)
			d = object->__worldTransform->d;
			HX_STACK_LINE(625)
			tx = object->__worldTransform->tx;
			HX_STACK_LINE(626)
			ty = object->__worldTransform->ty;
		}
		HX_STACK_LINE(629)
		bool hasColors = (bool((colors != null())) && bool((colors->length > (int)0)));		HX_STACK_VAR(hasColors,"hasColors");
		HX_STACK_LINE(631)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(632)
		::openfl::_internal::renderer::opengl::utils::GLBucketData fill = bucket->getData(::openfl::_internal::renderer::opengl::utils::BucketDataType_obj::Fill);		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(633)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute colorAttrib = fill->vertexArray->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(colorAttrib,"colorAttrib");
		HX_STACK_LINE(634)
		colorAttrib->enabled = hasColors;
		HX_STACK_LINE(635)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(635)
		colorAttrib->defaultValue = _g;
		HX_STACK_LINE(637)
		fill->rawVerts = true;
		HX_STACK_LINE(638)
		fill->glLength = indices->length;
		HX_STACK_LINE(639)
		int _g1 = fill->vertexArray->get_stride();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(639)
		Float _g2 = (Float(_g1) / Float((int)4));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(639)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(639)
		fill->stride = _g3;
		HX_STACK_LINE(641)
		int vertsLength = (fill->glLength * fill->stride);		HX_STACK_VAR(vertsLength,"vertsLength");
		HX_STACK_LINE(642)
		::lime::utils::Float32Array verts;		HX_STACK_VAR(verts,"verts");
		HX_STACK_LINE(644)
		if (((bool((fill->glVerts == null())) || bool((fill->glVerts->length < vertsLength))))){
			HX_STACK_LINE(645)
			::lime::utils::Float32Array _g4 = ::lime::utils::Float32Array_obj::__new(vertsLength,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(645)
			verts = _g4;
			HX_STACK_LINE(646)
			fill->glVerts = verts;
		}
		else{
			HX_STACK_LINE(648)
			verts = fill->glVerts;
		}
		HX_STACK_LINE(651)
		::lime::utils::UInt32Array glColors = ::lime::utils::UInt32Array_obj::__new(verts->buffer,null(),null());		HX_STACK_VAR(glColors,"glColors");
		HX_STACK_LINE(653)
		int v0 = (int)0;		HX_STACK_VAR(v0,"v0");
		HX_STACK_LINE(653)
		int v1 = (int)0;		HX_STACK_VAR(v1,"v1");
		HX_STACK_LINE(653)
		int v2 = (int)0;		HX_STACK_VAR(v2,"v2");
		HX_STACK_LINE(654)
		int i0 = (int)0;		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(654)
		int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(654)
		int i2 = (int)0;		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(656)
		Float x0 = 0.0;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(656)
		Float y0 = 0.0;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(657)
		Float x1 = 0.0;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(657)
		Float y1 = 0.0;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(658)
		Float x2 = 0.0;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(658)
		Float y2 = 0.0;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(660)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(661)
			int _g4 = ::Std_obj::_int((Float(indices->length) / Float((int)3)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(661)
			while((true)){
				HX_STACK_LINE(661)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(661)
					break;
				}
				HX_STACK_LINE(661)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(663)
				i0 = indices->__get((i * (int)3));
				HX_STACK_LINE(663)
				i1 = indices->__get(((i * (int)3) + (int)1));
				HX_STACK_LINE(663)
				i2 = indices->__get(((i * (int)3) + (int)2));
				HX_STACK_LINE(664)
				v0 = (i0 * (int)2);
				HX_STACK_LINE(664)
				v1 = (i1 * (int)2);
				HX_STACK_LINE(664)
				v2 = (i2 * (int)2);
				HX_STACK_LINE(666)
				x0 = vertices->__get(v0);
				HX_STACK_LINE(666)
				y0 = vertices->__get((v0 + (int)1));
				HX_STACK_LINE(667)
				x1 = vertices->__get(v1);
				HX_STACK_LINE(667)
				y1 = vertices->__get((v1 + (int)1));
				HX_STACK_LINE(668)
				x2 = vertices->__get(v2);
				HX_STACK_LINE(668)
				y2 = vertices->__get((v2 + (int)1));
				HX_STACK_LINE(670)
				if ((localCoords)){
					HX_STACK_LINE(671)
					hx::SubEq(x0,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(672)
					hx::SubEq(y0,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
					HX_STACK_LINE(673)
					hx::SubEq(x1,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(674)
					hx::SubEq(y1,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
					HX_STACK_LINE(675)
					hx::SubEq(x2,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->x);
					HX_STACK_LINE(676)
					hx::SubEq(y2,::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->y);
				}
				HX_STACK_LINE(679)
				switch( (int)(culling->__Index())){
					case (int)2: {
						HX_STACK_LINE(681)
						if ((!(((((((x1 - x0)) * ((y2 - y0))) - (((y1 - y0)) * ((x2 - x0)))) < (int)0))))){
							HX_STACK_LINE(681)
							continue;
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(683)
						if (((((((x1 - x0)) * ((y2 - y0))) - (((y1 - y0)) * ((x2 - x0)))) < (int)0))){
							HX_STACK_LINE(683)
							continue;
						}
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(687)
				int _g5 = (idx)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(687)
				hx::__ArrayImplRef(verts,_g5) = (((a * x0) + (c * y0)) + tx);
				HX_STACK_LINE(688)
				int _g6 = (idx)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(688)
				hx::__ArrayImplRef(verts,_g6) = (((b * x0) + (d * y0)) + ty);
				HX_STACK_LINE(689)
				int _g7 = (idx)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(689)
				hx::__ArrayImplRef(verts,_g7) = uvtData->__get(v0);
				HX_STACK_LINE(690)
				int _g8 = (idx)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(690)
				hx::__ArrayImplRef(verts,_g8) = uvtData->__get((v0 + (int)1));
				HX_STACK_LINE(691)
				if ((hasColors)){
					HX_STACK_LINE(692)
					int _g9 = (idx)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(692)
					hx::__ArrayImplRef(glColors,_g9) = colors->__get(i0);
				}
				HX_STACK_LINE(695)
				int _g10 = (idx)++;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(695)
				hx::__ArrayImplRef(verts,_g10) = (((a * x1) + (c * y1)) + tx);
				HX_STACK_LINE(696)
				int _g111 = (idx)++;		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(696)
				hx::__ArrayImplRef(verts,_g111) = (((b * x1) + (d * y1)) + ty);
				HX_STACK_LINE(697)
				int _g12 = (idx)++;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(697)
				hx::__ArrayImplRef(verts,_g12) = uvtData->__get(v1);
				HX_STACK_LINE(698)
				int _g13 = (idx)++;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(698)
				hx::__ArrayImplRef(verts,_g13) = uvtData->__get((v1 + (int)1));
				HX_STACK_LINE(699)
				if ((hasColors)){
					HX_STACK_LINE(700)
					int _g14 = (idx)++;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(700)
					hx::__ArrayImplRef(glColors,_g14) = colors->__get(i1);
				}
				HX_STACK_LINE(703)
				int _g15 = (idx)++;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(703)
				hx::__ArrayImplRef(verts,_g15) = (((a * x2) + (c * y2)) + tx);
				HX_STACK_LINE(704)
				int _g16 = (idx)++;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(704)
				hx::__ArrayImplRef(verts,_g16) = (((b * x2) + (d * y2)) + ty);
				HX_STACK_LINE(705)
				int _g17 = (idx)++;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(705)
				hx::__ArrayImplRef(verts,_g17) = uvtData->__get(v2);
				HX_STACK_LINE(706)
				int _g18 = (idx)++;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(706)
				hx::__ArrayImplRef(verts,_g18) = uvtData->__get((v2 + (int)1));
				HX_STACK_LINE(707)
				if ((hasColors)){
					HX_STACK_LINE(708)
					int _g19 = (idx)++;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(708)
					hx::__ArrayImplRef(glColors,_g19) = colors->__get(i2);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,buildDrawTriangles,(void))

Void GraphicsRenderer_obj::buildDrawTiles( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","buildDrawTiles",0xacaa9b52,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.buildDrawTiles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",716,0xd295150c)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(glStack,"glStack")
		HX_STACK_LINE(716)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,buildDrawTiles,(void))

Array< Float > GraphicsRenderer_obj::quadraticBezierCurve( Float fromX,Float fromY,Float cpX,Float cpY,Float toX,Float toY){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","quadraticBezierCurve",0x90de5ad7,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.quadraticBezierCurve","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",719,0xd295150c)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(cpX,"cpX")
	HX_STACK_ARG(cpY,"cpY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_LINE(721)
	Float xa;		HX_STACK_VAR(xa,"xa");
	HX_STACK_LINE(721)
	Float ya;		HX_STACK_VAR(ya,"ya");
	HX_STACK_LINE(721)
	Float xb;		HX_STACK_VAR(xb,"xb");
	HX_STACK_LINE(721)
	Float yb;		HX_STACK_VAR(yb,"yb");
	HX_STACK_LINE(721)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(721)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(722)
	int n = (int)20;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(723)
	Array< Float > points = Array_obj< Float >::__new();		HX_STACK_VAR(points,"points");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Float run(Float n1,Float n2,Float perc){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",725,0xd295150c)
		HX_STACK_ARG(n1,"n1")
		HX_STACK_ARG(n2,"n2")
		HX_STACK_ARG(perc,"perc")
		{
			HX_STACK_LINE(727)
			Float diff = (n2 - n1);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(728)
			return (n1 + (diff * perc));
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_STACK_LINE(725)
	Dynamic getPt =  Dynamic(new _Function_1_1());		HX_STACK_VAR(getPt,"getPt");
	HX_STACK_LINE(732)
	Float j = 0.0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(733)
	{
		HX_STACK_LINE(733)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(733)
		int _g = (n + (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(733)
		while((true)){
			HX_STACK_LINE(733)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(733)
				break;
			}
			HX_STACK_LINE(733)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(735)
			j = (Float(i) / Float(n));
			HX_STACK_LINE(737)
			Float _g2 = getPt(fromX,cpX,j).Cast< Float >();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(737)
			xa = _g2;
			HX_STACK_LINE(738)
			Float _g11 = getPt(fromY,cpY,j).Cast< Float >();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(738)
			ya = _g11;
			HX_STACK_LINE(739)
			Float _g21 = getPt(cpX,toX,j).Cast< Float >();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(739)
			xb = _g21;
			HX_STACK_LINE(740)
			Float _g3 = getPt(cpY,toY,j).Cast< Float >();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(740)
			yb = _g3;
			HX_STACK_LINE(742)
			Float _g4 = getPt(xa,xb,j).Cast< Float >();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(742)
			x = _g4;
			HX_STACK_LINE(743)
			Float _g5 = getPt(ya,yb,j).Cast< Float >();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(743)
			y = _g5;
			HX_STACK_LINE(745)
			points->push(x);
			HX_STACK_LINE(746)
			points->push(y);
		}
	}
	HX_STACK_LINE(750)
	return points;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,quadraticBezierCurve,return )

Void GraphicsRenderer_obj::render( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","render",0xf1488dd5,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.render","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",754,0xd295150c)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(755)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(756)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(757)
		bool dirty = graphics->__dirty;		HX_STACK_VAR(dirty,"dirty");
		HX_STACK_LINE(758)
		if (((graphics->__commands->length <= (int)0))){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(762)
		if ((dirty)){
			HX_STACK_LINE(763)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::updateGraphics(object,object->__graphics,renderSession->gl,object->cacheAsBitmap);
		}
		HX_STACK_LINE(805)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderGraphics(object,renderSession,renderSession->projection,false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,render,(void))

Void GraphicsRenderer_obj::renderGraphics( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Point projection,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderGraphics",0xdf139fc0,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",809,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(projection,"projection")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(810)
		::openfl::display::Graphics graphics = object->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(811)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(812)
		::openfl::geom::Point offset = renderSession->offset;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(814)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = graphics->__glStack->__get(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLStack >();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(815)
		::openfl::_internal::renderer::opengl::utils::GLBucket bucket;		HX_STACK_VAR(bucket,"bucket");
		HX_STACK_LINE(817)
		::openfl::geom::Matrix translationMatrix;		HX_STACK_VAR(translationMatrix,"translationMatrix");
		HX_STACK_LINE(818)
		if ((localCoords)){
			HX_STACK_LINE(819)
			translationMatrix = ::openfl::geom::Matrix_obj::__identity;
		}
		else{
			HX_STACK_LINE(821)
			translationMatrix = object->__worldTransform;
		}
		HX_STACK_LINE(824)
		renderSession->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL);
		HX_STACK_LINE(826)
		bool batchDrawing = renderSession->spriteBatch->drawing;		HX_STACK_VAR(batchDrawing,"batchDrawing");
		HX_STACK_LINE(828)
		{
			HX_STACK_LINE(828)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(828)
			int _g = glStack->buckets->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(828)
			while((true)){
				HX_STACK_LINE(828)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(828)
					break;
				}
				HX_STACK_LINE(828)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(829)
				batchDrawing = renderSession->spriteBatch->drawing;
				HX_STACK_LINE(830)
				bucket = glStack->buckets->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();
				HX_STACK_LINE(832)
				{
					HX_STACK_LINE(832)
					::openfl::_internal::renderer::opengl::utils::BucketMode _g2 = bucket->mode;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(832)
					switch( (int)(_g2->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(834)
							if (((bool(batchDrawing) && bool(!(localCoords))))){
								HX_STACK_LINE(835)
								renderSession->spriteBatch->finish();
							}
							HX_STACK_LINE(837)
							::lime::utils::Float32Array _g3 = translationMatrix->toArray(true);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(837)
							renderSession->stencilManager->pushBucket(bucket,renderSession,projection,_g3,null());
							HX_STACK_LINE(838)
							::lime::utils::Float32Array _g11 = translationMatrix->toArray(false);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(838)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(bucket,renderSession,object,projection,_g11);		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(839)
							::lime::utils::Float32Array _g21 = translationMatrix->toArray(true);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(839)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderFill(bucket,shader,renderSession,_g21);
							HX_STACK_LINE(840)
							renderSession->stencilManager->popBucket(object,bucket,renderSession);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(842)
							if (((bool(batchDrawing) && bool(!(localCoords))))){
								HX_STACK_LINE(843)
								renderSession->spriteBatch->finish();
							}
							HX_STACK_LINE(845)
							::openfl::_internal::renderer::opengl::shaders2::Shader shader = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareShader(bucket,renderSession,object,projection,null());		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(846)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::renderDrawTriangles(bucket,shader,renderSession);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(848)
							if ((!(batchDrawing))){
								HX_STACK_LINE(849)
								renderSession->spriteBatch->begin(renderSession,null());
							}
							HX_STACK_LINE(851)
							Dynamic args = ::Type_obj::enumParameters(bucket->graphicType);		HX_STACK_VAR(args,"args");
							HX_STACK_LINE(852)
							renderSession->spriteBatch->renderTiles(object,args->__GetItem((int)0),args->__GetItem((int)1),args->__GetItem((int)2),args->__GetItem((int)3),args->__GetItem((int)4));
						}
						;break;
						default: {
						}
					}
				}
				HX_STACK_LINE(856)
				::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
				HX_STACK_LINE(857)
				{
					HX_STACK_LINE(857)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(857)
					Array< ::Dynamic > _g3 = bucket->lines;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(857)
					while((true)){
						HX_STACK_LINE(857)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(857)
							break;
						}
						HX_STACK_LINE(857)
						::openfl::_internal::renderer::opengl::utils::GLBucketData line = _g3->__get(_g2).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(line,"line");
						HX_STACK_LINE(857)
						++(_g2);
						HX_STACK_LINE(858)
						if (((bool((line != null())) && bool((line->verts->length > (int)0))))){
							HX_STACK_LINE(859)
							batchDrawing = renderSession->spriteBatch->drawing;
							HX_STACK_LINE(860)
							if (((bool(batchDrawing) && bool(!(localCoords))))){
								HX_STACK_LINE(861)
								renderSession->spriteBatch->finish();
							}
							HX_STACK_LINE(863)
							::openfl::_internal::renderer::opengl::shaders2::PrimitiveShader shader = renderSession->shaderManager->primitiveShader;		HX_STACK_VAR(shader,"shader");
							HX_STACK_LINE(865)
							renderSession->shaderManager->setShader(shader,null());
							HX_STACK_LINE(867)
							{
								HX_STACK_LINE(867)
								int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(867)
								::lime::utils::Float32Array v = translationMatrix->toArray(true);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(867)
								{
									HX_STACK_LINE(867)
									::lime::utils::ByteArray _g31 = v->getByteBuffer();		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(867)
									::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g31,(int)3);
								}
							}
							HX_STACK_LINE(868)
							{
								HX_STACK_LINE(868)
								int location = shader->getUniformLocation(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(868)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,projection->x,-(projection->y));
							}
							HX_STACK_LINE(869)
							{
								HX_STACK_LINE(869)
								int location = shader->getUniformLocation(HX_CSTRING("uOffsetVector"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(869)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,-(offset->x),-(offset->y));
							}
							HX_STACK_LINE(870)
							{
								HX_STACK_LINE(870)
								int location = shader->getUniformLocation(HX_CSTRING("uAlpha"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(870)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,(int)1);
							}
							HX_STACK_LINE(872)
							{
								HX_STACK_LINE(872)
								int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(872)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
							}
							HX_STACK_LINE(873)
							{
								HX_STACK_LINE(873)
								int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
								HX_STACK_LINE(873)
								::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
							}
							HX_STACK_LINE(875)
							{
								HX_STACK_LINE(875)
								::openfl::_internal::renderer::opengl::utils::VertexArray _this = line->vertexArray;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(875)
								{
									HX_STACK_LINE(875)
									::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
									HX_STACK_LINE(875)
									::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
								}
							}
							HX_STACK_LINE(876)
							shader->bindVertexArray(line->vertexArray);
							HX_STACK_LINE(878)
							{
								HX_STACK_LINE(878)
								::lime::graphics::opengl::GLBuffer buffer = line->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
								HX_STACK_LINE(878)
								::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
							}
							HX_STACK_LINE(879)
							::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(gl->TRIANGLE_STRIP,line->indices->length,gl->UNSIGNED_SHORT,(int)0);
						}
					}
				}
				HX_STACK_LINE(883)
				batchDrawing = renderSession->spriteBatch->drawing;
				HX_STACK_LINE(884)
				if (((bool(!(batchDrawing)) && bool(!(localCoords))))){
					HX_STACK_LINE(885)
					renderSession->spriteBatch->begin(renderSession,null());
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,renderGraphics,(void))

Void GraphicsRenderer_obj::updateGraphics( ::openfl::display::DisplayObject object,::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl,Dynamic __o_localCoords){
Dynamic localCoords = __o_localCoords.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","updateGraphics",0xa0662573,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.updateGraphics","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",890,0xd295150c)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_ARG(localCoords,"localCoords")
{
		HX_STACK_LINE(892)
		{
			HX_STACK_LINE(892)
			::openfl::geom::Point _this = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(892)
			Float xa = object->get_x();		HX_STACK_VAR(xa,"xa");
			HX_STACK_LINE(892)
			Float ya = object->get_y();		HX_STACK_VAR(ya,"ya");
			HX_STACK_LINE(892)
			_this->x = xa;
			HX_STACK_LINE(892)
			_this->y = ya;
		}
		HX_STACK_LINE(893)
		if (((graphics->__bounds == null()))){
			HX_STACK_LINE(894)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(894)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds = _g;
		}
		else{
			HX_STACK_LINE(896)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectBounds->copyFrom(graphics->__bounds);
		}
		HX_STACK_LINE(898)
		::openfl::_internal::renderer::opengl::utils::GLStack glStack = null();		HX_STACK_VAR(glStack,"glStack");
		HX_STACK_LINE(900)
		if ((graphics->__dirty)){
			HX_STACK_LINE(902)
			::openfl::_internal::renderer::opengl::utils::GLStack _g1 = ::openfl::_internal::renderer::opengl::utils::DrawPath_obj::getStack(graphics,gl);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(902)
			glStack = _g1;
		}
		HX_STACK_LINE(906)
		graphics->set___dirty(false);
		HX_STACK_LINE(908)
		{
			HX_STACK_LINE(908)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(908)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(908)
			while((true)){
				HX_STACK_LINE(908)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(908)
					break;
				}
				HX_STACK_LINE(908)
				::openfl::_internal::renderer::opengl::utils::GLBucket data = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(908)
				++(_g);
				HX_STACK_LINE(909)
				data->reset();
				HX_STACK_LINE(910)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->push(data);
			}
		}
		HX_STACK_LINE(913)
		glStack->reset();
		HX_STACK_LINE(915)
		{
			HX_STACK_LINE(915)
			int _g1 = glStack->lastIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(915)
			int _g = graphics->__drawPaths->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(915)
			while((true)){
				HX_STACK_LINE(915)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(915)
					break;
				}
				HX_STACK_LINE(915)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(916)
				::openfl::_internal::renderer::opengl::utils::DrawPath path = graphics->__drawPaths->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::DrawPath >();		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(918)
				{
					HX_STACK_LINE(918)
					::openfl::_internal::renderer::opengl::utils::GraphicType _g2 = path->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(918)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(920)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildComplexPoly(path,glStack,localCoords);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(918)
							bool rounded = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(rounded,"rounded");
							HX_STACK_LINE(922)
							if ((rounded)){
								HX_STACK_LINE(923)
								::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRoundedRectangle(path,glStack,localCoords);
							}
							else{
								HX_STACK_LINE(925)
								::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildRectangle(path,glStack,localCoords);
							}
						}
						;break;
						case (int)2: case (int)3: {
							HX_STACK_LINE(928)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildCircle(path,glStack,localCoords);
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(930)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::buildDrawTriangles(path,object,glStack,localCoords);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(932)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::prepareBucket(path,glStack);
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(918)
							::openfl::geom::Matrix m = (::openfl::_internal::renderer::opengl::utils::GraphicType(_g2))->__Param(0);		HX_STACK_VAR(m,"m");
							HX_STACK_LINE(934)
							::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix = m;
						}
						;break;
					}
				}
				HX_STACK_LINE(938)
				(glStack->lastIndex)++;
			}
		}
		HX_STACK_LINE(941)
		{
			HX_STACK_LINE(941)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(941)
			Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(941)
			while((true)){
				HX_STACK_LINE(941)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(941)
					break;
				}
				HX_STACK_LINE(941)
				::openfl::_internal::renderer::opengl::utils::GLBucket bucket = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(bucket,"bucket");
				HX_STACK_LINE(941)
				++(_g);
				HX_STACK_LINE(942)
				bucket->optimize();
			}
		}
		HX_STACK_LINE(945)
		glStack->upload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,updateGraphics,(void))

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::prepareBucket( ::openfl::_internal::renderer::opengl::utils::DrawPath path,::openfl::_internal::renderer::opengl::utils::GLStack glStack){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareBucket",0x0dd304b2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",949,0xd295150c)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_LINE(950)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(951)
	{
		HX_STACK_LINE(951)
		::openfl::_internal::renderer::opengl::utils::FillType _g = path->fill;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(951)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(951)
				Float a = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(951)
				int c = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(952)
				{
					HX_STACK_LINE(953)
					::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Fill);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(953)
					bucket = _g1;
					HX_STACK_LINE(954)
					if (((c == null()))){
						HX_STACK_LINE(954)
						bucket->color = Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
					}
					else{
						HX_STACK_LINE(954)
						bucket->color = Array_obj< Float >::__new().Add((Float(((int((int(c) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(c) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(c) & int((int)255)))) / Float((int)255)));
					}
					HX_STACK_LINE(955)
					bucket->color[(int)3] = a;
					HX_STACK_LINE(956)
					bucket->uploadTileBuffer = true;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(951)
				bool s = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(3);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(951)
				bool r = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(2);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(951)
				::openfl::geom::Matrix m = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(1);		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(951)
				::openfl::display::BitmapData b = (::openfl::_internal::renderer::opengl::utils::FillType(_g))->__Param(0);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(958)
				{
					HX_STACK_LINE(959)
					::openfl::_internal::renderer::opengl::utils::GLBucket _g1 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(959)
					bucket = _g1;
					HX_STACK_LINE(960)
					bucket->bitmap = b;
					HX_STACK_LINE(961)
					bucket->textureRepeat = r;
					HX_STACK_LINE(962)
					bucket->textureSmooth = s;
					HX_STACK_LINE(963)
					::lime::graphics::opengl::GLTexture _g2 = b->getTexture(glStack->gl);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(963)
					bucket->texture = _g2;
					HX_STACK_LINE(964)
					bucket->uploadTileBuffer = true;
					HX_STACK_LINE(967)
					::openfl::geom::Matrix tMatrix = bucket->textureMatrix;		HX_STACK_VAR(tMatrix,"tMatrix");
					HX_STACK_LINE(968)
					tMatrix->identity();
					HX_STACK_LINE(969)
					::openfl::geom::Matrix pMatrix;		HX_STACK_VAR(pMatrix,"pMatrix");
					HX_STACK_LINE(970)
					if (((m == null()))){
						HX_STACK_LINE(971)
						::openfl::geom::Matrix _g3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(971)
						pMatrix = _g3;
					}
					else{
						HX_STACK_LINE(973)
						::openfl::geom::Matrix _g4 = ::openfl::geom::Matrix_obj::__new(m->a,m->b,m->c,m->d,m->tx,m->ty);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(973)
						pMatrix = _g4;
					}
					HX_STACK_LINE(976)
					::openfl::geom::Matrix _g5 = pMatrix->invert();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(976)
					pMatrix = _g5;
					HX_STACK_LINE(977)
					{
						HX_STACK_LINE(977)
						::openfl::geom::Point pos = ::openfl::geom::Point_obj::__new(-(::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition->x),-(::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::objectPosition->y));		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(977)
						pMatrix->tx = (((pos->x * pMatrix->a) + (pos->y * pMatrix->c)) + pMatrix->tx);
						HX_STACK_LINE(977)
						pMatrix->ty = (((pos->x * pMatrix->b) + (pos->y * pMatrix->d)) + pMatrix->ty);
					}
					HX_STACK_LINE(978)
					Float tx = (Float(pMatrix->tx) / Float(b->width));		HX_STACK_VAR(tx,"tx");
					HX_STACK_LINE(979)
					Float ty = (Float(pMatrix->ty) / Float(b->height));		HX_STACK_VAR(ty,"ty");
					HX_STACK_LINE(980)
					tMatrix->concat(pMatrix);
					HX_STACK_LINE(981)
					bucket->textureTL->x = tx;
					HX_STACK_LINE(982)
					bucket->textureTL->y = ty;
					HX_STACK_LINE(983)
					bucket->textureBR->x = (tx + (int)1);
					HX_STACK_LINE(984)
					bucket->textureBR->y = (ty + (int)1);
					HX_STACK_LINE(986)
					tMatrix->scale((Float((int)1) / Float(b->width)),(Float((int)1) / Float(b->height)));
					HX_STACK_LINE(988)
					bucket->textureMatrix = tMatrix;
				}
			}
			;break;
			default: {
				HX_STACK_LINE(990)
				::openfl::_internal::renderer::opengl::utils::GLBucket _g6 = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::switchBucket(path->fillIndex,glStack,::openfl::_internal::renderer::opengl::utils::BucketMode_obj::Line);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(990)
				bucket = _g6;
				HX_STACK_LINE(991)
				bucket->uploadTileBuffer = false;
			}
		}
	}
	HX_STACK_LINE(994)
	{
		HX_STACK_LINE(994)
		::openfl::_internal::renderer::opengl::utils::GraphicType _g = path->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(994)
		switch( (int)(_g->__Index())){
			case (int)4: {
				HX_STACK_LINE(996)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTriangles;
				HX_STACK_LINE(997)
				bucket->uploadTileBuffer = false;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(999)
				bucket->mode = ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::DrawTiles;
				HX_STACK_LINE(1000)
				bucket->uploadTileBuffer = false;
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1004)
	bucket->graphicType = path->type;
	HX_STACK_LINE(1005)
	bucket->overrideMatrix = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::overrideMatrix;
	HX_STACK_LINE(1007)
	return bucket;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,prepareBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::getBucket( ::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","getBucket",0x4967a481,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.getBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1010,0xd295150c)
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1011)
	::openfl::_internal::renderer::opengl::utils::GLBucket b = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bucketPool->pop().StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1012)
	if (((b == null()))){
		HX_STACK_LINE(1013)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GLBucket_obj::__new(glStack->gl);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1013)
		b = _g;
	}
	HX_STACK_LINE(1015)
	b->mode = mode;
	HX_STACK_LINE(1016)
	glStack->buckets->push(b);
	HX_STACK_LINE(1017)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,getBucket,return )

::openfl::_internal::renderer::opengl::utils::GLBucket GraphicsRenderer_obj::switchBucket( int fillIndex,::openfl::_internal::renderer::opengl::utils::GLStack glStack,::openfl::_internal::renderer::opengl::utils::BucketMode mode){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","switchBucket",0xb3071d3d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.switchBucket","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1020,0xd295150c)
	HX_STACK_ARG(fillIndex,"fillIndex")
	HX_STACK_ARG(glStack,"glStack")
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(1022)
	::openfl::_internal::renderer::opengl::utils::GLBucket bucket = null();		HX_STACK_VAR(bucket,"bucket");
	HX_STACK_LINE(1024)
	{
		HX_STACK_LINE(1024)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1024)
		Array< ::Dynamic > _g1 = glStack->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1024)
		while((true)){
			HX_STACK_LINE(1024)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1024)
				break;
			}
			HX_STACK_LINE(1024)
			::openfl::_internal::renderer::opengl::utils::GLBucket b = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(1024)
			++(_g);
			HX_STACK_LINE(1025)
			if (((b->fillIndex == fillIndex))){
				HX_STACK_LINE(1026)
				bucket = b;
				HX_STACK_LINE(1027)
				break;
			}
		}
	}
	HX_STACK_LINE(1031)
	if (((bucket == null()))){
		HX_STACK_LINE(1032)
		::openfl::_internal::renderer::opengl::utils::GLBucket _g = ::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::getBucket(glStack,mode);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1032)
		bucket = _g;
	}
	HX_STACK_LINE(1035)
	bucket->dirty = true;
	HX_STACK_LINE(1036)
	bucket->fillIndex = fillIndex;
	HX_STACK_LINE(1038)
	return bucket;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,switchBucket,return )

::openfl::_internal::renderer::opengl::shaders2::Shader GraphicsRenderer_obj::prepareShader( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::DisplayObject object,::openfl::geom::Point projection,::lime::utils::Float32Array translationMatrix){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","prepareShader",0x5c56df6d,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.prepareShader","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1041,0xd295150c)
	HX_STACK_ARG(bucket,"bucket")
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(projection,"projection")
	HX_STACK_ARG(translationMatrix,"translationMatrix")
	HX_STACK_LINE(1042)
	::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
	HX_STACK_LINE(1043)
	::openfl::geom::Point offset = renderSession->offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(1044)
	::openfl::_internal::renderer::opengl::shaders2::Shader shader = null();		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(1046)
	::openfl::_internal::renderer::opengl::shaders2::Shader _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1046)
	{
		HX_STACK_LINE(1046)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g1 = bucket->mode;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1046)
		switch( (int)(_g1->__Index())){
			case (int)1: {
				HX_STACK_LINE(1048)
				_g = renderSession->shaderManager->fillShader;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1050)
				_g = renderSession->shaderManager->patternFillShader;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1052)
				_g = renderSession->shaderManager->drawTrianglesShader;
			}
			;break;
			default: {
				HX_STACK_LINE(1054)
				_g = null();
			}
		}
	}
	HX_STACK_LINE(1046)
	shader = _g;
	HX_STACK_LINE(1057)
	if (((shader == null()))){
		HX_STACK_LINE(1057)
		return null();
	}
	HX_STACK_LINE(1059)
	bool newShader = renderSession->shaderManager->setShader(shader,null());		HX_STACK_VAR(newShader,"newShader");
	HX_STACK_LINE(1062)
	{
		HX_STACK_LINE(1062)
		int location = shader->getUniformLocation(HX_CSTRING("uOffsetVector"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1062)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,-(offset->x),-(offset->y));
	}
	HX_STACK_LINE(1063)
	{
		HX_STACK_LINE(1063)
		int location = shader->getUniformLocation(HX_CSTRING("uAlpha"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1063)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform1f(location,object->__worldAlpha);
	}
	HX_STACK_LINE(1065)
	::openfl::geom::ColorTransform ct = object->__worldColorTransform;		HX_STACK_VAR(ct,"ct");
	HX_STACK_LINE(1066)
	{
		HX_STACK_LINE(1066)
		int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1066)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,ct->alphaMultiplier);
	}
	HX_STACK_LINE(1067)
	{
		HX_STACK_LINE(1067)
		int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(1067)
		::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float((int)255)),(Float(ct->greenOffset) / Float((int)255)),(Float(ct->blueOffset) / Float((int)255)),(Float(ct->alphaOffset) / Float((int)255)));
	}
	HX_STACK_LINE(1070)
	{
		HX_STACK_LINE(1070)
		::openfl::_internal::renderer::opengl::utils::BucketMode _g1 = bucket->mode;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1070)
		switch( (int)(_g1->__Index())){
			case (int)1: {
				HX_STACK_LINE(1072)
				{
					HX_STACK_LINE(1072)
					int location = shader->getUniformLocation(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1072)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,projection->x,-(projection->y));
				}
				HX_STACK_LINE(1073)
				{
					HX_STACK_LINE(1073)
					int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1073)
					{
						HX_STACK_LINE(1073)
						::lime::utils::ByteArray _g11 = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1073)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g11,(int)3);
					}
				}
				HX_STACK_LINE(1074)
				{
					HX_STACK_LINE(1074)
					int location = shader->getUniformLocation(HX_CSTRING("uColor"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1074)
					::lime::utils::Float32Array v = ::lime::utils::Float32Array_obj::__new(bucket->color,null(),null());		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1074)
					{
						HX_STACK_LINE(1074)
						::lime::utils::ByteArray _g2 = v->getByteBuffer();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1074)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g2);
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(1076)
				{
					HX_STACK_LINE(1076)
					int location = shader->getUniformLocation(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1076)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,projection->x,-(projection->y));
				}
				HX_STACK_LINE(1077)
				{
					HX_STACK_LINE(1077)
					int location = shader->getUniformLocation(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1077)
					{
						HX_STACK_LINE(1077)
						::lime::utils::ByteArray _g3 = translationMatrix->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1077)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g3,(int)3);
					}
				}
				HX_STACK_LINE(1078)
				{
					HX_STACK_LINE(1078)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternTL"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1078)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,bucket->textureTL->x,bucket->textureTL->y);
				}
				HX_STACK_LINE(1079)
				{
					HX_STACK_LINE(1079)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternBR"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1079)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,bucket->textureBR->x,bucket->textureBR->y);
				}
				HX_STACK_LINE(1080)
				{
					HX_STACK_LINE(1080)
					int location = shader->getUniformLocation(HX_CSTRING("uPatternMatrix"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1080)
					::lime::utils::Float32Array v = bucket->textureMatrix->toArray(false);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(1080)
					{
						HX_STACK_LINE(1080)
						::lime::utils::ByteArray _g4 = v->getByteBuffer();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1080)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(location,false,_g4,(int)3);
					}
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(1082)
				{
					HX_STACK_LINE(1082)
					int location = shader->getUniformLocation(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1082)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,projection->x,projection->y);
				}
				HX_STACK_LINE(1083)
				if (((bucket->texture != null()))){
					HX_STACK_LINE(1084)
					int location = shader->getUniformLocation(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(location,"location");
					HX_STACK_LINE(1084)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,(int)1);
				}
				else{
					HX_STACK_LINE(1086)
					{
						HX_STACK_LINE(1086)
						int location = shader->getUniformLocation(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1086)
						::lime::graphics::opengl::GL_obj::lime_gl_uniform1i(location,(int)0);
					}
					HX_STACK_LINE(1087)
					{
						HX_STACK_LINE(1087)
						int location = shader->getUniformLocation(HX_CSTRING("uColor"));		HX_STACK_VAR(location,"location");
						HX_STACK_LINE(1087)
						::lime::utils::Float32Array v = ::lime::utils::Float32Array_obj::__new(bucket->color,null(),null());		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							::lime::utils::ByteArray _g5 = v->getByteBuffer();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(1087)
							::lime::graphics::opengl::GL_obj::lime_gl_uniform4fv(location,_g5);
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1092)
	return shader;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicsRenderer_obj,prepareShader,return )

Void GraphicsRenderer_obj::renderFill( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession,::lime::utils::Float32Array translationMatrix){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderFill",0x880196f8,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderFill","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1095,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(translationMatrix,"translationMatrix")
		HX_STACK_LINE(1096)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1098)
		if (((bool((bucket->mode == ::openfl::_internal::renderer::opengl::utils::BucketMode_obj::PatternFill)) && bool((bucket->texture != null()))))){
			HX_STACK_LINE(1099)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(gl,bucket);
		}
		HX_STACK_LINE(1102)
		{
			HX_STACK_LINE(1102)
			::lime::graphics::opengl::GLBuffer buffer = bucket->tileBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1102)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1103)
			int indx = shader->getAttribLocation(HX_CSTRING("aPosition"));		HX_STACK_VAR(indx,"indx");
			HX_STACK_LINE(1103)
			::lime::graphics::opengl::GL_obj::lime_gl_vertex_attrib_pointer(indx,(int)4,gl->SHORT,false,(int)0,(int)0);
		}
		HX_STACK_LINE(1104)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GraphicsRenderer_obj,renderFill,(void))

Void GraphicsRenderer_obj::renderDrawTriangles( ::openfl::_internal::renderer::opengl::utils::GLBucket bucket,::openfl::_internal::renderer::opengl::shaders2::Shader shader,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","renderDrawTriangles",0x793244f2,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.renderDrawTriangles","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1107,0xd295150c)
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1108)
		::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1110)
		{
			HX_STACK_LINE(1110)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1110)
			Array< ::Dynamic > _g1 = bucket->fills;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1110)
			while((true)){
				HX_STACK_LINE(1110)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(1110)
					break;
				}
				HX_STACK_LINE(1110)
				::openfl::_internal::renderer::opengl::utils::GLBucketData fill = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucketData >();		HX_STACK_VAR(fill,"fill");
				HX_STACK_LINE(1110)
				++(_g);
				HX_STACK_LINE(1111)
				if ((fill->available)){
					HX_STACK_LINE(1111)
					continue;
				}
				HX_STACK_LINE(1113)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::bindTexture(gl,bucket);
				HX_STACK_LINE(1114)
				{
					HX_STACK_LINE(1114)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = fill->vertexArray;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1114)
					{
						HX_STACK_LINE(1114)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1114)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
					}
				}
				HX_STACK_LINE(1115)
				shader->bindVertexArray(fill->vertexArray);
				HX_STACK_LINE(1117)
				::lime::graphics::opengl::GL_obj::lime_gl_draw_arrays(gl->TRIANGLES,fill->glStart,fill->glLength);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GraphicsRenderer_obj,renderDrawTriangles,(void))

Void GraphicsRenderer_obj::bindTexture( ::lime::graphics::GLRenderContext gl,::openfl::_internal::renderer::opengl::utils::GLBucket bucket){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","bindTexture",0x486a4dbf,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.bindTexture","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1121,0xd295150c)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_ARG(bucket,"bucket")
		HX_STACK_LINE(1123)
		{
			HX_STACK_LINE(1123)
			::lime::graphics::opengl::GLTexture texture = bucket->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(1123)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(1126)
		if ((bucket->textureRepeat)){
			HX_STACK_LINE(1127)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->REPEAT);
			HX_STACK_LINE(1128)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->REPEAT);
		}
		else{
			HX_STACK_LINE(1130)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
			HX_STACK_LINE(1131)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		}
		HX_STACK_LINE(1134)
		if ((bucket->textureSmooth)){
			HX_STACK_LINE(1135)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
			HX_STACK_LINE(1136)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
		}
		else{
			HX_STACK_LINE(1138)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
			HX_STACK_LINE(1139)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GraphicsRenderer_obj,bindTexture,(void))

bool GraphicsRenderer_obj::isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","isCCW",0xc37e766e,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.isCCW","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1145,0xd295150c)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(1145)
	return (((((x2 - x1)) * ((y3 - y1))) - (((y2 - y1)) * ((x3 - x1)))) < (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicsRenderer_obj,isCCW,return )

Array< Float > GraphicsRenderer_obj::hex2rgb( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgb",0x2f5bdf17,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgb","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1149,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1149)
	if (((hex == null()))){
		HX_STACK_LINE(1149)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1149)
		return Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255)));
	}
	HX_STACK_LINE(1149)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgb,return )

Array< Float > GraphicsRenderer_obj::hex2rgba( Dynamic hex){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GraphicsRenderer","hex2rgba",0x4107556a,"openfl._internal.renderer.opengl.utils.GraphicsRenderer.hex2rgba","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1153,0xd295150c)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(1153)
	if (((hex == null()))){
		HX_STACK_LINE(1153)
		return Array_obj< Float >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	}
	else{
		HX_STACK_LINE(1153)
		return Array_obj< Float >::__new().Add((Float(((int((int(hex) >> int((int)16))) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)8))) & int((int)255)))) / Float((int)255))).Add((Float(((int(hex) & int((int)255)))) / Float((int)255))).Add((Float(((int((int(hex) >> int((int)24))) & int((int)255)))) / Float((int)255)));
	}
	HX_STACK_LINE(1153)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsRenderer_obj,hex2rgba,return )


GraphicsRenderer_obj::GraphicsRenderer_obj()
{
}

Dynamic GraphicsRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCCW") ) { return isCCW_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { return hex2rgb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hex2rgba") ) { return hex2rgba_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"buildLine") ) { return buildLine_dyn(); }
		if (HX_FIELD_EQ(inName,"buildPoly") ) { return buildPoly_dyn(); }
		if (HX_FIELD_EQ(inName,"getBucket") ) { return getBucket_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { return bucketPool; }
		if (HX_FIELD_EQ(inName,"renderFill") ) { return renderFill_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { return lastTexture; }
		if (HX_FIELD_EQ(inName,"buildCircle") ) { return buildCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { return objectBounds; }
		if (HX_FIELD_EQ(inName,"switchBucket") ) { return switchBucket_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"prepareBucket") ) { return prepareBucket_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { return prepareShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { return objectPosition; }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { return lastBucketMode; }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return overrideMatrix; }
		if (HX_FIELD_EQ(inName,"buildRectangle") ) { return buildRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"buildDrawTiles") ) { return buildDrawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderGraphics") ) { return renderGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateGraphics") ) { return updateGraphics_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { return lastVertsBuffer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { return graphicsDataPool; }
		if (HX_FIELD_EQ(inName,"buildComplexPoly") ) { return buildComplexPoly_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { return lastTextureRepeat; }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { return lastTextureSmooth; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"buildDrawTriangles") ) { return buildDrawTriangles_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawTriangles") ) { return renderDrawTriangles_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { return fillVertexAttributes; }
		if (HX_FIELD_EQ(inName,"quadraticBezierCurve") ) { return quadraticBezierCurve_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buildRoundedRectangle") ) { return buildRoundedRectangle_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { return primitiveVertexAttributes; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { return drawTrianglesVertexAttributes; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bucketPool") ) { bucketPool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastTexture") ) { lastTexture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectBounds") ) { objectBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectPosition") ) { objectPosition=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBucketMode") ) { lastBucketMode=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { overrideMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastVertsBuffer") ) { lastVertsBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"graphicsDataPool") ) { graphicsDataPool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastTextureRepeat") ) { lastTextureRepeat=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastTextureSmooth") ) { lastTextureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fillVertexAttributes") ) { fillVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"primitiveVertexAttributes") ) { primitiveVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"drawTrianglesVertexAttributes") ) { drawTrianglesVertexAttributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fillVertexAttributes"),
	HX_CSTRING("drawTrianglesVertexAttributes"),
	HX_CSTRING("primitiveVertexAttributes"),
	HX_CSTRING("graphicsDataPool"),
	HX_CSTRING("bucketPool"),
	HX_CSTRING("objectPosition"),
	HX_CSTRING("objectBounds"),
	HX_CSTRING("lastVertsBuffer"),
	HX_CSTRING("lastBucketMode"),
	HX_CSTRING("lastTexture"),
	HX_CSTRING("lastTextureRepeat"),
	HX_CSTRING("lastTextureSmooth"),
	HX_CSTRING("overrideMatrix"),
	HX_CSTRING("buildCircle"),
	HX_CSTRING("buildComplexPoly"),
	HX_CSTRING("buildLine"),
	HX_CSTRING("buildPoly"),
	HX_CSTRING("buildRectangle"),
	HX_CSTRING("buildRoundedRectangle"),
	HX_CSTRING("buildDrawTriangles"),
	HX_CSTRING("buildDrawTiles"),
	HX_CSTRING("quadraticBezierCurve"),
	HX_CSTRING("render"),
	HX_CSTRING("renderGraphics"),
	HX_CSTRING("updateGraphics"),
	HX_CSTRING("prepareBucket"),
	HX_CSTRING("getBucket"),
	HX_CSTRING("switchBucket"),
	HX_CSTRING("prepareShader"),
	HX_CSTRING("renderFill"),
	HX_CSTRING("renderDrawTriangles"),
	HX_CSTRING("bindTexture"),
	HX_CSTRING("isCCW"),
	HX_CSTRING("hex2rgb"),
	HX_CSTRING("hex2rgba"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_MARK_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::fillVertexAttributes,"fillVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::drawTrianglesVertexAttributes,"drawTrianglesVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::primitiveVertexAttributes,"primitiveVertexAttributes");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::graphicsDataPool,"graphicsDataPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::bucketPool,"bucketPool");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectPosition,"objectPosition");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::objectBounds,"objectBounds");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastVertsBuffer,"lastVertsBuffer");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastBucketMode,"lastBucketMode");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTexture,"lastTexture");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureRepeat,"lastTextureRepeat");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::lastTextureSmooth,"lastTextureSmooth");
	HX_VISIT_MEMBER_NAME(GraphicsRenderer_obj::overrideMatrix,"overrideMatrix");
};

#endif

Class GraphicsRenderer_obj::__mClass;

void GraphicsRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GraphicsRenderer"), hx::TCanCast< GraphicsRenderer_obj> ,sStaticFields,sMemberFields,
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

void GraphicsRenderer_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",49,0xd295150c)
		{
			HX_STACK_LINE(50)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			return Array_obj< ::Dynamic >::__new().Add(_g);
		}
		return null();
	}
};
	fillVertexAttributes= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",52,0xd295150c)
		{
			HX_STACK_LINE(53)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aTexCoord0"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(52)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	drawTrianglesVertexAttributes= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",57,0xd295150c)
		{
			HX_STACK_LINE(58)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5126,false,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(57)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);
		}
		return null();
	}
};
	primitiveVertexAttributes= _Function_0_3::Block();
	graphicsDataPool= Array_obj< ::Dynamic >::__new();
	bucketPool= Array_obj< ::Dynamic >::__new();
	objectPosition= ::openfl::geom::Point_obj::__new(null(),null());
	objectBounds= ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
