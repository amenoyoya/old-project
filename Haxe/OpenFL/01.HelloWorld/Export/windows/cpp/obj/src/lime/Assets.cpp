#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_Assets
#include <lime/Assets.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
namespace lime{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::lime::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("lime.Assets","exists",0x8a084f2e,"lime.Assets.exists","lime/Assets.hx",41,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(43)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(47)
	if (((type == null()))){
		HX_STACK_LINE(49)
		type = HX_CSTRING("BINARY");
	}
	HX_STACK_LINE(53)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(54)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(54)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(54)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(55)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(57)
	if (((library != null()))){
		HX_STACK_LINE(59)
		return library->exists(symbolName,type);
	}
	HX_STACK_LINE(65)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::lime::audio::AudioBuffer Assets_obj::getAudioBuffer( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getAudioBuffer",0x1f7814d2,"lime.Assets.getAudioBuffer","lime/Assets.hx",76,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(78)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(82)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->audio->exists(id)) : bool(false) ))){
			HX_STACK_LINE(84)
			::lime::audio::AudioBuffer audio = ::lime::Assets_obj::cache->audio->get(id);		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(86)
			if ((::lime::Assets_obj::isValidAudio(audio))){
				HX_STACK_LINE(88)
				return audio;
			}
		}
		HX_STACK_LINE(94)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(95)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(95)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(96)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(98)
		if (((library != null()))){
			HX_STACK_LINE(100)
			if ((library->exists(symbolName,HX_CSTRING("SOUND")))){
				HX_STACK_LINE(102)
				if ((library->isLocal(symbolName,HX_CSTRING("SOUND")))){
					HX_STACK_LINE(104)
					::lime::audio::AudioBuffer audio = library->getAudioBuffer(symbolName);		HX_STACK_VAR(audio,"audio");
					HX_STACK_LINE(106)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(108)
						::lime::Assets_obj::cache->audio->set(id,audio);
					}
					HX_STACK_LINE(112)
					return audio;
				}
				else{
					HX_STACK_LINE(116)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Audio asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),116,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
				}
			}
			else{
				HX_STACK_LINE(122)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no audio asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),122,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
			}
		}
		else{
			HX_STACK_LINE(128)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),128,HX_CSTRING("lime.Assets"),HX_CSTRING("getAudioBuffer")));
		}
		HX_STACK_LINE(134)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

::lime::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("lime.Assets","getBytes",0xe703c1c7,"lime.Assets.getBytes","lime/Assets.hx",145,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(147)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(151)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(151)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(152)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(152)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(152)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(153)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(155)
	if (((library != null()))){
		HX_STACK_LINE(157)
		if ((library->exists(symbolName,HX_CSTRING("BINARY")))){
			HX_STACK_LINE(159)
			if ((library->isLocal(symbolName,HX_CSTRING("BINARY")))){
				HX_STACK_LINE(161)
				return library->getBytes(symbolName);
			}
			else{
				HX_STACK_LINE(165)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] String or ByteArray asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),165,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
			}
		}
		else{
			HX_STACK_LINE(171)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),171,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
		}
	}
	else{
		HX_STACK_LINE(177)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),177,HX_CSTRING("lime.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(183)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::lime::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getFont",0x2f4603f3,"lime.Assets.getFont","lime/Assets.hx",194,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(196)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(200)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->font->exists(id)) : bool(false) ))){
			HX_STACK_LINE(202)
			return ::lime::Assets_obj::cache->font->get(id);
		}
		HX_STACK_LINE(206)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(206)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(207)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(207)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(207)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(208)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(210)
		if (((library != null()))){
			HX_STACK_LINE(212)
			if ((library->exists(symbolName,HX_CSTRING("FONT")))){
				HX_STACK_LINE(214)
				if ((library->isLocal(symbolName,HX_CSTRING("FONT")))){
					HX_STACK_LINE(216)
					::lime::text::Font font = library->getFont(symbolName);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(218)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(220)
						::lime::Assets_obj::cache->font->set(id,font);
					}
					HX_STACK_LINE(224)
					return font;
				}
				else{
					HX_STACK_LINE(228)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Font asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),228,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
				}
			}
			else{
				HX_STACK_LINE(234)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),234,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
			}
		}
		else{
			HX_STACK_LINE(240)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),240,HX_CSTRING("lime.Assets"),HX_CSTRING("getFont")));
		}
		HX_STACK_LINE(246)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::lime::graphics::Image Assets_obj::getImage( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","getImage",0xe6d4d8b7,"lime.Assets.getImage","lime/Assets.hx",258,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(260)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(264)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->image->exists(id)) : bool(false) ))){
			HX_STACK_LINE(266)
			::lime::graphics::Image image = ::lime::Assets_obj::cache->image->get(id);		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(268)
			if ((::lime::Assets_obj::isValidImage(image))){
				HX_STACK_LINE(270)
				return image;
			}
		}
		HX_STACK_LINE(276)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(277)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(277)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(277)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(278)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(280)
		if (((library != null()))){
			HX_STACK_LINE(282)
			if ((library->exists(symbolName,HX_CSTRING("IMAGE")))){
				HX_STACK_LINE(284)
				if ((library->isLocal(symbolName,HX_CSTRING("IMAGE")))){
					HX_STACK_LINE(286)
					::lime::graphics::Image image = library->getImage(symbolName);		HX_STACK_VAR(image,"image");
					HX_STACK_LINE(288)
					if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(290)
						::lime::Assets_obj::cache->image->set(id,image);
					}
					HX_STACK_LINE(294)
					return image;
				}
				else{
					HX_STACK_LINE(298)
					::haxe::Log_obj::trace(((HX_CSTRING("[Assets] Image asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),298,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
				}
			}
			else{
				HX_STACK_LINE(304)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Image asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),304,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
			}
		}
		else{
			HX_STACK_LINE(310)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),310,HX_CSTRING("lime.Assets"),HX_CSTRING("getImage")));
		}
		HX_STACK_LINE(316)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

::lime::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("lime.Assets","getLibrary",0x6641ef57,"lime.Assets.getLibrary","lime/Assets.hx",321,0x48c77341)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(323)
	if (((bool((name == null())) || bool((name == HX_CSTRING("")))))){
		HX_STACK_LINE(325)
		name = HX_CSTRING("default");
	}
	HX_STACK_LINE(329)
	return ::lime::Assets_obj::libraries->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("lime.Assets","getPath",0x35d78bc9,"lime.Assets.getPath","lime/Assets.hx",409,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(411)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(415)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(415)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(416)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(416)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(416)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(417)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(419)
	if (((library != null()))){
		HX_STACK_LINE(421)
		if ((library->exists(symbolName,null()))){
			HX_STACK_LINE(423)
			return library->getPath(symbolName);
		}
		else{
			HX_STACK_LINE(427)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),427,HX_CSTRING("lime.Assets"),HX_CSTRING("getPath")));
		}
	}
	else{
		HX_STACK_LINE(433)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),433,HX_CSTRING("lime.Assets"),HX_CSTRING("getPath")));
	}
	HX_STACK_LINE(439)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("lime.Assets","getText",0x387f72d1,"lime.Assets.getText","lime/Assets.hx",450,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(452)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(456)
	int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(456)
	::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(457)
	int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(457)
	int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(457)
	::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(458)
	::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(460)
	if (((library != null()))){
		HX_STACK_LINE(462)
		if ((library->exists(symbolName,HX_CSTRING("TEXT")))){
			HX_STACK_LINE(464)
			if ((library->isLocal(symbolName,HX_CSTRING("TEXT")))){
				HX_STACK_LINE(466)
				return library->getText(symbolName);
			}
			else{
				HX_STACK_LINE(470)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] String asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),470,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
			}
		}
		else{
			HX_STACK_LINE(476)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),476,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
		}
	}
	else{
		HX_STACK_LINE(482)
		::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),482,HX_CSTRING("lime.Assets"),HX_CSTRING("getText")));
	}
	HX_STACK_LINE(488)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("lime.Assets","initialize",0xc42b73a2,"lime.Assets.initialize","lime/Assets.hx",495,0x48c77341)
		HX_STACK_LINE(495)
		if ((!(::lime::Assets_obj::initialized))){
			HX_STACK_LINE(499)
			::DefaultAssetLibrary _g = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(499)
			::lime::Assets_obj::registerLibrary(HX_CSTRING("default"),_g);
			HX_STACK_LINE(503)
			::lime::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","isLocal",0x2e79638f,"lime.Assets.isLocal","lime/Assets.hx",510,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(512)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(516)
		if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){
			HX_STACK_LINE(518)
			if (((bool((type == HX_CSTRING("IMAGE"))) || bool((type == null()))))){
				HX_STACK_LINE(520)
				if ((::lime::Assets_obj::cache->image->exists(id))){
					HX_STACK_LINE(520)
					return true;
				}
			}
			HX_STACK_LINE(524)
			if (((bool((type == HX_CSTRING("FONT"))) || bool((type == null()))))){
				HX_STACK_LINE(526)
				if ((::lime::Assets_obj::cache->font->exists(id))){
					HX_STACK_LINE(526)
					return true;
				}
			}
			HX_STACK_LINE(530)
			if (((bool((bool((type == HX_CSTRING("SOUND"))) || bool((type == HX_CSTRING("MUSIC"))))) || bool((type == null()))))){
				HX_STACK_LINE(532)
				if ((::lime::Assets_obj::cache->audio->exists(id))){
					HX_STACK_LINE(532)
					return true;
				}
			}
		}
		HX_STACK_LINE(538)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(538)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(539)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(539)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(539)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(540)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(542)
		if (((library != null()))){
			HX_STACK_LINE(544)
			return library->isLocal(symbolName,type);
		}
		HX_STACK_LINE(550)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("lime.Assets","isValidAudio",0x0da20596,"lime.Assets.isValidAudio","lime/Assets.hx",555,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(559)
	return (buffer != null());
	HX_STACK_LINE(564)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image buffer){
	HX_STACK_FRAME("lime.Assets","isValidImage",0xa38aac1b,"lime.Assets.isValidImage","lime/Assets.hx",569,0x48c77341)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(574)
	return (buffer != null());
	HX_STACK_LINE(593)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

Array< ::String > Assets_obj::list( ::String type){
	HX_STACK_FRAME("lime.Assets","list",0x60d5f530,"lime.Assets.list","lime/Assets.hx",598,0x48c77341)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(600)
	::lime::Assets_obj::initialize();
	HX_STACK_LINE(602)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(604)
	for(::cpp::FastIterator_obj< ::lime::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::lime::AssetLibrary >(::lime::Assets_obj::libraries->iterator());  __it->hasNext(); ){
		::lime::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(606)
			Array< ::String > libraryItems = library->list(type);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(608)
			if (((libraryItems != null()))){
				HX_STACK_LINE(610)
				Array< ::String > _g = items->concat(libraryItems);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(610)
				items = _g;
			}
		}
;
	}
	HX_STACK_LINE(616)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

Void Assets_obj::loadAudioBuffer( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadAudioBuffer",0x6d20865e,"lime.Assets.loadAudioBuffer","lime/Assets.hx",621,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(621)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(621)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(623)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(627)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->audio->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(629)
			::lime::audio::AudioBuffer audio = ::lime::Assets_obj::cache->audio->get(id1->__get((int)0));		HX_STACK_VAR(audio,"audio");
			HX_STACK_LINE(631)
			if ((::lime::Assets_obj::isValidAudio(audio))){
				HX_STACK_LINE(633)
				handler1->__GetItem((int)0)(audio).Cast< Void >();
				HX_STACK_LINE(634)
				return null();
			}
		}
		HX_STACK_LINE(640)
		int _g = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(640)
		::String libraryName = id1->__get((int)0).substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(641)
		int _g1 = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(641)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(641)
		::String symbolName = id1->__get((int)0).substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(642)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(644)
		if (((library != null()))){
			HX_STACK_LINE(646)
			if ((library->exists(symbolName,HX_CSTRING("SOUND")))){
				HX_STACK_LINE(648)
				if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(Dynamic audio){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",650,0x48c77341)
						HX_STACK_ARG(audio,"audio")
						{
							HX_STACK_LINE(652)
							{
								HX_STACK_LINE(652)
								::lime::audio::AudioBuffer value = audio;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(652)
								::lime::Assets_obj::cache->audio->set(id1->__get((int)0),value);
							}
							HX_STACK_LINE(653)
							handler1->__GetItem((int)0)(audio).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(650)
					library->loadAudioBuffer(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(659)
					library->loadAudioBuffer(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(663)
				return null();
			}
			else{
				HX_STACK_LINE(667)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no audio asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),667,HX_CSTRING("lime.Assets"),HX_CSTRING("loadAudioBuffer")));
			}
		}
		else{
			HX_STACK_LINE(673)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),673,HX_CSTRING("lime.Assets"),HX_CSTRING("loadAudioBuffer")));
		}
		HX_STACK_LINE(679)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAudioBuffer,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadBytes",0x714f4253,"lime.Assets.loadBytes","lime/Assets.hx",684,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(686)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(690)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(690)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(691)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(691)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(691)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(692)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(694)
		if (((library != null()))){
			HX_STACK_LINE(696)
			if ((library->exists(symbolName,HX_CSTRING("BINARY")))){
				HX_STACK_LINE(698)
				library->loadBytes(symbolName,handler);
				HX_STACK_LINE(699)
				return null();
			}
			else{
				HX_STACK_LINE(703)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),703,HX_CSTRING("lime.Assets"),HX_CSTRING("loadBytes")));
			}
		}
		else{
			HX_STACK_LINE(709)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),709,HX_CSTRING("lime.Assets"),HX_CSTRING("loadBytes")));
		}
		HX_STACK_LINE(715)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadImage( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("lime.Assets","loadImage",0x71205943,"lime.Assets.loadImage","lime/Assets.hx",720,0x48c77341)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(720)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(720)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(722)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(726)
		if (((  (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))) ? bool(::lime::Assets_obj::cache->image->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(728)
			::lime::graphics::Image image = ::lime::Assets_obj::cache->image->get(id1->__get((int)0));		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(730)
			if ((::lime::Assets_obj::isValidImage(image))){
				HX_STACK_LINE(732)
				handler1->__GetItem((int)0)(image).Cast< Void >();
				HX_STACK_LINE(733)
				return null();
			}
		}
		HX_STACK_LINE(739)
		int _g = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(739)
		::String libraryName = id1->__get((int)0).substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(740)
		int _g1 = id1->__get((int)0).indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(740)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(740)
		::String symbolName = id1->__get((int)0).substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(741)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(743)
		if (((library != null()))){
			HX_STACK_LINE(745)
			if ((library->exists(symbolName,HX_CSTRING("IMAGE")))){
				HX_STACK_LINE(747)
				if (((bool(useCache) && bool(::lime::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::lime::graphics::Image image){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","lime/Assets.hx",749,0x48c77341)
						HX_STACK_ARG(image,"image")
						{
							HX_STACK_LINE(751)
							::lime::Assets_obj::cache->image->set(id1->__get((int)0),image);
							HX_STACK_LINE(752)
							handler1->__GetItem((int)0)(image).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(749)
					library->loadImage(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(758)
					library->loadImage(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(762)
				return null();
			}
			else{
				HX_STACK_LINE(766)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no Image asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),766,HX_CSTRING("lime.Assets"),HX_CSTRING("loadImage")));
			}
		}
		else{
			HX_STACK_LINE(772)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),772,HX_CSTRING("lime.Assets"),HX_CSTRING("loadImage")));
		}
		HX_STACK_LINE(778)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadImage,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadLibrary",0xbad7aae3,"lime.Assets.loadLibrary","lime/Assets.hx",783,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(785)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(789)
		::String data = ::lime::Assets_obj::getText(((HX_CSTRING("libraries/") + name) + HX_CSTRING(".json")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(791)
		if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
			HX_STACK_LINE(793)
			Dynamic info = ::haxe::format::JsonParser_obj::__new(data)->parseRec();		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(794)
			::Class _g = ::Type_obj::resolveClass(info->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(794)
			::lime::AssetLibrary library = ::Type_obj::createInstance(_g,info->__Field(HX_CSTRING("args"),true));		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(795)
			::lime::Assets_obj::libraries->set(name,library);
			HX_STACK_LINE(796)
			library->eventCallback = ::lime::Assets_obj::library_onEvent_dyn();
			HX_STACK_LINE(797)
			library->load(handler);
		}
		else{
			HX_STACK_LINE(801)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + name) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),801,HX_CSTRING("lime.Assets"),HX_CSTRING("loadLibrary")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("lime.Assets","loadText",0x872e47c5,"lime.Assets.loadText","lime/Assets.hx",873,0x48c77341)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(875)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(879)
		int _g = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(879)
		::String libraryName = id.substring((int)0,_g);		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(880)
		int _g1 = id.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(880)
		int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(880)
		::String symbolName = id.substr(_g2,null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(881)
		::lime::AssetLibrary library = ::lime::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(883)
		if (((library != null()))){
			HX_STACK_LINE(885)
			if ((library->exists(symbolName,HX_CSTRING("TEXT")))){
				HX_STACK_LINE(887)
				library->loadText(symbolName,handler);
				HX_STACK_LINE(888)
				return null();
			}
			else{
				HX_STACK_LINE(892)
				::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),892,HX_CSTRING("lime.Assets"),HX_CSTRING("loadText")));
			}
		}
		else{
			HX_STACK_LINE(898)
			::haxe::Log_obj::trace(((HX_CSTRING("[Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),898,HX_CSTRING("lime.Assets"),HX_CSTRING("loadText")));
		}
		HX_STACK_LINE(904)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::lime::AssetLibrary library){
{
		HX_STACK_FRAME("lime.Assets","registerLibrary",0x7c289f46,"lime.Assets.registerLibrary","lime/Assets.hx",909,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(911)
		if ((::lime::Assets_obj::libraries->exists(name))){
			HX_STACK_LINE(913)
			::lime::Assets_obj::unloadLibrary(name);
		}
		HX_STACK_LINE(917)
		if (((library != null()))){
			HX_STACK_LINE(919)
			library->eventCallback = ::lime::Assets_obj::library_onEvent_dyn();
		}
		HX_STACK_LINE(923)
		::lime::Assets_obj::libraries->set(name,library);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("lime.Assets","unloadLibrary",0x7620d8aa,"lime.Assets.unloadLibrary","lime/Assets.hx",928,0x48c77341)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(930)
		::lime::Assets_obj::initialize();
		HX_STACK_LINE(934)
		::lime::AssetLibrary library = ::lime::Assets_obj::libraries->get(name);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(936)
		if (((library != null()))){
			HX_STACK_LINE(938)
			::lime::Assets_obj::cache->clear((name + HX_CSTRING(":")));
			HX_STACK_LINE(939)
			library->eventCallback = null();
		}
		HX_STACK_LINE(943)
		::lime::Assets_obj::libraries->remove(name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onEvent( ::lime::AssetLibrary library,::String type){
{
		HX_STACK_FRAME("lime.Assets","library_onEvent",0xa716ee65,"lime.Assets.library_onEvent","lime/Assets.hx",959,0x48c77341)
		HX_STACK_ARG(library,"library")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(959)
		if (((type == HX_CSTRING("change")))){
			HX_STACK_LINE(961)
			::lime::Assets_obj::cache->clear(null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,library_onEvent,(void))


Assets_obj::Assets_obj()
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { return loadLibrary_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { return isValidAudio_dyn(); }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { return isValidImage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { return unloadLibrary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { return registerLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"library_onEvent") ) { return library_onEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::lime::AssetCache >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("libraries"),
	HX_CSTRING("initialized"),
	HX_CSTRING("exists"),
	HX_CSTRING("getAudioBuffer"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getImage"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getText"),
	HX_CSTRING("initialize"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("isValidAudio"),
	HX_CSTRING("isValidImage"),
	HX_CSTRING("list"),
	HX_CSTRING("loadAudioBuffer"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadImage"),
	HX_CSTRING("loadLibrary"),
	HX_CSTRING("loadText"),
	HX_CSTRING("registerLibrary"),
	HX_CSTRING("unloadLibrary"),
	HX_CSTRING("library_onEvent"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
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

void Assets_obj::__boot()
{
	cache= ::lime::AssetCache_obj::__new();
	libraries= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace lime
