#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__VertexAttribute_ElementType_Impl_
#define INCLUDED_openfl__internal_renderer_opengl_utils__VertexAttribute_ElementType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(openfl,_internal,renderer,opengl,utils,_VertexAttribute,ElementType_Impl_)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _VertexAttribute{


class HXCPP_CLASS_ATTRIBUTES  ElementType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ElementType_Impl__obj OBJ_;
		ElementType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ElementType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ElementType_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ElementType_Impl_"); }

		static int BYTE;
		static int UNSIGNED_BYTE;
		static int SHORT;
		static int UNSIGNED_SHORT;
		static int FLOAT;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _VertexAttribute

#endif /* INCLUDED_openfl__internal_renderer_opengl_utils__VertexAttribute_ElementType_Impl_ */ 
