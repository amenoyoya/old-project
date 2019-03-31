#ifndef INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,UpdateEventInfo)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES  UpdateEventInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UpdateEventInfo_obj OBJ_;
		UpdateEventInfo_obj();
		Void __construct(Dynamic type,hx::Null< int >  __o_deltaTime);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UpdateEventInfo_obj > __new(Dynamic type,hx::Null< int >  __o_deltaTime);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateEventInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UpdateEventInfo"); }

		int deltaTime;
		int type;
		virtual ::lime::_backend::native::_NativeApplication::UpdateEventInfo clone( );
		Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_UpdateEventInfo */ 
