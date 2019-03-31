#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#define INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,DrawPath)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FillType)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GLStack)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,GraphicType)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,LineStyle)
HX_DECLARE_CLASS2(openfl,display,Graphics)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  DrawPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawPath_obj OBJ_;
		DrawPath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DrawPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawPath"); }

		::openfl::_internal::renderer::opengl::utils::LineStyle line;
		::openfl::_internal::renderer::opengl::utils::FillType fill;
		int fillIndex;
		bool isRemovable;
		int winding;
		Array< Float > points;
		::openfl::_internal::renderer::opengl::utils::GraphicType type;
		virtual Void update( ::openfl::_internal::renderer::opengl::utils::LineStyle line,::openfl::_internal::renderer::opengl::utils::FillType fill,int fillIndex,int winding);
		Dynamic update_dyn();

		virtual Void updateLine( ::openfl::_internal::renderer::opengl::utils::LineStyle line);
		Dynamic updateLine_dyn();

		static ::openfl::_internal::renderer::opengl::utils::GLStack getStack( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl);
		static Dynamic getStack_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath */ 
