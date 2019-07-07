#ifndef INCLUDED_openfl_ui__KeyLocation_KeyLocation_Impl_
#define INCLUDED_openfl_ui__KeyLocation_KeyLocation_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,ui,_KeyLocation,KeyLocation_Impl_)
namespace openfl{
namespace ui{
namespace _KeyLocation{


class HXCPP_CLASS_ATTRIBUTES  KeyLocation_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyLocation_Impl__obj OBJ_;
		KeyLocation_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyLocation_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyLocation_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("KeyLocation_Impl_"); }

		static int STANDARD;
		static int LEFT;
		static int RIGHT;
		static int NUM_PAD;
};

} // end namespace openfl
} // end namespace ui
} // end namespace _KeyLocation

#endif /* INCLUDED_openfl_ui__KeyLocation_KeyLocation_Impl_ */ 
