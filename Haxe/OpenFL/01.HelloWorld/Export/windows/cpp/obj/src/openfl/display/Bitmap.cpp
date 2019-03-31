#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
namespace display{

Void Bitmap_obj::__construct(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",94,0x461b2743)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(96)
	super::__construct();
	HX_STACK_LINE(98)
	this->bitmapData = bitmapData;
	HX_STACK_LINE(99)
	this->pixelSnapping = pixelSnapping;
	HX_STACK_LINE(100)
	this->smoothing = smoothing;
	HX_STACK_LINE(102)
	if (((pixelSnapping == null()))){
		HX_STACK_LINE(104)
		this->pixelSnapping = ::openfl::display::PixelSnapping_obj::AUTO;
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return result;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Bitmap_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",113,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(113)
		if (((this->bitmapData != null()))){
			HX_STACK_LINE(115)
			::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(116)
			::openfl::geom::Rectangle _g = bounds->transform(this->__worldTransform);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			bounds = _g;
			HX_STACK_LINE(118)
			rect->__expand(bounds->x,bounds->y,bounds->width,bounds->height);
		}
	}
return null();
}


bool Bitmap_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",125,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(127)
	if (((  ((!((!(this->get_visible()))))) ? bool((this->bitmapData == null())) : bool(true) ))){
		HX_STACK_LINE(127)
		return false;
	}
	HX_STACK_LINE(129)
	::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(129)
	::openfl::geom::Point point = this->globalToLocal(_g);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(131)
	if (((bool((bool((bool((point->x > (int)0)) && bool((point->y > (int)0)))) && bool((point->x <= this->bitmapData->width)))) && bool((point->y <= this->bitmapData->height))))){
		HX_STACK_LINE(133)
		if (((bool((stack != null())) && bool(!(interactiveOnly))))){
			HX_STACK_LINE(135)
			stack->push(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(139)
		return true;
	}
	HX_STACK_LINE(143)
	return false;
}


Void Bitmap_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",150,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(150)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",157,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(157)
		Dynamic();
	}
return null();
}


Void Bitmap_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",164,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(164)
		if (((bool((bool((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0)))) || bool((this->bitmapData == null())))) || bool(!(this->bitmapData->__isValid))))){
			HX_STACK_LINE(164)
			Dynamic();
		}
		else{
			HX_STACK_LINE(164)
			renderSession->spriteBatch->renderBitmapData(this->bitmapData,this->smoothing,this->__worldTransform,this->__worldColorTransform,this->__worldAlpha,this->blendMode);
		}
	}
return null();
}


Void Bitmap_obj::__renderMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__renderMask",0x36576037,"openfl.display.Bitmap.__renderMask","openfl/display/Bitmap.hx",169,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(171)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		Float _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		renderSession->context->rect((int)0,(int)0,_g,_g1);
	}
return null();
}


Void Bitmap_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",176,0x461b2743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(178)
		::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::OverrideMatrix(this->__worldTransform);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		maskGraphics->__commands->push(_g);
		HX_STACK_LINE(179)
		maskGraphics->beginFill((int)0,null());
		HX_STACK_LINE(180)
		maskGraphics->drawRect((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
		HX_STACK_LINE(182)
		if (((maskGraphics->__bounds == null()))){
			HX_STACK_LINE(183)
			::openfl::geom::Rectangle _g1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(183)
			maskGraphics->__bounds = _g1;
		}
		HX_STACK_LINE(186)
		this->__getBounds(maskGraphics->__bounds,::openfl::geom::Matrix_obj::__identity);
		HX_STACK_LINE(188)
		this->super::__updateMask(maskGraphics);
	}
return null();
}


Float Bitmap_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",199,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if (((this->bitmapData != null()))){
		HX_STACK_LINE(203)
		Float _g = this->get_scaleY();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		return (this->bitmapData->height * _g);
	}
	HX_STACK_LINE(207)
	return (int)0;
}


Float Bitmap_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",212,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	if (((this->bitmapData != null()))){
		HX_STACK_LINE(216)
		if (((value != this->bitmapData->height))){
			HX_STACK_LINE(218)
			if ((!(this->__transformDirty))){
				HX_STACK_LINE(218)
				this->__transformDirty = true;
				HX_STACK_LINE(218)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
			HX_STACK_LINE(219)
			this->set_scaleY((Float(value) / Float(this->bitmapData->height)));
		}
		HX_STACK_LINE(223)
		return value;
	}
	HX_STACK_LINE(227)
	return (int)0;
}


Float Bitmap_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",232,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	if (((this->bitmapData != null()))){
		HX_STACK_LINE(236)
		Float _g = this->get_scaleX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(236)
		return (this->bitmapData->width * _g);
	}
	HX_STACK_LINE(240)
	return (int)0;
}


Float Bitmap_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",245,0x461b2743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(247)
	if (((this->bitmapData != null()))){
		HX_STACK_LINE(249)
		if (((value != this->bitmapData->width))){
			HX_STACK_LINE(251)
			if ((!(this->__transformDirty))){
				HX_STACK_LINE(251)
				this->__transformDirty = true;
				HX_STACK_LINE(251)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
			HX_STACK_LINE(252)
			this->set_scaleX((Float(value) / Float(this->bitmapData->width)));
		}
		HX_STACK_LINE(256)
		return value;
	}
	HX_STACK_LINE(260)
	return (int)0;
}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__renderMask") ) { return __renderMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return pixelSnapping; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast< ::openfl::display::PixelSnapping >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("pixelSnapping"));
	outFields->push(HX_CSTRING("smoothing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsObject /*::openfl::display::PixelSnapping*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_CSTRING("pixelSnapping")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_CSTRING("smoothing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("pixelSnapping"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__renderMask"),
	HX_CSTRING("__updateMask"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Bitmap"), hx::TCanCast< Bitmap_obj> ,sStaticFields,sMemberFields,
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

void Bitmap_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
