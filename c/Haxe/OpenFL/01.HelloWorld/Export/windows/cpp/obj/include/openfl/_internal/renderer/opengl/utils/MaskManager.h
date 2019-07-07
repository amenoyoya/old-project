#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_MaskManager
#define INCLUDED_openfl__internal_renderer_opengl_utils_MaskManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,MaskManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  MaskManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MaskManager_obj OBJ_;
		MaskManager_obj();
		Void __construct(::lime::graphics::GLRenderContext gl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MaskManager_obj > __new(::lime::graphics::GLRenderContext gl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaskManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MaskManager"); }

		::lime::graphics::GLRenderContext gl;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void setContext( ::lime::graphics::GLRenderContext gl);
		Dynamic setContext_dyn();

		virtual Void pushMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic pushMask_dyn();

		virtual Void popMask( ::openfl::display::DisplayObject object,::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic popMask_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils_MaskManager */ 
