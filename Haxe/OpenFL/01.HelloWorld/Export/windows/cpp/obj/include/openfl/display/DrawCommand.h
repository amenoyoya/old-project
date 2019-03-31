#ifndef INCLUDED_openfl_display_DrawCommand
#define INCLUDED_openfl_display_DrawCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,DrawCommand)
HX_DECLARE_CLASS2(openfl,display,GraphicsPathWinding)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,display,TriangleCulling)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace display{


class DrawCommand_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DrawCommand_obj OBJ_;

	public:
		DrawCommand_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.display.DrawCommand"); }
		::String __ToString() const { return HX_CSTRING("DrawCommand.") + tag; }

		static ::openfl::display::DrawCommand BeginBitmapFill(::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		static Dynamic BeginBitmapFill_dyn();
		static ::openfl::display::DrawCommand BeginFill(int color,Float alpha);
		static Dynamic BeginFill_dyn();
		static ::openfl::display::DrawCommand CubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		static Dynamic CubicCurveTo_dyn();
		static ::openfl::display::DrawCommand CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		static Dynamic CurveTo_dyn();
		static ::openfl::display::DrawCommand DrawCircle(Float x,Float y,Float radius);
		static Dynamic DrawCircle_dyn();
		static ::openfl::display::DrawCommand DrawEllipse(Float x,Float y,Float width,Float height);
		static Dynamic DrawEllipse_dyn();
		static ::openfl::display::DrawCommand DrawPathC(Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding);
		static Dynamic DrawPathC_dyn();
		static ::openfl::display::DrawCommand DrawRect(Float x,Float y,Float width,Float height);
		static Dynamic DrawRect_dyn();
		static ::openfl::display::DrawCommand DrawRoundRect(Float x,Float y,Float width,Float height,Float rx,Float ry);
		static Dynamic DrawRoundRect_dyn();
		static ::openfl::display::DrawCommand DrawTiles(::openfl::display::Tilesheet sheet,Array< Float > tileData,bool smooth,int flags,int count);
		static Dynamic DrawTiles_dyn();
		static ::openfl::display::DrawCommand DrawTriangles(Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::display::TriangleCulling culling,Array< int > colors,int blendMode);
		static Dynamic DrawTriangles_dyn();
		static ::openfl::display::DrawCommand EndFill;
		static inline ::openfl::display::DrawCommand EndFill_dyn() { return EndFill; }
		static ::openfl::display::DrawCommand LineStyle(Dynamic thickness,Dynamic color,Dynamic alpha,Dynamic pixelHinting,::openfl::display::LineScaleMode scaleMode,::openfl::display::CapsStyle caps,::openfl::display::JointStyle joints,Dynamic miterLimit);
		static Dynamic LineStyle_dyn();
		static ::openfl::display::DrawCommand LineTo(Float x,Float y);
		static Dynamic LineTo_dyn();
		static ::openfl::display::DrawCommand MoveTo(Float x,Float y);
		static Dynamic MoveTo_dyn();
		static ::openfl::display::DrawCommand OverrideMatrix(::openfl::geom::Matrix matrix);
		static Dynamic OverrideMatrix_dyn();
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DrawCommand */ 
