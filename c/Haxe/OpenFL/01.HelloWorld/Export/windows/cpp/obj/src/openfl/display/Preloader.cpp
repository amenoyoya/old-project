#include <hxcpp.h>

#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
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
namespace openfl{
namespace display{

Void Preloader_obj::__construct(::openfl::display::Sprite display)
{
HX_STACK_FRAME("openfl.display.Preloader","new",0x5c0f09be,"openfl.display.Preloader.new","openfl/display/Preloader.hx",21,0xc399db74)
HX_STACK_THIS(this)
HX_STACK_ARG(display,"display")
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	if (((display != null()))){
		HX_STACK_LINE(27)
		this->display = display;
		HX_STACK_LINE(28)
		::openfl::Lib_obj::current->addChild(display);
		HX_STACK_LINE(30)
		if ((::Std_obj::is(display,hx::ClassOf< ::NMEPreloader >()))){
			HX_STACK_LINE(32)
			(hx::TCast< NMEPreloader >::cast(display))->onInit();
		}
	}
}
;
	return null();
}

//Preloader_obj::~Preloader_obj() { }

Dynamic Preloader_obj::__CreateEmpty() { return  new Preloader_obj; }
hx::ObjectPtr< Preloader_obj > Preloader_obj::__new(::openfl::display::Sprite display)
{  hx::ObjectPtr< Preloader_obj > result = new Preloader_obj();
	result->__construct(display);
	return result;}

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Preloader_obj > result = new Preloader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Preloader_obj::load( Array< ::String > urls,Array< ::String > types){
{
		HX_STACK_FRAME("openfl.display.Preloader","load",0x2fce9308,"openfl.display.Preloader.load","openfl/display/Preloader.hx",83,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(urls,"urls")
		HX_STACK_ARG(types,"types")
		HX_STACK_LINE(83)
		this->super::load(urls,types);
	}
return null();
}


Void Preloader_obj::start( ){
{
		HX_STACK_FRAME("openfl.display.Preloader","start",0xb00e4140,"openfl.display.Preloader.start","openfl/display/Preloader.hx",90,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		if (((  (((this->display != null()))) ? bool(::Std_obj::is(this->display,hx::ClassOf< ::NMEPreloader >())) : bool(false) ))){
			HX_STACK_LINE(92)
			this->display->addEventListener(::openfl::events::Event_obj::COMPLETE,this->display_onComplete_dyn(),null(),null(),null());
			HX_STACK_LINE(93)
			(hx::TCast< NMEPreloader >::cast(this->display))->onLoaded();
		}
		else{
			HX_STACK_LINE(97)
			this->super::start();
		}
	}
return null();
}


Void Preloader_obj::update( int loaded,int total){
{
		HX_STACK_FRAME("openfl.display.Preloader","update",0xdd75fb6b,"openfl.display.Preloader.update","openfl/display/Preloader.hx",106,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
		HX_STACK_LINE(106)
		if (((  (((this->display != null()))) ? bool(::Std_obj::is(this->display,hx::ClassOf< ::NMEPreloader >())) : bool(false) ))){
			HX_STACK_LINE(108)
			(hx::TCast< NMEPreloader >::cast(this->display))->onUpdate(loaded,total);
		}
	}
return null();
}


Void Preloader_obj::display_onComplete( ::openfl::events::Event event){
{
		HX_STACK_FRAME("openfl.display.Preloader","display_onComplete",0x4bd0fb77,"openfl.display.Preloader.display_onComplete","openfl/display/Preloader.hx",122,0xc399db74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(124)
		this->display->removeEventListener(::openfl::events::Event_obj::COMPLETE,this->display_onComplete_dyn(),null());
		HX_STACK_LINE(125)
		::openfl::Lib_obj::current->removeChild(this->display);
		HX_STACK_LINE(126)
		::openfl::Lib_obj::current->stage->set_focus(null());
		HX_STACK_LINE(127)
		this->display = null();
		HX_STACK_LINE(129)
		this->super::start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,display_onComplete,(void))


Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(displayComplete,"displayComplete");
	::lime::app::Preloader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(displayComplete,"displayComplete");
	::lime::app::Preloader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Preloader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"displayComplete") ) { return displayComplete; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"display_onComplete") ) { return display_onComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Preloader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"displayComplete") ) { displayComplete=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("display"));
	outFields->push(HX_CSTRING("displayComplete"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Preloader_obj,display),HX_CSTRING("display")},
	{hx::fsBool,(int)offsetof(Preloader_obj,displayComplete),HX_CSTRING("displayComplete")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("display"),
	HX_CSTRING("displayComplete"),
	HX_CSTRING("load"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("display_onComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Preloader"), hx::TCanCast< Preloader_obj> ,sStaticFields,sMemberFields,
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

void Preloader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
