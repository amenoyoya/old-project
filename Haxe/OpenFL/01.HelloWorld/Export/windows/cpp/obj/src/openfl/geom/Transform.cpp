#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace geom{

Void Transform_obj::__construct(::openfl::display::DisplayObject displayObject)
{
HX_STACK_FRAME("openfl.geom.Transform","new",0x993cc92a,"openfl.geom.Transform.new","openfl/geom/Transform.hx",134,0xf4f475e6)
HX_STACK_THIS(this)
HX_STACK_ARG(displayObject,"displayObject")
{
	HX_STACK_LINE(136)
	::openfl::geom::ColorTransform _g = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	this->__colorTransform = _g;
	HX_STACK_LINE(137)
	::openfl::geom::ColorTransform _g1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(137)
	this->concatenatedColorTransform = _g1;
	HX_STACK_LINE(138)
	::openfl::geom::Matrix _g2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(138)
	this->concatenatedMatrix = _g2;
	HX_STACK_LINE(139)
	::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(139)
	this->pixelBounds = _g3;
	HX_STACK_LINE(141)
	this->__displayObject = displayObject;
	HX_STACK_LINE(142)
	this->__hasMatrix = true;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::openfl::display::DisplayObject displayObject)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(displayObject);
	return result;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > result = new Transform_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_colorTransform",0xc8c832c8,"openfl.geom.Transform.get_colorTransform","openfl/geom/Transform.hx",156,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->__colorTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::openfl::geom::ColorTransform Transform_obj::set_colorTransform( ::openfl::geom::ColorTransform value){
	HX_STACK_FRAME("openfl.geom.Transform","set_colorTransform",0xa577653c,"openfl.geom.Transform.set_colorTransform","openfl/geom/Transform.hx",161,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	this->__colorTransform = value;
	HX_STACK_LINE(165)
	if (((value != null()))){
		HX_STACK_LINE(167)
		this->__displayObject->set_alpha(value->alphaMultiplier);
	}
	HX_STACK_LINE(171)
	return this->__colorTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::openfl::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix",0x80c3ba80,"openfl.geom.Transform.get_matrix","openfl/geom/Transform.hx",176,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	if ((this->__hasMatrix)){
		HX_STACK_LINE(180)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(181)
		Float _g = this->__displayObject->get_scaleX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		Float _g1 = this->__displayObject->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		matrix->scale(_g,_g1);
		HX_STACK_LINE(182)
		Float _g2 = this->__displayObject->get_rotation();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(182)
		Float _g3 = (_g2 * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(182)
		matrix->rotate(_g3);
		HX_STACK_LINE(183)
		Float _g4 = this->__displayObject->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(183)
		Float _g5 = this->__displayObject->get_y();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(183)
		matrix->translate(_g4,_g5);
		HX_STACK_LINE(184)
		return matrix;
	}
	HX_STACK_LINE(188)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::openfl::geom::Matrix Transform_obj::set_matrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix",0x844158f4,"openfl.geom.Transform.set_matrix","openfl/geom/Transform.hx",193,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	if (((value == null()))){
		HX_STACK_LINE(197)
		this->__hasMatrix = false;
		HX_STACK_LINE(198)
		return null();
	}
	HX_STACK_LINE(202)
	this->__hasMatrix = true;
	HX_STACK_LINE(203)
	this->__hasMatrix3D = false;
	HX_STACK_LINE(205)
	if (((this->__displayObject != null()))){
		HX_STACK_LINE(207)
		this->__displayObject->set_x(value->tx);
		HX_STACK_LINE(208)
		this->__displayObject->set_y(value->ty);
		HX_STACK_LINE(209)
		Float _g = ::Math_obj::sqrt(((value->a * value->a) + (value->b * value->b)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->__displayObject->set_scaleX(_g);
		HX_STACK_LINE(210)
		Float _g1 = ::Math_obj::sqrt(((value->c * value->c) + (value->d * value->d)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		this->__displayObject->set_scaleY(_g1);
		HX_STACK_LINE(211)
		Float _g2 = ::Math_obj::atan2(value->b,value->a);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(211)
		Float _g3 = (_g2 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(211)
		this->__displayObject->set_rotation(_g3);
	}
	HX_STACK_LINE(215)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::openfl::geom::Matrix3D Transform_obj::get_matrix3D( ){
	HX_STACK_FRAME("openfl.geom.Transform","get_matrix3D",0x05078731,"openfl.geom.Transform.get_matrix3D","openfl/geom/Transform.hx",220,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	if ((this->__hasMatrix3D)){
		HX_STACK_LINE(224)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(225)
		Float _g = this->__displayObject->get_scaleX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		Float _g1 = this->__displayObject->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(225)
		matrix->scale(_g,_g1);
		HX_STACK_LINE(226)
		Float _g2 = this->__displayObject->get_rotation();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(226)
		Float _g3 = (_g2 * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(226)
		matrix->rotate(_g3);
		HX_STACK_LINE(227)
		Float _g4 = this->__displayObject->get_x();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(227)
		Float _g5 = this->__displayObject->get_y();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(227)
		matrix->translate(_g4,_g5);
		HX_STACK_LINE(229)
		return ::openfl::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(matrix->a).Add(matrix->b).Add(0.0).Add(0.0).Add(matrix->c).Add(matrix->d).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(matrix->tx).Add(matrix->ty).Add(0.0).Add(1.0));
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix3D,return )

::openfl::geom::Matrix3D Transform_obj::set_matrix3D( ::openfl::geom::Matrix3D value){
	HX_STACK_FRAME("openfl.geom.Transform","set_matrix3D",0x1a00aaa5,"openfl.geom.Transform.set_matrix3D","openfl/geom/Transform.hx",238,0xf4f475e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(240)
	if (((value == null()))){
		HX_STACK_LINE(242)
		this->__hasMatrix3D = false;
		HX_STACK_LINE(243)
		return null();
	}
	HX_STACK_LINE(247)
	this->__hasMatrix = false;
	HX_STACK_LINE(248)
	this->__hasMatrix3D = true;
	HX_STACK_LINE(250)
	if (((this->__displayObject != null()))){
		HX_STACK_LINE(252)
		this->__displayObject->set_x(value->rawData->__get((int)12));
		HX_STACK_LINE(253)
		this->__displayObject->set_y(value->rawData->__get((int)13));
		HX_STACK_LINE(254)
		Float _g = ::Math_obj::sqrt(((value->rawData->__get((int)0) * value->rawData->__get((int)0)) + (value->rawData->__get((int)1) * value->rawData->__get((int)1))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		this->__displayObject->set_scaleX(_g);
		HX_STACK_LINE(255)
		Float _g1 = ::Math_obj::sqrt(((value->rawData->__get((int)4) * value->rawData->__get((int)4)) + (value->rawData->__get((int)5) * value->rawData->__get((int)5))));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(255)
		this->__displayObject->set_scaleY(_g1);
		HX_STACK_LINE(256)
		Float _g2 = ::Math_obj::atan2(value->rawData->__get((int)1),value->rawData->__get((int)0));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(256)
		Float _g3 = (_g2 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(256)
		this->__displayObject->set_rotation(_g3);
	}
	HX_STACK_LINE(260)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix3D,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_MARK_MEMBER_NAME(__displayObject,"__displayObject");
	HX_MARK_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_MARK_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(__colorTransform,"__colorTransform");
	HX_VISIT_MEMBER_NAME(__displayObject,"__displayObject");
	HX_VISIT_MEMBER_NAME(__hasMatrix,"__hasMatrix");
	HX_VISIT_MEMBER_NAME(__hasMatrix3D,"__hasMatrix3D");
}

Dynamic Transform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return get_matrix(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { return get_matrix3D(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return pixelBounds; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { return __hasMatrix; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_matrix3D") ) { return get_matrix3D_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix3D") ) { return set_matrix3D_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { return __hasMatrix3D; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { return __displayObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { return __colorTransform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return concatenatedMatrix; }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return concatenatedColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return set_matrix(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matrix3D") ) { return set_matrix3D(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hasMatrix") ) { __hasMatrix=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__hasMatrix3D") ) { __hasMatrix3D=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return set_colorTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__displayObject") ) { __displayObject=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__colorTransform") ) { __colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("concatenatedColorTransform"));
	outFields->push(HX_CSTRING("concatenatedMatrix"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("matrix3D"));
	outFields->push(HX_CSTRING("pixelBounds"));
	outFields->push(HX_CSTRING("__colorTransform"));
	outFields->push(HX_CSTRING("__displayObject"));
	outFields->push(HX_CSTRING("__hasMatrix"));
	outFields->push(HX_CSTRING("__hasMatrix3D"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_CSTRING("concatenatedColorTransform")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_CSTRING("concatenatedMatrix")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_CSTRING("pixelBounds")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,__colorTransform),HX_CSTRING("__colorTransform")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Transform_obj,__displayObject),HX_CSTRING("__displayObject")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix),HX_CSTRING("__hasMatrix")},
	{hx::fsBool,(int)offsetof(Transform_obj,__hasMatrix3D),HX_CSTRING("__hasMatrix3D")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("concatenatedColorTransform"),
	HX_CSTRING("concatenatedMatrix"),
	HX_CSTRING("pixelBounds"),
	HX_CSTRING("__colorTransform"),
	HX_CSTRING("__displayObject"),
	HX_CSTRING("__hasMatrix"),
	HX_CSTRING("__hasMatrix3D"),
	HX_CSTRING("get_colorTransform"),
	HX_CSTRING("set_colorTransform"),
	HX_CSTRING("get_matrix"),
	HX_CSTRING("set_matrix"),
	HX_CSTRING("get_matrix3D"),
	HX_CSTRING("set_matrix3D"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Transform"), hx::TCanCast< Transform_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Transform_obj::__boot()
{
}

} // end namespace openfl
} // end namespace geom
