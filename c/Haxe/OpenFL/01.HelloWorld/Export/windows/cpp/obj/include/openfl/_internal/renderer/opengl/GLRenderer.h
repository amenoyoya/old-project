#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#define INCLUDED_openfl__internal_renderer_opengl_GLRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_internal/renderer/AbstractRenderer.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLRenderer)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,BlendModeManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,MaskManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,ShaderManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,StencilManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GLRenderer_obj : public ::openfl::_internal::renderer::AbstractRenderer_obj{
	public:
		typedef ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef GLRenderer_obj OBJ_;
		GLRenderer_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GLRenderer_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GLRenderer"); }

		::openfl::_internal::renderer::opengl::utils::BlendModeManager blendModeManager;
		bool contextLost;
		::openfl::_internal::renderer::opengl::utils::FilterManager filterManager;
		::lime::graphics::GLRenderContext gl;
		int _glContextId;
		::openfl::_internal::renderer::opengl::utils::MaskManager maskManager;
		::openfl::geom::Point offset;
		Dynamic options;
		bool preserveDrawingBuffer;
		::openfl::geom::Point projection;
		::openfl::_internal::renderer::opengl::utils::ShaderManager shaderManager;
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spriteBatch;
		::openfl::_internal::renderer::opengl::utils::StencilManager stencilManager;
		Dynamic view;
		Dynamic __stage;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void handleContextLost( Dynamic event);
		Dynamic handleContextLost_dyn();

		virtual Void handleContextRestored( );
		Dynamic handleContextRestored_dyn();

		virtual Void render( ::openfl::display::Stage stage);

		virtual Void renderDisplayObject( ::openfl::display::DisplayObject displayObject,::openfl::geom::Point projection,::lime::graphics::opengl::GLFramebuffer buffer);
		Dynamic renderDisplayObject_dyn();

		virtual Void resize( int width,int height);

		static ::haxe::ds::EnumValueMap blendModesWebGL;
		static int glContextId;
		static Array< ::Dynamic > glContexts;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLRenderer */ 
