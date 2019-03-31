#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
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
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace lime{
namespace graphics{

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
HX_STACK_FRAME("lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",75,0xc7b862ad)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(type,"type")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
{
	HX_STACK_LINE(77)
	this->offsetX = offsetX;
	HX_STACK_LINE(78)
	this->offsetY = offsetY;
	HX_STACK_LINE(79)
	this->width = width;
	HX_STACK_LINE(80)
	this->height = height;
	HX_STACK_LINE(82)
	if (((type == null()))){
		HX_STACK_LINE(84)
		if (((bool((::lime::app::Application_obj::current != null())) && bool((::lime::app::Application_obj::current->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >() != null()))))){
			HX_STACK_LINE(86)
			::lime::graphics::ImageType _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::lime::graphics::RenderContext _g1 = ::lime::app::Application_obj::current->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >()->context;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(86)
				switch( (int)(_g1->__Index())){
					case (int)2: case (int)1: {
						HX_STACK_LINE(88)
						_g = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(89)
						_g = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						HX_STACK_LINE(90)
						_g = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			HX_STACK_LINE(86)
			this->type = _g;
		}
		else{
			HX_STACK_LINE(96)
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		HX_STACK_LINE(102)
		this->type = type;
	}
	HX_STACK_LINE(106)
	if (((buffer == null()))){
		HX_STACK_LINE(108)
		if (((bool((width > (int)0)) && bool((height > (int)0))))){
			HX_STACK_LINE(110)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(114)
					::lime::graphics::ImageBuffer _g1 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(114)
					this->buffer = _g1;
					HX_STACK_LINE(115)
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),width,height);
					HX_STACK_LINE(117)
					if (((color != null()))){
						HX_STACK_LINE(119)
						::lime::math::Rectangle _g2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(119)
						this->fillRect(_g2,color);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(125)
					::lime::utils::UInt8Array _g3 = ::lime::utils::UInt8Array_obj::__new(((width * height) * (int)4),null(),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(125)
					::lime::graphics::ImageBuffer _g4 = ::lime::graphics::ImageBuffer_obj::__new(_g3,width,height,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(125)
					this->buffer = _g4;
					HX_STACK_LINE(127)
					if (((color != null()))){
						HX_STACK_LINE(129)
						::lime::math::Rectangle _g5 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(129)
						this->fillRect(_g5,color);
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		HX_STACK_LINE(148)
		this->__fromImageBuffer(buffer);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::lime::graphics::Image Image_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",155,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	::lime::graphics::ImageBuffer _g = this->buffer->clone();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(157)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(_g,this->offsetX,this->offsetY,this->width,this->height,null(),this->type);		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(158)
	return image;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",163,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(165)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		rect = _g;
		HX_STACK_LINE(166)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(166)
			return null();
		}
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(168)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(172)
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(180)
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),rect,colorMatrix);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(184)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(185)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(185)
					Dynamic _g2 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(colorMatrix);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(185)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("colorTransform"),true)(_g11,_g2);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",194,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(196)
		::lime::math::Rectangle _g = this->__clipRect(sourceRect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(196)
		sourceRect = _g;
		HX_STACK_LINE(197)
		if (((bool((this->buffer == null())) || bool((sourceRect == null()))))){
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(199)
		if (((  (((destChannel == ::lime::graphics::ImageChannel_obj::ALPHA))) ? bool(!(this->get_transparent())) : bool(false) ))){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(200)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(201)
		if ((((sourceRect->x + sourceRect->width) > sourceImage->width))){
			HX_STACK_LINE(201)
			sourceRect->width = (sourceImage->width - sourceRect->x);
		}
		HX_STACK_LINE(202)
		if ((((sourceRect->y + sourceRect->height) > sourceImage->height))){
			HX_STACK_LINE(202)
			sourceRect->height = (sourceImage->height - sourceRect->y);
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(208)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(216)
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(220)
					int srcChannel;		HX_STACK_VAR(srcChannel,"srcChannel");
					HX_STACK_LINE(220)
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(221)
							srcChannel = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(222)
							srcChannel = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(223)
							srcChannel = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(224)
							srcChannel = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(227)
					int dstChannel;		HX_STACK_VAR(dstChannel,"dstChannel");
					HX_STACK_LINE(227)
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(228)
							dstChannel = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(229)
							dstChannel = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(230)
							dstChannel = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(231)
							dstChannel = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(234)
					sourceRect->offset(sourceImage->offsetX,sourceImage->offsetY);
					HX_STACK_LINE(235)
					destPoint->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(237)
					Dynamic _g11 = sourceImage->buffer->get_src();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(237)
					Dynamic _g2 = sourceRect->__toFlashRectangle();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(237)
					Dynamic _g3 = destPoint->__toFlashPoint();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(237)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("copyChannel"),true)(_g11,_g2,_g3,srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",246,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(248)
		if (((bool((this->buffer == null())) || bool((sourceImage == null()))))){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(250)
		if ((((sourceRect->x + sourceRect->width) > sourceImage->width))){
			HX_STACK_LINE(250)
			sourceRect->width = (sourceImage->width - sourceRect->x);
		}
		HX_STACK_LINE(251)
		if ((((sourceRect->y + sourceRect->height) > sourceImage->height))){
			HX_STACK_LINE(251)
			sourceRect->height = (sourceImage->height - sourceRect->y);
		}
		HX_STACK_LINE(252)
		if (((bool((sourceRect->width <= (int)0)) || bool((sourceRect->height <= (int)0))))){
			HX_STACK_LINE(252)
			return null();
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(258)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(259)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(268)
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,alphaImage,alphaPoint,mergeAlpha);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(272)
					sourceRect->offset(sourceImage->offsetX,sourceImage->offsetY);
					HX_STACK_LINE(273)
					destPoint->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(275)
					if (((bool((alphaImage != null())) && bool((alphaPoint != null()))))){
						HX_STACK_LINE(277)
						alphaPoint->offset(alphaImage->offsetX,alphaImage->offsetY);
					}
					HX_STACK_LINE(281)
					Dynamic _g1 = sourceRect->__toFlashRectangle();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(281)
					Dynamic _g11 = destPoint->__toFlashPoint();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(281)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(281)
					if (((alphaImage != null()))){
						HX_STACK_LINE(281)
						_g2 = alphaImage->buffer->get_src();
					}
					else{
						HX_STACK_LINE(281)
						_g2 = null();
					}
					HX_STACK_LINE(281)
					Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(281)
					if (((alphaPoint != null()))){
						HX_STACK_LINE(281)
						_g3 = alphaPoint->__toFlashPoint();
					}
					else{
						HX_STACK_LINE(281)
						_g3 = null();
					}
					HX_STACK_LINE(281)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("copyPixels"),true)(sourceImage->buffer->__srcBitmapData,_g1,_g11,_g2,_g3,mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::lime::utils::ByteArray Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_CSTRING("png"));
int quality = __o_quality.Default(90);
	HX_STACK_FRAME("lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",290,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(294)
		::String _switch_1 = (format);
		if (  ( _switch_1==HX_CSTRING("png"))){
			HX_STACK_LINE(298)
			return ::lime::graphics::format::PNG_obj::encode(hx::ObjectPtr<OBJ_>(this));
		}
		else if (  ( _switch_1==HX_CSTRING("jpg")) ||  ( _switch_1==HX_CSTRING("jpeg"))){
			HX_STACK_LINE(302)
			return ::lime::graphics::format::JPEG_obj::encode(hx::ObjectPtr<OBJ_>(this),quality);
		}
		else if (  ( _switch_1==HX_CSTRING("bmp"))){
			HX_STACK_LINE(306)
			return ::lime::graphics::format::BMP_obj::encode(hx::ObjectPtr<OBJ_>(this),null());
		}
		else  {
		}
;
;
		HX_STACK_LINE(314)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",319,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(321)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		rect = _g;
		HX_STACK_LINE(322)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(322)
			return null();
		}
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(324)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(328)
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),rect,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(336)
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),rect,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(340)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(341)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(341)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("fillRect"),true)(_g11,color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",350,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(352)
		if (((this->buffer == null()))){
			HX_STACK_LINE(352)
			return null();
		}
		HX_STACK_LINE(354)
		{
			HX_STACK_LINE(354)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(354)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(358)
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(366)
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(370)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("floodFill"),true)((x + this->offsetX),(y + this->offsetY),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,floodFill,(void))

int Image_obj::getPixel( int x,int y){
	HX_STACK_FRAME("lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",433,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(435)
	if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
		HX_STACK_LINE(435)
		return (int)0;
	}
	HX_STACK_LINE(437)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(437)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(441)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(449)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(453)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixel"),true)((x + this->offsetX),(y + this->offsetY));
		}
		;break;
		default: {
			HX_STACK_LINE(457)
			return (int)0;
		}
	}
	HX_STACK_LINE(437)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",464,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(466)
	if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
		HX_STACK_LINE(466)
		return (int)0;
	}
	HX_STACK_LINE(468)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(468)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(472)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(480)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),x,y);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(484)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixel32"),true)((x + this->offsetX),(y + this->offsetY));
		}
		;break;
		default: {
			HX_STACK_LINE(488)
			return (int)0;
		}
	}
	HX_STACK_LINE(468)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixel32,return )

::lime::utils::ByteArray Image_obj::getPixels( ::lime::math::Rectangle rect){
	HX_STACK_FRAME("lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",495,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(497)
	if (((this->buffer == null()))){
		HX_STACK_LINE(497)
		return null();
	}
	HX_STACK_LINE(499)
	::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(499)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(503)
			return ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),rect);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(511)
			return ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),rect);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(515)
			rect->offset(this->offsetX,this->offsetY);
			HX_STACK_LINE(516)
			Dynamic _g1 = rect->__toFlashRectangle();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			return this->buffer->__srcBitmapData->__Field(HX_CSTRING("getPixels"),true)(_g1);
		}
		;break;
		default: {
			HX_STACK_LINE(520)
			return null();
		}
	}
	HX_STACK_LINE(499)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,getPixels,return )

Void Image_obj::merge( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.Image","merge",0x75e8a71b,"lime.graphics.Image.merge","lime/graphics/Image.hx",527,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(529)
		if (((bool((this->buffer == null())) || bool((sourceImage == null()))))){
			HX_STACK_LINE(529)
			return null();
		}
		HX_STACK_LINE(531)
		{
			HX_STACK_LINE(531)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(531)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(535)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(536)
					::lime::graphics::utils::ImageCanvasUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(545)
					::lime::graphics::utils::ImageDataUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(549)
					sourceRect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(550)
					Dynamic _g1 = sourceRect->__toFlashRectangle();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(550)
					Dynamic _g11 = destPoint->__toFlashPoint();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(550)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("merge"),true)(sourceImage->buffer->__srcBitmapData,_g1,_g11,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				default: {
					HX_STACK_LINE(554)
					return null(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",561,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(563)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(567)
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(571)
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(587)
		this->buffer->width = newWidth;
		HX_STACK_LINE(588)
		this->buffer->height = newHeight;
		HX_STACK_LINE(590)
		this->offsetX = (int)0;
		HX_STACK_LINE(591)
		this->offsetY = (int)0;
		HX_STACK_LINE(592)
		this->width = newWidth;
		HX_STACK_LINE(593)
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",598,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(600)
		if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
			HX_STACK_LINE(600)
			return null();
		}
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(602)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(606)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(614)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(618)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixel"),true)((x + this->offsetX),(y + this->offsetX),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixel,(void))

Void Image_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",627,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(629)
		if (((bool((bool((bool((bool((this->buffer == null())) || bool((x < (int)0)))) || bool((y < (int)0)))) || bool((x >= this->width)))) || bool((y >= this->height))))){
			HX_STACK_LINE(629)
			return null();
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(631)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(635)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(643)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),x,y,color);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(647)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixel32"),true)((x + this->offsetX),(y + this->offsetY),color);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",656,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(658)
		::lime::math::Rectangle _g = this->__clipRect(rect);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(658)
		rect = _g;
		HX_STACK_LINE(659)
		if (((bool((this->buffer == null())) || bool((rect == null()))))){
			HX_STACK_LINE(659)
			return null();
		}
		HX_STACK_LINE(661)
		{
			HX_STACK_LINE(661)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(661)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(665)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),rect,byteArray);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(673)
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),rect,byteArray);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(677)
					rect->offset(this->offsetX,this->offsetY);
					HX_STACK_LINE(678)
					Dynamic _g11 = rect->__toFlashRectangle();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(678)
					this->buffer->__srcBitmapData->__Field(HX_CSTRING("setPixels"),true)(_g11,byteArray);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,setPixels,(void))

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	HX_STACK_FRAME("lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",716,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(718)
	if (((r == null()))){
		HX_STACK_LINE(718)
		return null();
	}
	HX_STACK_LINE(720)
	if (((r->x < (int)0))){
		HX_STACK_LINE(722)
		hx::SubEq(r->width,-(r->x));
		HX_STACK_LINE(723)
		r->x = (int)0;
		HX_STACK_LINE(725)
		if ((((r->x + r->width) <= (int)0))){
			HX_STACK_LINE(725)
			return null();
		}
	}
	HX_STACK_LINE(729)
	if (((r->y < (int)0))){
		HX_STACK_LINE(731)
		hx::SubEq(r->height,-(r->y));
		HX_STACK_LINE(732)
		r->y = (int)0;
		HX_STACK_LINE(734)
		if ((((r->y + r->height) <= (int)0))){
			HX_STACK_LINE(734)
			return null();
		}
	}
	HX_STACK_LINE(738)
	if ((((r->x + r->width) >= this->width))){
		HX_STACK_LINE(740)
		hx::SubEq(r->width,((r->x + r->width) - this->width));
		HX_STACK_LINE(742)
		if (((r->width <= (int)0))){
			HX_STACK_LINE(742)
			return null();
		}
	}
	HX_STACK_LINE(746)
	if ((((r->y + r->height) >= this->height))){
		HX_STACK_LINE(748)
		hx::SubEq(r->height,((r->y + r->height) - this->height));
		HX_STACK_LINE(750)
		if (((r->height <= (int)0))){
			HX_STACK_LINE(750)
			return null();
		}
	}
	HX_STACK_LINE(754)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",759,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",789,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(817)
		Dynamic data = ::lime::graphics::Image_obj::lime_image_load(bytes);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(819)
		if (((data != null()))){
			HX_STACK_LINE(821)
			::lime::utils::UInt8Array _g = ::lime::utils::UInt8Array_obj::__new(data->__Field(HX_CSTRING("data"),true),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(821)
			::lime::graphics::ImageBuffer _g1 = ::lime::graphics::ImageBuffer_obj::__new(_g,data->__Field(HX_CSTRING("width"),true),data->__Field(HX_CSTRING("height"),true),data->__Field(HX_CSTRING("bpp"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(821)
			this->__fromImageBuffer(_g1);
			HX_STACK_LINE(823)
			if (((onload != null()))){
				HX_STACK_LINE(825)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",840,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(880)
		::lime::graphics::ImageBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(882)
		if ((!(::lime::system::System_obj::disableCFFI))){
			HX_STACK_LINE(884)
			Dynamic data = ::lime::graphics::Image_obj::lime_image_load(path);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(885)
			if (((data != null()))){
				HX_STACK_LINE(886)
				::lime::utils::ByteArray ba;		HX_STACK_VAR(ba,"ba");
				HX_STACK_LINE(886)
				ba = hx::TCast< lime::utils::ByteArray >::cast(data->__Field(HX_CSTRING("data"),true));
				HX_STACK_LINE(890)
				::lime::utils::UInt8Array u8a = ::lime::utils::UInt8Array_obj::__new(ba,null(),null());		HX_STACK_VAR(u8a,"u8a");
				HX_STACK_LINE(892)
				::lime::graphics::ImageBuffer _g = ::lime::graphics::ImageBuffer_obj::__new(u8a,data->__Field(HX_CSTRING("width"),true),data->__Field(HX_CSTRING("height"),true),data->__Field(HX_CSTRING("bpp"),true));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(892)
				buffer = _g;
			}
		}
		HX_STACK_LINE(935)
		if (((buffer != null()))){
			HX_STACK_LINE(937)
			this->__fromImageBuffer(buffer);
			HX_STACK_LINE(939)
			if (((onload != null()))){
				HX_STACK_LINE(941)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",956,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(958)
		this->buffer = buffer;
		HX_STACK_LINE(960)
		if (((buffer != null()))){
			HX_STACK_LINE(962)
			if (((this->width == (int)-1))){
				HX_STACK_LINE(964)
				this->width = buffer->width;
			}
			HX_STACK_LINE(968)
			if (((this->height == (int)-1))){
				HX_STACK_LINE(970)
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::UInt8Array Image_obj::get_data( ){
	HX_STACK_FRAME("lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1017,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1019)
	if (((bool((bool((this->buffer->data == null())) && bool((this->buffer->width > (int)0)))) && bool((this->buffer->height > (int)0))))){
	}
	HX_STACK_LINE(1036)
	return this->buffer->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::UInt8Array Image_obj::set_data( ::lime::utils::UInt8Array value){
	HX_STACK_FRAME("lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1043,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1043)
	return this->buffer->data = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

bool Image_obj::get_powerOfTwo( ){
	HX_STACK_FRAME("lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1050,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1050)
	return (bool((bool((this->buffer->width != (int)0)) && bool((((int(this->buffer->width) & int((~(int)(this->buffer->width) + (int)1)))) == this->buffer->width)))) && bool(((bool((this->buffer->height != (int)0)) && bool((((int(this->buffer->height) & int((~(int)(this->buffer->height) + (int)1)))) == this->buffer->height))))));
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1055,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1057)
	bool _g = this->get_powerOfTwo();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1057)
	if (((value != _g))){
		HX_STACK_LINE(1059)
		int newWidth = (int)1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(1060)
		int newHeight = (int)1;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(1062)
		while((true)){
			HX_STACK_LINE(1062)
			if ((!(((newWidth < this->buffer->width))))){
				HX_STACK_LINE(1062)
				break;
			}
			HX_STACK_LINE(1064)
			hx::ShlEq(newWidth,(int)1);
		}
		HX_STACK_LINE(1068)
		while((true)){
			HX_STACK_LINE(1068)
			if ((!(((newHeight < this->buffer->height))))){
				HX_STACK_LINE(1068)
				break;
			}
			HX_STACK_LINE(1070)
			hx::ShlEq(newHeight,(int)1);
		}
		HX_STACK_LINE(1074)
		{
			HX_STACK_LINE(1074)
			::lime::graphics::ImageType _g1 = this->type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1074)
			switch( (int)(_g1->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1082)
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),newWidth,newHeight);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1100)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	HX_STACK_FRAME("lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1107,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1107)
	return this->buffer->premultiplied;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1112,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1114)
	if (((bool(value) && bool(!(this->buffer->premultiplied))))){
		HX_STACK_LINE(1116)
		::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1116)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1124)
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		HX_STACK_LINE(1132)
		if (((bool(!(value)) && bool(this->buffer->premultiplied)))){
			HX_STACK_LINE(1134)
			::lime::graphics::ImageType _g = this->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1134)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1142)
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1152)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	HX_STACK_FRAME("lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1159,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	return ::lime::math::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1166,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1166)
	return this->buffer->get_src();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1173,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1173)
	return this->buffer->set_src(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	HX_STACK_FRAME("lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1180,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1180)
	return this->buffer->transparent;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1189,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1189)
	return this->buffer->transparent = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",379,0xc7b862ad)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(381)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(382)
	image->__fromBase64(base64,type,onload);
	HX_STACK_LINE(383)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	HX_STACK_FRAME("lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",388,0xc7b862ad)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(390)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),bitmapData->__Field(HX_CSTRING("width"),true),bitmapData->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(391)
	buffer->__srcBitmapData = bitmapData;
	HX_STACK_LINE(392)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::lime::utils::ByteArray bytes,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",397,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(399)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(400)
	image->__fromBytes(bytes,onload);
	HX_STACK_LINE(401)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	HX_STACK_FRAME("lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",406,0xc7b862ad)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_LINE(408)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_CSTRING("width"),true),canvas->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(409)
	buffer->set_src(canvas);
	HX_STACK_LINE(410)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",415,0xc7b862ad)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(417)
	::lime::graphics::Image image = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(418)
	image->__fromFile(path,onload,onerror);
	HX_STACK_LINE(419)
	return image;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	HX_STACK_FRAME("lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",424,0xc7b862ad)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(426)
	::lime::graphics::ImageBuffer buffer = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_CSTRING("width"),true),image->__Field(HX_CSTRING("height"),true),null());		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(427)
	buffer->set_src(image);
	HX_STACK_LINE(428)
	return ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::String Image_obj::__base64Encode( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__base64Encode",0x6ec3d362,"lime.graphics.Image.__base64Encode","lime/graphics/Image.hx",709,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(709)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isJPG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",979,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(981)
	bytes->position = (int)0;
	HX_STACK_LINE(982)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(982)
	if (((bytes->position < bytes->length))){
		HX_STACK_LINE(982)
		int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(982)
		_g = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(982)
		_g = bytes->ThrowEOFi();
	}
	HX_STACK_LINE(982)
	if (((_g == (int)255))){
		HX_STACK_LINE(982)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(982)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(982)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(982)
			_g1 = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(982)
			_g1 = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(982)
		return (_g1 == (int)216);
	}
	else{
		HX_STACK_LINE(982)
		return false;
	}
	HX_STACK_LINE(982)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",987,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(989)
	bytes->position = (int)0;
	HX_STACK_LINE(990)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(990)
	if (((bytes->position < bytes->length))){
		HX_STACK_LINE(990)
		int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(990)
		_g = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(990)
		_g = bytes->ThrowEOFi();
	}
	struct _Function_1_1{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g1 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g1 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g1 == (int)80);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g2 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g2 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g2 == (int)78);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g3 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g3 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g3 == (int)71);
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g4 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g4 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g4 == (int)13);
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g5 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g5 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g5 == (int)10);
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",990,0xc7b862ad)
			{
				HX_STACK_LINE(990)
				int _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(990)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(990)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(990)
					_g6 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(990)
					_g6 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(990)
				return (_g6 == (int)26);
			}
			return null();
		}
	};
	HX_STACK_LINE(990)
	if (((  (((  (((  (((  (((  (((  (((_g == (int)137))) ? bool(_Function_1_1::Block(bytes)) : bool(false) ))) ? bool(_Function_1_2::Block(bytes)) : bool(false) ))) ? bool(_Function_1_3::Block(bytes)) : bool(false) ))) ? bool(_Function_1_4::Block(bytes)) : bool(false) ))) ? bool(_Function_1_5::Block(bytes)) : bool(false) ))) ? bool(_Function_1_6::Block(bytes)) : bool(false) ))){
		HX_STACK_LINE(990)
		int _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(990)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(990)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(990)
			_g7 = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(990)
			_g7 = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(990)
		return (_g7 == (int)10);
	}
	else{
		HX_STACK_LINE(990)
		return false;
	}
	HX_STACK_LINE(990)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isGIF( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",994,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(996)
	bytes->position = (int)0;
	HX_STACK_LINE(998)
	int _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(998)
	if (((bytes->position < bytes->length))){
		HX_STACK_LINE(998)
		int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(998)
		_g = bytes->b->__get(pos);
	}
	else{
		HX_STACK_LINE(998)
		_g = bytes->ThrowEOFi();
	}
	struct _Function_1_1{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",998,0xc7b862ad)
			{
				HX_STACK_LINE(998)
				int _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(998)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(998)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(998)
					_g1 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(998)
					_g1 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(998)
				return (_g1 == (int)73);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",998,0xc7b862ad)
			{
				HX_STACK_LINE(998)
				int _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(998)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(998)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(998)
					_g2 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(998)
					_g2 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(998)
				return (_g2 == (int)70);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::lime::utils::ByteArray &bytes){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/Image.hx",998,0xc7b862ad)
			{
				HX_STACK_LINE(998)
				int _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(998)
				if (((bytes->position < bytes->length))){
					HX_STACK_LINE(998)
					int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(998)
					_g3 = bytes->b->__get(pos);
				}
				else{
					HX_STACK_LINE(998)
					_g3 = bytes->ThrowEOFi();
				}
				HX_STACK_LINE(998)
				return (_g3 == (int)56);
			}
			return null();
		}
	};
	HX_STACK_LINE(998)
	if (((  (((  (((  (((_g == (int)71))) ? bool(_Function_1_1::Block(bytes)) : bool(false) ))) ? bool(_Function_1_2::Block(bytes)) : bool(false) ))) ? bool(_Function_1_3::Block(bytes)) : bool(false) ))){
		HX_STACK_LINE(1000)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1000)
		if (((bytes->position < bytes->length))){
			HX_STACK_LINE(1000)
			int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1000)
			b = bytes->b->__get(pos);
		}
		else{
			HX_STACK_LINE(1000)
			b = bytes->ThrowEOFi();
		}
		HX_STACK_LINE(1001)
		if (((bool((b == (int)55)) || bool((b == (int)57))))){
			HX_STACK_LINE(1001)
			int _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1001)
			if (((bytes->position < bytes->length))){
				HX_STACK_LINE(1001)
				int pos = (bytes->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1001)
				_g4 = bytes->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1001)
				_g4 = bytes->ThrowEOFi();
			}
			HX_STACK_LINE(1001)
			return (_g4 == (int)97);
		}
		else{
			HX_STACK_LINE(1001)
			return false;
		}
	}
	HX_STACK_LINE(1005)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

Dynamic Image_obj::lime_image_encode;

Dynamic Image_obj::lime_image_load;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__isJPG") ) { return __isJPG_dyn(); }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { return __isPNG_dyn(); }
		if (HX_FIELD_EQ(inName,"__isGIF") ) { return __isGIF_dyn(); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { return fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { return fromCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { return __base64Chars; }
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { return fromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { return __base64Encode_dyn(); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { return __base64Encoder; }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { return lime_image_load; }
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { return fromImageElement_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { return lime_image_encode; }
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return set_premultiplied(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=inValue.Cast< ::haxe::crypto::BaseCode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { lime_image_load=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { lime_image_encode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("powerOfTwo"));
	outFields->push(HX_CSTRING("premultiplied"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__base64Chars"),
	HX_CSTRING("__base64Encoder"),
	HX_CSTRING("fromBase64"),
	HX_CSTRING("fromBitmapData"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromCanvas"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("fromImageElement"),
	HX_CSTRING("__base64Encode"),
	HX_CSTRING("__isJPG"),
	HX_CSTRING("__isPNG"),
	HX_CSTRING("__isGIF"),
	HX_CSTRING("lime_image_encode"),
	HX_CSTRING("lime_image_load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_CSTRING("dirty")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_CSTRING("offsetX")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_CSTRING("offsetY")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_CSTRING("rect")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Image_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Image_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("dirty"),
	HX_CSTRING("height"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("rect"),
	HX_CSTRING("type"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("merge"),
	HX_CSTRING("resize"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("__clipRect"),
	HX_CSTRING("__fromBase64"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	HX_CSTRING("__fromImageBuffer"),
	HX_CSTRING("get_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("get_powerOfTwo"),
	HX_CSTRING("set_powerOfTwo"),
	HX_CSTRING("get_premultiplied"),
	HX_CSTRING("set_premultiplied"),
	HX_CSTRING("get_rect"),
	HX_CSTRING("get_src"),
	HX_CSTRING("set_src"),
	HX_CSTRING("get_transparent"),
	HX_CSTRING("set_transparent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_MARK_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_encode,"lime_image_encode");
	HX_VISIT_MEMBER_NAME(Image_obj::lime_image_load,"lime_image_load");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
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

void Image_obj::__boot()
{
	__base64Chars= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	lime_image_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_encode"),(int)3,null());
	lime_image_load= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_load"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
