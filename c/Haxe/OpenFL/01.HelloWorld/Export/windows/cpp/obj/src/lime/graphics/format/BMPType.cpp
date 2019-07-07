#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
namespace lime{
namespace graphics{
namespace format{

::lime::graphics::format::BMPType BMPType_obj::BITFIELD;

::lime::graphics::format::BMPType BMPType_obj::ICO;

::lime::graphics::format::BMPType BMPType_obj::RGB;

HX_DEFINE_CREATE_ENUM(BMPType_obj)

int BMPType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BITFIELD")) return 1;
	if (inName==HX_CSTRING("ICO")) return 2;
	if (inName==HX_CSTRING("RGB")) return 0;
	return super::__FindIndex(inName);
}

int BMPType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BITFIELD")) return 0;
	if (inName==HX_CSTRING("ICO")) return 0;
	if (inName==HX_CSTRING("RGB")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BMPType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BITFIELD")) return BITFIELD;
	if (inName==HX_CSTRING("ICO")) return ICO;
	if (inName==HX_CSTRING("RGB")) return RGB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("RGB"),
	HX_CSTRING("BITFIELD"),
	HX_CSTRING("ICO"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMPType_obj::BITFIELD,"BITFIELD");
	HX_MARK_MEMBER_NAME(BMPType_obj::ICO,"ICO");
	HX_MARK_MEMBER_NAME(BMPType_obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMPType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BMPType_obj::BITFIELD,"BITFIELD");
	HX_VISIT_MEMBER_NAME(BMPType_obj::ICO,"ICO");
	HX_VISIT_MEMBER_NAME(BMPType_obj::RGB,"RGB");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BMPType_obj::__mClass;

Dynamic __Create_BMPType_obj() { return new BMPType_obj; }

void BMPType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.format.BMPType"), hx::TCanCast< BMPType_obj >,sStaticFields,sMemberFields,
	&__Create_BMPType_obj, &__Create,
	&super::__SGetClass(), &CreateBMPType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BMPType_obj::__boot()
{
hx::Static(BITFIELD) = hx::CreateEnum< BMPType_obj >(HX_CSTRING("BITFIELD"),1);
hx::Static(ICO) = hx::CreateEnum< BMPType_obj >(HX_CSTRING("ICO"),2);
hx::Static(RGB) = hx::CreateEnum< BMPType_obj >(HX_CSTRING("RGB"),0);
}


} // end namespace lime
} // end namespace graphics
} // end namespace format
