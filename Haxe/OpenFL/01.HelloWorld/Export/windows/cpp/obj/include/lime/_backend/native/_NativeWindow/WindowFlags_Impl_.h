#ifndef INCLUDED_lime__backend_native__NativeWindow_WindowFlags_Impl_
#define INCLUDED_lime__backend_native__NativeWindow_WindowFlags_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeWindow,WindowFlags_Impl_)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeWindow{


class HXCPP_CLASS_ATTRIBUTES  WindowFlags_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowFlags_Impl__obj OBJ_;
		WindowFlags_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowFlags_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowFlags_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowFlags_Impl_"); }

		static int WINDOW_FLAG_FULLSCREEN;
		static int WINDOW_FLAG_BORDERLESS;
		static int WINDOW_FLAG_RESIZABLE;
		static int WINDOW_FLAG_HARDWARE;
		static int WINDOW_FLAG_VSYNC;
		static int WINDOW_FLAG_HW_AA;
		static int WINDOW_FLAG_HW_AA_HIRES;
		static int WINDOW_FLAG_ALLOW_SHADERS;
		static int WINDOW_FLAG_REQUIRE_SHADERS;
		static int WINDOW_FLAG_DEPTH_BUFFER;
		static int WINDOW_FLAG_STENCIL_BUFFER;
};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeWindow

#endif /* INCLUDED_lime__backend_native__NativeWindow_WindowFlags_Impl_ */ 
