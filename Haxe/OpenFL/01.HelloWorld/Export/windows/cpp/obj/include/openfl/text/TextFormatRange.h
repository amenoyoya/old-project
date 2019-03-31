#ifndef INCLUDED_openfl_text_TextFormatRange
#define INCLUDED_openfl_text_TextFormatRange

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,text,TextFormatRange)
namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextFormatRange_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFormatRange_obj OBJ_;
		TextFormatRange_obj();
		Void __construct(::openfl::text::TextFormat format,int start,int end);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextFormatRange_obj > __new(::openfl::text::TextFormat format,int start,int end);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextFormatRange_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextFormatRange"); }

		int end;
		::openfl::text::TextFormat format;
		int start;
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextFormatRange */ 
