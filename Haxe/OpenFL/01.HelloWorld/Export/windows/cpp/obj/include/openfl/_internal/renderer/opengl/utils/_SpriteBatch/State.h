#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#define INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,shaders2,Shader)
HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_SpriteBatch,State)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _SpriteBatch{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< State_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("State"); }

		::lime::graphics::opengl::GLTexture texture;
		bool textureSmooth;
		::openfl::display::BlendMode blendMode;
		::openfl::geom::ColorTransform colorTransform;
		bool skipColorTransformAlpha;
		::openfl::_internal::renderer::opengl::shaders2::Shader shader;
		virtual bool equals( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other);
		Dynamic equals_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _SpriteBatch

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State */ 
