#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
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
namespace display{

::openfl::display::DrawCommand  DrawCommand_obj::BeginBitmapFill(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("BeginBitmapFill"),0,hx::DynamicArray(0,4).Add(bitmap).Add(matrix).Add(repeat).Add(smooth)); }

::openfl::display::DrawCommand  DrawCommand_obj::BeginFill(int color,Float alpha)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("BeginFill"),1,hx::DynamicArray(0,2).Add(color).Add(alpha)); }

::openfl::display::DrawCommand  DrawCommand_obj::CubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("CubicCurveTo"),2,hx::DynamicArray(0,6).Add(controlX1).Add(controlY1).Add(controlX2).Add(controlY2).Add(anchorX).Add(anchorY)); }

::openfl::display::DrawCommand  DrawCommand_obj::CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("CurveTo"),3,hx::DynamicArray(0,4).Add(controlX).Add(controlY).Add(anchorX).Add(anchorY)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawCircle(Float x,Float y,Float radius)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawCircle"),4,hx::DynamicArray(0,3).Add(x).Add(y).Add(radius)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawEllipse(Float x,Float y,Float width,Float height)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawEllipse"),5,hx::DynamicArray(0,4).Add(x).Add(y).Add(width).Add(height)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawPathC(Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawPathC"),14,hx::DynamicArray(0,3).Add(commands).Add(data).Add(winding)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawRect(Float x,Float y,Float width,Float height)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawRect"),6,hx::DynamicArray(0,4).Add(x).Add(y).Add(width).Add(height)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawRoundRect(Float x,Float y,Float width,Float height,Float rx,Float ry)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawRoundRect"),7,hx::DynamicArray(0,6).Add(x).Add(y).Add(width).Add(height).Add(rx).Add(ry)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawTiles"),8,hx::DynamicArray(0,5).Add(sheet).Add(tileData).Add(smooth).Add(flags).Add(count)); }

::openfl::display::DrawCommand  DrawCommand_obj::DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("DrawTriangles"),9,hx::DynamicArray(0,6).Add(vertices).Add(indices).Add(uvtData).Add(culling).Add(colors).Add(blendMode)); }

::openfl::display::DrawCommand DrawCommand_obj::EndFill;

::openfl::display::DrawCommand  DrawCommand_obj::LineStyle(Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("LineStyle"),11,hx::DynamicArray(0,8).Add(thickness).Add(color).Add(alpha).Add(pixelHinting).Add(scaleMode).Add(caps).Add(joints).Add(miterLimit)); }

::openfl::display::DrawCommand  DrawCommand_obj::LineTo(Float x,Float y)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("LineTo"),12,hx::DynamicArray(0,2).Add(x).Add(y)); }

::openfl::display::DrawCommand  DrawCommand_obj::MoveTo(Float x,Float y)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("MoveTo"),13,hx::DynamicArray(0,2).Add(x).Add(y)); }

::openfl::display::DrawCommand  DrawCommand_obj::OverrideMatrix(::openfl::geom::Matrix matrix)
	{ return hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("OverrideMatrix"),15,hx::DynamicArray(0,1).Add(matrix)); }

HX_DEFINE_CREATE_ENUM(DrawCommand_obj)

int DrawCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BeginBitmapFill")) return 0;
	if (inName==HX_CSTRING("BeginFill")) return 1;
	if (inName==HX_CSTRING("CubicCurveTo")) return 2;
	if (inName==HX_CSTRING("CurveTo")) return 3;
	if (inName==HX_CSTRING("DrawCircle")) return 4;
	if (inName==HX_CSTRING("DrawEllipse")) return 5;
	if (inName==HX_CSTRING("DrawPathC")) return 14;
	if (inName==HX_CSTRING("DrawRect")) return 6;
	if (inName==HX_CSTRING("DrawRoundRect")) return 7;
	if (inName==HX_CSTRING("DrawTiles")) return 8;
	if (inName==HX_CSTRING("DrawTriangles")) return 9;
	if (inName==HX_CSTRING("EndFill")) return 10;
	if (inName==HX_CSTRING("LineStyle")) return 11;
	if (inName==HX_CSTRING("LineTo")) return 12;
	if (inName==HX_CSTRING("MoveTo")) return 13;
	if (inName==HX_CSTRING("OverrideMatrix")) return 15;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,BeginBitmapFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,BeginFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,CubicCurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,CurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,DrawCircle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,DrawEllipse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(DrawCommand_obj,DrawPathC,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(DrawCommand_obj,DrawRect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,DrawRoundRect,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC5(DrawCommand_obj,DrawTiles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC6(DrawCommand_obj,DrawTriangles,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(DrawCommand_obj,LineStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,LineTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawCommand_obj,MoveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCommand_obj,OverrideMatrix,return)

int DrawCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BeginBitmapFill")) return 4;
	if (inName==HX_CSTRING("BeginFill")) return 2;
	if (inName==HX_CSTRING("CubicCurveTo")) return 6;
	if (inName==HX_CSTRING("CurveTo")) return 4;
	if (inName==HX_CSTRING("DrawCircle")) return 3;
	if (inName==HX_CSTRING("DrawEllipse")) return 4;
	if (inName==HX_CSTRING("DrawPathC")) return 3;
	if (inName==HX_CSTRING("DrawRect")) return 4;
	if (inName==HX_CSTRING("DrawRoundRect")) return 6;
	if (inName==HX_CSTRING("DrawTiles")) return 5;
	if (inName==HX_CSTRING("DrawTriangles")) return 6;
	if (inName==HX_CSTRING("EndFill")) return 0;
	if (inName==HX_CSTRING("LineStyle")) return 8;
	if (inName==HX_CSTRING("LineTo")) return 2;
	if (inName==HX_CSTRING("MoveTo")) return 2;
	if (inName==HX_CSTRING("OverrideMatrix")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic DrawCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BeginBitmapFill")) return BeginBitmapFill_dyn();
	if (inName==HX_CSTRING("BeginFill")) return BeginFill_dyn();
	if (inName==HX_CSTRING("CubicCurveTo")) return CubicCurveTo_dyn();
	if (inName==HX_CSTRING("CurveTo")) return CurveTo_dyn();
	if (inName==HX_CSTRING("DrawCircle")) return DrawCircle_dyn();
	if (inName==HX_CSTRING("DrawEllipse")) return DrawEllipse_dyn();
	if (inName==HX_CSTRING("DrawPathC")) return DrawPathC_dyn();
	if (inName==HX_CSTRING("DrawRect")) return DrawRect_dyn();
	if (inName==HX_CSTRING("DrawRoundRect")) return DrawRoundRect_dyn();
	if (inName==HX_CSTRING("DrawTiles")) return DrawTiles_dyn();
	if (inName==HX_CSTRING("DrawTriangles")) return DrawTriangles_dyn();
	if (inName==HX_CSTRING("EndFill")) return EndFill;
	if (inName==HX_CSTRING("LineStyle")) return LineStyle_dyn();
	if (inName==HX_CSTRING("LineTo")) return LineTo_dyn();
	if (inName==HX_CSTRING("MoveTo")) return MoveTo_dyn();
	if (inName==HX_CSTRING("OverrideMatrix")) return OverrideMatrix_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BeginBitmapFill"),
	HX_CSTRING("BeginFill"),
	HX_CSTRING("CubicCurveTo"),
	HX_CSTRING("CurveTo"),
	HX_CSTRING("DrawCircle"),
	HX_CSTRING("DrawEllipse"),
	HX_CSTRING("DrawRect"),
	HX_CSTRING("DrawRoundRect"),
	HX_CSTRING("DrawTiles"),
	HX_CSTRING("DrawTriangles"),
	HX_CSTRING("EndFill"),
	HX_CSTRING("LineStyle"),
	HX_CSTRING("LineTo"),
	HX_CSTRING("MoveTo"),
	HX_CSTRING("DrawPathC"),
	HX_CSTRING("OverrideMatrix"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommand_obj::EndFill,"EndFill");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DrawCommand_obj::EndFill,"EndFill");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class DrawCommand_obj::__mClass;

Dynamic __Create_DrawCommand_obj() { return new DrawCommand_obj; }

void DrawCommand_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DrawCommand"), hx::TCanCast< DrawCommand_obj >,sStaticFields,sMemberFields,
	&__Create_DrawCommand_obj, &__Create,
	&super::__SGetClass(), &CreateDrawCommand_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void DrawCommand_obj::__boot()
{
hx::Static(EndFill) = hx::CreateEnum< DrawCommand_obj >(HX_CSTRING("EndFill"),10);
}


} // end namespace openfl
} // end namespace display
