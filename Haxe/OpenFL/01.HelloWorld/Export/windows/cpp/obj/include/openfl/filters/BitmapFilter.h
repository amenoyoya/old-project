#ifndef INCLUDED_openfl_filters_BitmapFilter
#define INCLUDED_openfl_filters_BitmapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BitmapFilter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFilter_obj OBJ_;
		BitmapFilter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapFilter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BitmapFilter"); }

		virtual ::openfl::filters::BitmapFilter clone( );
		Dynamic clone_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilter */ 
