#ifndef INCLUDED_openfl_geom_Matrix
#define INCLUDED_openfl_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Matrix_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Matrix"); }

		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		::lime::utils::Float32Array __array;
		virtual ::openfl::geom::Matrix clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::openfl::geom::Matrix m);
		Dynamic concat_dyn();

		virtual Void copyColumnFrom( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnFrom_dyn();

		virtual Void copyColumnTo( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnTo_dyn();

		virtual Void copyFrom( ::openfl::geom::Matrix sourceMatrix);
		Dynamic copyFrom_dyn();

		virtual Void copyRowFrom( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowFrom_dyn();

		virtual Void copyRowTo( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowTo_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createBox_dyn();

		virtual Void createGradientBox( Float width,Float height,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createGradientBox_dyn();

		virtual ::openfl::geom::Point deltaTransformPoint( ::openfl::geom::Point point);
		Dynamic deltaTransformPoint_dyn();

		virtual bool equals( Dynamic matrix);
		Dynamic equals_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::openfl::geom::Matrix invert( );
		Dynamic invert_dyn();

		virtual ::openfl::geom::Matrix mult( ::openfl::geom::Matrix m);
		Dynamic mult_dyn();

		virtual Void rotate( Float theta);
		Dynamic rotate_dyn();

		virtual Void scale( Float sx,Float sy);
		Dynamic scale_dyn();

		virtual Void setRotation( Float theta,hx::Null< Float >  scale);
		Dynamic setRotation_dyn();

		virtual Void setTo( Float a,Float b,Float c,Float d,Float tx,Float ty);
		Dynamic setTo_dyn();

		virtual ::String to3DString( hx::Null< bool >  roundPixels);
		Dynamic to3DString_dyn();

		virtual ::String toMozString( );
		Dynamic toMozString_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::openfl::geom::Point transformPoint( ::openfl::geom::Point pos);
		Dynamic transformPoint_dyn();

		virtual Void translate( Float dx,Float dy);
		Dynamic translate_dyn();

		virtual ::lime::utils::Float32Array toArray( hx::Null< bool >  transpose);
		Dynamic toArray_dyn();

		virtual Void __cleanValues( );
		Dynamic __cleanValues_dyn();

		virtual Float __transformX( ::openfl::geom::Point pos);
		Dynamic __transformX_dyn();

		virtual Float __transformY( ::openfl::geom::Point pos);
		Dynamic __transformY_dyn();

		virtual Void __translateTransformed( ::openfl::geom::Point pos);
		Dynamic __translateTransformed_dyn();

		static ::openfl::geom::Matrix __identity;
};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Matrix */ 
