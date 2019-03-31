#ifndef INCLUDED_lime_system__System_SystemDirectory_Impl_
#define INCLUDED_lime_system__System_SystemDirectory_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,system,_System,SystemDirectory_Impl_)
namespace lime{
namespace system{
namespace _System{


class HXCPP_CLASS_ATTRIBUTES  SystemDirectory_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SystemDirectory_Impl__obj OBJ_;
		SystemDirectory_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SystemDirectory_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SystemDirectory_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SystemDirectory_Impl_"); }

		static int APPLICATION;
		static int APPLICATION_STORAGE;
		static int DESKTOP;
		static int DOCUMENTS;
		static int FONTS;
		static int USER;
};

} // end namespace lime
} // end namespace system
} // end namespace _System

#endif /* INCLUDED_lime_system__System_SystemDirectory_Impl_ */ 
