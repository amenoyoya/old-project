#ifndef INCLUDED_openfl_display_TextureUvs
#define INCLUDED_openfl_display_TextureUvs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,TextureUvs)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TextureUvs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureUvs_obj OBJ_;
		TextureUvs_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextureUvs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureUvs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TextureUvs"); }

		Float x0;
		Float x1;
		Float x2;
		Float x3;
		Float y0;
		Float y1;
		Float y2;
		Float y3;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_TextureUvs */ 
