#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_FRAME("openfl.display.MovieClip","new",0xe16984e8,"openfl.display.MovieClip.new","openfl/display/MovieClip.hx",124,0x2b84738a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(126)
	super::__construct();
	HX_STACK_LINE(128)
	this->__currentFrame = (int)0;
	HX_STACK_LINE(129)
	this->__currentLabels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(130)
	this->__totalFrames = (int)0;
	HX_STACK_LINE(131)
	this->enabled = true;
}
;
	return null();
}

//MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > result = new MovieClip_obj();
	result->__construct();
	return result;}

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl.display.MovieClip","gotoAndPlay",0x3bade190,"openfl.display.MovieClip.gotoAndPlay","openfl/display/MovieClip.hx",150,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl.display.MovieClip","gotoAndStop",0x3dafa39e,"openfl.display.MovieClip.gotoAndStop","openfl/display/MovieClip.hx",174,0x2b84738a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","nextFrame",0x3b845cc2,"openfl.display.MovieClip.nextFrame","openfl/display/MovieClip.hx",186,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

Void MovieClip_obj::play( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","play",0x5c42706c,"openfl.display.MovieClip.play","openfl/display/MovieClip.hx",197,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","prevFrame",0x7f95e2c2,"openfl.display.MovieClip.prevFrame","openfl/display/MovieClip.hx",209,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_FRAME("openfl.display.MovieClip","stop",0x5e44327a,"openfl.display.MovieClip.stop","openfl/display/MovieClip.hx",220,0x2b84738a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

int MovieClip_obj::get_currentFrame( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrame",0xf2ac6035,"openfl.display.MovieClip.get_currentFrame","openfl/display/MovieClip.hx",234,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(234)
	return this->__currentFrame;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentFrameLabel",0x543e3d7f,"openfl.display.MovieClip.get_currentFrameLabel","openfl/display/MovieClip.hx",235,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return this->__currentFrameLabel;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabel",0x5bd7f5fc,"openfl.display.MovieClip.get_currentLabel","openfl/display/MovieClip.hx",236,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	return this->__currentLabel;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

Array< ::Dynamic > MovieClip_obj::get_currentLabels( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_currentLabels",0x011f46f7,"openfl.display.MovieClip.get_currentLabels","openfl/display/MovieClip.hx",237,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return this->__currentLabels;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

int MovieClip_obj::get_framesLoaded( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_framesLoaded",0xb37eaf4c,"openfl.display.MovieClip.get_framesLoaded","openfl/display/MovieClip.hx",238,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	return this->__totalFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

int MovieClip_obj::get_totalFrames( ){
	HX_STACK_FRAME("openfl.display.MovieClip","get_totalFrames",0x46b3baa9,"openfl.display.MovieClip.get_totalFrames","openfl/display/MovieClip.hx",239,0x2b84738a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	return this->__totalFrames;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )


MovieClip_obj::MovieClip_obj()
{
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_MARK_MEMBER_NAME(currentLabel,"currentLabel");
	HX_MARK_MEMBER_NAME(currentLabels,"currentLabels");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_VISIT_MEMBER_NAME(currentLabel,"currentLabel");
	HX_VISIT_MEMBER_NAME(currentLabels,"currentLabels");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp ? get_totalFrames() : totalFrames; }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp ? get_currentFrame() : currentFrame; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { return inCallProp ? get_currentLabel() : currentLabel; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return inCallProp ? get_framesLoaded() : framesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { return inCallProp ? get_currentLabels() : currentLabels; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return __totalFrames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return __currentFrame; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return __currentLabel; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return __currentLabels; }
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return get_currentLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { return inCallProp ? get_currentFrameLabel() : currentFrameLabel; }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return get_currentLabels_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return __currentFrameLabel; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return get_currentFrameLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { __totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { __currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { __currentLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { __currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { __currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentFrame"));
	outFields->push(HX_CSTRING("currentFrameLabel"));
	outFields->push(HX_CSTRING("currentLabel"));
	outFields->push(HX_CSTRING("currentLabels"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("framesLoaded"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("__currentFrame"));
	outFields->push(HX_CSTRING("__currentFrameLabel"));
	outFields->push(HX_CSTRING("__currentLabel"));
	outFields->push(HX_CSTRING("__currentLabels"));
	outFields->push(HX_CSTRING("__totalFrames"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MovieClip_obj,currentFrame),HX_CSTRING("currentFrame")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentFrameLabel),HX_CSTRING("currentFrameLabel")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentLabel),HX_CSTRING("currentLabel")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,currentLabels),HX_CSTRING("currentLabels")},
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,framesLoaded),HX_CSTRING("framesLoaded")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,totalFrames),HX_CSTRING("totalFrames")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__currentFrame),HX_CSTRING("__currentFrame")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentFrameLabel),HX_CSTRING("__currentFrameLabel")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentLabel),HX_CSTRING("__currentLabel")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,__currentLabels),HX_CSTRING("__currentLabels")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__totalFrames),HX_CSTRING("__totalFrames")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentFrame"),
	HX_CSTRING("currentFrameLabel"),
	HX_CSTRING("currentLabel"),
	HX_CSTRING("currentLabels"),
	HX_CSTRING("enabled"),
	HX_CSTRING("framesLoaded"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("__currentFrame"),
	HX_CSTRING("__currentFrameLabel"),
	HX_CSTRING("__currentLabel"),
	HX_CSTRING("__currentLabels"),
	HX_CSTRING("__totalFrames"),
	HX_CSTRING("gotoAndPlay"),
	HX_CSTRING("gotoAndStop"),
	HX_CSTRING("nextFrame"),
	HX_CSTRING("play"),
	HX_CSTRING("prevFrame"),
	HX_CSTRING("stop"),
	HX_CSTRING("get_currentFrame"),
	HX_CSTRING("get_currentFrameLabel"),
	HX_CSTRING("get_currentLabel"),
	HX_CSTRING("get_currentLabels"),
	HX_CSTRING("get_framesLoaded"),
	HX_CSTRING("get_totalFrames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#endif

Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.MovieClip"), hx::TCanCast< MovieClip_obj> ,sStaticFields,sMemberFields,
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

void MovieClip_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
