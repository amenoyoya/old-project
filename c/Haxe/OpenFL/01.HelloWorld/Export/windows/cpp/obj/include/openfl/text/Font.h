#ifndef INCLUDED_openfl_text_Font
#define INCLUDED_openfl_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <lime/text/Font.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,FontStyle)
HX_DECLARE_CLASS2(openfl,text,FontType)
namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public ::lime::text::Font_obj{
	public:
		typedef ::lime::text::Font_obj super;
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

		::openfl::text::FontStyle fontStyle;
		::openfl::text::FontType fontType;
		virtual ::String get_fontName( );
		Dynamic get_fontName_dyn();

		virtual ::String set_fontName( ::String value);
		Dynamic set_fontName_dyn();

		static Array< ::Dynamic > __registeredFonts;
		static Array< ::Dynamic > enumerateFonts( hx::Null< bool >  enumerateDeviceFonts);
		static Dynamic enumerateFonts_dyn();

		static ::openfl::text::Font fromBytes( ::lime::utils::ByteArray bytes);
		static Dynamic fromBytes_dyn();

		static ::openfl::text::Font fromFile( ::String path);
		static Dynamic fromFile_dyn();

		static Void registerFont( ::Class font);
		static Dynamic registerFont_dyn();

		static ::openfl::text::Font __fromLimeFont( ::lime::text::Font value);
		static Dynamic __fromLimeFont_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_Font */ 
