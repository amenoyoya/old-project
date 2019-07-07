#ifndef INCLUDED_lime_text_GlyphMetrics
#define INCLUDED_lime_text_GlyphMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  GlyphMetrics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GlyphMetrics_obj OBJ_;
		GlyphMetrics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GlyphMetrics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlyphMetrics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GlyphMetrics"); }

		::lime::math::Vector2 advance;
		int height;
		::lime::math::Vector2 horizontalBearing;
		::lime::math::Vector2 verticalBearing;
};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_GlyphMetrics */ 
