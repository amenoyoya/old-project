#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,DefaultShader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterManager)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterTexture)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  FilterManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FilterManager_obj OBJ_;
		FilterManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl,bool transparent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FilterManager_obj > __new(::lime::graphics::GLRenderContext gl,bool transparent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FilterManager"); }

		::lime::graphics::opengl::GLFramebuffer buffer;
		::lime::utils::Float32Array colorArray;
		::lime::graphics::opengl::GLBuffer colorBuffer;
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader defaultShader;
		Dynamic filterStack;
		::lime::graphics::GLRenderContext gl;
		int height;
		::lime::graphics::opengl::GLBuffer indexBuffer;
		Float offsetX;
		Float offsetY;
		::openfl::_internal::renderer::RenderSession renderSession;
		Array< ::Dynamic > texturePool;
		bool transparent;
		::lime::utils::Float32Array uvArray;
		::lime::graphics::opengl::GLBuffer uvBuffer;
		::lime::utils::Float32Array vertexArray;
		::lime::graphics::opengl::GLBuffer vertexBuffer;
		int width;
		virtual Void applyFilterPass( Dynamic filter,::openfl::geom::Rectangle filterArea,int width,int height);
		Dynamic applyFilterPass_dyn();

		virtual Void begin( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::opengl::GLFramebuffer buffer);
		Dynamic begin_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void initShaderBuffers( );
		Dynamic initShaderBuffers_dyn();

		virtual Void popFilter( );
		Dynamic popFilter_dyn();

		virtual Void pushFilter( Dynamic filterBlock);
		Dynamic pushFilter_dyn();

		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager */ 
