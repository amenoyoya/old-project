#ifndef INCLUDED_lime__backend_native__NativeMouse_MouseCursorType_Impl_
#define INCLUDED_lime__backend_native__NativeMouse_MouseCursorType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeMouse,MouseCursorType_Impl_)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeMouse{


class HXCPP_CLASS_ATTRIBUTES  MouseCursorType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MouseCursorType_Impl__obj OBJ_;
		MouseCursorType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MouseCursorType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseCursorType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MouseCursorType_Impl_"); }

		static int ARROW;
		static int CROSSHAIR;
		static int DEFAULT;
		static int MOVE;
		static int POINTER;
		static int RESIZE_NESW;
		static int RESIZE_NS;
		static int RESIZE_NWSE;
		static int RESIZE_WE;
		static int TEXT;
		static int WAIT;
		static int WAIT_ARROW;
};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeMouse

#endif /* INCLUDED_lime__backend_native__NativeMouse_MouseCursorType_Impl_ */ 
