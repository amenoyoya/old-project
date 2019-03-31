#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
#endif
#ifndef INCLUDED_lime_utils_UInt32Array
#include <lime/utils/UInt32Array.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
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

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",25,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(61)
	this->lastEnableColor = true;
	HX_STACK_LINE(59)
	this->enableColor = true;
	HX_STACK_LINE(57)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(54)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(43)
	this->drawing = false;
	HX_STACK_LINE(42)
	this->dirty = true;
	HX_STACK_LINE(32)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(65)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(67)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aPosition"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	this->attributes->push(_g);
	HX_STACK_LINE(68)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_CSTRING("aTexCoord0"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(68)
	this->attributes->push(_g1);
	HX_STACK_LINE(69)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute _g2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_CSTRING("aColor"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(69)
	this->attributes->push(_g2);
	HX_STACK_LINE(71)
	::lime::utils::Float32Array _g3 = ::lime::utils::Float32Array_obj::__new(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(71)
	this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->defaultValue = _g3;
	HX_STACK_LINE(73)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(75)
		Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			if ((!(((_g4 < _g11->length))))){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(75)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g4).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(75)
			++(_g4);
			struct _Function_3_1{
				inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",76,0x8289eb2d)
					{
						HX_STACK_LINE(76)
						int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
						struct _Function_4_1{
							inline static int Block( int &_g5){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",76,0x8289eb2d)
								{
									HX_STACK_LINE(76)
									switch( (int)(_g5)){
										case (int)5120: case (int)5121: {
											HX_STACK_LINE(76)
											return (int)1;
										}
										;break;
										case (int)5122: case (int)5123: {
											HX_STACK_LINE(76)
											return (int)2;
										}
										;break;
										default: {
											HX_STACK_LINE(76)
											return (int)4;
										}
									}
								}
								return null();
							}
						};
						HX_STACK_LINE(76)
						return _Function_4_1::Block(_g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(76)
			int _g41 = ::Math_obj::floor((Float((a->components * _Function_3_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(76)
			hx::AddEq(this->maxElementsPerVertex,_g41);
		}
	}
	HX_STACK_LINE(79)
	this->vertexArraySize = (((maxSprites * this->maxElementsPerVertex) * (int)4) * (int)4);
	HX_STACK_LINE(80)
	this->indexArraySize = (maxSprites * (int)6);
	HX_STACK_LINE(82)
	::openfl::_internal::renderer::opengl::utils::VertexArray _g5 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,this->vertexArraySize,false);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(82)
	this->vertexArray = _g5;
	HX_STACK_LINE(83)
	::lime::utils::Float32Array _g6 = ::lime::utils::Float32Array_obj::__new(this->vertexArray->buffer,null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(83)
	this->positions = _g6;
	HX_STACK_LINE(84)
	::lime::utils::UInt32Array _g7 = ::lime::utils::UInt32Array_obj::__new(this->vertexArray->buffer,null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(84)
	this->colors = _g7;
	HX_STACK_LINE(86)
	::lime::utils::UInt16Array _g8 = ::lime::utils::UInt16Array_obj::__new(this->indexArraySize,null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(86)
	this->indices = _g8;
	HX_STACK_LINE(88)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(88)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(89)
	while((true)){
		HX_STACK_LINE(89)
		if ((!(((i < this->indexArraySize))))){
			HX_STACK_LINE(89)
			break;
		}
		HX_STACK_LINE(90)
		hx::__ArrayImplRef(this->indices,i) = j;
		HX_STACK_LINE(91)
		hx::__ArrayImplRef(this->indices,(i + (int)1)) = (j + (int)1);
		HX_STACK_LINE(92)
		hx::__ArrayImplRef(this->indices,(i + (int)2)) = (j + (int)2);
		HX_STACK_LINE(93)
		hx::__ArrayImplRef(this->indices,(i + (int)3)) = j;
		HX_STACK_LINE(94)
		hx::__ArrayImplRef(this->indices,(i + (int)4)) = (j + (int)2);
		HX_STACK_LINE(95)
		hx::__ArrayImplRef(this->indices,(i + (int)5)) = (j + (int)3);
		HX_STACK_LINE(96)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(97)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(100)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State _g9 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(100)
	this->currentState = _g9;
	HX_STACK_LINE(101)
	this->dirty = true;
	HX_STACK_LINE(102)
	this->drawing = false;
	HX_STACK_LINE(103)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(105)
	this->setContext(gl);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(gl,__o_maxSprites);
	return result;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > result = new SpriteBatch_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",109,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		this->vertexArray->destroy();
		HX_STACK_LINE(111)
		this->vertexArray = null();
		HX_STACK_LINE(113)
		this->indices = null();
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(buffer->id);
				HX_STACK_LINE(114)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(116)
		this->currentState->destroy();
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(117)
				++(_g);
				HX_STACK_LINE(118)
				state->destroy();
			}
		}
		HX_STACK_LINE(121)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",124,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(126)
		this->renderSession = renderSession;
		HX_STACK_LINE(127)
		this->shader = renderSession->shaderManager->defaultShader;
		HX_STACK_LINE(128)
		this->drawing = true;
		HX_STACK_LINE(129)
		this->start(clipRect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",133,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		this->flush();
		HX_STACK_LINE(135)
		this->clipRect = null();
		HX_STACK_LINE(136)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",139,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(140)
		if ((!(this->drawing))){
			HX_STACK_LINE(141)
			HX_STACK_DO_THROW(HX_CSTRING("Call Spritebatch.begin() before start()"));
		}
		HX_STACK_LINE(143)
		this->dirty = true;
		HX_STACK_LINE(144)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",148,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,::openfl::display::BlendMode blendMode){
Dynamic alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",151,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(152)
		if (((bitmapData == null()))){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(153)
		::lime::graphics::opengl::GLTexture texture = bitmapData->getTexture(this->gl);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(155)
		if (((this->batchedSprites >= this->maxSprites))){
			HX_STACK_LINE(156)
			this->flush();
		}
		HX_STACK_LINE(159)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(160)
		if (((uvs == null()))){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(162)
		int _g = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(162)
		int color = (int(_g2) | int((int)16777215));		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			this->enableColor = true;
			HX_STACK_LINE(165)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(165)
				this->flush();
				HX_STACK_LINE(165)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(165)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(165)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(165)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(165)
					while((true)){
						HX_STACK_LINE(165)
						if ((!(((_g3 < _g11->length))))){
							HX_STACK_LINE(165)
							break;
						}
						HX_STACK_LINE(165)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g3).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(165)
						++(_g3);
						HX_STACK_LINE(165)
						if ((a->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",165,0x8289eb2d)
									{
										HX_STACK_LINE(165)
										int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
										struct _Function_7_1{
											inline static int Block( int &_g5){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",165,0x8289eb2d)
												{
													HX_STACK_LINE(165)
													switch( (int)(_g5)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(165)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(165)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(165)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(165)
										return _Function_7_1::Block(_g5);
									}
									return null();
								}
							};
							HX_STACK_LINE(165)
							int _g31 = ::Math_obj::floor((Float((a->components * _Function_6_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(165)
							hx::AddEq(r,_g31);
						}
					}
				}
				HX_STACK_LINE(165)
				_g4 = r;
			}
			HX_STACK_LINE(165)
			this->elementsPerVertex = _g4;
		}
		HX_STACK_LINE(167)
		int index = ((this->batchedSprites * (int)4) * this->elementsPerVertex);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(168)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(168)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(168)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(168)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(168)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(168)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				w0 = width;
				HX_STACK_LINE(168)
				w1 = (int)0;
				HX_STACK_LINE(168)
				h0 = height;
				HX_STACK_LINE(168)
				h1 = (int)0;
			}
			HX_STACK_LINE(168)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(168)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(168)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(168)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(168)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(168)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(168)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(168)
			int _g5 = (index1)++;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g5) = (((a * w1) + (c * h1)) + tx);
			HX_STACK_LINE(168)
			int _g6 = (index1)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g6) = (((d * h1) + (b * w1)) + ty);
			HX_STACK_LINE(168)
			int _g7 = (index1)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g7) = uvs->x0;
			HX_STACK_LINE(168)
			int _g8 = (index1)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g8) = uvs->y0;
			HX_STACK_LINE(168)
			if ((this->enableColor)){
				HX_STACK_LINE(168)
				int _g9 = (index1)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(168)
				hx::__ArrayImplRef(this->colors,_g9) = color;
			}
			HX_STACK_LINE(168)
			int _g10 = (index1)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g10) = (((a * w0) + (c * h1)) + tx);
			HX_STACK_LINE(168)
			int _g11 = (index1)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g11) = (((d * h1) + (b * w0)) + ty);
			HX_STACK_LINE(168)
			int _g12 = (index1)++;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g12) = uvs->x1;
			HX_STACK_LINE(168)
			int _g13 = (index1)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g13) = uvs->y1;
			HX_STACK_LINE(168)
			if ((this->enableColor)){
				HX_STACK_LINE(168)
				int _g14 = (index1)++;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(168)
				hx::__ArrayImplRef(this->colors,_g14) = color;
			}
			HX_STACK_LINE(168)
			int _g15 = (index1)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g15) = (((a * w0) + (c * h0)) + tx);
			HX_STACK_LINE(168)
			int _g16 = (index1)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g16) = (((d * h0) + (b * w0)) + ty);
			HX_STACK_LINE(168)
			int _g17 = (index1)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g17) = uvs->x2;
			HX_STACK_LINE(168)
			int _g18 = (index1)++;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g18) = uvs->y2;
			HX_STACK_LINE(168)
			if ((this->enableColor)){
				HX_STACK_LINE(168)
				int _g19 = (index1)++;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(168)
				hx::__ArrayImplRef(this->colors,_g19) = color;
			}
			HX_STACK_LINE(168)
			int _g20 = (index1)++;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g20) = (((a * w1) + (c * h0)) + tx);
			HX_STACK_LINE(168)
			int _g21 = (index1)++;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g21) = (((d * h0) + (b * w1)) + ty);
			HX_STACK_LINE(168)
			int _g22 = (index1)++;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g22) = uvs->x3;
			HX_STACK_LINE(168)
			int _g23 = (index1)++;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(168)
			hx::__ArrayImplRef(this->positions,_g23) = uvs->y3;
			HX_STACK_LINE(168)
			if ((this->enableColor)){
				HX_STACK_LINE(168)
				int _g24 = (index1)++;		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(168)
				hx::__ArrayImplRef(this->colors,_g24) = color;
			}
			HX_STACK_LINE(168)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(170)
		this->setState(this->batchedSprites,texture,smoothing,blendMode,ct,true);
		HX_STACK_LINE(172)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",175,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(177)
		::lime::graphics::opengl::GLTexture texture = sheet->__bitmap->getTexture(this->gl);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(178)
		if (((texture == null()))){
			HX_STACK_LINE(178)
			return null();
		}
		HX_STACK_LINE(180)
		bool useScale = (((int(flags) & int((int)1))) > (int)0);		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(181)
		bool useRotation = (((int(flags) & int((int)2))) > (int)0);		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(182)
		bool useTransform = (((int(flags) & int((int)16))) > (int)0);		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(183)
		bool useRGB = (((int(flags) & int((int)4))) > (int)0);		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(184)
		bool useAlpha = (((int(flags) & int((int)8))) > (int)0);		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(185)
		bool useRect = (((int(flags) & int((int)32))) > (int)0);		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(186)
		bool useOrigin = (((int(flags) & int((int)64))) > (int)0);		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(188)
		::openfl::display::BlendMode blendMode;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(188)
		{
			HX_STACK_LINE(188)
			int _g = (int(flags) & int((int)983040));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(188)
			switch( (int)(_g)){
				case (int)65536: {
					HX_STACK_LINE(189)
					blendMode = ::openfl::display::BlendMode_obj::ADD;
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(190)
					blendMode = ::openfl::display::BlendMode_obj::MULTIPLY;
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(191)
					blendMode = ::openfl::display::BlendMode_obj::SCREEN;
				}
				;break;
				default: {
					HX_STACK_LINE(192)
					blendMode = ::openfl::display::BlendMode_obj::NORMAL;
				}
			}
		}
		HX_STACK_LINE(195)
		if ((useTransform)){
			HX_STACK_LINE(195)
			useScale = false;
			HX_STACK_LINE(195)
			useRotation = false;
		}
		HX_STACK_LINE(197)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(198)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(199)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(200)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(201)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(203)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(205)
		if ((useRect)){
			HX_STACK_LINE(205)
			if ((useOrigin)){
				HX_STACK_LINE(205)
				numValues = (int)8;
			}
			else{
				HX_STACK_LINE(205)
				numValues = (int)6;
			}
		}
		HX_STACK_LINE(206)
		if ((useScale)){
			HX_STACK_LINE(206)
			scaleIndex = numValues;
			HX_STACK_LINE(206)
			(numValues)++;
		}
		HX_STACK_LINE(207)
		if ((useRotation)){
			HX_STACK_LINE(207)
			rotationIndex = numValues;
			HX_STACK_LINE(207)
			(numValues)++;
		}
		HX_STACK_LINE(208)
		if ((useTransform)){
			HX_STACK_LINE(208)
			transformIndex = numValues;
			HX_STACK_LINE(208)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(209)
		if ((useRGB)){
			HX_STACK_LINE(209)
			rgbIndex = numValues;
			HX_STACK_LINE(209)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(210)
		if ((useAlpha)){
			HX_STACK_LINE(210)
			alphaIndex = numValues;
			HX_STACK_LINE(210)
			(numValues)++;
		}
		HX_STACK_LINE(212)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(213)
		if (((bool((count >= (int)0)) && bool((totalCount > count))))){
			HX_STACK_LINE(213)
			totalCount = count;
		}
		HX_STACK_LINE(214)
		int itemCount = ::Std_obj::_int((Float(totalCount) / Float(numValues)));		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(215)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(217)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(218)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(219)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(220)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(221)
		Float x = 0.0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(221)
		Float y = 0.0;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(222)
		Float alpha = 1.0;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(222)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(222)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(223)
		Float scale = 1.0;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(223)
		Float rotation = 0.0;		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(224)
		Float cosTheta = 1.0;		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(224)
		Float sinTheta = 0.0;		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(225)
		Float a = 0.0;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(225)
		Float b = 0.0;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(225)
		Float c = 0.0;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(225)
		Float d = 0.0;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(225)
		Float tx = 0.0;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(225)
		Float ty = 0.0;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(226)
		Float ox = 0.0;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(226)
		Float oy = 0.0;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(227)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(228)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(229)
		::openfl::display::TextureUvs uvs = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(231)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			this->enableColor = true;
			HX_STACK_LINE(234)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(234)
				this->flush();
				HX_STACK_LINE(234)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(234)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(234)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(234)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(234)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(234)
					while((true)){
						HX_STACK_LINE(234)
						if ((!(((_g < _g11->length))))){
							HX_STACK_LINE(234)
							break;
						}
						HX_STACK_LINE(234)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = _g11->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(234)
						++(_g);
						HX_STACK_LINE(234)
						if ((a1->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a1){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",234,0x8289eb2d)
									{
										HX_STACK_LINE(234)
										int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
										struct _Function_7_1{
											inline static int Block( int &_g2){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",234,0x8289eb2d)
												{
													HX_STACK_LINE(234)
													switch( (int)(_g2)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(234)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(234)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(234)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(234)
										return _Function_7_1::Block(_g2);
									}
									return null();
								}
							};
							HX_STACK_LINE(234)
							int _g2 = ::Math_obj::floor((Float((a1->components * _Function_6_1::Block(a1))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(234)
							hx::AddEq(r,_g2);
						}
					}
				}
				HX_STACK_LINE(234)
				_g1 = r;
			}
			HX_STACK_LINE(234)
			this->elementsPerVertex = _g1;
		}
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			if ((!(((iIndex < totalCount))))){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(238)
			if (((this->batchedSprites >= this->maxSprites))){
				HX_STACK_LINE(239)
				this->flush();
			}
			HX_STACK_LINE(242)
			x = tileData->__get(iIndex);
			HX_STACK_LINE(243)
			y = tileData->__get((iIndex + (int)1));
			HX_STACK_LINE(245)
			if ((useRect)){
				HX_STACK_LINE(246)
				tileID = (int)-1;
				HX_STACK_LINE(248)
				rect->x = tileData->__get((iIndex + (int)2));
				HX_STACK_LINE(249)
				rect->y = tileData->__get((iIndex + (int)3));
				HX_STACK_LINE(250)
				rect->width = tileData->__get((iIndex + (int)4));
				HX_STACK_LINE(251)
				rect->height = tileData->__get((iIndex + (int)5));
				HX_STACK_LINE(253)
				if ((useOrigin)){
					HX_STACK_LINE(254)
					center->x = tileData->__get((iIndex + (int)6));
					HX_STACK_LINE(255)
					center->y = tileData->__get((iIndex + (int)7));
				}
				else{
					HX_STACK_LINE(257)
					center->x = (int)0;
					HX_STACK_LINE(257)
					center->y = (int)0;
				}
				HX_STACK_LINE(260)
				Float _g2 = rect->get_left();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(260)
				Float _g3 = (Float(_g2) / Float(sheet->__bitmap->width));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(260)
				Float _g4 = rect->get_top();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(260)
				Float _g5 = (Float(_g4) / Float(sheet->__bitmap->height));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(260)
				Float _g6 = rect->get_right();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(260)
				Float _g7 = (Float(_g6) / Float(sheet->__bitmap->width));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(260)
				Float _g8 = rect->get_bottom();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(260)
				Float _g9 = (Float(_g8) / Float(sheet->__bitmap->height));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(260)
				tileUV->setTo(_g3,_g5,_g7,_g9);
			}
			else{
				HX_STACK_LINE(262)
				int _g10 = ::Std_obj::_int(tileData->__get((iIndex + (int)2)));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(262)
				tileID = _g10;
				HX_STACK_LINE(263)
				rect = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
				HX_STACK_LINE(264)
				center = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();
				HX_STACK_LINE(265)
				tileUV = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();
			}
			HX_STACK_LINE(268)
			if (((bool((bool((bool((rect != null())) && bool((rect->width > (int)0)))) && bool((rect->height > (int)0)))) && bool((center != null()))))){
				HX_STACK_LINE(270)
				alpha = (int)1;
				HX_STACK_LINE(271)
				tint = (int)16777215;
				HX_STACK_LINE(272)
				a = (int)1;
				HX_STACK_LINE(272)
				b = (int)0;
				HX_STACK_LINE(272)
				c = (int)0;
				HX_STACK_LINE(272)
				d = (int)1;
				HX_STACK_LINE(272)
				tx = (int)0;
				HX_STACK_LINE(272)
				ty = (int)0;
				HX_STACK_LINE(273)
				scale = 1.0;
				HX_STACK_LINE(274)
				rotation = 0.0;
				HX_STACK_LINE(275)
				cosTheta = 1.0;
				HX_STACK_LINE(276)
				sinTheta = 0.0;
				HX_STACK_LINE(277)
				matrix->identity();
				HX_STACK_LINE(279)
				if ((useAlpha)){
					HX_STACK_LINE(280)
					alpha = (tileData->__get((iIndex + alphaIndex)) * object->__worldAlpha);
				}
				else{
					HX_STACK_LINE(282)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(285)
				if ((useRGB)){
					HX_STACK_LINE(286)
					int _g11 = ::Std_obj::_int((tileData->__get((iIndex + rgbIndex)) * (int)255));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(286)
					int _g12 = (int(_g11) << int((int)16));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(286)
					int _g13 = ::Std_obj::_int((tileData->__get(((iIndex + rgbIndex) + (int)1)) * (int)255));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(286)
					int _g14 = (int(_g13) << int((int)8));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(286)
					int _g15 = (int(_g12) | int(_g14));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(286)
					int _g16 = ::Std_obj::_int((tileData->__get(((iIndex + rgbIndex) + (int)2)) * (int)255));		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(286)
					int _g17 = (int(_g15) | int(_g16));		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(286)
					tint = _g17;
				}
				HX_STACK_LINE(289)
				if ((useScale)){
					HX_STACK_LINE(290)
					scale = tileData->__get((iIndex + scaleIndex));
				}
				HX_STACK_LINE(293)
				if ((useRotation)){
					HX_STACK_LINE(294)
					rotation = tileData->__get((iIndex + rotationIndex));
					HX_STACK_LINE(295)
					Float _g18 = ::Math_obj::cos(rotation);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(295)
					cosTheta = _g18;
					HX_STACK_LINE(296)
					Float _g19 = ::Math_obj::sin(rotation);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(296)
					sinTheta = _g19;
				}
				HX_STACK_LINE(299)
				if ((useTransform)){
					HX_STACK_LINE(300)
					a = tileData->__get((iIndex + transformIndex));
					HX_STACK_LINE(301)
					b = tileData->__get(((iIndex + transformIndex) + (int)1));
					HX_STACK_LINE(302)
					c = tileData->__get(((iIndex + transformIndex) + (int)2));
					HX_STACK_LINE(303)
					d = tileData->__get(((iIndex + transformIndex) + (int)3));
				}
				else{
					HX_STACK_LINE(305)
					a = (scale * cosTheta);
					HX_STACK_LINE(306)
					b = (scale * sinTheta);
					HX_STACK_LINE(307)
					c = -(b);
					HX_STACK_LINE(308)
					d = a;
				}
				HX_STACK_LINE(311)
				ox = ((center->x * a) + (center->y * c));
				HX_STACK_LINE(312)
				oy = ((center->x * b) + (center->y * d));
				HX_STACK_LINE(314)
				tx = (x - ox);
				HX_STACK_LINE(315)
				ty = (y - oy);
				HX_STACK_LINE(317)
				matrix->a = ((a * oMatrix->a) + (b * oMatrix->c));
				HX_STACK_LINE(318)
				matrix->b = ((a * oMatrix->b) + (b * oMatrix->d));
				HX_STACK_LINE(319)
				matrix->c = ((c * oMatrix->a) + (d * oMatrix->c));
				HX_STACK_LINE(320)
				matrix->d = ((c * oMatrix->b) + (d * oMatrix->d));
				HX_STACK_LINE(321)
				matrix->tx = (((tx * oMatrix->a) + (ty * oMatrix->c)) + oMatrix->tx);
				HX_STACK_LINE(322)
				matrix->ty = (((tx * oMatrix->b) + (ty * oMatrix->d)) + oMatrix->ty);
				HX_STACK_LINE(324)
				uvs->x0 = tileUV->x;
				HX_STACK_LINE(324)
				uvs->y0 = tileUV->y;
				HX_STACK_LINE(325)
				uvs->x1 = tileUV->width;
				HX_STACK_LINE(325)
				uvs->y1 = tileUV->y;
				HX_STACK_LINE(326)
				uvs->x2 = tileUV->width;
				HX_STACK_LINE(326)
				uvs->y2 = tileUV->height;
				HX_STACK_LINE(327)
				uvs->x3 = tileUV->x;
				HX_STACK_LINE(327)
				uvs->y3 = tileUV->height;
				HX_STACK_LINE(329)
				bIndex = ((this->batchedSprites * (int)4) * this->elementsPerVertex);
				HX_STACK_LINE(331)
				int _g20 = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(331)
				int _g21 = (int(_g20) & int((int)255));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(331)
				int _g22 = (int(_g21) << int((int)24));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(331)
				int _g23 = (int(_g22) | int((int(((int(tint) & int((int)255)))) << int((int)16))));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(331)
				int _g24 = (int(_g23) | int((int(((int((int(tint) >> int((int)8))) & int((int)255)))) << int((int)8))));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(331)
				int _g25 = (int(_g24) | int((int((int(tint) >> int((int)16))) & int((int)255))));		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(331)
				color = _g25;
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					int index = bIndex;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(333)
					Float width = rect->width;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(333)
					Float height = rect->height;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(333)
					Float w0;		HX_STACK_VAR(w0,"w0");
					HX_STACK_LINE(333)
					Float w1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(333)
					Float h0;		HX_STACK_VAR(h0,"h0");
					HX_STACK_LINE(333)
					Float h1;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(333)
					{
						HX_STACK_LINE(333)
						w0 = width;
						HX_STACK_LINE(333)
						w1 = (int)0;
						HX_STACK_LINE(333)
						h0 = height;
						HX_STACK_LINE(333)
						h1 = (int)0;
					}
					HX_STACK_LINE(333)
					Float a1 = matrix->a;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(333)
					Float b1 = matrix->b;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(333)
					Float c1 = matrix->c;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(333)
					Float d1 = matrix->d;		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(333)
					Float tx1 = matrix->tx;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(333)
					Float ty1 = matrix->ty;		HX_STACK_VAR(ty1,"ty1");
					HX_STACK_LINE(333)
					int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
					HX_STACK_LINE(333)
					int _g26 = (index)++;		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g26) = (((a1 * w1) + (c1 * h1)) + tx1);
					HX_STACK_LINE(333)
					int _g27 = (index)++;		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g27) = (((d1 * h1) + (b1 * w1)) + ty1);
					HX_STACK_LINE(333)
					int _g28 = (index)++;		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g28) = uvs->x0;
					HX_STACK_LINE(333)
					int _g29 = (index)++;		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g29) = uvs->y0;
					HX_STACK_LINE(333)
					if ((this->enableColor)){
						HX_STACK_LINE(333)
						int _g30 = (index)++;		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(333)
						hx::__ArrayImplRef(this->colors,_g30) = color;
					}
					HX_STACK_LINE(333)
					int _g31 = (index)++;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g31) = (((a1 * w0) + (c1 * h1)) + tx1);
					HX_STACK_LINE(333)
					int _g32 = (index)++;		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g32) = (((d1 * h1) + (b1 * w0)) + ty1);
					HX_STACK_LINE(333)
					int _g33 = (index)++;		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g33) = uvs->x1;
					HX_STACK_LINE(333)
					int _g34 = (index)++;		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g34) = uvs->y1;
					HX_STACK_LINE(333)
					if ((this->enableColor)){
						HX_STACK_LINE(333)
						int _g35 = (index)++;		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(333)
						hx::__ArrayImplRef(this->colors,_g35) = color;
					}
					HX_STACK_LINE(333)
					int _g36 = (index)++;		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g36) = (((a1 * w0) + (c1 * h0)) + tx1);
					HX_STACK_LINE(333)
					int _g37 = (index)++;		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g37) = (((d1 * h0) + (b1 * w0)) + ty1);
					HX_STACK_LINE(333)
					int _g38 = (index)++;		HX_STACK_VAR(_g38,"_g38");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g38) = uvs->x2;
					HX_STACK_LINE(333)
					int _g39 = (index)++;		HX_STACK_VAR(_g39,"_g39");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g39) = uvs->y2;
					HX_STACK_LINE(333)
					if ((this->enableColor)){
						HX_STACK_LINE(333)
						int _g40 = (index)++;		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(333)
						hx::__ArrayImplRef(this->colors,_g40) = color;
					}
					HX_STACK_LINE(333)
					int _g41 = (index)++;		HX_STACK_VAR(_g41,"_g41");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g41) = (((a1 * w1) + (c1 * h0)) + tx1);
					HX_STACK_LINE(333)
					int _g42 = (index)++;		HX_STACK_VAR(_g42,"_g42");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g42) = (((d1 * h0) + (b1 * w1)) + ty1);
					HX_STACK_LINE(333)
					int _g43 = (index)++;		HX_STACK_VAR(_g43,"_g43");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g43) = uvs->x3;
					HX_STACK_LINE(333)
					int _g44 = (index)++;		HX_STACK_VAR(_g44,"_g44");
					HX_STACK_LINE(333)
					hx::__ArrayImplRef(this->positions,_g44) = uvs->y3;
					HX_STACK_LINE(333)
					if ((this->enableColor)){
						HX_STACK_LINE(333)
						int _g45 = (index)++;		HX_STACK_VAR(_g45,"_g45");
						HX_STACK_LINE(333)
						hx::__ArrayImplRef(this->colors,_g45) = color;
					}
					HX_STACK_LINE(333)
					this->writtenVertexBytes = index;
				}
				HX_STACK_LINE(335)
				this->setState(this->batchedSprites,texture,smooth,blendMode,object->__worldColorTransform,false);
				HX_STACK_LINE(337)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(340)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::renderCachedGraphics( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderCachedGraphics",0x0e6ae93d,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderCachedGraphics","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",345,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(346)
		::openfl::_internal::renderer::opengl::utils::FilterTexture cachedTexture = object->__graphics->__cachedTexture;		HX_STACK_VAR(cachedTexture,"cachedTexture");
		HX_STACK_LINE(348)
		if (((cachedTexture == null()))){
			HX_STACK_LINE(348)
			return null();
		}
		HX_STACK_LINE(350)
		if (((this->batchedSprites >= this->maxSprites))){
			HX_STACK_LINE(351)
			this->flush();
		}
		HX_STACK_LINE(354)
		Float alpha = object->__worldAlpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(355)
		int _g = ::Std_obj::_int((alpha * (int)255));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		int _g1 = (int(_g) & int((int)255));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(355)
		int _g2 = (int(_g1) << int((int)24));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(355)
		int color = (int(_g2) | int((int)16777215));		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(358)
		::openfl::display::TextureUvs uvs = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(359)
		uvs->x0 = (int)0;
		HX_STACK_LINE(359)
		uvs->y0 = (int)1;
		HX_STACK_LINE(360)
		uvs->x1 = (int)1;
		HX_STACK_LINE(360)
		uvs->y1 = (int)1;
		HX_STACK_LINE(361)
		uvs->x2 = (int)1;
		HX_STACK_LINE(361)
		uvs->y2 = (int)0;
		HX_STACK_LINE(362)
		uvs->x3 = (int)0;
		HX_STACK_LINE(362)
		uvs->y3 = (int)0;
		HX_STACK_LINE(364)
		::openfl::geom::Matrix worldTransform;		HX_STACK_VAR(worldTransform,"worldTransform");
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			::openfl::geom::Matrix _this = object->__worldTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(364)
			worldTransform = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			::openfl::geom::Point pos = ::openfl::geom::Point_obj::__new(object->__graphics->__bounds->x,object->__graphics->__bounds->y);		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(365)
			worldTransform->tx = (((pos->x * worldTransform->a) + (pos->y * worldTransform->c)) + worldTransform->tx);
			HX_STACK_LINE(365)
			worldTransform->ty = (((pos->x * worldTransform->b) + (pos->y * worldTransform->d)) + worldTransform->ty);
		}
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			this->enableColor = (color != (int)-1);
			HX_STACK_LINE(367)
			if (((this->enableColor != this->lastEnableColor))){
				HX_STACK_LINE(367)
				this->flush();
				HX_STACK_LINE(367)
				this->lastEnableColor = this->enableColor;
			}
			HX_STACK_LINE(367)
			this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
			HX_STACK_LINE(367)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(367)
					Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(367)
					while((true)){
						HX_STACK_LINE(367)
						if ((!(((_g3 < _g11->length))))){
							HX_STACK_LINE(367)
							break;
						}
						HX_STACK_LINE(367)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g3).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(367)
						++(_g3);
						HX_STACK_LINE(367)
						if ((a->enabled)){
							struct _Function_6_1{
								inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",367,0x8289eb2d)
									{
										HX_STACK_LINE(367)
										int _g5 = a->type;		HX_STACK_VAR(_g5,"_g5");
										struct _Function_7_1{
											inline static int Block( int &_g5){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",367,0x8289eb2d)
												{
													HX_STACK_LINE(367)
													switch( (int)(_g5)){
														case (int)5120: case (int)5121: {
															HX_STACK_LINE(367)
															return (int)1;
														}
														;break;
														case (int)5122: case (int)5123: {
															HX_STACK_LINE(367)
															return (int)2;
														}
														;break;
														default: {
															HX_STACK_LINE(367)
															return (int)4;
														}
													}
												}
												return null();
											}
										};
										HX_STACK_LINE(367)
										return _Function_7_1::Block(_g5);
									}
									return null();
								}
							};
							HX_STACK_LINE(367)
							int _g31 = ::Math_obj::floor((Float((a->components * _Function_6_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(367)
							hx::AddEq(r,_g31);
						}
					}
				}
				HX_STACK_LINE(367)
				_g4 = r;
			}
			HX_STACK_LINE(367)
			this->elementsPerVertex = _g4;
		}
		HX_STACK_LINE(369)
		int index = ((this->batchedSprites * (int)4) * this->elementsPerVertex);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(370)
			Float width = cachedTexture->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(370)
			Float height = cachedTexture->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(370)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(370)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(370)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(370)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				w0 = width;
				HX_STACK_LINE(370)
				w1 = (int)0;
				HX_STACK_LINE(370)
				h0 = height;
				HX_STACK_LINE(370)
				h1 = (int)0;
			}
			HX_STACK_LINE(370)
			Float a = worldTransform->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(370)
			Float b = worldTransform->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(370)
			Float c = worldTransform->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(370)
			Float d = worldTransform->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(370)
			Float tx = worldTransform->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(370)
			Float ty = worldTransform->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(370)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(370)
			int _g5 = (index1)++;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g5) = (((a * w1) + (c * h1)) + tx);
			HX_STACK_LINE(370)
			int _g6 = (index1)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g6) = (((d * h1) + (b * w1)) + ty);
			HX_STACK_LINE(370)
			int _g7 = (index1)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g7) = uvs->x0;
			HX_STACK_LINE(370)
			int _g8 = (index1)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g8) = uvs->y0;
			HX_STACK_LINE(370)
			if ((this->enableColor)){
				HX_STACK_LINE(370)
				int _g9 = (index1)++;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(370)
				hx::__ArrayImplRef(this->colors,_g9) = color;
			}
			HX_STACK_LINE(370)
			int _g10 = (index1)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g10) = (((a * w0) + (c * h1)) + tx);
			HX_STACK_LINE(370)
			int _g11 = (index1)++;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g11) = (((d * h1) + (b * w0)) + ty);
			HX_STACK_LINE(370)
			int _g12 = (index1)++;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g12) = uvs->x1;
			HX_STACK_LINE(370)
			int _g13 = (index1)++;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g13) = uvs->y1;
			HX_STACK_LINE(370)
			if ((this->enableColor)){
				HX_STACK_LINE(370)
				int _g14 = (index1)++;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(370)
				hx::__ArrayImplRef(this->colors,_g14) = color;
			}
			HX_STACK_LINE(370)
			int _g15 = (index1)++;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g15) = (((a * w0) + (c * h0)) + tx);
			HX_STACK_LINE(370)
			int _g16 = (index1)++;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g16) = (((d * h0) + (b * w0)) + ty);
			HX_STACK_LINE(370)
			int _g17 = (index1)++;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g17) = uvs->x2;
			HX_STACK_LINE(370)
			int _g18 = (index1)++;		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g18) = uvs->y2;
			HX_STACK_LINE(370)
			if ((this->enableColor)){
				HX_STACK_LINE(370)
				int _g19 = (index1)++;		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(370)
				hx::__ArrayImplRef(this->colors,_g19) = color;
			}
			HX_STACK_LINE(370)
			int _g20 = (index1)++;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g20) = (((a * w1) + (c * h0)) + tx);
			HX_STACK_LINE(370)
			int _g21 = (index1)++;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g21) = (((d * h0) + (b * w1)) + ty);
			HX_STACK_LINE(370)
			int _g22 = (index1)++;		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g22) = uvs->x3;
			HX_STACK_LINE(370)
			int _g23 = (index1)++;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(370)
			hx::__ArrayImplRef(this->positions,_g23) = uvs->y3;
			HX_STACK_LINE(370)
			if ((this->enableColor)){
				HX_STACK_LINE(370)
				int _g24 = (index1)++;		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(370)
				hx::__ArrayImplRef(this->colors,_g24) = color;
			}
			HX_STACK_LINE(370)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(372)
		this->setState(this->batchedSprites,cachedTexture->texture,null(),object->blendMode,object->__worldColorTransform,null());
		HX_STACK_LINE(374)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,renderCachedGraphics,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,::openfl::geom::Point pivot,Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",378,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(pivot,"pivot")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(380)
		Float w0;		HX_STACK_VAR(w0,"w0");
		HX_STACK_LINE(380)
		Float w1;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(380)
		Float h0;		HX_STACK_VAR(h0,"h0");
		HX_STACK_LINE(380)
		Float h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(382)
		if (((pivot == null()))){
			HX_STACK_LINE(383)
			w0 = width;
			HX_STACK_LINE(383)
			w1 = (int)0;
			HX_STACK_LINE(384)
			h0 = height;
			HX_STACK_LINE(384)
			h1 = (int)0;
		}
		else{
			HX_STACK_LINE(386)
			w0 = (width * (((int)1 - pivot->x)));
			HX_STACK_LINE(387)
			w1 = (width * -(pivot->x));
			HX_STACK_LINE(388)
			h0 = (height * (((int)1 - pivot->y)));
			HX_STACK_LINE(389)
			h1 = (height * -(pivot->y));
		}
		HX_STACK_LINE(392)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(393)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(394)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(395)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(396)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(397)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(398)
		int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
		HX_STACK_LINE(400)
		int _g = (index)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(400)
		hx::__ArrayImplRef(this->positions,_g) = (((a * w1) + (c * h1)) + tx);
		HX_STACK_LINE(401)
		int _g1 = (index)++;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(401)
		hx::__ArrayImplRef(this->positions,_g1) = (((d * h1) + (b * w1)) + ty);
		HX_STACK_LINE(402)
		int _g2 = (index)++;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(402)
		hx::__ArrayImplRef(this->positions,_g2) = uvs->x0;
		HX_STACK_LINE(403)
		int _g3 = (index)++;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(403)
		hx::__ArrayImplRef(this->positions,_g3) = uvs->y0;
		HX_STACK_LINE(404)
		if ((this->enableColor)){
			HX_STACK_LINE(405)
			int _g4 = (index)++;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(405)
			hx::__ArrayImplRef(this->colors,_g4) = color;
		}
		HX_STACK_LINE(408)
		int _g5 = (index)++;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(408)
		hx::__ArrayImplRef(this->positions,_g5) = (((a * w0) + (c * h1)) + tx);
		HX_STACK_LINE(409)
		int _g6 = (index)++;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(409)
		hx::__ArrayImplRef(this->positions,_g6) = (((d * h1) + (b * w0)) + ty);
		HX_STACK_LINE(410)
		int _g7 = (index)++;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(410)
		hx::__ArrayImplRef(this->positions,_g7) = uvs->x1;
		HX_STACK_LINE(411)
		int _g8 = (index)++;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(411)
		hx::__ArrayImplRef(this->positions,_g8) = uvs->y1;
		HX_STACK_LINE(412)
		if ((this->enableColor)){
			HX_STACK_LINE(413)
			int _g9 = (index)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(413)
			hx::__ArrayImplRef(this->colors,_g9) = color;
		}
		HX_STACK_LINE(416)
		int _g10 = (index)++;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(416)
		hx::__ArrayImplRef(this->positions,_g10) = (((a * w0) + (c * h0)) + tx);
		HX_STACK_LINE(417)
		int _g11 = (index)++;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(417)
		hx::__ArrayImplRef(this->positions,_g11) = (((d * h0) + (b * w0)) + ty);
		HX_STACK_LINE(418)
		int _g12 = (index)++;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(418)
		hx::__ArrayImplRef(this->positions,_g12) = uvs->x2;
		HX_STACK_LINE(419)
		int _g13 = (index)++;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(419)
		hx::__ArrayImplRef(this->positions,_g13) = uvs->y2;
		HX_STACK_LINE(420)
		if ((this->enableColor)){
			HX_STACK_LINE(421)
			int _g14 = (index)++;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(421)
			hx::__ArrayImplRef(this->colors,_g14) = color;
		}
		HX_STACK_LINE(425)
		int _g15 = (index)++;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(425)
		hx::__ArrayImplRef(this->positions,_g15) = (((a * w1) + (c * h0)) + tx);
		HX_STACK_LINE(426)
		int _g16 = (index)++;		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(426)
		hx::__ArrayImplRef(this->positions,_g16) = (((d * h0) + (b * w1)) + ty);
		HX_STACK_LINE(427)
		int _g17 = (index)++;		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(427)
		hx::__ArrayImplRef(this->positions,_g17) = uvs->x3;
		HX_STACK_LINE(428)
		int _g18 = (index)++;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(428)
		hx::__ArrayImplRef(this->positions,_g18) = uvs->y3;
		HX_STACK_LINE(429)
		if ((this->enableColor)){
			HX_STACK_LINE(430)
			int _g19 = (index)++;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(430)
			hx::__ArrayImplRef(this->colors,_g19) = color;
		}
		HX_STACK_LINE(433)
		this->writtenVertexBytes = index;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",436,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(437)
		this->enableColor = (color != (int)-1);
		HX_STACK_LINE(439)
		if (((this->enableColor != this->lastEnableColor))){
			HX_STACK_LINE(440)
			this->flush();
			HX_STACK_LINE(441)
			this->lastEnableColor = this->enableColor;
		}
		HX_STACK_LINE(444)
		this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >()->enabled = this->lastEnableColor;
		HX_STACK_LINE(446)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(446)
				Array< ::Dynamic > _g11 = this->attributes;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(446)
				while((true)){
					HX_STACK_LINE(446)
					if ((!(((_g < _g11->length))))){
						HX_STACK_LINE(446)
						break;
					}
					HX_STACK_LINE(446)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g11->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(446)
					++(_g);
					HX_STACK_LINE(446)
					if ((a->enabled)){
						struct _Function_5_1{
							inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",446,0x8289eb2d)
								{
									HX_STACK_LINE(446)
									int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
									struct _Function_6_1{
										inline static int Block( int &_g2){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",446,0x8289eb2d)
											{
												HX_STACK_LINE(446)
												switch( (int)(_g2)){
													case (int)5120: case (int)5121: {
														HX_STACK_LINE(446)
														return (int)1;
													}
													;break;
													case (int)5122: case (int)5123: {
														HX_STACK_LINE(446)
														return (int)2;
													}
													;break;
													default: {
														HX_STACK_LINE(446)
														return (int)4;
													}
												}
											}
											return null();
										}
									};
									HX_STACK_LINE(446)
									return _Function_6_1::Block(_g2);
								}
								return null();
							}
						};
						HX_STACK_LINE(446)
						int _g2 = ::Math_obj::floor((Float((a->components * _Function_5_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(446)
						hx::AddEq(r,_g2);
					}
				}
			}
			HX_STACK_LINE(446)
			_g1 = r;
		}
		HX_STACK_LINE(446)
		this->elementsPerVertex = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",449,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(450)
		if (((this->batchedSprites == (int)0))){
			HX_STACK_LINE(450)
			return null();
		}
		HX_STACK_LINE(452)
		if (((this->clipRect == null()))){
			HX_STACK_LINE(453)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->SCISSOR_TEST);
		}
		else{
			HX_STACK_LINE(455)
			::lime::graphics::opengl::GL_obj::lime_gl_enable(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(456)
			{
				HX_STACK_LINE(456)
				int x = ::Math_obj::floor(this->clipRect->x);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(457)
				int y = ::Math_obj::floor(this->clipRect->y);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(458)
				int width = ::Math_obj::floor(this->clipRect->width);		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(459)
				int height = ::Math_obj::floor(this->clipRect->height);		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(456)
				::lime::graphics::opengl::GL_obj::lime_gl_scissor(x,y,width,height);
			}
		}
		HX_STACK_LINE(463)
		if ((this->dirty)){
			HX_STACK_LINE(464)
			this->dirty = false;
			HX_STACK_LINE(466)
			::lime::graphics::opengl::GL_obj::lime_gl_active_texture(this->gl->TEXTURE0);
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = this->vertexArray;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(468)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
				}
			}
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(469)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
		}
		HX_STACK_LINE(472)
		if (((this->writtenVertexBytes > (this->vertexArraySize * 0.5)))){
			HX_STACK_LINE(473)
			this->vertexArray->upload(this->positions);
		}
		else{
			HX_STACK_LINE(475)
			::lime::utils::Float32Array view = this->positions->subarray((int)0,this->writtenVertexBytes);		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(476)
			this->vertexArray->upload(view);
		}
		HX_STACK_LINE(479)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(480)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(481)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(483)
		this->currentState->shader = this->renderSession->shaderManager->defaultShader;
		HX_STACK_LINE(484)
		this->currentState->texture = null();
		HX_STACK_LINE(485)
		this->currentState->textureSmooth = false;
		HX_STACK_LINE(486)
		this->currentState->blendMode = this->renderSession->blendModeManager->currentBlendMode;
		HX_STACK_LINE(487)
		this->currentState->colorTransform = null();
		HX_STACK_LINE(488)
		this->currentState->skipColorTransformAlpha = false;
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(490)
			int _g = this->batchedSprites;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(490)
			while((true)){
				HX_STACK_LINE(490)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(490)
					break;
				}
				HX_STACK_LINE(490)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(491)
				nextState = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();
				HX_STACK_LINE(492)
				this->currentState->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj > __this,::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &nextState){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",493,0x8289eb2d)
						{
							HX_STACK_LINE(493)
							::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = __this->currentState;		HX_STACK_VAR(other,"other");
							struct _Function_4_1{
								inline static bool Block( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &other,::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State &nextState){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",493,0x8289eb2d)
									{
										HX_STACK_LINE(493)
										return (  (((nextState->colorTransform != null()))) ? bool(nextState->colorTransform->__equals(other->colorTransform,nextState->skipColorTransformAlpha)) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(493)
							return (  (((bool((bool((bool(((bool((bool((nextState->shader == null())) || bool((other->shader == null())))) || bool((nextState->shader->ID == other->shader->ID))))) && bool((nextState->texture == other->texture)))) && bool((nextState->textureSmooth == other->textureSmooth)))) && bool((nextState->blendMode == other->blendMode))))) ? bool(_Function_4_1::Block(other,nextState)) : bool(false) );
						}
						return null();
					}
				};
				HX_STACK_LINE(493)
				if ((!(_Function_3_1::Block(this,nextState)))){
					HX_STACK_LINE(494)
					this->renderBatch(this->currentState,batchSize,start);
					HX_STACK_LINE(496)
					start = i;
					HX_STACK_LINE(497)
					batchSize = (int)0;
					HX_STACK_LINE(499)
					this->currentState->shader = nextState->shader;
					HX_STACK_LINE(500)
					this->currentState->texture = nextState->texture;
					HX_STACK_LINE(501)
					this->currentState->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(502)
					this->currentState->blendMode = nextState->blendMode;
					HX_STACK_LINE(503)
					this->currentState->colorTransform = nextState->colorTransform;
				}
				HX_STACK_LINE(506)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(509)
		this->renderBatch(this->currentState,batchSize,start);
		HX_STACK_LINE(510)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(511)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(513)
		if (((this->clipRect != null()))){
			HX_STACK_LINE(514)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",520,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(521)
		if (((bool((size == (int)0)) || bool((state->texture == null()))))){
			HX_STACK_LINE(521)
			return null();
		}
		HX_STACK_LINE(523)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(523)
		if (((state->shader == null()))){
			HX_STACK_LINE(523)
			shader = this->renderSession->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(523)
			shader = state->shader;
		}
		HX_STACK_LINE(524)
		this->renderSession->shaderManager->setShader(shader,null());
		HX_STACK_LINE(527)
		shader->bindVertexArray(this->vertexArray);
		HX_STACK_LINE(529)
		::openfl::geom::Point projection = this->renderSession->projection;		HX_STACK_VAR(projection,"projection");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int location = shader->getUniformLocation(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(530)
			::lime::graphics::opengl::GL_obj::lime_gl_uniform2f(location,projection->x,projection->y);
		}
		HX_STACK_LINE(532)
		if (((state->colorTransform != null()))){
			HX_STACK_LINE(533)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(534)
			{
				HX_STACK_LINE(534)
				int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(534)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,(  ((state->skipColorTransformAlpha)) ? Float((int)1) : Float(ct->alphaMultiplier) ));
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(536)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(Float(ct->redOffset) / Float(255.)),(Float(ct->greenOffset) / Float(255.)),(Float(ct->blueOffset) / Float(255.)),(Float(ct->alphaOffset) / Float(255.)));
			}
		}
		else{
			HX_STACK_LINE(539)
			{
				HX_STACK_LINE(539)
				int location = shader->getUniformLocation(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(539)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(int)1,(int)1,(int)1,(int)1);
			}
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				int location = shader->getUniformLocation(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(540)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(location,(int)0,(int)0,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(543)
		this->renderSession->blendModeManager->setBlendMode(state->blendMode);
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(544)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(546)
		if ((state->textureSmooth)){
			HX_STACK_LINE(547)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->LINEAR);
			HX_STACK_LINE(548)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->LINEAR);
		}
		else{
			HX_STACK_LINE(550)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->NEAREST);
			HX_STACK_LINE(551)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->NEAREST);
		}
		HX_STACK_LINE(554)
		::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(this->gl->TRIANGLES,(size * (int)6),this->gl->UNSIGNED_SHORT,((start * (int)6) * (int)2));
		HX_STACK_LINE(556)
		(this->renderSession->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",560,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(561)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(562)
		if (((state == null()))){
			HX_STACK_LINE(563)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State _g = this->states[index] = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(563)
			state = _g;
		}
		HX_STACK_LINE(565)
		state->texture = texture;
		HX_STACK_LINE(566)
		state->textureSmooth = smooth;
		HX_STACK_LINE(567)
		state->blendMode = blendMode;
		HX_STACK_LINE(568)
		state->colorTransform = colorTransform;
		HX_STACK_LINE(569)
		state->skipColorTransformAlpha = skipAlpha;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",572,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(573)
		this->gl = gl;
		HX_STACK_LINE(575)
		this->vertexArray->setContext(gl,this->positions);
		HX_STACK_LINE(577)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(577)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(577)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(577)
		this->indexBuffer = _g2;
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			::lime::graphics::opengl::GLBuffer buffer = this->indexBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(578)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::lime::utils::ArrayBufferView data = this->indices;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::lime::utils::ByteArray _g3 = data->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(579)
				int _g4 = data->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(579)
				int _g5 = data->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(579)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ELEMENT_ARRAY_BUFFER,_g3,_g4,_g5,gl->STATIC_DRAW);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",584,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(585)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(587)
	{
		HX_STACK_LINE(587)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(587)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(587)
		while((true)){
			HX_STACK_LINE(587)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(587)
				break;
			}
			HX_STACK_LINE(587)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(587)
			++(_g);
			HX_STACK_LINE(588)
			if ((a->enabled)){
				struct _Function_4_1{
					inline static int Block( ::openfl::_internal::renderer::opengl::utils::VertexAttribute &a){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",588,0x8289eb2d)
						{
							HX_STACK_LINE(588)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							struct _Function_5_1{
								inline static int Block( int &_g2){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",588,0x8289eb2d)
									{
										HX_STACK_LINE(588)
										switch( (int)(_g2)){
											case (int)5120: case (int)5121: {
												HX_STACK_LINE(588)
												return (int)1;
											}
											;break;
											case (int)5122: case (int)5123: {
												HX_STACK_LINE(588)
												return (int)2;
											}
											;break;
											default: {
												HX_STACK_LINE(588)
												return (int)4;
											}
										}
									}
									return null();
								}
							};
							HX_STACK_LINE(588)
							return _Function_5_1::Block(_g2);
						}
						return null();
					}
				};
				HX_STACK_LINE(588)
				int _g2 = ::Math_obj::floor((Float((a->components * _Function_4_1::Block(a))) / Float((int)4)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(588)
				hx::AddEq(r,_g2);
			}
		}
	}
	HX_STACK_LINE(591)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"renderCachedGraphics") ) { return renderCachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::UInt32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("renderSession"));
	outFields->push(HX_CSTRING("states"));
	outFields->push(HX_CSTRING("currentState"));
	outFields->push(HX_CSTRING("vertexArray"));
	outFields->push(HX_CSTRING("positions"));
	outFields->push(HX_CSTRING("colors"));
	outFields->push(HX_CSTRING("indexBuffer"));
	outFields->push(HX_CSTRING("indices"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("drawing"));
	outFields->push(HX_CSTRING("clipRect"));
	outFields->push(HX_CSTRING("maxSprites"));
	outFields->push(HX_CSTRING("batchedSprites"));
	outFields->push(HX_CSTRING("vertexArraySize"));
	outFields->push(HX_CSTRING("indexArraySize"));
	outFields->push(HX_CSTRING("maxElementsPerVertex"));
	outFields->push(HX_CSTRING("elementsPerVertex"));
	outFields->push(HX_CSTRING("writtenVertexBytes"));
	outFields->push(HX_CSTRING("shader"));
	outFields->push(HX_CSTRING("attributes"));
	outFields->push(HX_CSTRING("enableColor"));
	outFields->push(HX_CSTRING("lastEnableColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERTS_PER_SPRITE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_CSTRING("gl")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_CSTRING("renderSession")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_CSTRING("states")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_CSTRING("currentState")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_CSTRING("vertexArray")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_CSTRING("positions")},
	{hx::fsObject /*::lime::utils::UInt32Array*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_CSTRING("colors")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_CSTRING("indexBuffer")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_CSTRING("indices")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_CSTRING("drawing")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_CSTRING("clipRect")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_CSTRING("maxSprites")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_CSTRING("batchedSprites")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_CSTRING("vertexArraySize")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_CSTRING("indexArraySize")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_CSTRING("maxElementsPerVertex")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_CSTRING("elementsPerVertex")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_CSTRING("writtenVertexBytes")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_CSTRING("shader")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_CSTRING("attributes")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_CSTRING("enableColor")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_CSTRING("lastEnableColor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gl"),
	HX_CSTRING("renderSession"),
	HX_CSTRING("states"),
	HX_CSTRING("currentState"),
	HX_CSTRING("vertexArray"),
	HX_CSTRING("positions"),
	HX_CSTRING("colors"),
	HX_CSTRING("indexBuffer"),
	HX_CSTRING("indices"),
	HX_CSTRING("dirty"),
	HX_CSTRING("drawing"),
	HX_CSTRING("clipRect"),
	HX_CSTRING("maxSprites"),
	HX_CSTRING("batchedSprites"),
	HX_CSTRING("vertexArraySize"),
	HX_CSTRING("indexArraySize"),
	HX_CSTRING("maxElementsPerVertex"),
	HX_CSTRING("elementsPerVertex"),
	HX_CSTRING("writtenVertexBytes"),
	HX_CSTRING("shader"),
	HX_CSTRING("attributes"),
	HX_CSTRING("enableColor"),
	HX_CSTRING("lastEnableColor"),
	HX_CSTRING("destroy"),
	HX_CSTRING("begin"),
	HX_CSTRING("finish"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("renderBitmapData"),
	HX_CSTRING("renderTiles"),
	HX_CSTRING("renderCachedGraphics"),
	HX_CSTRING("fillVertices"),
	HX_CSTRING("enableAttributes"),
	HX_CSTRING("flush"),
	HX_CSTRING("renderBatch"),
	HX_CSTRING("setState"),
	HX_CSTRING("setContext"),
	HX_CSTRING("getElementsPerVertex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

Class SpriteBatch_obj::__mClass;

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch"), hx::TCanCast< SpriteBatch_obj> ,sStaticFields,sMemberFields,
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
