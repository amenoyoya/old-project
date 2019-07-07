#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
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
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
namespace openfl{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_FRAME("openfl.display.LoaderInfo","new",0xaabc917d,"openfl.display.LoaderInfo.new","openfl/display/LoaderInfo.hx",384,0x88528a51)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(386)
	super::__construct(null());
	HX_STACK_LINE(388)
	this->applicationDomain = ::openfl::system::ApplicationDomain_obj::currentDomain;
	HX_STACK_LINE(389)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(390)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(391)
	this->childAllowsParent = true;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/LoaderInfo.hx",392,0x88528a51)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(392)
	this->parameters = _Function_1_1::Block();
}
;
	return null();
}

//LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

::String LoaderInfo_obj::__rootURL;

::openfl::display::LoaderInfo LoaderInfo_obj::create( ::openfl::display::Loader loader){
	HX_STACK_FRAME("openfl.display.LoaderInfo","create",0xe80075ff,"openfl.display.LoaderInfo.create","openfl/display/LoaderInfo.hx",397,0x88528a51)
	HX_STACK_ARG(loader,"loader")
	HX_STACK_LINE(399)
	::openfl::display::LoaderInfo loaderInfo = ::openfl::display::LoaderInfo_obj::__new();		HX_STACK_VAR(loaderInfo,"loaderInfo");
	HX_STACK_LINE(400)
	::openfl::events::UncaughtErrorEvents _g = ::openfl::events::UncaughtErrorEvents_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(400)
	loaderInfo->uncaughtErrorEvents = _g;
	HX_STACK_LINE(402)
	if (((loader != null()))){
		HX_STACK_LINE(404)
		loaderInfo->loader = loader;
	}
	else{
		HX_STACK_LINE(408)
		loaderInfo->url = ::openfl::display::LoaderInfo_obj::__rootURL;
	}
	HX_STACK_LINE(412)
	return loaderInfo;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(width,"width");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(width,"width");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__rootURL") ) { return __rootURL; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return sameDomain; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return sharedEvents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return applicationDomain; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return parentAllowsChild; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return uncaughtErrorEvents; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::openfl::display::Loader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__rootURL") ) { __rootURL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast< ::openfl::events::EventDispatcher >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast< ::openfl::system::ApplicationDomain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast< ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("applicationDomain"));
	outFields->push(HX_CSTRING("bytes"));
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("childAllowsParent"));
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("loader"));
	outFields->push(HX_CSTRING("loaderURL"));
	outFields->push(HX_CSTRING("parameters"));
	outFields->push(HX_CSTRING("parentAllowsChild"));
	outFields->push(HX_CSTRING("sameDomain"));
	outFields->push(HX_CSTRING("sharedEvents"));
	outFields->push(HX_CSTRING("uncaughtErrorEvents"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("width"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__rootURL"),
	HX_CSTRING("create"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::system::ApplicationDomain*/ ,(int)offsetof(LoaderInfo_obj,applicationDomain),HX_CSTRING("applicationDomain")},
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(LoaderInfo_obj,bytes),HX_CSTRING("bytes")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,bytesLoaded),HX_CSTRING("bytesLoaded")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,bytesTotal),HX_CSTRING("bytesTotal")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_CSTRING("childAllowsParent")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(LoaderInfo_obj,content),HX_CSTRING("content")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_CSTRING("contentType")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::openfl::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_CSTRING("loader")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_CSTRING("loaderURL")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LoaderInfo_obj,parameters),HX_CSTRING("parameters")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,parentAllowsChild),HX_CSTRING("parentAllowsChild")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,sameDomain),HX_CSTRING("sameDomain")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(int)offsetof(LoaderInfo_obj,sharedEvents),HX_CSTRING("sharedEvents")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(LoaderInfo_obj,uncaughtErrorEvents),HX_CSTRING("uncaughtErrorEvents")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_CSTRING("url")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,width),HX_CSTRING("width")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("applicationDomain"),
	HX_CSTRING("bytes"),
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("childAllowsParent"),
	HX_CSTRING("content"),
	HX_CSTRING("contentType"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("height"),
	HX_CSTRING("loader"),
	HX_CSTRING("loaderURL"),
	HX_CSTRING("parameters"),
	HX_CSTRING("parentAllowsChild"),
	HX_CSTRING("sameDomain"),
	HX_CSTRING("sharedEvents"),
	HX_CSTRING("uncaughtErrorEvents"),
	HX_CSTRING("url"),
	HX_CSTRING("width"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__rootURL,"__rootURL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__rootURL,"__rootURL");
};

#endif

Class LoaderInfo_obj::__mClass;

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.LoaderInfo"), hx::TCanCast< LoaderInfo_obj> ,sStaticFields,sMemberFields,
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

void LoaderInfo_obj::__boot()
{
	__rootURL= HX_CSTRING("");
}

} // end namespace openfl
} // end namespace display
