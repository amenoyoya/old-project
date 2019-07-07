#ifndef INCLUDED_lime_text_GlyphPosition
#define INCLUDED_lime_text_GlyphPosition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,text,GlyphPosition)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  GlyphPosition_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GlyphPosition_obj OBJ_;
		GlyphPosition_obj();
		Void __construct(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GlyphPosition_obj > __new(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlyphPosition_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GlyphPosition"); }

		::lime::math::Vector2 advance;
		int glyph;
		::lime::math::Vector2 offset;
};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_GlyphPosition */ 
