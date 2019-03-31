#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
#endif
namespace lime{
namespace text{

Void GlyphMetrics_obj::__construct()
{
HX_STACK_FRAME("lime.text.GlyphMetrics","new",0x60d06751,"lime.text.GlyphMetrics.new","lime/text/GlyphMetrics.hx",16,0x56473cdf)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GlyphMetrics_obj::~GlyphMetrics_obj() { }

Dynamic GlyphMetrics_obj::__CreateEmpty() { return  new GlyphMetrics_obj; }
hx::ObjectPtr< GlyphMetrics_obj > GlyphMetrics_obj::__new()
{  hx::ObjectPtr< GlyphMetrics_obj > result = new GlyphMetrics_obj();
	result->__construct();
	return result;}

Dynamic GlyphMetrics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlyphMetrics_obj > result = new GlyphMetrics_obj();
	result->__construct();
	return result;}


GlyphMetrics_obj::GlyphMetrics_obj()
{
}

void GlyphMetrics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphMetrics);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(horizontalBearing,"horizontalBearing");
	HX_MARK_MEMBER_NAME(verticalBearing,"verticalBearing");
	HX_MARK_END_CLASS();
}

void GlyphMetrics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(horizontalBearing,"horizontalBearing");
	HX_VISIT_MEMBER_NAME(verticalBearing,"verticalBearing");
}

Dynamic GlyphMetrics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return advance; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalBearing") ) { return verticalBearing; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalBearing") ) { return horizontalBearing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GlyphMetrics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalBearing") ) { verticalBearing=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalBearing") ) { horizontalBearing=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("advance"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("horizontalBearing"));
	outFields->push(HX_CSTRING("verticalBearing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,advance),HX_CSTRING("advance")},
	{hx::fsInt,(int)offsetof(GlyphMetrics_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,horizontalBearing),HX_CSTRING("horizontalBearing")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,verticalBearing),HX_CSTRING("verticalBearing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("advance"),
	HX_CSTRING("height"),
	HX_CSTRING("horizontalBearing"),
	HX_CSTRING("verticalBearing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphMetrics_obj::__mClass,"__mClass");
};

#endif

Class GlyphMetrics_obj::__mClass;

void GlyphMetrics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text.GlyphMetrics"), hx::TCanCast< GlyphMetrics_obj> ,sStaticFields,sMemberFields,
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

void GlyphMetrics_obj::__boot()
{
}

} // end namespace lime
} // end namespace text
