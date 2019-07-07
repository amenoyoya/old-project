#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_DirectRenderer
#include <openfl/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl_display_OpenGLView
#include <openfl/display/OpenGLView.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void OpenGLView_obj::__construct()
{
HX_STACK_FRAME("openfl.display.OpenGLView","new",0xbc210f50,"openfl.display.OpenGLView.new","openfl/display/OpenGLView.hx",35,0x7a9fe7de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	super::__construct(HX_CSTRING("OpenGLView"));
}
;
	return null();
}

//OpenGLView_obj::~OpenGLView_obj() { }

Dynamic OpenGLView_obj::__CreateEmpty() { return  new OpenGLView_obj; }
hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__new()
{  hx::ObjectPtr< OpenGLView_obj > result = new OpenGLView_obj();
	result->__construct();
	return result;}

Dynamic OpenGLView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLView_obj > result = new OpenGLView_obj();
	result->__construct();
	return result;}

Void OpenGLView_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderCanvas",0x35af22fe,"openfl.display.OpenGLView.__renderCanvas","openfl/display/OpenGLView.hx",77,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


Void OpenGLView_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderDOM",0x0611a49c,"openfl.display.OpenGLView.__renderDOM","openfl/display/OpenGLView.hx",93,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


Void OpenGLView_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.OpenGLView","__renderGL",0x34d59d2b,"openfl.display.OpenGLView.__renderGL","openfl/display/OpenGLView.hx",171,0x7a9fe7de)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(171)
		if (((bool((this->stage != null())) && bool(this->__renderable)))){
			HX_STACK_LINE(173)
			::openfl::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(175)
			::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(175)
			if (((_g == null()))){
				HX_STACK_LINE(177)
				::openfl::geom::Rectangle _g1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->stage->stageWidth,this->stage->stageHeight);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(177)
				rect = _g1;
			}
			else{
				HX_STACK_LINE(181)
				Float _g2 = this->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(181)
				Float _g3 = (_g2 + this->get_scrollRect()->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(181)
				Float _g4 = this->get_y();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(181)
				Float _g5 = (_g4 + this->get_scrollRect()->y);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(181)
				::openfl::geom::Rectangle _g6 = ::openfl::geom::Rectangle_obj::__new(_g3,_g5,this->get_scrollRect()->width,this->get_scrollRect()->height);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(181)
				rect = _g6;
			}
			HX_STACK_LINE(185)
			if (((this->__render != null()))){
				HX_STACK_LINE(185)
				this->__render(rect);
			}
		}
	}
return null();
}


::String OpenGLView_obj::CONTEXT_LOST;

::String OpenGLView_obj::CONTEXT_RESTORED;

bool OpenGLView_obj::isSupported;

bool OpenGLView_obj::get_isSupported( ){
	HX_STACK_FRAME("openfl.display.OpenGLView","get_isSupported",0x72941b6b,"openfl.display.OpenGLView.get_isSupported","openfl/display/OpenGLView.hx",233,0x7a9fe7de)
	HX_STACK_LINE(233)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OpenGLView_obj,get_isSupported,return )


OpenGLView_obj::OpenGLView_obj()
{
}

Dynamic OpenGLView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__added") ) { return __added; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { return inCallProp ? get_isSupported() : isSupported; }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { return __initialized; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenGLView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__added") ) { __added=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__initialized") ) { __initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenGLView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__added"));
	outFields->push(HX_CSTRING("__initialized"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CONTEXT_LOST"),
	HX_CSTRING("CONTEXT_RESTORED"),
	HX_CSTRING("isSupported"),
	HX_CSTRING("get_isSupported"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(OpenGLView_obj,__added),HX_CSTRING("__added")},
	{hx::fsBool,(int)offsetof(OpenGLView_obj,__initialized),HX_CSTRING("__initialized")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__added"),
	HX_CSTRING("__initialized"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::isSupported,"isSupported");
};

#endif

Class OpenGLView_obj::__mClass;

void OpenGLView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.OpenGLView"), hx::TCanCast< OpenGLView_obj> ,sStaticFields,sMemberFields,
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

void OpenGLView_obj::__boot()
{
	CONTEXT_LOST= HX_CSTRING("glcontextlost");
	CONTEXT_RESTORED= HX_CSTRING("glcontextrestored");
}

} // end namespace openfl
} // end namespace display
