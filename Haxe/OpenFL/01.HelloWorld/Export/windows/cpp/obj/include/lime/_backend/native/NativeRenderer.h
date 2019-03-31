#ifndef INCLUDED_lime__backend_native_NativeRenderer
#define INCLUDED_lime__backend_native_NativeRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeRenderer)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  NativeRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NativeRenderer_obj OBJ_;
		NativeRenderer_obj();
		Void __construct(::lime::graphics::Renderer parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NativeRenderer_obj > __new(::lime::graphics::Renderer parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NativeRenderer"); }

		Dynamic handle;
		::lime::graphics::Renderer parent;
		virtual Void create( );
		Dynamic create_dyn();

		virtual Void dispatch( );
		Dynamic dispatch_dyn();

		virtual Void flip( );
		Dynamic flip_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		static Dynamic lime_renderer_create;
		static Dynamic &lime_renderer_create_dyn() { return lime_renderer_create;}
		static Dynamic lime_renderer_flip;
		static Dynamic &lime_renderer_flip_dyn() { return lime_renderer_flip;}
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeRenderer */ 
