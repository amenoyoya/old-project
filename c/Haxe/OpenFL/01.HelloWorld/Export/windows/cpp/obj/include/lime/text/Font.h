#ifndef INCLUDED_lime_text_Font
#define INCLUDED_lime_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,GlyphMetrics)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String name);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Font_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Font"); }

		int ascender;
		int descender;
		int height;
		::String name;
		int numGlyphs;
		Dynamic src;
		int underlinePosition;
		int underlineThickness;
		int unitsPerEM;
		::String __fontPath;
		virtual Dynamic decompose( );
		Dynamic decompose_dyn();

		virtual int getGlyph( ::String character);
		Dynamic getGlyph_dyn();

		virtual Array< int > getGlyphs( ::String characters);
		Dynamic getGlyphs_dyn();

		virtual ::lime::text::GlyphMetrics getGlyphMetrics( int glyph);
		Dynamic getGlyphMetrics_dyn();

		virtual ::lime::graphics::Image renderGlyph( int glyph,int fontSize);
		Dynamic renderGlyph_dyn();

		virtual ::haxe::ds::IntMap renderGlyphs( Array< int > glyphs,int fontSize);
		Dynamic renderGlyphs_dyn();

		virtual Void __fromBytes( ::lime::utils::ByteArray bytes);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path);
		Dynamic __fromFile_dyn();

		virtual int get_ascender( );
		Dynamic get_ascender_dyn();

		virtual int get_descender( );
		Dynamic get_descender_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_numGlyphs( );
		Dynamic get_numGlyphs_dyn();

		virtual int get_underlinePosition( );
		Dynamic get_underlinePosition_dyn();

		virtual int get_underlineThickness( );
		Dynamic get_underlineThickness_dyn();

		virtual int get_unitsPerEM( );
		Dynamic get_unitsPerEM_dyn();

		static ::lime::text::Font fromBytes( ::lime::utils::ByteArray bytes);
		static Dynamic fromBytes_dyn();

		static ::lime::text::Font fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static Dynamic lime_font_get_ascender;
		static Dynamic &lime_font_get_ascender_dyn() { return lime_font_get_ascender;}
		static Dynamic lime_font_get_descender;
		static Dynamic &lime_font_get_descender_dyn() { return lime_font_get_descender;}
		static Dynamic lime_font_get_family_name;
		static Dynamic &lime_font_get_family_name_dyn() { return lime_font_get_family_name;}
		static Dynamic lime_font_get_glyph_index;
		static Dynamic &lime_font_get_glyph_index_dyn() { return lime_font_get_glyph_index;}
		static Dynamic lime_font_get_glyph_indices;
		static Dynamic &lime_font_get_glyph_indices_dyn() { return lime_font_get_glyph_indices;}
		static Dynamic lime_font_get_glyph_metrics;
		static Dynamic &lime_font_get_glyph_metrics_dyn() { return lime_font_get_glyph_metrics;}
		static Dynamic lime_font_get_height;
		static Dynamic &lime_font_get_height_dyn() { return lime_font_get_height;}
		static Dynamic lime_font_get_num_glyphs;
		static Dynamic &lime_font_get_num_glyphs_dyn() { return lime_font_get_num_glyphs;}
		static Dynamic lime_font_get_underline_position;
		static Dynamic &lime_font_get_underline_position_dyn() { return lime_font_get_underline_position;}
		static Dynamic lime_font_get_underline_thickness;
		static Dynamic &lime_font_get_underline_thickness_dyn() { return lime_font_get_underline_thickness;}
		static Dynamic lime_font_get_units_per_em;
		static Dynamic &lime_font_get_units_per_em_dyn() { return lime_font_get_units_per_em;}
		static Dynamic lime_font_load;
		static Dynamic lime_font_outline_decompose;
		static Dynamic &lime_font_outline_decompose_dyn() { return lime_font_outline_decompose;}
		static Dynamic lime_font_render_glyph;
		static Dynamic &lime_font_render_glyph_dyn() { return lime_font_render_glyph;}
		static Dynamic lime_font_render_glyphs;
		static Dynamic &lime_font_render_glyphs_dyn() { return lime_font_render_glyphs;}
		static Dynamic lime_font_set_size;
		static Dynamic &lime_font_set_size_dyn() { return lime_font_set_size;}
};

} // end namespace lime
} // end namespace text

#endif /* INCLUDED_lime_text_Font */ 
