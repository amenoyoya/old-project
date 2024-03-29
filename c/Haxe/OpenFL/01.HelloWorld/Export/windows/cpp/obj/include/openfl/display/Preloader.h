#ifndef INCLUDED_openfl_display_Preloader
#define INCLUDED_openfl_display_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/app/Preloader.h>
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Preloader)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Preloader_obj : public ::lime::app::Preloader_obj{
	public:
		typedef ::lime::app::Preloader_obj super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();
		Void __construct(::openfl::display::Sprite display);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Preloader_obj > __new(::openfl::display::Sprite display);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Preloader"); }

		::openfl::display::Sprite display;
		bool displayComplete;
		virtual Void load( Array< ::String > urls,Array< ::String > types);

		virtual Void start( );

		virtual Void update( int loaded,int total);

		virtual Void display_onComplete( ::openfl::events::Event event);
		Dynamic display_onComplete_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Preloader */ 
