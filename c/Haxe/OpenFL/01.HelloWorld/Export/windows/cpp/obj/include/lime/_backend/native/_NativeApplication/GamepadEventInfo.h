#ifndef INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,GamepadEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  GamepadEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GamepadEventInfo_obj OBJ_;
		GamepadEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GamepadEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_button,hx::Null< int >  __o_axis,hx::Null< Float >  __o_value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GamepadEventInfo"); }

		int axis;
		int button;
		int id;
		int type;
		Float value;
		virtual ::lime::_backend::native::_NativeApplication::GamepadEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_GamepadEventInfo */ 
