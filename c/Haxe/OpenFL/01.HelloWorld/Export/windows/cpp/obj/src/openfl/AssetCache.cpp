#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
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

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl.AssetCache","new",0x4c82a362,"openfl.AssetCache.new","openfl/Assets.hx",888,0x989d477c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(897)
	this->__enabled = true;
	HX_STACK_LINE(902)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(902)
	this->bitmapData = _g;
	HX_STACK_LINE(903)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(903)
	this->font = _g1;
	HX_STACK_LINE(904)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(904)
	this->sound = _g2;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::IAssetCache_obj)) return operator ::openfl::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl.AssetCache","clear",0x1c26890f,"openfl.AssetCache.clear","openfl/Assets.hx",911,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(911)
		if (((prefix == null()))){
			HX_STACK_LINE(913)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(913)
			this->bitmapData = _g;
			HX_STACK_LINE(914)
			::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(914)
			this->font = _g1;
			HX_STACK_LINE(915)
			::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(915)
			this->sound = _g2;
		}
		else{
			HX_STACK_LINE(919)
			Dynamic keys = this->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(921)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(925)
					this->bitmapData->remove(key);
				}
;
			}
			HX_STACK_LINE(931)
			Dynamic keys1 = this->font->keys();		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(933)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys1);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(937)
					this->font->remove(key);
				}
;
			}
			HX_STACK_LINE(943)
			Dynamic keys2 = this->sound->keys();		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(945)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys2);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(949)
					this->sound->remove(key);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

::openfl::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getBitmapData",0x76047b71,"openfl.AssetCache.getBitmapData","openfl/Assets.hx",962,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(962)
	return this->bitmapData->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getFont",0xc4a48987,"openfl.AssetCache.getFont","openfl/Assets.hx",969,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(969)
	return this->font->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","getSound",0xc78ea217,"openfl.AssetCache.getSound","openfl/Assets.hx",976,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(976)
	return this->sound->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasBitmapData",0x33e8d735,"openfl.AssetCache.hasBitmapData","openfl/Assets.hx",983,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(983)
	return this->bitmapData->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasFont",0xc165fa4b,"openfl.AssetCache.hasFont","openfl/Assets.hx",990,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(990)
	return this->font->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","hasSound",0xf40fdcd3,"openfl.AssetCache.hasSound","openfl/Assets.hx",997,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(997)
	return this->sound->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeBitmapData",0x7d8dc6db,"openfl.AssetCache.removeBitmapData","openfl/Assets.hx",1004,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1004)
	return this->bitmapData->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeFont",0x7ce60971,"openfl.AssetCache.removeFont","openfl/Assets.hx",1011,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1011)
	return this->font->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl.AssetCache","removeSound",0x489d0eed,"openfl.AssetCache.removeSound","openfl/Assets.hx",1018,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1018)
	return this->sound->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.AssetCache","setBitmapData",0xbb0a5d7d,"openfl.AssetCache.setBitmapData","openfl/Assets.hx",1025,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(1025)
		this->bitmapData->set(id,bitmapData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::text::Font font){
{
		HX_STACK_FRAME("openfl.AssetCache","setFont",0xb7a61a93,"openfl.AssetCache.setFont","openfl/Assets.hx",1032,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(1032)
		this->font->set(id,font);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::media::Sound sound){
{
		HX_STACK_FRAME("openfl.AssetCache","setSound",0x75ebfb8b,"openfl.AssetCache.setSound","openfl/Assets.hx",1039,0x989d477c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(1039)
		this->sound->set(id,sound);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl.AssetCache","get_enabled",0xcdc8099a,"openfl.AssetCache.get_enabled","openfl/Assets.hx",1053,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1053)
	return this->__enabled;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl.AssetCache","set_enabled",0xd83510a6,"openfl.AssetCache.set_enabled","openfl/Assets.hx",1060,0x989d477c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1060)
	return this->__enabled = value;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("sound"));
	outFields->push(HX_CSTRING("__enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_CSTRING("sound")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_CSTRING("__enabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("font"),
	HX_CSTRING("sound"),
	HX_CSTRING("__enabled"),
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
	HX_CSTRING("get_enabled"),
	HX_CSTRING("set_enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.AssetCache"), hx::TCanCast< AssetCache_obj> ,sStaticFields,sMemberFields,
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

void AssetCache_obj::__boot()
{
}

} // end namespace openfl
