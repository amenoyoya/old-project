#ifndef INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,WindowEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  WindowEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WindowEventInfo_obj OBJ_;
		WindowEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WindowEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WindowEventInfo"); }

		int height;
		int type;
		int width;
		int x;
		int y;
		virtual ::lime::_backend::native::_NativeApplication::WindowEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_WindowEventInfo */ 
