#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",162,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(164)
	this->transparent = transparent;
	HX_STACK_LINE(171)
	if (((width < (int)0))){
		HX_STACK_LINE(171)
		width = (int)0;
	}
	else{
		HX_STACK_LINE(171)
		width = width;
	}
	HX_STACK_LINE(172)
	if (((height < (int)0))){
		HX_STACK_LINE(172)
		height = (int)0;
	}
	else{
		HX_STACK_LINE(172)
		height = height;
	}
	HX_STACK_LINE(174)
	this->width = width;
	HX_STACK_LINE(175)
	this->height = height;
	HX_STACK_LINE(176)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(176)
	this->rect = _g;
	HX_STACK_LINE(178)
	if (((bool((width > (int)0)) && bool((height > (int)0))))){
		HX_STACK_LINE(180)
		if ((transparent)){
			struct _Function_3_1{
				inline static Float Block( int &fillColor){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",182,0xdd12d5b9)
					{
						HX_STACK_LINE(182)
						int _int = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(182)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(182)
			if (((_Function_3_1::Block(fillColor) == (int)0))){
				HX_STACK_LINE(183)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(189)
			fillColor = (int((int)-16777216) | int((int(fillColor) & int((int)16777215))));
		}
		HX_STACK_LINE(193)
		::lime::graphics::Image _g1 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,width,height,fillColor,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		this->__image = _g1;
		HX_STACK_LINE(194)
		this->__image->set_transparent(transparent);
		HX_STACK_LINE(195)
		this->__isValid = true;
	}
	HX_STACK_LINE(199)
	this->__createUVs(null());
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(width,height,__o_transparent,__o_fillColor);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",229,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(231)
		if (((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid))))){
			HX_STACK_LINE(231)
			return null();
		}
		HX_STACK_LINE(244)
		this->__image->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",255,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	if ((!(this->__isValid))){
		HX_STACK_LINE(257)
		return ::openfl::display::BitmapData_obj::__new(this->width,this->height,this->transparent,null());
	}
	else{
		HX_STACK_LINE(261)
		::lime::graphics::Image _g = this->__image->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		return ::openfl::display::BitmapData_obj::fromImage(_g,this->transparent);
	}
	HX_STACK_LINE(255)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",275,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(277)
		if ((!(this->__isValid))){
			HX_STACK_LINE(277)
			return null();
		}
		HX_STACK_LINE(279)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(279)
		::lime::utils::Float32Array _g1 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		this->__image->colorTransform(_g,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",327,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(329)
		if ((!(this->__isValid))){
			HX_STACK_LINE(329)
			return null();
		}
		HX_STACK_LINE(331)
		::lime::graphics::ImageChannel sourceChannel1;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(331)
		switch( (int)(sourceChannel)){
			case (int)1: {
				HX_STACK_LINE(333)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(334)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(335)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(336)
				sourceChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(337)
				return null();
			}
		}
		HX_STACK_LINE(341)
		::lime::graphics::ImageChannel destChannel1;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(341)
		switch( (int)(destChannel)){
			case (int)1: {
				HX_STACK_LINE(343)
				destChannel1 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(344)
				destChannel1 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(345)
				destChannel1 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(346)
				destChannel1 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(347)
				return null();
			}
		}
		HX_STACK_LINE(351)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(351)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(351)
		this->__image->copyChannel(sourceBitmapData->__image,_g,_g1,sourceChannel1,destChannel1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",395,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(397)
		if (((bool(!(this->__isValid)) || bool((sourceBitmapData == null()))))){
			HX_STACK_LINE(397)
			return null();
		}
		HX_STACK_LINE(399)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(399)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(399)
		::lime::math::Vector2 _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(399)
		if (((alphaPoint != null()))){
			HX_STACK_LINE(399)
			_g2 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(399)
			_g2 = null();
		}
		HX_STACK_LINE(399)
		this->__image->copyPixels(sourceBitmapData->__image,_g,_g1,(  (((alphaBitmapData != null()))) ? ::lime::graphics::Image(alphaBitmapData->__image) : ::lime::graphics::Image(null()) ),_g2,mergeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",423,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		this->__image = null();
		HX_STACK_LINE(427)
		this->width = (int)0;
		HX_STACK_LINE(428)
		this->height = (int)0;
		HX_STACK_LINE(429)
		this->rect = null();
		HX_STACK_LINE(430)
		this->__isValid = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",507,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(509)
		if ((!(this->__isValid))){
			HX_STACK_LINE(509)
			return null();
		}
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			::lime::graphics::ImageType _g = this->__image->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(511)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(515)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(this->__image);
					HX_STACK_LINE(516)
					::lime::graphics::utils::ImageCanvasUtil_obj::sync(this->__image);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(553)
					::openfl::_internal::renderer::RenderSession renderSession = ::openfl::Lib_obj::current->stage->__renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
					HX_STACK_LINE(554)
					::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
					HX_STACK_LINE(555)
					if (((gl == null()))){
						HX_STACK_LINE(555)
						return null();
					}
					HX_STACK_LINE(558)
					::openfl::_internal::renderer::opengl::utils::SpriteBatch mainSpritebatch = renderSession->spriteBatch;		HX_STACK_VAR(mainSpritebatch,"mainSpritebatch");
					HX_STACK_LINE(559)
					::openfl::geom::Point mainProjection = renderSession->projection;		HX_STACK_VAR(mainProjection,"mainProjection");
					HX_STACK_LINE(561)
					if (((clipRect == null()))){
						HX_STACK_LINE(562)
						::openfl::geom::Rectangle _g1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(562)
						clipRect = _g1;
					}
					HX_STACK_LINE(564)
					::openfl::geom::Rectangle tmpRect = clipRect->clone();		HX_STACK_VAR(tmpRect,"tmpRect");
					HX_STACK_LINE(566)
					Float _g1 = tmpRect->get_bottom();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(566)
					Float _g2 = (this->height - _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(566)
					tmpRect->y = _g2;
					HX_STACK_LINE(568)
					bool drawSelf = false;		HX_STACK_VAR(drawSelf,"drawSelf");
					HX_STACK_LINE(569)
					if (((this->__spritebatch == null()))){
						HX_STACK_LINE(570)
						::openfl::_internal::renderer::opengl::utils::SpriteBatch _g3 = ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__new(gl,null());		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(570)
						this->__spritebatch = _g3;
						HX_STACK_LINE(571)
						drawSelf = true;
					}
					HX_STACK_LINE(574)
					renderSession->spriteBatch = this->__spritebatch;
					HX_STACK_LINE(575)
					::openfl::geom::Point _g4 = ::openfl::geom::Point_obj::__new((Float(this->width) / Float((int)2)),-(((Float(this->height) / Float((int)2)))));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(575)
					renderSession->projection = _g4;
					HX_STACK_LINE(577)
					if (((this->__framebuffer == null()))){
						HX_STACK_LINE(578)
						::openfl::_internal::renderer::opengl::utils::FilterTexture _g5 = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,this->width,this->height,smoothing);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(578)
						this->__framebuffer = _g5;
					}
					HX_STACK_LINE(581)
					this->__framebuffer->resize(this->width,this->height);
					HX_STACK_LINE(582)
					{
						HX_STACK_LINE(582)
						::lime::graphics::opengl::GLFramebuffer framebuffer = this->__framebuffer->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
						HX_STACK_LINE(582)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(  (((framebuffer == null()))) ? int((int)0) : int(framebuffer->id) ));
					}
					HX_STACK_LINE(584)
					::lime::graphics::opengl::GL_obj::lime_gl_viewport((int)0,(int)0,this->width,this->height);
					HX_STACK_LINE(586)
					this->__spritebatch->begin(renderSession,(  ((drawSelf)) ? ::openfl::geom::Rectangle(null()) : ::openfl::geom::Rectangle(tmpRect) ));
					HX_STACK_LINE(589)
					::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
					HX_STACK_LINE(590)
					renderSession->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL);
					HX_STACK_LINE(592)
					if ((drawSelf)){
						HX_STACK_LINE(593)
						this->__framebuffer->clear();
						HX_STACK_LINE(594)
						this->__renderGL(renderSession);
						HX_STACK_LINE(595)
						this->__spritebatch->stop();
						HX_STACK_LINE(597)
						this->__spritebatch->start(tmpRect);
					}
					HX_STACK_LINE(600)
					::openfl::geom::ColorTransform ctCache = source->__Field(HX_CSTRING("__worldColorTransform"),true);		HX_STACK_VAR(ctCache,"ctCache");
					HX_STACK_LINE(601)
					::openfl::geom::Matrix matrixCache = source->__Field(HX_CSTRING("__worldTransform"),true);		HX_STACK_VAR(matrixCache,"matrixCache");
					HX_STACK_LINE(602)
					::openfl::display::BlendMode blendModeCache = source->__Field(HX_CSTRING("blendMode"),true);		HX_STACK_VAR(blendModeCache,"blendModeCache");
					HX_STACK_LINE(604)
					::openfl::geom::Matrix _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(604)
					if (((matrix != null()))){
						HX_STACK_LINE(604)
						_g6 = matrix;
					}
					else{
						HX_STACK_LINE(604)
						_g6 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
					}
					HX_STACK_LINE(604)
					source->__FieldRef(HX_CSTRING("__worldTransform")) = _g6;
					HX_STACK_LINE(605)
					::openfl::geom::ColorTransform _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(605)
					if (((colorTransform != null()))){
						HX_STACK_LINE(605)
						_g7 = colorTransform;
					}
					else{
						HX_STACK_LINE(605)
						_g7 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
					}
					HX_STACK_LINE(605)
					source->__FieldRef(HX_CSTRING("__worldColorTransform")) = _g7;
					HX_STACK_LINE(606)
					source->__FieldRef(HX_CSTRING("blendMode")) = blendMode;
					HX_STACK_LINE(607)
					source->__updateChildren(false);
					HX_STACK_LINE(609)
					source->__renderGL(renderSession);
					HX_STACK_LINE(611)
					source->__FieldRef(HX_CSTRING("__worldColorTransform")) = ctCache;
					HX_STACK_LINE(612)
					source->__FieldRef(HX_CSTRING("__worldTransform")) = matrixCache;
					HX_STACK_LINE(613)
					source->__FieldRef(HX_CSTRING("blendMode")) = blendModeCache;
					HX_STACK_LINE(614)
					source->__updateChildren(true);
					HX_STACK_LINE(616)
					this->__spritebatch->finish();
					HX_STACK_LINE(618)
					{
						HX_STACK_LINE(618)
						::lime::utils::ArrayBufferView pixels = this->__image->buffer->data;		HX_STACK_VAR(pixels,"pixels");
						HX_STACK_LINE(618)
						{
							HX_STACK_LINE(618)
							::lime::utils::ByteArray _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(618)
							if (((pixels == null()))){
								HX_STACK_LINE(618)
								_g8 = null();
							}
							else{
								HX_STACK_LINE(618)
								_g8 = pixels->getByteBuffer();
							}
							HX_STACK_LINE(618)
							Dynamic _g9;		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(618)
							if (((pixels == null()))){
								HX_STACK_LINE(618)
								_g9 = null();
							}
							else{
								HX_STACK_LINE(618)
								_g9 = pixels->getStart();
							}
							HX_STACK_LINE(618)
							::lime::graphics::opengl::GL_obj::lime_gl_read_pixels((int)0,(int)0,this->width,this->height,gl->RGBA,gl->UNSIGNED_BYTE,_g8,_g9);
						}
					}
					HX_STACK_LINE(620)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(int)0);
					HX_STACK_LINE(622)
					::lime::graphics::opengl::GL_obj::lime_gl_viewport((int)0,(int)0,renderSession->renderer->width,renderSession->renderer->height);
					HX_STACK_LINE(624)
					renderSession->spriteBatch = mainSpritebatch;
					HX_STACK_LINE(625)
					renderSession->projection = mainProjection;
					HX_STACK_LINE(627)
					::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,renderSession->renderer->transparent);
					HX_STACK_LINE(629)
					this->__texture = this->__framebuffer->texture;
					HX_STACK_LINE(630)
					this->__image->dirty = false;
					HX_STACK_LINE(631)
					this->__createUVs(true);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",644,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(648)
	if (((bool(!(this->__isValid)) || bool((rect == null()))))){
		HX_STACK_LINE(648)
		return byteArray = null();
	}
	HX_STACK_LINE(650)
	if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::PNGEncoderOptions >()))){
		HX_STACK_LINE(652)
		::lime::utils::ByteArray _g = this->__image->encode(HX_CSTRING("png"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(652)
		return byteArray = _g;
	}
	else{
		HX_STACK_LINE(654)
		if ((::Std_obj::is(compressor,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >()))){
			HX_STACK_LINE(656)
			::lime::utils::ByteArray _g1 = this->__image->encode(HX_CSTRING("jpg"),(hx::TCast< openfl::display::JPEGEncoderOptions >::cast(compressor))->quality);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(656)
			return byteArray = _g1;
		}
	}
	HX_STACK_LINE(660)
	return byteArray = null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",674,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(676)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(676)
			return null();
		}
		HX_STACK_LINE(677)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(677)
		this->__image->fillRect(_g,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",693,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(695)
		if ((!(this->__isValid))){
			HX_STACK_LINE(695)
			return null();
		}
		HX_STACK_LINE(696)
		this->__image->floodFill(x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",779,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(779)
	return sourceRect->clone();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",784,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(786)
	if (((this->__buffer == null()))){
		HX_STACK_LINE(788)
		Array< int > data = Array_obj< int >::__new().Add(this->width).Add(this->height).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(this->height).Add((int)0).Add((int)0).Add((int)1).Add(this->width).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(797)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(797)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(797)
		::lime::graphics::opengl::GLBuffer _g2 = ::lime::graphics::opengl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(797)
		this->__buffer = _g2;
		HX_STACK_LINE(798)
		{
			HX_STACK_LINE(798)
			::lime::graphics::opengl::GLBuffer buffer = this->__buffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(798)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(799)
		{
			HX_STACK_LINE(799)
			::lime::utils::ArrayBufferView data1 = ::lime::utils::Float32Array_obj::__new(data,null(),null());		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(799)
			{
				HX_STACK_LINE(799)
				::lime::utils::ByteArray _g3 = data1->getByteBuffer();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(799)
				int _g4 = data1->getStart();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(799)
				int _g5 = data1->getLength();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(799)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(gl->ARRAY_BUFFER,_g3,_g4,_g5,gl->STATIC_DRAW);
			}
		}
		HX_STACK_LINE(800)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(804)
	return this->__buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",843,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(845)
		if ((!(this->__isValid))){
			HX_STACK_LINE(845)
			return ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
		}
		HX_STACK_LINE(846)
		return this->__image->get_rect()->__toFlashRectangle();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",874,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(876)
	if ((!(this->__isValid))){
		HX_STACK_LINE(876)
		return (int)0;
	}
	HX_STACK_LINE(877)
	return this->__image->getPixel(x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",904,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(906)
	if ((!(this->__isValid))){
		HX_STACK_LINE(906)
		return (int)0;
	}
	HX_STACK_LINE(907)
	return this->__image->getPixel32(x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",921,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(923)
	if ((!(this->__isValid))){
		HX_STACK_LINE(923)
		return null();
	}
	HX_STACK_LINE(924)
	if (((rect == null()))){
		HX_STACK_LINE(924)
		rect = this->rect;
	}
	HX_STACK_LINE(925)
	::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(925)
	return this->__image->getPixels(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",930,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(932)
	if ((!(this->__isValid))){
		HX_STACK_LINE(932)
		return null();
	}
	HX_STACK_LINE(934)
	if (((this->__texture == null()))){
		HX_STACK_LINE(936)
		int _g = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(936)
		Dynamic _g1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(936)
		::lime::graphics::opengl::GLTexture _g2 = ::lime::graphics::opengl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(936)
		this->__texture = _g2;
		HX_STACK_LINE(937)
		{
			HX_STACK_LINE(937)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(937)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(938)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(939)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(940)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->LINEAR);
		HX_STACK_LINE(941)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->LINEAR);
		HX_STACK_LINE(942)
		this->__image->dirty = true;
	}
	HX_STACK_LINE(946)
	if ((this->__image->dirty)){
		HX_STACK_LINE(948)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(948)
		if (((this->__image->buffer->bitsPerPixel == (int)1))){
			HX_STACK_LINE(948)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(948)
			format = gl->RGBA;
		}
		HX_STACK_LINE(949)
		{
			HX_STACK_LINE(949)
			::lime::graphics::opengl::GLTexture texture = this->__texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(949)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(950)
		::lime::graphics::Image textureImage = this->__image->clone();		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(951)
		textureImage->set_premultiplied(true);
		HX_STACK_LINE(952)
		{
			HX_STACK_LINE(952)
			::lime::utils::ArrayBufferView pixels = textureImage->get_data();		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(952)
			{
				HX_STACK_LINE(952)
				::lime::utils::ByteArray _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(952)
				if (((pixels == null()))){
					HX_STACK_LINE(952)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(952)
					_g3 = pixels->getByteBuffer();
				}
				HX_STACK_LINE(952)
				Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(952)
				if (((pixels == null()))){
					HX_STACK_LINE(952)
					_g4 = null();
				}
				else{
					HX_STACK_LINE(952)
					_g4 = pixels->getStart();
				}
				HX_STACK_LINE(952)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(gl->TEXTURE_2D,(int)0,format,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,_g3,_g4);
			}
		}
		HX_STACK_LINE(953)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(954)
		this->__image->dirty = false;
	}
	HX_STACK_LINE(958)
	return this->__texture;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",972,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(974)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(975)
	int length = ::Std_obj::_int((Float(pixels->length) / Float((int)4)));		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(976)
	Array< int > result;		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static Array< int > Block( int &length){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",976,0xdd12d5b9)
			{
				HX_STACK_LINE(976)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(976)
				Array< int > _g = Array_obj< int >::__new()->__SetSizeExact(length);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(976)
				this1 = _g;
				HX_STACK_LINE(976)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(976)
	result = _Function_1_1::Block(length);
	HX_STACK_LINE(978)
	{
		HX_STACK_LINE(978)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(978)
		while((true)){
			HX_STACK_LINE(978)
			if ((!(((_g < length))))){
				HX_STACK_LINE(978)
				break;
			}
			HX_STACK_LINE(978)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(980)
			{
				HX_STACK_LINE(980)
				int value = pixels->readUnsignedInt();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(980)
				result[i] = value;
			}
		}
	}
	HX_STACK_LINE(984)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",989,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(991)
	::openfl::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(991)
	if (((hRect != null()))){
		HX_STACK_LINE(991)
		rect = hRect;
	}
	else{
		HX_STACK_LINE(991)
		rect = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	}
	HX_STACK_LINE(992)
	::lime::utils::ByteArray pixels = this->getPixels(rect);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(993)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(993)
	{
		HX_STACK_LINE(993)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(993)
		{
			HX_STACK_LINE(993)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(993)
			while((true)){
				HX_STACK_LINE(993)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(993)
					break;
				}
				HX_STACK_LINE(993)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(993)
				Array< int > _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(993)
				{
					HX_STACK_LINE(993)
					Array< int > _g21 = Array_obj< int >::__new();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(993)
					{
						HX_STACK_LINE(993)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(993)
						while((true)){
							HX_STACK_LINE(993)
							if ((!(((_g3 < (int)256))))){
								HX_STACK_LINE(993)
								break;
							}
							HX_STACK_LINE(993)
							int j = (_g3)++;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(993)
							_g21->push((int)0);
						}
					}
					HX_STACK_LINE(993)
					_g2 = _g21;
				}
				HX_STACK_LINE(993)
				_g->push(_g2);
			}
		}
		HX_STACK_LINE(993)
		result = _g;
	}
	HX_STACK_LINE(995)
	{
		HX_STACK_LINE(995)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(995)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(995)
		while((true)){
			HX_STACK_LINE(995)
			if ((!(((_g2 < _g1))))){
				HX_STACK_LINE(995)
				break;
			}
			HX_STACK_LINE(995)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(997)
			int _g11;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(997)
			if (((pixels->position < pixels->length))){
				HX_STACK_LINE(997)
				int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(997)
				_g11 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(997)
				_g11 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(997)
			++(result->__get(hx::Mod(i,(int)4)).StaticCast< Array< int > >()[_g11]);
		}
	}
	HX_STACK_LINE(1001)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1006,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1008)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1008)
			return false;
		}
		HX_STACK_LINE(1010)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.hitTest"));
		HX_STACK_LINE(1012)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1025,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1032,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1034)
		if (((bool((bool((bool((bool(!(this->__isValid)) || bool((sourceBitmapData == null())))) || bool(!(sourceBitmapData->__isValid)))) || bool((sourceRect == null())))) || bool((destPoint == null()))))){
			HX_STACK_LINE(1034)
			return null();
		}
		HX_STACK_LINE(1035)
		::lime::math::Rectangle _g = sourceRect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1035)
		::lime::math::Vector2 _g1 = destPoint->__toLimeVector2();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1035)
		this->__image->merge(sourceBitmapData->__image,_g,_g1,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1068,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1070)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1070)
			return null();
		}
		HX_STACK_LINE(1072)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.noise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1077,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1079)
		int sw = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1080)
		int sh = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1082)
		::lime::utils::ByteArray pixels = this->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1083)
		pixels->position = (int)0;
		HX_STACK_LINE(1085)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1085)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1085)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1085)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1085)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1085)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1085)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1085)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1085)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1085)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1087)
		{
			HX_STACK_LINE(1087)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1087)
			int _g = (sh * sw);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1087)
			while((true)){
				HX_STACK_LINE(1087)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(1087)
					break;
				}
				HX_STACK_LINE(1087)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1089)
				int _g2 = pixels->readUnsignedInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1089)
				pixelValue = _g2;
				HX_STACK_LINE(1091)
				if (((alphaArray == null()))){
					HX_STACK_LINE(1091)
					c1 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1091)
					c1 = alphaArray->__get((int((int(pixelValue) >> int((int)24))) & int((int)255)));
				}
				HX_STACK_LINE(1092)
				if (((redArray == null()))){
					HX_STACK_LINE(1092)
					c2 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1092)
					c2 = redArray->__get((int((int(pixelValue) >> int((int)16))) & int((int)255)));
				}
				HX_STACK_LINE(1093)
				if (((greenArray == null()))){
					HX_STACK_LINE(1093)
					c3 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1093)
					c3 = greenArray->__get((int((int(pixelValue) >> int((int)8))) & int((int)255)));
				}
				HX_STACK_LINE(1094)
				if (((blueArray == null()))){
					HX_STACK_LINE(1094)
					c4 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1094)
					c4 = blueArray->__get((int(pixelValue) & int((int)255)));
				}
				HX_STACK_LINE(1096)
				a = (((((int((int(c1) >> int((int)24))) & int((int)255))) + ((int((int(c2) >> int((int)24))) & int((int)255)))) + ((int((int(c3) >> int((int)24))) & int((int)255)))) + ((int((int(c4) >> int((int)24))) & int((int)255))));
				HX_STACK_LINE(1097)
				if (((a > (int)255))){
					HX_STACK_LINE(1097)
					(a == (int)255);
				}
				HX_STACK_LINE(1099)
				r = (((((int((int(c1) >> int((int)16))) & int((int)255))) + ((int((int(c2) >> int((int)16))) & int((int)255)))) + ((int((int(c3) >> int((int)16))) & int((int)255)))) + ((int((int(c4) >> int((int)16))) & int((int)255))));
				HX_STACK_LINE(1100)
				if (((r > (int)255))){
					HX_STACK_LINE(1100)
					(r == (int)255);
				}
				HX_STACK_LINE(1102)
				g = (((((int((int(c1) >> int((int)8))) & int((int)255))) + ((int((int(c2) >> int((int)8))) & int((int)255)))) + ((int((int(c3) >> int((int)8))) & int((int)255)))) + ((int((int(c4) >> int((int)8))) & int((int)255))));
				HX_STACK_LINE(1103)
				if (((g > (int)255))){
					HX_STACK_LINE(1103)
					(g == (int)255);
				}
				HX_STACK_LINE(1105)
				b = (((((int(c1) & int((int)255))) + ((int(c2) & int((int)255)))) + ((int(c3) & int((int)255)))) + ((int(c4) & int((int)255))));
				HX_STACK_LINE(1106)
				if (((b > (int)255))){
					HX_STACK_LINE(1106)
					(b == (int)255);
				}
				HX_STACK_LINE(1108)
				color = (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
				HX_STACK_LINE(1110)
				pixels->position = (i * (int)4);
				HX_STACK_LINE(1111)
				pixels->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1115)
		pixels->position = (int)0;
		HX_STACK_LINE(1116)
		::openfl::geom::Rectangle destRect = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1117)
		this->setPixels(destRect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1190,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1190)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.perlinNoise"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1204,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1204)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("BitmapData.scroll"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1226,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1228)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1228)
			return null();
		}
		HX_STACK_LINE(1229)
		this->__image->setPixel(x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1265,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1267)
		if ((!(this->__isValid))){
			HX_STACK_LINE(1267)
			return null();
		}
		HX_STACK_LINE(1268)
		this->__image->setPixel32(x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1292,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1294)
		if (((bool(!(this->__isValid)) || bool((rect == null()))))){
			HX_STACK_LINE(1294)
			return null();
		}
		HX_STACK_LINE(1295)
		::lime::math::Rectangle _g = rect->__toLimeRectangle();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1295)
		this->__image->setPixels(_g,byteArray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1309,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1311)
		::lime::utils::ByteArray byteArray = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1316)
		{
			HX_STACK_LINE(1316)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1316)
			while((true)){
				HX_STACK_LINE(1316)
				if ((!(((_g < inputVector->length))))){
					HX_STACK_LINE(1316)
					break;
				}
				HX_STACK_LINE(1316)
				Dynamic color = inputVector->__get(_g);		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1316)
				++(_g);
				HX_STACK_LINE(1318)
				byteArray->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(1322)
		byteArray->position = (int)0;
		HX_STACK_LINE(1323)
		this->setPixels(rect,byteArray);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1380,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1380)
		if (((  (((  (((  (((sourceBitmapData == hx::ObjectPtr<OBJ_>(this)))) ? bool(sourceRect->equals(this->rect)) : bool(false) ))) ? bool((destPoint->x == (int)0)) : bool(false) ))) ? bool((destPoint->y == (int)0)) : bool(false) ))){
			HX_STACK_LINE(1382)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1384)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1385)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1387)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1391)
			::lime::utils::ByteArray _g = this->getPixels(this->rect);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1391)
			memory = _g;
			HX_STACK_LINE(1392)
			memory->position = (int)0;
			HX_STACK_LINE(1393)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1395)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1397)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1397)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1397)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1397)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1397)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1397)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1399)
			{
				HX_STACK_LINE(1399)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1399)
				int _g2 = this->height;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1399)
				while((true)){
					HX_STACK_LINE(1399)
					if ((!(((_g1 < _g2))))){
						HX_STACK_LINE(1399)
						break;
					}
					HX_STACK_LINE(1399)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1401)
					width_yy = (this->width * yy);
					HX_STACK_LINE(1403)
					{
						HX_STACK_LINE(1403)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1403)
						int _g21 = this->width;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(1403)
						while((true)){
							HX_STACK_LINE(1403)
							if ((!(((_g3 < _g21))))){
								HX_STACK_LINE(1403)
								break;
							}
							HX_STACK_LINE(1403)
							int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1405)
							position = (((width_yy + xx)) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1406,0xdd12d5b9)
								{
									HX_STACK_LINE(1406)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1406)
							int _g11 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1406)
							pixelValue = _g11;
							HX_STACK_LINE(1407)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1409)
							int _g22 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(1409)
							i = _g22;
							HX_STACK_LINE(1410)
							test = false;
							HX_STACK_LINE(1412)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1412)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1413)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1413)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1414)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1414)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1415)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1415)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1416)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1416)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1417)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1417)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1419)
							if ((test)){
								HX_STACK_LINE(1421)
								{
									HX_STACK_LINE(1421)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1421,0xdd12d5b9)
										{
											HX_STACK_LINE(1421)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1421)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1422)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1430)
			memory->position = (int)0;
			HX_STACK_LINE(1431)
			this->setPixels(this->rect,memory);
			HX_STACK_LINE(1432)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1433)
			return hits;
		}
		else{
			HX_STACK_LINE(1437)
			int sx = ::Std_obj::_int(sourceRect->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1438)
			int sy = ::Std_obj::_int(sourceRect->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1439)
			int sw = ::Std_obj::_int(sourceBitmapData->width);		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1440)
			int sh = ::Std_obj::_int(sourceBitmapData->height);		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1442)
			int dx = ::Std_obj::_int(destPoint->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1443)
			int dy = ::Std_obj::_int(destPoint->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1445)
			int bw = ((this->width - sw) - dx);		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1446)
			int bh = ((this->height - sh) - dy);		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1448)
			int dw;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1448)
			if (((bw < (int)0))){
				HX_STACK_LINE(1448)
				dw = (sw + (((this->width - sw) - dx)));
			}
			else{
				HX_STACK_LINE(1448)
				dw = sw;
			}
			HX_STACK_LINE(1449)
			int dh;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1449)
			if (((bw < (int)0))){
				HX_STACK_LINE(1449)
				dh = (sh + (((this->height - sh) - dy)));
			}
			else{
				HX_STACK_LINE(1449)
				dh = sh;
			}
			HX_STACK_LINE(1451)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1453)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1454)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(1456)
			int canvasMemory = ((sw * sh) * (int)4);		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1457)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1459)
			if ((copySource)){
				HX_STACK_LINE(1461)
				sourceMemory = ((sw * sh) * (int)4);
			}
			HX_STACK_LINE(1465)
			int totalMemory = (canvasMemory + sourceMemory);		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1466)
			::lime::utils::ByteArray memory = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1470)
			memory->position = (int)0;
			HX_STACK_LINE(1471)
			::openfl::display::BitmapData bitmapData = sourceBitmapData->clone();		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(1472)
			::lime::utils::ByteArray pixels = bitmapData->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1473)
			memory->writeBytes(pixels,null(),null());
			HX_STACK_LINE(1474)
			memory->position = canvasMemory;
			HX_STACK_LINE(1476)
			if ((copySource)){
				HX_STACK_LINE(1478)
				memory->writeBytes(pixels,null(),null());
			}
			HX_STACK_LINE(1482)
			memory->position = (int)0;
			HX_STACK_LINE(1483)
			::openfl::Memory_obj::select(memory);
			HX_STACK_LINE(1485)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1487)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1487)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1487)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1487)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1487)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1489)
			{
				HX_STACK_LINE(1489)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1489)
				while((true)){
					HX_STACK_LINE(1489)
					if ((!(((_g < dh))))){
						HX_STACK_LINE(1489)
						break;
					}
					HX_STACK_LINE(1489)
					int yy = (_g)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1491)
					{
						HX_STACK_LINE(1491)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1491)
						while((true)){
							HX_STACK_LINE(1491)
							if ((!(((_g1 < dw))))){
								HX_STACK_LINE(1491)
								break;
							}
							HX_STACK_LINE(1491)
							int xx = (_g1)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1493)
							position = ((((xx + sx) + (((yy + sy)) * sw))) * (int)4);

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1494,0xdd12d5b9)
								{
									HX_STACK_LINE(1494)
									return ::openfl::Memory_obj::gcRef->readInt();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1494)
							int _g3 = ::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_6_1()));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1494)
							pixelValue = _g3;
							HX_STACK_LINE(1495)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(1497)
							int _g4 = ::openfl::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1497)
							i = _g4;
							HX_STACK_LINE(1498)
							test = false;
							HX_STACK_LINE(1500)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(1500)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(1501)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(1501)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(1502)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(1502)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(1503)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(1503)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(1504)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(1504)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(1505)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(1505)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1507)
							if ((test)){
								HX_STACK_LINE(1509)
								{
									HX_STACK_LINE(1509)
									Array< int > v = Array_obj< int >::__new().Add(color);		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1509,0xdd12d5b9)
										{
											HX_STACK_LINE(1509)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1509)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1510)
								(hits)++;
							}
							else{
								HX_STACK_LINE(1512)
								if ((copySource)){

									HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_8_1)
									int run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1514,0xdd12d5b9)
										{
											HX_STACK_LINE(1514)
											return ::openfl::Memory_obj::gcRef->readInt();
										}
										return null();
									}
									HX_END_LOCAL_FUNC0(return)

									HX_STACK_LINE(1514)
									Array< int > v = Array_obj< int >::__new().Add(::openfl::Memory_obj::_setPositionTemporarily((canvasMemory + position), Dynamic(new _Function_8_1())));		HX_STACK_VAR(v,"v");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< int >,v)
									Void run(){
										HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","openfl/display/BitmapData.hx",1514,0xdd12d5b9)
										{
											HX_STACK_LINE(1514)
											::openfl::Memory_obj::gcRef->writeInt(v->__get((int)0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1514)
									::openfl::Memory_obj::_setPositionTemporarily(position, Dynamic(new _Function_8_2(v)));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1522)
			memory->position = (int)0;
			HX_STACK_LINE(1523)
			bitmapData->setPixels(sourceRect,memory);
			HX_STACK_LINE(1524)
			this->copyPixels(bitmapData,bitmapData->rect,destPoint,null(),null(),null());
			HX_STACK_LINE(1525)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1526)
			return hits;
		}
		HX_STACK_LINE(1380)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1545,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( Dynamic __o_verticalFlip){
Dynamic verticalFlip = __o_verticalFlip.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1552,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(verticalFlip,"verticalFlip")
{
		HX_STACK_LINE(1554)
		if (((this->__uvData == null()))){
			HX_STACK_LINE(1554)
			::openfl::display::TextureUvs _g = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1554)
			this->__uvData = _g;
		}
		HX_STACK_LINE(1556)
		if ((verticalFlip)){
			HX_STACK_LINE(1557)
			this->__uvData->x0 = (int)0;
			HX_STACK_LINE(1558)
			this->__uvData->y0 = (int)1;
			HX_STACK_LINE(1559)
			this->__uvData->x1 = (int)1;
			HX_STACK_LINE(1560)
			this->__uvData->y1 = (int)1;
			HX_STACK_LINE(1561)
			this->__uvData->x2 = (int)1;
			HX_STACK_LINE(1562)
			this->__uvData->y2 = (int)0;
			HX_STACK_LINE(1563)
			this->__uvData->x3 = (int)0;
			HX_STACK_LINE(1564)
			this->__uvData->y3 = (int)0;
		}
		else{
			HX_STACK_LINE(1566)
			this->__uvData->x0 = (int)0;
			HX_STACK_LINE(1567)
			this->__uvData->y0 = (int)0;
			HX_STACK_LINE(1568)
			this->__uvData->x1 = (int)1;
			HX_STACK_LINE(1569)
			this->__uvData->y1 = (int)0;
			HX_STACK_LINE(1570)
			this->__uvData->x2 = (int)1;
			HX_STACK_LINE(1571)
			this->__uvData->y2 = (int)1;
			HX_STACK_LINE(1572)
			this->__uvData->x3 = (int)0;
			HX_STACK_LINE(1573)
			this->__uvData->y3 = (int)1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1586,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1586)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1586)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1588,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1590)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1592)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1594)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1588)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_1_1(_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1603,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1603)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1603)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(1603)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1605,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1607)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1609)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(1616)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1618)
					{
						HX_STACK_LINE(1618)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1618)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1618)
						while(((_g2 < _g1))){
							HX_STACK_LINE(1618)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1620)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(1620)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(1620)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(1620)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(1624)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(1628)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1630)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1605)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_1_1(rawAlpha1,_g,onload1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1639,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1639)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(1639)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1641,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1643)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(1645)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(1647)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1641)
		::lime::graphics::Image_obj::fromFile(path, Dynamic(new _Function_1_1(_g,onload1)),onerror);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1656,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1658)
		this->__image = image;
		HX_STACK_LINE(1660)
		this->width = image->width;
		HX_STACK_LINE(1661)
		this->height = image->height;
		HX_STACK_LINE(1662)
		::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1662)
		this->rect = _g;
		HX_STACK_LINE(1663)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1668,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1698,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1700)
		if (((this->__worldTransform == null()))){
			HX_STACK_LINE(1700)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1700)
			this->__worldTransform = _g;
		}
		HX_STACK_LINE(1701)
		if (((this->__worldColorTransform == null()))){
			HX_STACK_LINE(1701)
			::openfl::geom::ColorTransform _g1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1701)
			this->__worldColorTransform = _g1;
		}
		HX_STACK_LINE(1702)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),true,this->__worldTransform,this->__worldColorTransform,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__renderMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderMask",0x1be2072d,"openfl.display.BitmapData.__renderMask","openfl/display/BitmapData.hx",1707,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderMask,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",1714,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1721,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1784,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",701,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(703)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(704)
	{
		HX_STACK_LINE(704)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(704)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",704,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(704)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(704)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(704)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(704)
		::lime::graphics::Image_obj::fromBase64(base64,type, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(705)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",710,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(712)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(713)
	{
		HX_STACK_LINE(713)
		Array< ::Dynamic > rawAlpha1 = Array_obj< ::Dynamic >::__new().Add(rawAlpha);		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(713)
		Dynamic onload1 = Dynamic( Array_obj<Dynamic>::__new().Add(onload));		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(713)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(bitmapData);		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,rawAlpha1,Array< ::Dynamic >,_g,Dynamic,onload1)
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",713,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(713)
				_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__fromImage(image);
				HX_STACK_LINE(713)
				if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >() != null()))){
					HX_STACK_LINE(713)
					::lime::utils::UInt8Array data = _g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->buffer->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(713)
					{
						HX_STACK_LINE(713)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(713)
						int _g1 = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(713)
						while(((_g2 < _g1))){
							HX_STACK_LINE(713)
							int i = (_g2)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(713)
							if (((rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position < rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->length))){
								HX_STACK_LINE(713)
								int pos = (rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(713)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->b->__get(pos);
							}
							else{
								HX_STACK_LINE(713)
								hx::__ArrayImplRef(data,((i * (int)4) + (int)3)) = rawAlpha1->__get((int)0).StaticCast< ::lime::utils::ByteArray >()->ThrowEOFi();
							}
						}
					}
					HX_STACK_LINE(713)
					_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()->__image->dirty = true;
				}
				HX_STACK_LINE(713)
				if (((onload1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(713)
					onload1->__GetItem((int)0)(_g->__get((int)0).StaticCast< ::openfl::display::BitmapData >()).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(713)
		::lime::graphics::Image_obj::fromBytes(bytes, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(714)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",731,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(733)
	::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(734)
	bitmapData->__fromFile(path,onload,onerror);
	HX_STACK_LINE(735)
	return bitmapData;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",740,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(742)
		::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(743)
		bitmapData->__fromImage(image);
		HX_STACK_LINE(744)
		bitmapData->__image->set_transparent(transparent);
		HX_STACK_LINE(745)
		return bitmapData;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl.display.BitmapData","__flipPixel",0xc245472e,"openfl.display.BitmapData.__flipPixel","openfl/display/BitmapData.hx",1581,0xdd12d5b9)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(1581)
	return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1730,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1732)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1733)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1735)
	tmp1 = (int((int(n1) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1736)
	tmp2 = (int((int(n2) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(1738)
	if (((tmp1 != tmp2))){
		HX_STACK_LINE(1740)
		if (((tmp1 > tmp2))){
			HX_STACK_LINE(1740)
			return (int)1;
		}
		else{
			HX_STACK_LINE(1740)
			return (int)-1;
		}
	}
	else{
		HX_STACK_LINE(1744)
		tmp1 = (int((int(n1) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1745)
		tmp2 = (int((int(n2) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(1747)
		if (((tmp1 != tmp2))){
			HX_STACK_LINE(1749)
			if (((tmp1 > tmp2))){
				HX_STACK_LINE(1749)
				return (int)1;
			}
			else{
				HX_STACK_LINE(1749)
				return (int)-1;
			}
		}
		else{
			HX_STACK_LINE(1753)
			tmp1 = (int((int(n1) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1754)
			tmp2 = (int((int(n2) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(1756)
			if (((tmp1 != tmp2))){
				HX_STACK_LINE(1758)
				if (((tmp1 > tmp2))){
					HX_STACK_LINE(1758)
					return (int)1;
				}
				else{
					HX_STACK_LINE(1758)
					return (int)-1;
				}
			}
			else{
				HX_STACK_LINE(1762)
				tmp1 = (int(n1) & int((int)255));
				HX_STACK_LINE(1763)
				tmp2 = (int(n2) & int((int)255));
				HX_STACK_LINE(1765)
				if (((tmp1 != tmp2))){
					HX_STACK_LINE(1767)
					if (((tmp1 > tmp2))){
						HX_STACK_LINE(1767)
						return (int)1;
					}
					else{
						HX_STACK_LINE(1767)
						return (int)-1;
					}
				}
				else{
					HX_STACK_LINE(1771)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1738)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__spritebatch,"__spritebatch");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__spritebatch,"__spritebatch");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fromImage") ) { return fromImage_dyn(); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { return __ucompare_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { return __flipPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderMask") ) { return __renderMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__spritebatch") ) { return __spritebatch; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__spritebatch") ) { __spritebatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("__worldTransform"));
	outFields->push(HX_CSTRING("__worldColorTransform"));
	outFields->push(HX_CSTRING("__buffer"));
	outFields->push(HX_CSTRING("__image"));
	outFields->push(HX_CSTRING("__isValid"));
	outFields->push(HX_CSTRING("__texture"));
	outFields->push(HX_CSTRING("__textureImage"));
	outFields->push(HX_CSTRING("__framebuffer"));
	outFields->push(HX_CSTRING("__uvData"));
	outFields->push(HX_CSTRING("__spritebatch"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBase64"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromImage"),
	HX_CSTRING("__flipPixel"),
	HX_CSTRING("__ucompare"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_CSTRING("rect")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_CSTRING("width")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_CSTRING("__worldTransform")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_CSTRING("__worldColorTransform")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_CSTRING("__buffer")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__image),HX_CSTRING("__image")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_CSTRING("__isValid")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_CSTRING("__texture")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_CSTRING("__textureImage")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_CSTRING("__framebuffer")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_CSTRING("__uvData")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(BitmapData_obj,__spritebatch),HX_CSTRING("__spritebatch")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("rect"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("__worldTransform"),
	HX_CSTRING("__worldColorTransform"),
	HX_CSTRING("__buffer"),
	HX_CSTRING("__image"),
	HX_CSTRING("__isValid"),
	HX_CSTRING("__texture"),
	HX_CSTRING("__textureImage"),
	HX_CSTRING("__framebuffer"),
	HX_CSTRING("__uvData"),
	HX_CSTRING("__spritebatch"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("dispose"),
	HX_CSTRING("draw"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("getBuffer"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("getVector"),
	HX_CSTRING("histogram"),
	HX_CSTRING("hitTest"),
	HX_CSTRING("lock"),
	HX_CSTRING("merge"),
	HX_CSTRING("noise"),
	HX_CSTRING("paletteMap"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("scroll"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setVector"),
	HX_CSTRING("threshold"),
	HX_CSTRING("unlock"),
	HX_CSTRING("__createUVs"),
	HX_CSTRING("__fromBase64"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("__fromImage"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__renderMask"),
	HX_CSTRING("__updateMask"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__updateChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
};

#endif

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
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

void BitmapData_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
