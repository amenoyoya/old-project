#ifndef INCLUDED_openfl_display_InteractiveObject
#define INCLUDED_openfl_display_InteractiveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/DisplayObject.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  InteractiveObject_obj : public ::openfl::display::DisplayObject_obj{
	public:
		typedef ::openfl::display::DisplayObject_obj super;
		typedef InteractiveObject_obj OBJ_;
		InteractiveObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InteractiveObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractiveObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InteractiveObject"); }

		bool doubleClickEnabled;
		Dynamic focusRect;
		bool mouseEnabled;
		bool needsSoftKeyboard;
		::openfl::geom::Rectangle softKeyboardInputAreaOfInterest;
		bool tabEnabled;
		int tabIndex;
		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual Void __getInteractive( Array< ::Dynamic > stack);

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_InteractiveObject */ 
