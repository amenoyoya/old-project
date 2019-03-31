#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_NMEPreloader
#include <NMEPreloader.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
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
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::config;

::openfl::display::Preloader ApplicationMain_obj::preloader;

Void ApplicationMain_obj::create( ){
{
		HX_STACK_FRAME("ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",14,0x0780ded5)
		HX_STACK_LINE(16)
		::lime::app::Application app = ::lime::app::Application_obj::__new();		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(17)
		app->create(::ApplicationMain_obj::config);
		HX_STACK_LINE(18)
		::openfl::Lib_obj::application = app;
		HX_STACK_LINE(21)
		::openfl::display::Stage stage = ::openfl::display::Stage_obj::__new(app->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__width,app->windows->__get((int)0).StaticCast< ::lime::ui::Window >()->__height,::ApplicationMain_obj::config->__Field(HX_CSTRING("background"),true));		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(22)
		stage->addChild(::openfl::Lib_obj::current);
		HX_STACK_LINE(23)
		app->addModule(stage);
		HX_STACK_LINE(26)
		::NMEPreloader display = ::NMEPreloader_obj::__new();		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(28)
		::openfl::display::Preloader _g = ::openfl::display::Preloader_obj::__new(display);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		::ApplicationMain_obj::preloader = _g;
		HX_STACK_LINE(29)
		::ApplicationMain_obj::preloader->onComplete = ::ApplicationMain_obj::init_dyn();
		HX_STACK_LINE(30)
		::ApplicationMain_obj::preloader->create(::ApplicationMain_obj::config);
		HX_STACK_LINE(55)
		int result = app->exec();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(58)
		::Sys_obj::exit(result);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,create,(void))

Void ApplicationMain_obj::init( ){
{
		HX_STACK_FRAME("ApplicationMain","init",0x9137fa15,"ApplicationMain.init","ApplicationMain.hx",64,0x0780ded5)
		HX_STACK_LINE(66)
		Array< int > loaded = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(loaded,"loaded");
		HX_STACK_LINE(67)
		Array< int > total = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(total,"total");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< int >,loaded,Array< int >,total)
		Void run(Dynamic __){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",68,0x0780ded5)
			HX_STACK_ARG(__,"__")
			{
				HX_STACK_LINE(70)
				(loaded[(int)0])++;
				HX_STACK_LINE(72)
				if (((loaded->__get((int)0) == total->__get((int)0)))){
					HX_STACK_LINE(74)
					::ApplicationMain_obj::start();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(68)
		Dynamic library_onLoad =  Dynamic(new _Function_1_1(loaded,total));		HX_STACK_VAR(library_onLoad,"library_onLoad");
		HX_STACK_LINE(80)
		::ApplicationMain_obj::preloader = null();
		HX_STACK_LINE(84)
		if (((loaded->__get((int)0) == total->__get((int)0)))){
			HX_STACK_LINE(86)
			::ApplicationMain_obj::start();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,init,(void))

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",93,0x0780ded5)
		HX_STACK_LINE(97)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		int _g1 = (int)16777215;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(103)
		int _g2 = (int)30;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(105)
		int _g3 = (int)600;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(113)
		int _g4 = (int)800;		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static Dynamic Block( int &_g1,int &_g,int &_g4,int &_g2,int &_g3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ApplicationMain.hx",95,0x0780ded5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("antialiasing") , _g,false);
					__result->Add(HX_CSTRING("background") , _g1,false);
					__result->Add(HX_CSTRING("borderless") , false,false);
					__result->Add(HX_CSTRING("company") , HX_CSTRING("Company Name"),false);
					__result->Add(HX_CSTRING("depthBuffer") , false,false);
					__result->Add(HX_CSTRING("file") , HX_CSTRING("01HelloWorld"),false);
					__result->Add(HX_CSTRING("fps") , _g2,false);
					__result->Add(HX_CSTRING("fullscreen") , false,false);
					__result->Add(HX_CSTRING("height") , _g3,false);
					__result->Add(HX_CSTRING("orientation") , HX_CSTRING(""),false);
					__result->Add(HX_CSTRING("packageName") , HX_CSTRING("com.sample.01helloworld"),false);
					__result->Add(HX_CSTRING("resizable") , true,false);
					__result->Add(HX_CSTRING("stencilBuffer") , true,false);
					__result->Add(HX_CSTRING("title") , HX_CSTRING("01HelloWorld"),false);
					__result->Add(HX_CSTRING("version") , HX_CSTRING("1.0.0"),false);
					__result->Add(HX_CSTRING("vsync") , false,false);
					__result->Add(HX_CSTRING("width") , _g4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		Dynamic _g5 = _Function_1_1::Block(_g1,_g,_g4,_g2,_g3);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(95)
		::ApplicationMain_obj::config = _g5;
		HX_STACK_LINE(122)
		::ApplicationMain_obj::create();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::start( ){
{
		HX_STACK_FRAME("ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",128,0x0780ded5)
		HX_STACK_LINE(130)
		bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
		HX_STACK_LINE(131)
		::Class entryPoint = ::Type_obj::resolveClass(HX_CSTRING("Main"));		HX_STACK_VAR(entryPoint,"entryPoint");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::String > _g1 = ::Type_obj::getClassFields(entryPoint);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(135)
				if (((methodName == HX_CSTRING("main")))){
					HX_STACK_LINE(137)
					hasMain = true;
					HX_STACK_LINE(138)
					break;
				}
			}
		}
		HX_STACK_LINE(144)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(146)
		if ((hasMain)){
			HX_STACK_LINE(148)
			Dynamic _g = ::Reflect_obj::field(entryPoint,HX_CSTRING("main"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			::Reflect_obj::callMethod(entryPoint,_g,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(152)
			::DocumentClass instance = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
		}
		HX_STACK_LINE(162)
		::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::RESIZE,false,false);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		::openfl::Lib_obj::current->stage->dispatchEvent(_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { return preloader; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preloader") ) { preloader=inValue.Cast< ::openfl::display::Preloader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("preloader"),
	HX_CSTRING("create"),
	HX_CSTRING("init"),
	HX_CSTRING("main"),
	HX_CSTRING("start"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::config,"config");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::preloader,"preloader");
};

#endif

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
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

void ApplicationMain_obj::__boot()
{
}

