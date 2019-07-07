#include <hxcpp.h>

#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void NMEPreloader_obj::__construct()
{
HX_STACK_FRAME("NMEPreloader","new",0x89455562,"NMEPreloader.new","NMEPreloader.hx",15,0x86edec4e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	int backgroundColor = this->getBackgroundColor();		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(20)
	int r = (int((int(backgroundColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(21)
	int g = (int((int(backgroundColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(22)
	int b = (int(backgroundColor) & int((int)255));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(23)
	Float perceivedLuminosity = (((0.299 * r) + (0.587 * g)) + (0.114 * b));		HX_STACK_VAR(perceivedLuminosity,"perceivedLuminosity");
	HX_STACK_LINE(24)
	int color = (int)0;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(26)
	if (((perceivedLuminosity < (int)70))){
		HX_STACK_LINE(28)
		color = (int)16777215;
	}
	HX_STACK_LINE(32)
	int x = (int)30;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(33)
	int height = (int)7;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(34)
	Float _g = this->getHeight();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	Float y = (_g1 - (Float(height) / Float((int)2)));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(35)
	Float _g2 = this->getWidth();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(35)
	Float width = (_g2 - (x * (int)2));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(37)
	int padding = (int)2;		HX_STACK_VAR(padding,"padding");
	HX_STACK_LINE(39)
	::openfl::display::Sprite _g3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(39)
	this->outline = _g3;
	HX_STACK_LINE(40)
	this->outline->get_graphics()->beginFill(color,0.07);
	HX_STACK_LINE(41)
	this->outline->get_graphics()->drawRect((int)0,(int)0,width,height);
	HX_STACK_LINE(42)
	this->outline->set_x(x);
	HX_STACK_LINE(43)
	this->outline->set_y(y);
	HX_STACK_LINE(44)
	this->addChild(this->outline);
	HX_STACK_LINE(46)
	::openfl::display::Sprite _g4 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(46)
	this->progress = _g4;
	HX_STACK_LINE(47)
	this->progress->get_graphics()->beginFill(color,0.35);
	HX_STACK_LINE(48)
	this->progress->get_graphics()->drawRect((int)0,(int)0,(width - (padding * (int)2)),(height - (padding * (int)2)));
	HX_STACK_LINE(49)
	this->progress->set_x((x + padding));
	HX_STACK_LINE(50)
	this->progress->set_y((y + padding));
	HX_STACK_LINE(51)
	this->progress->set_scaleX((int)0);
	HX_STACK_LINE(52)
	this->addChild(this->progress);
}
;
	return null();
}

//NMEPreloader_obj::~NMEPreloader_obj() { }

Dynamic NMEPreloader_obj::__CreateEmpty() { return  new NMEPreloader_obj; }
hx::ObjectPtr< NMEPreloader_obj > NMEPreloader_obj::__new()
{  hx::ObjectPtr< NMEPreloader_obj > result = new NMEPreloader_obj();
	result->__construct();
	return result;}

Dynamic NMEPreloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NMEPreloader_obj > result = new NMEPreloader_obj();
	result->__construct();
	return result;}

int NMEPreloader_obj::getBackgroundColor( ){
	HX_STACK_FRAME("NMEPreloader","getBackgroundColor",0x81f95bdd,"NMEPreloader.getBackgroundColor","NMEPreloader.hx",59,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return (int)16777215;
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getBackgroundColor,return )

Float NMEPreloader_obj::getHeight( ){
	HX_STACK_FRAME("NMEPreloader","getHeight",0xcc30c39f,"NMEPreloader.getHeight","NMEPreloader.hx",64,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	int height = (int)600;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(68)
	if (((height > (int)0))){
		HX_STACK_LINE(70)
		return height;
	}
	else{
		HX_STACK_LINE(74)
		return ::openfl::Lib_obj::current->stage->stageHeight;
	}
	HX_STACK_LINE(68)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getHeight,return )

Float NMEPreloader_obj::getWidth( ){
	HX_STACK_FRAME("NMEPreloader","getWidth",0xdb5cd94e,"NMEPreloader.getWidth","NMEPreloader.hx",81,0x86edec4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	int width = (int)800;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(85)
	if (((width > (int)0))){
		HX_STACK_LINE(87)
		return width;
	}
	else{
		HX_STACK_LINE(91)
		return ::openfl::Lib_obj::current->stage->stageWidth;
	}
	HX_STACK_LINE(85)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,getWidth,return )

Void NMEPreloader_obj::onInit( ){
{
		HX_STACK_FRAME("NMEPreloader","onInit",0xb6a74c0d,"NMEPreloader.onInit","NMEPreloader.hx",98,0x86edec4e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,onInit,(void))

Void NMEPreloader_obj::onLoaded( ){
{
		HX_STACK_FRAME("NMEPreloader","onLoaded",0xe93f5242,"NMEPreloader.onLoaded","NMEPreloader.hx",105,0x86edec4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NMEPreloader_obj,onLoaded,(void))

Void NMEPreloader_obj::onUpdate( int bytesLoaded,int bytesTotal){
{
		HX_STACK_FRAME("NMEPreloader","onUpdate",0x17d59046,"NMEPreloader.onUpdate","NMEPreloader.hx",112,0x86edec4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytesLoaded,"bytesLoaded")
		HX_STACK_ARG(bytesTotal,"bytesTotal")
		HX_STACK_LINE(114)
		Float percentLoaded = (Float(bytesLoaded) / Float(bytesTotal));		HX_STACK_VAR(percentLoaded,"percentLoaded");
		HX_STACK_LINE(116)
		if (((percentLoaded > (int)1))){
			HX_STACK_LINE(118)
			percentLoaded = (int)1;
		}
		HX_STACK_LINE(122)
		this->progress->set_scaleX(percentLoaded);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NMEPreloader_obj,onUpdate,(void))


NMEPreloader_obj::NMEPreloader_obj()
{
}

void NMEPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NMEPreloader);
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NMEPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NMEPreloader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return outline; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return onLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return getBackgroundColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NMEPreloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NMEPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outline"));
	outFields->push(HX_CSTRING("progress"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(NMEPreloader_obj,outline),HX_CSTRING("outline")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(NMEPreloader_obj,progress),HX_CSTRING("progress")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outline"),
	HX_CSTRING("progress"),
	HX_CSTRING("getBackgroundColor"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("onInit"),
	HX_CSTRING("onLoaded"),
	HX_CSTRING("onUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NMEPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NMEPreloader_obj::__mClass,"__mClass");
};

#endif

Class NMEPreloader_obj::__mClass;

void NMEPreloader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("NMEPreloader"), hx::TCanCast< NMEPreloader_obj> ,sStaticFields,sMemberFields,
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

void NMEPreloader_obj::__boot()
{
}

