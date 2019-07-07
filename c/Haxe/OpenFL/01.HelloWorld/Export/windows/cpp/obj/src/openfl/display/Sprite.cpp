#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Sprite_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",102,0xd5438ced)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(104)
	super::__construct();
	HX_STACK_LINE(106)
	this->buttonMode = false;
	HX_STACK_LINE(107)
	this->useHandCursor = true;
	HX_STACK_LINE(108)
	::openfl::display::LoaderInfo _g = ::openfl::display::LoaderInfo_obj::create(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(108)
	this->loaderInfo = _g;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct();
	return result;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > result = new Sprite_obj();
	result->__construct();
	return result;}

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::openfl::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",135,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
		HX_STACK_LINE(135)
		if (((this->stage != null()))){
			HX_STACK_LINE(137)
			this->stage->__startDrag(hx::ObjectPtr<OBJ_>(this),lockCenter,bounds);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",153,0xd5438ced)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		if (((this->stage != null()))){
			HX_STACK_LINE(155)
			this->stage->__stopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

bool Sprite_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",162,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(164)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(164)
		return false;
	}
	HX_STACK_LINE(166)
	int length = (int)0;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(168)
	if (((stack != null()))){
		HX_STACK_LINE(170)
		length = stack->length;
	}
	HX_STACK_LINE(174)
	if ((this->super::__hitTest(x,y,shapeFlag,stack,interactiveOnly))){
		HX_STACK_LINE(176)
		return interactiveOnly;
	}
	else{
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::Sprite_obj > __this,Float &x,Float &y,bool &shapeFlag){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/Sprite.hx",178,0xd5438ced)
				{
					HX_STACK_LINE(178)
					::openfl::geom::Matrix _g = __this->__getTransform();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					return __this->__graphics->__hitTest(x,y,shapeFlag,_g);
				}
				return null();
			}
		};
		HX_STACK_LINE(178)
		if (((  (((this->__graphics != null()))) ? bool(_Function_2_1::Block(this,x,y,shapeFlag)) : bool(false) ))){
			HX_STACK_LINE(180)
			if (((stack != null()))){
				HX_STACK_LINE(182)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(186)
			return true;
		}
	}
	HX_STACK_LINE(190)
	return false;
}


::openfl::display::Graphics Sprite_obj::get_graphics( ){
	HX_STACK_FRAME("openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",202,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	if (((this->__graphics == null()))){
		HX_STACK_LINE(206)
		::openfl::display::Graphics _g = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		this->__graphics = _g;
		HX_STACK_LINE(207)
		this->__graphics->__owner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(211)
	return this->__graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )


Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buttonMode"));
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("useHandCursor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_CSTRING("buttonMode")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(Sprite_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_CSTRING("useHandCursor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buttonMode"),
	HX_CSTRING("graphics"),
	HX_CSTRING("useHandCursor"),
	HX_CSTRING("startDrag"),
	HX_CSTRING("stopDrag"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("get_graphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Sprite"), hx::TCanCast< Sprite_obj> ,sStaticFields,sMemberFields,
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

void Sprite_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
