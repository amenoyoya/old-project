#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_display_TriangleCulling
#include <openfl/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Circle;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count)
	{ return hx::CreateEnum< GraphicType_obj >(HX_CSTRING("DrawTiles"),5,hx::DynamicArray(0,5).Add(sheet).Add(tileData).Add(smooth).Add(flags).Add(count)); }

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode)
	{ return hx::CreateEnum< GraphicType_obj >(HX_CSTRING("DrawTriangles"),4,hx::DynamicArray(0,6).Add(vertices).Add(indices).Add(uvtData).Add(culling).Add(colors).Add(blendMode)); }

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Ellipse;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::OverrideMatrix(::openfl::geom::Matrix matrix)
	{ return hx::CreateEnum< GraphicType_obj >(HX_CSTRING("OverrideMatrix"),6,hx::DynamicArray(0,1).Add(matrix)); }

::openfl::_internal::renderer::opengl::utils::GraphicType GraphicType_obj::Polygon;

::openfl::_internal::renderer::opengl::utils::GraphicType  GraphicType_obj::Rectangle(bool rounded)
	{ return hx::CreateEnum< GraphicType_obj >(HX_CSTRING("Rectangle"),1,hx::DynamicArray(0,1).Add(rounded)); }

HX_DEFINE_CREATE_ENUM(GraphicType_obj)

int GraphicType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Circle")) return 2;
	if (inName==HX_CSTRING("DrawTiles")) return 5;
	if (inName==HX_CSTRING("DrawTriangles")) return 4;
	if (inName==HX_CSTRING("Ellipse")) return 3;
	if (inName==HX_CSTRING("OverrideMatrix")) return 6;
	if (inName==HX_CSTRING("Polygon")) return 0;
	if (inName==HX_CSTRING("Rectangle")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC5(GraphicType_obj,DrawTiles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(GraphicType_obj,DrawTriangles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,OverrideMatrix,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicType_obj,Rectangle,return)

int GraphicType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Circle")) return 0;
	if (inName==HX_CSTRING("DrawTiles")) return 5;
	if (inName==HX_CSTRING("DrawTriangles")) return 6;
	if (inName==HX_CSTRING("Ellipse")) return 0;
	if (inName==HX_CSTRING("OverrideMatrix")) return 1;
	if (inName==HX_CSTRING("Polygon")) return 0;
	if (inName==HX_CSTRING("Rectangle")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic GraphicType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Circle")) return Circle;
	if (inName==HX_CSTRING("DrawTiles")) return DrawTiles_dyn();
	if (inName==HX_CSTRING("DrawTriangles")) return DrawTriangles_dyn();
	if (inName==HX_CSTRING("Ellipse")) return Ellipse;
	if (inName==HX_CSTRING("OverrideMatrix")) return OverrideMatrix_dyn();
	if (inName==HX_CSTRING("Polygon")) return Polygon;
	if (inName==HX_CSTRING("Rectangle")) return Rectangle_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Polygon"),
	HX_CSTRING("Rectangle"),
	HX_CSTRING("Circle"),
	HX_CSTRING("Ellipse"),
	HX_CSTRING("DrawTriangles"),
	HX_CSTRING("DrawTiles"),
	HX_CSTRING("OverrideMatrix"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_MARK_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Circle,"Circle");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Ellipse,"Ellipse");
	HX_VISIT_MEMBER_NAME(GraphicType_obj::Polygon,"Polygon");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GraphicType_obj::__mClass;

Dynamic __Create_GraphicType_obj() { return new GraphicType_obj; }

void GraphicType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GraphicType"), hx::TCanCast< GraphicType_obj >,sStaticFields,sMemberFields,
	&__Create_GraphicType_obj, &__Create,
	&super::__SGetClass(), &CreateGraphicType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GraphicType_obj::__boot()
{
hx::Static(Circle) = hx::CreateEnum< GraphicType_obj >(HX_CSTRING("Circle"),2);
hx::Static(Ellipse) = hx::CreateEnum< GraphicType_obj >(HX_CSTRING("Ellipse"),3);
hx::Static(Polygon) = hx::CreateEnum< GraphicType_obj >(HX_CSTRING("Polygon"),0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
