#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketMode
#include <openfl/_internal/renderer/opengl/utils/BucketMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::DrawTiles;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::DrawTriangles;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::Fill;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::Line;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::None;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::PatternFill;

::openfl::_internal::renderer::opengl::utils::BucketMode BucketMode_obj::PatternLine;

HX_DEFINE_CREATE_ENUM(BucketMode_obj)

int BucketMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DrawTiles")) return 6;
	if (inName==HX_CSTRING("DrawTriangles")) return 5;
	if (inName==HX_CSTRING("Fill")) return 1;
	if (inName==HX_CSTRING("Line")) return 3;
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("PatternFill")) return 2;
	if (inName==HX_CSTRING("PatternLine")) return 4;
	return super::__FindIndex(inName);
}

int BucketMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DrawTiles")) return 0;
	if (inName==HX_CSTRING("DrawTriangles")) return 0;
	if (inName==HX_CSTRING("Fill")) return 0;
	if (inName==HX_CSTRING("Line")) return 0;
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("PatternFill")) return 0;
	if (inName==HX_CSTRING("PatternLine")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BucketMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DrawTiles")) return DrawTiles;
	if (inName==HX_CSTRING("DrawTriangles")) return DrawTriangles;
	if (inName==HX_CSTRING("Fill")) return Fill;
	if (inName==HX_CSTRING("Line")) return Line;
	if (inName==HX_CSTRING("None")) return None;
	if (inName==HX_CSTRING("PatternFill")) return PatternFill;
	if (inName==HX_CSTRING("PatternLine")) return PatternLine;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("None"),
	HX_CSTRING("Fill"),
	HX_CSTRING("PatternFill"),
	HX_CSTRING("Line"),
	HX_CSTRING("PatternLine"),
	HX_CSTRING("DrawTriangles"),
	HX_CSTRING("DrawTiles"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BucketMode_obj::DrawTiles,"DrawTiles");
	HX_MARK_MEMBER_NAME(BucketMode_obj::DrawTriangles,"DrawTriangles");
	HX_MARK_MEMBER_NAME(BucketMode_obj::Fill,"Fill");
	HX_MARK_MEMBER_NAME(BucketMode_obj::Line,"Line");
	HX_MARK_MEMBER_NAME(BucketMode_obj::None,"None");
	HX_MARK_MEMBER_NAME(BucketMode_obj::PatternFill,"PatternFill");
	HX_MARK_MEMBER_NAME(BucketMode_obj::PatternLine,"PatternLine");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BucketMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::DrawTiles,"DrawTiles");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::DrawTriangles,"DrawTriangles");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::Fill,"Fill");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::Line,"Line");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::None,"None");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::PatternFill,"PatternFill");
	HX_VISIT_MEMBER_NAME(BucketMode_obj::PatternLine,"PatternLine");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class BucketMode_obj::__mClass;

Dynamic __Create_BucketMode_obj() { return new BucketMode_obj; }

void BucketMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.BucketMode"), hx::TCanCast< BucketMode_obj >,sStaticFields,sMemberFields,
	&__Create_BucketMode_obj, &__Create,
	&super::__SGetClass(), &CreateBucketMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BucketMode_obj::__boot()
{
hx::Static(DrawTiles) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("DrawTiles"),6);
hx::Static(DrawTriangles) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("DrawTriangles"),5);
hx::Static(Fill) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("Fill"),1);
hx::Static(Line) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("Line"),3);
hx::Static(None) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("None"),0);
hx::Static(PatternFill) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("PatternFill"),2);
hx::Static(PatternLine) = hx::CreateEnum< BucketMode_obj >(HX_CSTRING("PatternLine"),4);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
