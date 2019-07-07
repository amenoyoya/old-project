#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace display{

HX_DEFINE_DYNAMIC_FUNC1(IBitmapDrawable_obj,__renderCanvas,)

HX_DEFINE_DYNAMIC_FUNC1(IBitmapDrawable_obj,__renderGL,)

HX_DEFINE_DYNAMIC_FUNC1(IBitmapDrawable_obj,__renderMask,)

HX_DEFINE_DYNAMIC_FUNC1(IBitmapDrawable_obj,__updateChildren,)

HX_DEFINE_DYNAMIC_FUNC1(IBitmapDrawable_obj,__updateMask,)


static ::String sMemberFields[] = {
	HX_CSTRING("__worldTransform"),
	HX_CSTRING("__worldColorTransform"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__renderMask"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("__updateMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IBitmapDrawable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IBitmapDrawable_obj::__mClass,"__mClass");
};

#endif

Class IBitmapDrawable_obj::__mClass;

void IBitmapDrawable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.IBitmapDrawable"), hx::TCanCast< IBitmapDrawable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IBitmapDrawable_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
