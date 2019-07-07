#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  KeyEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyEventInfo"); }

		int keyCode;
		int modifier;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::KeyEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo */ 
