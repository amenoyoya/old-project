#ifndef INCLUDED_lime_ui_Mouse
#define INCLUDED_lime_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,ui,Mouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Mouse"); }

		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

		static ::lime::ui::MouseCursor get_cursor( );
		static Dynamic get_cursor_dyn();

		static ::lime::ui::MouseCursor set_cursor( ::lime::ui::MouseCursor value);
		static Dynamic set_cursor_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Mouse */ 
