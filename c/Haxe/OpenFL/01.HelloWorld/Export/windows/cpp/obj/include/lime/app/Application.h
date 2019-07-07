#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/app/Module.h>
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public ::lime::app::Module_obj{
	public:
		typedef ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Application"); }

		Dynamic config;
		Array< ::lime::app::IModule > modules;
		::lime::app::Event onUpdate;
		::lime::graphics::Renderer renderer;
		Array< ::Dynamic > renderers;
		::lime::ui::Window window;
		Array< ::Dynamic > windows;
		::lime::_backend::native::NativeApplication backend;
		bool initialized;
		virtual Void addModule( ::lime::app::IModule module);
		Dynamic addModule_dyn();

		virtual Void addRenderer( ::lime::graphics::Renderer renderer);
		Dynamic addRenderer_dyn();

		virtual Void addWindow( ::lime::ui::Window window);
		Dynamic addWindow_dyn();

		virtual Void create( Dynamic config);
		Dynamic create_dyn();

		virtual int exec( );
		Dynamic exec_dyn();

		virtual Void init( ::lime::graphics::RenderContext context);

		virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);

		virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);

		virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);

		virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad);

		virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);

		virtual Void onKeyDown( int keyCode,int modifier);

		virtual Void onKeyUp( int keyCode,int modifier);

		virtual Void onMouseDown( Float x,Float y,int button);

		virtual Void onMouseMove( Float x,Float y,int button);

		virtual Void onMouseUp( Float x,Float y,int button);

		virtual Void onMouseWheel( Float deltaX,Float deltaY);

		virtual Void onRenderContextLost( );

		virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context);

		virtual Void onTouchEnd( Float x,Float y,int id);

		virtual Void onTouchMove( Float x,Float y,int id);

		virtual Void onTouchStart( Float x,Float y,int id);

		virtual Void onWindowActivate( );

		virtual Void onWindowClose( );

		virtual Void onWindowDeactivate( );

		virtual Void onWindowFocusIn( );

		virtual Void onWindowFocusOut( );

		virtual Void onWindowFullscreen( );

		virtual Void onWindowMinimize( );

		virtual Void onWindowMove( Float x,Float y);

		virtual Void onWindowResize( int width,int height);

		virtual Void onWindowRestore( );

		virtual Void removeModule( ::lime::app::IModule module);
		Dynamic removeModule_dyn();

		virtual Void removeRenderer( ::lime::graphics::Renderer renderer);
		Dynamic removeRenderer_dyn();

		virtual Void removeWindow( ::lime::ui::Window window);
		Dynamic removeWindow_dyn();

		virtual Void render( ::lime::graphics::RenderContext context);

		virtual Void update( int deltaTime);

		virtual ::lime::graphics::Renderer get_renderer( );
		Dynamic get_renderer_dyn();

		virtual ::lime::ui::Window get_window( );
		Dynamic get_window_dyn();

		static ::lime::app::Application current;
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
