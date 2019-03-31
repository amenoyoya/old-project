#ifndef INCLUDED_openfl_AssetLibrary
#define INCLUDED_openfl_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/AssetLibrary.h>
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS1(openfl,AssetLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public ::lime::AssetLibrary_obj{
	public:
		typedef ::lime::AssetLibrary_obj super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetLibrary"); }

		virtual ::openfl::display::MovieClip getMovieClip( ::String id);
		Dynamic getMovieClip_dyn();

		virtual ::openfl::media::Sound getMusic( ::String id);
		Dynamic getMusic_dyn();

		virtual ::openfl::media::Sound getSound( ::String id);
		Dynamic getSound_dyn();

		virtual Void loadMovieClip( ::String id,Dynamic handler);
		Dynamic loadMovieClip_dyn();

		virtual Void loadMusic( ::String id,Dynamic handler);
		Dynamic loadMusic_dyn();

		virtual Void loadSound( ::String id,Dynamic handler);
		Dynamic loadSound_dyn();

};

} // end namespace openfl

#endif /* INCLUDED_openfl_AssetLibrary */ 
