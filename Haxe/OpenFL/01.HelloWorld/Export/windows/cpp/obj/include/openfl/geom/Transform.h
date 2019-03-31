#ifndef INCLUDED_openfl_geom_Transform
#define INCLUDED_openfl_geom_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(::openfl::display::DisplayObject displayObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Transform_obj > __new(::openfl::display::DisplayObject displayObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Transform"); }

		::openfl::geom::ColorTransform concatenatedColorTransform;
		::openfl::geom::Matrix concatenatedMatrix;
		::openfl::geom::Rectangle pixelBounds;
		::openfl::geom::ColorTransform __colorTransform;
		::openfl::display::DisplayObject __displayObject;
		bool __hasMatrix;
		bool __hasMatrix3D;
		virtual ::openfl::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		Dynamic set_colorTransform_dyn();

		virtual ::openfl::geom::Matrix get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::openfl::geom::Matrix set_matrix( ::openfl::geom::Matrix value);
		Dynamic set_matrix_dyn();

		virtual ::openfl::geom::Matrix3D get_matrix3D( );
		Dynamic get_matrix3D_dyn();

		virtual ::openfl::geom::Matrix3D set_matrix3D( ::openfl::geom::Matrix3D value);
		Dynamic set_matrix3D_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Transform */ 
