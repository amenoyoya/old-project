#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#define INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasGraphics)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES  CanvasGraphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CanvasGraphics_obj OBJ_;
		CanvasGraphics_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CanvasGraphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasGraphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CanvasGraphics"); }

		static Float SIN45;
		static Float TAN22;
		static ::openfl::geom::Rectangle bounds;
		static bool hasFill;
		static bool hasStroke;
		static bool inPath;
		static ::openfl::geom::Matrix inversePendingMatrix;
		static ::openfl::geom::Matrix pendingMatrix;
		static Float positionX;
		static Float positionY;
		static bool setFill;
		static Void beginPath( );
		static Dynamic beginPath_dyn();

		static Void beginPatternFill( ::openfl::display::BitmapData bitmapFill,bool bitmapRepeat);
		static Dynamic beginPatternFill_dyn();

		static Void closePath( bool closeFill);
		static Dynamic closePath_dyn();

		static Void drawRoundRect( Float x,Float y,Float width,Float height,Float rx,Float ry);
		static Dynamic drawRoundRect_dyn();

		static Void render( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic render_dyn();

		static Void renderMask( ::openfl::display::Graphics graphics,::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic renderMask_dyn();

		static Void createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,Float width,Float height);
		static Dynamic createTempPatternCanvas_dyn();

		static bool isCCW( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static Dynamic isCCW_dyn();

		static Dynamic normalizeUvt( Array< Float > uvt,hx::Null< bool >  skipT);
		static Dynamic normalizeUvt_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics */ 
