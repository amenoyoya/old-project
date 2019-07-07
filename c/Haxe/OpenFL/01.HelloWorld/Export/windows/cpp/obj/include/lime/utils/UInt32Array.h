#ifndef INCLUDED_lime_utils_UInt32Array
#define INCLUDED_lime_utils_UInt32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/utils/ArrayBufferView.h>
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(lime,utils,UInt32Array)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  UInt32Array_obj : public ::lime::utils::ArrayBufferView_obj{
	public:
		typedef ::lime::utils::ArrayBufferView_obj super;
		typedef UInt32Array_obj OBJ_;
		UInt32Array_obj();
		Void __construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UInt32Array_obj > __new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UInt32Array_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UInt32Array"); }

		typedef int __array_access;
		int length;
		virtual Void set( Dynamic bufferOrArray,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual ::lime::utils::UInt32Array subarray( int start,Dynamic end);
		Dynamic subarray_dyn();

		virtual int __get( int index);
		Dynamic __get_dyn();

		virtual Void __set( int index,int value);
		Dynamic __set_dyn();

		static int BYTES_PER_ELEMENT;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_UInt32Array */ 
