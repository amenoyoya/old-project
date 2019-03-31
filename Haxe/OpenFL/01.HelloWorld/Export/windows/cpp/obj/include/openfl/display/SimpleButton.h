#ifndef INCLUDED_openfl_display_SimpleButton
#define INCLUDED_openfl_display_SimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/DisplayObjectContainer.h>
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  SimpleButton_obj : public ::openfl::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::display::DisplayObjectContainer_obj super;
		typedef SimpleButton_obj OBJ_;
		SimpleButton_obj();
		Void __construct(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SimpleButton_obj > __new(::openfl::display::DisplayObject upState,::openfl::display::DisplayObject overState,::openfl::display::DisplayObject downState,::openfl::display::DisplayObject hitTestState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleButton"); }

		::openfl::display::DisplayObject downState;
		bool enabled;
		::openfl::display::DisplayObject hitTestState;
		::openfl::display::DisplayObject overState;
		bool trackAsMenu;
		::openfl::display::DisplayObject upState;
		bool useHandCursor;
		::openfl::display::DisplayObject __currentState;
		::openfl::media::SoundTransform __soundTransform;
		virtual Void switchState( ::openfl::display::DisplayObject state);
		Dynamic switchState_dyn();

		virtual ::openfl::display::DisplayObject __generateDefaultState( );
		Dynamic __generateDefaultState_dyn();

		virtual ::openfl::display::DisplayObject set_downState( ::openfl::display::DisplayObject downState);
		Dynamic set_downState_dyn();

		virtual ::openfl::display::DisplayObject set_hitTestState( ::openfl::display::DisplayObject hitTestState);
		Dynamic set_hitTestState_dyn();

		virtual ::openfl::display::DisplayObject set_overState( ::openfl::display::DisplayObject overState);
		Dynamic set_overState_dyn();

		virtual ::openfl::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		Dynamic set_soundTransform_dyn();

		virtual ::openfl::display::DisplayObject set_upState( ::openfl::display::DisplayObject upState);
		Dynamic set_upState_dyn();

		virtual ::openfl::display::DisplayObject set___currentState( ::openfl::display::DisplayObject state);
		Dynamic set___currentState_dyn();

		virtual Void __this_onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseDown_dyn();

		virtual Void __this_onMouseOut( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseOut_dyn();

		virtual Void __this_onMouseOver( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseOver_dyn();

		virtual Void __this_onMouseUp( ::openfl::events::MouseEvent event);
		Dynamic __this_onMouseUp_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_SimpleButton */ 
