#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
namespace openfl{
namespace text{

Void TextFormatRange_obj::__construct(::openfl::text::TextFormat format,int start,int end)
{
HX_STACK_FRAME("openfl.text.TextFormatRange","new",0x1e516308,"openfl.text.TextFormatRange.new","openfl/text/TextField.hx",1922,0xccf02094)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(1924)
	this->format = format;
	HX_STACK_LINE(1925)
	this->start = start;
	HX_STACK_LINE(1926)
	this->end = end;
}
;
	return null();
}

//TextFormatRange_obj::~TextFormatRange_obj() { }

Dynamic TextFormatRange_obj::__CreateEmpty() { return  new TextFormatRange_obj; }
hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__new(::openfl::text::TextFormat format,int start,int end)
{  hx::ObjectPtr< TextFormatRange_obj > result = new TextFormatRange_obj();
	result->__construct(format,start,end);
	return result;}

Dynamic TextFormatRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormatRange_obj > result = new TextFormatRange_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


TextFormatRange_obj::TextFormatRange_obj()
{
}

void TextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormatRange);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void TextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(start,"start");
}

Dynamic TextFormatRange_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFormatRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("start"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,end),HX_CSTRING("end")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextFormatRange_obj,format),HX_CSTRING("format")},
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,start),HX_CSTRING("start")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("end"),
	HX_CSTRING("format"),
	HX_CSTRING("start"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#endif

Class TextFormatRange_obj::__mClass;

void TextFormatRange_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextFormatRange"), hx::TCanCast< TextFormatRange_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TextFormatRange_obj::__boot()
{
}

} // end namespace openfl
} // end namespace text
