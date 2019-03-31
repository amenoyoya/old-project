#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
namespace openfl{
namespace display{

::openfl::display::GraphicsDataType GraphicsDataType_obj::BITMAP;

::openfl::display::GraphicsDataType GraphicsDataType_obj::END;

::openfl::display::GraphicsDataType GraphicsDataType_obj::GRADIENT;

::openfl::display::GraphicsDataType GraphicsDataType_obj::PATH;

::openfl::display::GraphicsDataType GraphicsDataType_obj::SOLID;

::openfl::display::GraphicsDataType GraphicsDataType_obj::STROKE;

HX_DEFINE_CREATE_ENUM(GraphicsDataType_obj)

int GraphicsDataType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BITMAP")) return 4;
	if (inName==HX_CSTRING("END")) return 5;
	if (inName==HX_CSTRING("GRADIENT")) return 2;
	if (inName==HX_CSTRING("PATH")) return 3;
	if (inName==HX_CSTRING("SOLID")) return 1;
	if (inName==HX_CSTRING("STROKE")) return 0;
	return super::__FindIndex(inName);
}

int GraphicsDataType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BITMAP")) return 0;
	if (inName==HX_CSTRING("END")) return 0;
	if (inName==HX_CSTRING("GRADIENT")) return 0;
	if (inName==HX_CSTRING("PATH")) return 0;
	if (inName==HX_CSTRING("SOLID")) return 0;
	if (inName==HX_CSTRING("STROKE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GraphicsDataType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BITMAP")) return BITMAP;
	if (inName==HX_CSTRING("END")) return END;
	if (inName==HX_CSTRING("GRADIENT")) return GRADIENT;
	if (inName==HX_CSTRING("PATH")) return PATH;
	if (inName==HX_CSTRING("SOLID")) return SOLID;
	if (inName==HX_CSTRING("STROKE")) return STROKE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("STROKE"),
	HX_CSTRING("SOLID"),
	HX_CSTRING("GRADIENT"),
	HX_CSTRING("PATH"),
	HX_CSTRING("BITMAP"),
	HX_CSTRING("END"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_MARK_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::BITMAP,"BITMAP");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::END,"END");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::GRADIENT,"GRADIENT");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::PATH,"PATH");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::SOLID,"SOLID");
	HX_VISIT_MEMBER_NAME(GraphicsDataType_obj::STROKE,"STROKE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GraphicsDataType_obj::__mClass;

Dynamic __Create_GraphicsDataType_obj() { return new GraphicsDataType_obj; }

void GraphicsDataType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.GraphicsDataType"), hx::TCanCast< GraphicsDataType_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicsDataType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicsDataType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicsDataType_obj::__boot()
{
hx::Static(BITMAP) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("BITMAP"),4);
hx::Static(END) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("END"),5);
hx::Static(GRADIENT) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("GRADIENT"),2);
hx::Static(PATH) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("PATH"),3);
hx::Static(SOLID) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("SOLID"),1);
hx::Static(STROKE) = hx::CreateEnum< GraphicsDataType_obj >(HX_CSTRING("STROKE"),0);
}


} // end namespace openfl
} // end namespace display
