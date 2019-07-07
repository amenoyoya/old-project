#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::FillType  FillType_obj::Color(int color,Float alpha)
	{ return hx::CreateEnum< FillType_obj >(HX_CSTRING("Color"),1,hx::DynamicArray(0,2).Add(color).Add(alpha)); }

::openfl::_internal::renderer::opengl::utils::FillType FillType_obj::Gradient;

::openfl::_internal::renderer::opengl::utils::FillType FillType_obj::None;

::openfl::_internal::renderer::opengl::utils::FillType  FillType_obj::Texture(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< FillType_obj >(HX_CSTRING("Texture"),2,hx::DynamicArray(0,4).Add(bitmap).Add(matrix).Add(repeat).Add(smooth)); }

HX_DEFINE_CREATE_ENUM(FillType_obj)

int FillType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Color")) return 1;
	if (inName==HX_CSTRING("Gradient")) return 3;
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Texture")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FillType_obj,Color,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(FillType_obj,Texture,return)

int FillType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Color")) return 2;
	if (inName==HX_CSTRING("Gradient")) return 0;
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Texture")) return 4;
	return super::__FindArgCount(inName);
}

Dynamic FillType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Color")) return Color_dyn();
	if (inName==HX_CSTRING("Gradient")) return Gradient;
	if (inName==HX_CSTRING("None")) return None;
	if (inName==HX_CSTRING("Texture")) return Texture_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("None"),
	HX_CSTRING("Color"),
	HX_CSTRING("Texture"),
	HX_CSTRING("Gradient"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillType_obj::Gradient,"Gradient");
	HX_MARK_MEMBER_NAME(FillType_obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FillType_obj::Gradient,"Gradient");
	HX_VISIT_MEMBER_NAME(FillType_obj::None,"None");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class FillType_obj::__mClass;

Dynamic __Create_FillType_obj() { return new FillType_obj; }

void FillType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.FillType"), hx::TCanCast< FillType_obj >,sStaticFields,sMemberFields,
	&__Create_FillType_obj, &__Create,
	&super::__SGetClass(), &CreateFillType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FillType_obj::__boot()
{
hx::Static(Gradient) = hx::CreateEnum< FillType_obj >(HX_CSTRING("Gradient"),3);
hx::Static(None) = hx::CreateEnum< FillType_obj >(HX_CSTRING("None"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
