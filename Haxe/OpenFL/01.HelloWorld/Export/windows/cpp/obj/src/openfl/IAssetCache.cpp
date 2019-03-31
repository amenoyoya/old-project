#include <hxcpp.h>

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_IAssetCache
#include <openfl/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace openfl{

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,clear,)

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,getBitmapData,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,getFont,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,getSound,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,hasBitmapData,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,hasFont,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,hasSound,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,removeBitmapData,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,removeFont,return )

HX_DEFINE_DYNAMIC_FUNC1(IAssetCache_obj,removeSound,return )

HX_DEFINE_DYNAMIC_FUNC2(IAssetCache_obj,setBitmapData,)

HX_DEFINE_DYNAMIC_FUNC2(IAssetCache_obj,setFont,)

HX_DEFINE_DYNAMIC_FUNC2(IAssetCache_obj,setSound,)


static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getSound"),
	HX_CSTRING("hasBitmapData"),
	HX_CSTRING("hasFont"),
	HX_CSTRING("hasSound"),
	HX_CSTRING("removeBitmapData"),
	HX_CSTRING("removeFont"),
	HX_CSTRING("removeSound"),
	HX_CSTRING("setBitmapData"),
	HX_CSTRING("setFont"),
	HX_CSTRING("setSound"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAssetCache_obj::__mClass,"__mClass");
};

#endif

Class IAssetCache_obj::__mClass;

void IAssetCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.IAssetCache"), hx::TCanCast< IAssetCache_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IAssetCache_obj::__boot()
{
}

} // end namespace openfl
