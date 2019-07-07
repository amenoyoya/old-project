#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,Event)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic config);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		::lime::graphics::Renderer currentRenderer;
		Dynamic config;
		::lime::app::Event onGamepadAxisMove;
		::lime::app::Event onGamepadButtonDown;
		::lime::app::Event onGamepadButtonUp;
		::lime::app::Event onGamepadConnect;
		::lime::app::Event onGamepadDisconnect;
		::lime::app::Event onKeyDown;
		::lime::app::Event onKeyUp;
		::lime::app::Event onMouseDown;
		::lime::app::Event onMouseMove;
		::lime::app::Event onMouseUp;
		::lime::app::Event onMouseWheel;
		::lime::app::Event onTouchEnd;
		::lime::app::Event onTouchMove;
		::lime::app::Event onTouchStart;
		::lime::app::Event onWindowActivate;
		::lime::app::Event onWindowClose;
		::lime::app::Event onWindowDeactivate;
		::lime::app::Event onWindowFocusIn;
		::lime::app::Event onWindowFocusOut;
		::lime::app::Event onWindowFullscreen;
		::lime::app::Event onWindowMinimize;
		::lime::app::Event onWindowMove;
		::lime::app::Event onWindowResize;
		::lime::app::Event onWindowRestore;
		::lime::_backend::native::NativeWindow backend;
		bool __fullscreen;
		int __height;
		bool __minimized;
		int __width;
		int __x;
		int __y;
		virtual Void close( );
		Dynamic close_dyn();

		virtual Void create( ::lime::app::Application application);
		Dynamic create_dyn();

		virtual Void move( int x,int y);
		Dynamic move_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual Void setIcon( ::lime::graphics::Image image);
		Dynamic setIcon_dyn();

		virtual bool get_fullscreen( );
		Dynamic get_fullscreen_dyn();

		virtual bool set_fullscreen( bool value);
		Dynamic set_fullscreen_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual bool get_minimized( );
		Dynamic get_minimized_dyn();

		virtual bool set_minimized( bool value);
		Dynamic set_minimized_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		virtual int set_x( int value);
		Dynamic set_x_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int set_y( int value);
		Dynamic set_y_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
