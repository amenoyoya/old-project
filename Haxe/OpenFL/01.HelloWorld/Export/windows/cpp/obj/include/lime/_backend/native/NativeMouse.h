#ifndef INCLUDED_lime__backend_native_NativeMouse
#define INCLUDED_lime__backend_native_NativeMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeMouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeMouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeMouse_obj OBJ_;
		NativeMouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NativeMouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeMouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("NativeMouse"); }

		static ::lime::ui::MouseCursor __cursor;
		static bool __hidden;
		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static ::lime::ui::MouseCursor get_cursor( );
		static Dynamic get_cursor_dyn();

		static ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		static Dynamic set_cursor_dyn();

		static Dynamic lime_mouse_hide;
		static Dynamic &lime_mouse_hide_dyn() { return lime_mouse_hide;}
		static Dynamic lime_mouse_set_cursor;
		static Dynamic &lime_mouse_set_cursor_dyn() { return lime_mouse_set_cursor;}
		static Dynamic lime_mouse_show;
		static Dynamic &lime_mouse_show_dyn() { return lime_mouse_show;}
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeMouse */ 
