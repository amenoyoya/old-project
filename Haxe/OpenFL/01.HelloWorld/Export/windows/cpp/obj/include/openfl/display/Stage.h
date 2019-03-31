#ifndef INCLUDED_openfl_display_Stage
#define INCLUDED_openfl_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/DisplayObjectContainer.h>
#include <lime/app/IModule.h>
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display,StageAlign)
HX_DECLARE_CLASS2(openfl,display,StageDisplayState)
HX_DECLARE_CLASS2(openfl,display,StageQuality)
HX_DECLARE_CLASS2(openfl,display,StageScaleMode)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage_obj : public ::openfl::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(int width,int height,Dynamic color);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Stage_obj > __new(int width,int height,Dynamic color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::lime::app::IModule_obj *()
			{ return new ::lime::app::IModule_delegate_< Stage_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Stage"); }

		::openfl::display::StageAlign align;
		bool allowsFullScreen;
		Float frameRate;
		::openfl::display::StageQuality quality;
		::openfl::display::StageScaleMode scaleMode;
		Array< ::Dynamic > stage3Ds;
		bool stageFocusRect;
		int stageHeight;
		int stageWidth;
		bool __clearBeforeRender;
		int __color;
		Array< Float > __colorSplit;
		::String __colorString;
		bool __dirty;
		::openfl::display::StageDisplayState __displayState;
		::openfl::geom::Rectangle __dragBounds;
		::openfl::display::Sprite __dragObject;
		Float __dragOffsetX;
		Float __dragOffsetY;
		::openfl::display::InteractiveObject __focus;
		bool __fullscreen;
		bool __invalidated;
		int __lastClickTime;
		Array< ::Dynamic > __mouseOutStack;
		Float __mouseX;
		Float __mouseY;
		int __originalWidth;
		int __originalHeight;
		::openfl::_internal::renderer::AbstractRenderer __renderer;
		bool __rendering;
		Array< ::Dynamic > __stack;
		bool __transparent;
		bool __wasDirty;
		virtual ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);

		virtual Void init( ::lime::graphics::RenderContext context);
		Dynamic init_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual ::openfl::geom::Point localToGlobal( ::openfl::geom::Point pos);

		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		Dynamic onGamepadAxisMove_dyn();

		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonDown_dyn();

		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		Dynamic onGamepadButtonUp_dyn();

		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadConnect_dyn();

		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		Dynamic onGamepadDisconnect_dyn();

		virtual Void onKeyDown( int keyCode,int modifier);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( int keyCode,int modifier);
		Dynamic onKeyUp_dyn();

		virtual Void onMouseDown( Float x,Float y,int button);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseMove( Float x,Float y,int button);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseUp( Float x,Float y,int button);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseWheel( Float deltaX,Float deltaY);
		Dynamic onMouseWheel_dyn();

		virtual Void onRenderContextLost( );
		Dynamic onRenderContextLost_dyn();

		virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context);
		Dynamic onRenderContextRestored_dyn();

		virtual Void onTouchMove( Float x,Float y,int id);
		Dynamic onTouchMove_dyn();

		virtual Void onTouchEnd( Float x,Float y,int id);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchStart( Float x,Float y,int id);
		Dynamic onTouchStart_dyn();

		virtual Void onWindowActivate( );
		Dynamic onWindowActivate_dyn();

		virtual Void onWindowClose( );
		Dynamic onWindowClose_dyn();

		virtual Void onWindowDeactivate( );
		Dynamic onWindowDeactivate_dyn();

		virtual Void onWindowFocusIn( );
		Dynamic onWindowFocusIn_dyn();

		virtual Void onWindowFocusOut( );
		Dynamic onWindowFocusOut_dyn();

		virtual Void onWindowFullscreen( );
		Dynamic onWindowFullscreen_dyn();

		virtual Void onWindowMinimize( );
		Dynamic onWindowMinimize_dyn();

		virtual Void onWindowMove( Float x,Float y);
		Dynamic onWindowMove_dyn();

		virtual Void onWindowResize( int width,int height);
		Dynamic onWindowResize_dyn();

		virtual Void onWindowRestore( );
		Dynamic onWindowRestore_dyn();

		virtual Void render( ::lime::graphics::RenderContext context);
		Dynamic render_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

		virtual int __convertKeyCode( int keyCode);
		Dynamic __convertKeyCode_dyn();

		virtual Void __drag( ::openfl::geom::Point mouse);
		Dynamic __drag_dyn();

		virtual Void __fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack);
		Dynamic __fireEvent_dyn();

		virtual Void __getInteractive( Array< ::Dynamic > stack);

		virtual Void __onKey( ::String type,int keyCode,int modifier);
		Dynamic __onKey_dyn();

		virtual Void __onMouse( ::String type,Float x,Float y,int button);
		Dynamic __onMouse_dyn();

		virtual Void __onMouseWheel( Float deltaX,Float deltaY);
		Dynamic __onMouseWheel_dyn();

		virtual Void __onTouch( ::String type,Float x,Float y,int id);
		Dynamic __onTouch_dyn();

		virtual Void __resize( );
		Dynamic __resize_dyn();

		virtual Void __startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds);
		Dynamic __startDrag_dyn();

		virtual Void __stopDrag( ::openfl::display::Sprite sprite);
		Dynamic __stopDrag_dyn();

		virtual Void __update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics);

		virtual Float get_mouseX( );

		virtual Float get_mouseY( );

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual ::openfl::display::InteractiveObject get_focus( );
		Dynamic get_focus_dyn();

		virtual ::openfl::display::InteractiveObject set_focus( ::openfl::display::InteractiveObject value);
		Dynamic set_focus_dyn();

		virtual ::openfl::display::StageDisplayState get_displayState( );
		Dynamic get_displayState_dyn();

		virtual ::openfl::display::StageDisplayState set_displayState( ::openfl::display::StageDisplayState value);
		Dynamic set_displayState_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage */ 
