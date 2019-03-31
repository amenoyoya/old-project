#ifndef INCLUDED_lime_app_Module
#define INCLUDED_lime_app_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/app/IModule.h>
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Module_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Module_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::lime::app::IModule_obj *()
			{ return new ::lime::app::IModule_delegate_< Module_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Module"); }

		virtual Void init( ::lime::graphics::RenderContext context);
		Dynamic init_dyn();

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

		virtual Void onTouchEnd( Float x,Float y,int id);
		Dynamic onTouchEnd_dyn();

		virtual Void onTouchMove( Float x,Float y,int id);
		Dynamic onTouchMove_dyn();

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

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Module */ 
