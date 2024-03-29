#ifndef INCLUDED_StringTools
#define INCLUDED_StringTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringTools)


class HXCPP_CLASS_ATTRIBUTES  StringTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StringTools_obj OBJ_;
		StringTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StringTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StringTools"); }

		static ::String urlDecode( ::String s);
		static Dynamic urlDecode_dyn();

		static bool startsWith( ::String s,::String start);
		static Dynamic startsWith_dyn();

		static ::String hex( int n,Dynamic digits);
		static Dynamic hex_dyn();

};


#endif /* INCLUDED_StringTools */ 
