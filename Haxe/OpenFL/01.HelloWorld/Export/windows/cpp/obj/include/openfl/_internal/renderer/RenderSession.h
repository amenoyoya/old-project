#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#define INCLUDED_openfl__internal_renderer_RenderSession

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,CanvasRenderContext)
HX_DECLARE_CLASS2(lime,graphics,DOMRenderContext)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BlendModeManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,ShaderManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,StencilManager)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace openfl{
namespace _internal{
namespace renderer{


class HXCPP_CLASS_ATTRIBUTES  RenderSession_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderSession_obj OBJ_;
		RenderSession_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderSession_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderSession_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderSession"); }

		::lime::graphics::CanvasRenderContext context;
		::lime::graphics::DOMRenderContext element;
		::lime::graphics::GLRenderContext gl;
		::lime::utils::Float32Array projectionMatrix;
		::openfl::_internal::renderer::AbstractRenderer renderer;
		bool roundPixels;
		::String transformProperty;
		::String transformOriginProperty;
		::String vendorPrefix;
		int z;
		int drawCount;
		::openfl::display::BlendMode currentBlendMode;
		::openfl::geom::Point projection;
		::openfl::geom::Point offset;
		::openfl::_internal::renderer::opengl::utils::ShaderManager shaderManager;
		Dynamic maskManager;
		::openfl::_internal::renderer::opengl::utils::FilterManager filterManager;
		::openfl::_internal::renderer::opengl::utils::BlendModeManager blendModeManager;
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spriteBatch;
		::openfl::_internal::renderer::opengl::utils::StencilManager stencilManager;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_RenderSession */ 
