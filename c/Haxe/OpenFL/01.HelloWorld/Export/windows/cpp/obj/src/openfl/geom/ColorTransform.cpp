#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",142,0x850de941)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_redMultiplier,"redMultiplier")
HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")
HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")
HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")
HX_STACK_ARG(__o_redOffset,"redOffset")
HX_STACK_ARG(__o_greenOffset,"greenOffset")
HX_STACK_ARG(__o_blueOffset,"blueOffset")
HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
{
	HX_STACK_LINE(144)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(145)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(146)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(147)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(148)
	this->redOffset = redOffset;
	HX_STACK_LINE(149)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(150)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(151)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return result;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > result = new ColorTransform_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",167,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(169)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(170)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(171)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(172)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

Void ColorTransform_obj::__combine( ::openfl::geom::ColorTransform ct){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",177,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ct,"ct")
		HX_STACK_LINE(178)
		hx::MultEq(this->redMultiplier,ct->redMultiplier);
		HX_STACK_LINE(179)
		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
		HX_STACK_LINE(180)
		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
		HX_STACK_LINE(181)
		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
		HX_STACK_LINE(183)
		hx::AddEq(this->redOffset,ct->redOffset);
		HX_STACK_LINE(184)
		hx::AddEq(this->greenOffset,ct->greenOffset);
		HX_STACK_LINE(185)
		hx::AddEq(this->blueOffset,ct->blueOffset);
		HX_STACK_LINE(186)
		hx::AddEq(this->alphaOffset,ct->alphaOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__combine,(void))

bool ColorTransform_obj::__equals( ::openfl::geom::ColorTransform ct,Dynamic __o_skipAlphaMultiplier){
Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
	HX_STACK_FRAME("openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",192,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(skipAlphaMultiplier,"skipAlphaMultiplier")
{
		HX_STACK_LINE(192)
		return (bool((bool((bool((bool((bool((bool((bool((bool((ct != null())) && bool((this->redMultiplier == ct->redMultiplier)))) && bool((this->greenMultiplier == ct->greenMultiplier)))) && bool((this->blueMultiplier == ct->blueMultiplier)))) && bool(((bool(skipAlphaMultiplier) || bool((this->alphaMultiplier == ct->alphaMultiplier))))))) && bool((this->redOffset == ct->redOffset)))) && bool((this->greenOffset == ct->greenOffset)))) && bool((this->blueOffset == ct->blueOffset)))) && bool((this->alphaOffset == ct->alphaOffset)));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,__equals,return )

::openfl::geom::ColorTransform ColorTransform_obj::__clone( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",207,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return ::openfl::geom::ColorTransform_obj::__new(this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__clone,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",216,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	int _g = ::Std_obj::_int(this->redOffset);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(218)
	int _g1 = (int(_g) << int((int)16));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(218)
	int _g2 = ::Std_obj::_int(this->greenOffset);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(218)
	int _g3 = (int(_g2) << int((int)8));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(218)
	int _g4 = (int(_g1) | int(_g3));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(218)
	int _g5 = ::Std_obj::_int(this->blueOffset);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(218)
	return (int(_g4) | int(_g5));
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",223,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(225)
	this->redOffset = (int((int(value) >> int((int)16))) & int((int)255));
	HX_STACK_LINE(226)
	this->greenOffset = (int((int(value) >> int((int)8))) & int((int)255));
	HX_STACK_LINE(227)
	this->blueOffset = (int(value) & int((int)255));
	HX_STACK_LINE(229)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(230)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(231)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(233)
	return this->get_color();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

::lime::utils::Float32Array ColorTransform_obj::__toLimeColorMatrix( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",240,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(this->redMultiplier).Add((int)0).Add((int)0).Add((int)0).Add((Float(this->redOffset) / Float((int)255))).Add((int)0).Add(this->greenMultiplier).Add((int)0).Add((int)0).Add((Float(this->greenOffset) / Float((int)255))).Add((int)0).Add((int)0).Add(this->blueMultiplier).Add((int)0).Add((Float(this->blueOffset) / Float((int)255))).Add((int)0).Add((int)0).Add((int)0).Add(this->alphaMultiplier).Add((Float(this->alphaOffset) / Float((int)255))),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__toLimeColorMatrix,return )


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return __clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__equals") ) { return __equals_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"__combine") ) { return __combine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return __toLimeColorMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alphaMultiplier"));
	outFields->push(HX_CSTRING("alphaOffset"));
	outFields->push(HX_CSTRING("blueMultiplier"));
	outFields->push(HX_CSTRING("blueOffset"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("greenMultiplier"));
	outFields->push(HX_CSTRING("greenOffset"));
	outFields->push(HX_CSTRING("redMultiplier"));
	outFields->push(HX_CSTRING("redOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_CSTRING("alphaMultiplier")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_CSTRING("alphaOffset")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_CSTRING("blueMultiplier")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_CSTRING("blueOffset")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_CSTRING("greenMultiplier")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_CSTRING("greenOffset")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_CSTRING("redMultiplier")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_CSTRING("redOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("alphaMultiplier"),
	HX_CSTRING("alphaOffset"),
	HX_CSTRING("blueMultiplier"),
	HX_CSTRING("blueOffset"),
	HX_CSTRING("greenMultiplier"),
	HX_CSTRING("greenOffset"),
	HX_CSTRING("redMultiplier"),
	HX_CSTRING("redOffset"),
	HX_CSTRING("concat"),
	HX_CSTRING("__combine"),
	HX_CSTRING("__equals"),
	HX_CSTRING("__clone"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("__toLimeColorMatrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.ColorTransform"), hx::TCanCast< ColorTransform_obj> ,sStaticFields,sMemberFields,
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

void ColorTransform_obj::__boot()
{
}

} // end namespace openfl
} // end namespace geom
