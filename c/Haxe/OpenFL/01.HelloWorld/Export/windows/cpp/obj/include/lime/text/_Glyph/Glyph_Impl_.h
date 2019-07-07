#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#define INCLUDED_lime_text__Glyph_Glyph_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,_Glyph,Glyph_Impl_)
namespace lime{
namespace text{
namespace _Glyph{


class HXCPP_CLASS_ATTRIBUTES  Glyph_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Glyph_Impl__obj OBJ_;
		Glyph_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Glyph_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Glyph_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Glyph_Impl_"); }

		static int _new( int i);
		static Dynamic _new_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _Glyph

#endif /* INCLUDED_lime_text__Glyph_Glyph_Impl_ */ 
