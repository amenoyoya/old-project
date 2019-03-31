#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace openfl{
namespace text{

::openfl::text::TextFormatAlign TextFormatAlign_obj::CENTER;

::openfl::text::TextFormatAlign TextFormatAlign_obj::JUSTIFY;

::openfl::text::TextFormatAlign TextFormatAlign_obj::LEFT;

::openfl::text::TextFormatAlign TextFormatAlign_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(TextFormatAlign_obj)

int TextFormatAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CENTER")) return 3;
	if (inName==HX_CSTRING("JUSTIFY")) return 2;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 1;
	return super::__FindIndex(inName);
}

int TextFormatAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CENTER")) return 0;
	if (inName==HX_CSTRING("JUSTIFY")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextFormatAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CENTER")) return CENTER;
	if (inName==HX_CSTRING("JUSTIFY")) return JUSTIFY;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("JUSTIFY"),
	HX_CSTRING("CENTER"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TextFormatAlign_obj::__mClass;

Dynamic __Create_TextFormatAlign_obj() { return new TextFormatAlign_obj; }

void TextFormatAlign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextFormatAlign"), hx::TCanCast< TextFormatAlign_obj >,sStaticFields,sMemberFields,
	&__Create_TextFormatAlign_obj, &__Create,
	&super::__SGetClass(), &CreateTextFormatAlign_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextFormatAlign_obj::__boot()
{
hx::Static(CENTER) = hx::CreateEnum< TextFormatAlign_obj >(HX_CSTRING("CENTER"),3);
hx::Static(JUSTIFY) = hx::CreateEnum< TextFormatAlign_obj >(HX_CSTRING("JUSTIFY"),2);
hx::Static(LEFT) = hx::CreateEnum< TextFormatAlign_obj >(HX_CSTRING("LEFT"),0);
hx::Static(RIGHT) = hx::CreateEnum< TextFormatAlign_obj >(HX_CSTRING("RIGHT"),1);
}


} // end namespace openfl
} // end namespace text
