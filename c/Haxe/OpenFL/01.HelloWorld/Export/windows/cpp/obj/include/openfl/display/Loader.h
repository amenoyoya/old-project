#ifndef INCLUDED_openfl_display_Loader
#define INCLUDED_openfl_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Loader)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,system,LoaderContext)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Loader"); }

		::openfl::display::DisplayObject content;
		::openfl::display::LoaderInfo contentLoaderInfo;
		::openfl::display::BitmapData mImage;
		::openfl::display::Shape mShape;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void load( ::openfl::net::URLRequest request,::openfl::system::LoaderContext context);
		Dynamic load_dyn();

		virtual Void loadBytes( ::lime::utils::ByteArray buffer);
		Dynamic loadBytes_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void unloadAndStop( hx::Null< bool >  gc);
		Dynamic unloadAndStop_dyn();

		virtual Void BitmapData_onLoad( ::openfl::display::BitmapData bitmapData);
		Dynamic BitmapData_onLoad_dyn();

		virtual Void BitmapData_onError( );
		Dynamic BitmapData_onError_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Loader */ 
