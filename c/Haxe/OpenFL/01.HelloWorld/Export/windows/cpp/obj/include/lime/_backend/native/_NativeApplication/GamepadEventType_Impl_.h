#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventType_Impl_
#define INCLUDED_lime__backend_native__NativeApplication_GamepadEventType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,GamepadEventType_Impl_)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  GamepadEventType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GamepadEventType_Impl__obj OBJ_;
		GamepadEventType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GamepadEventType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadEventType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GamepadEventType_Impl_"); }

		static int AXIS_MOVE;
		static int BUTTON_DOWN;
		static int BUTTON_UP;
		static int CONNECT;
		static int DISCONNECT;
};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_GamepadEventType_Impl_ */ 
