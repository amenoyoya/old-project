#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
namespace lime{
namespace text{

Void GlyphPosition_obj::__construct(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset)
{
HX_STACK_FRAME("lime.text.GlyphPosition","new",0x7d4dcbff,"lime.text.GlyphPosition.new","lime/text/GlyphPosition.hx",15,0x63f214b1)
HX_STACK_THIS(this)
HX_STACK_ARG(glyph,"glyph")
HX_STACK_ARG(advance,"advance")
HX_STACK_ARG(offset,"offset")
{
	HX_STACK_LINE(17)
	this->glyph = glyph;
	HX_STACK_LINE(18)
	this->advance = advance;
	HX_STACK_LINE(20)
	if (((offset != null()))){
		HX_STACK_LINE(22)
		this->offset = offset;
	}
	else{
		HX_STACK_LINE(26)
		::lime::math::Vector2 _g = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->offset = _g;
	}
}
;
	return null();
}

//GlyphPosition_obj::~GlyphPosition_obj() { }

Dynamic GlyphPosition_obj::__CreateEmpty() { return  new GlyphPosition_obj; }
hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__new(int glyph,::lime::math::Vector2 advance,::lime::math::Vector2 offset)
{  hx::ObjectPtr< GlyphPosition_obj > result = new GlyphPosition_obj();
	result->__construct(glyph,advance,offset);
	return result;}

Dynamic GlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlyphPosition_obj > result = new GlyphPosition_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


GlyphPosition_obj::GlyphPosition_obj()
{
}

void GlyphPosition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphPosition);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(glyph,"glyph");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void GlyphPosition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(glyph,"glyph");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic GlyphPosition_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { return glyph; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return advance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GlyphPosition_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { glyph=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast< ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("advance"));
	outFields->push(HX_CSTRING("glyph"));
	outFields->push(HX_CSTRING("offset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,advance),HX_CSTRING("advance")},
	{hx::fsInt,(int)offsetof(GlyphPosition_obj,glyph),HX_CSTRING("glyph")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,offset),HX_CSTRING("offset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("advance"),
	HX_CSTRING("glyph"),
	HX_CSTRING("offset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#endif

Class GlyphPosition_obj::__mClass;

void GlyphPosition_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text.GlyphPosition"), hx::TCanCast< GlyphPosition_obj> ,sStaticFields,sMemberFields,
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

void GlyphPosition_obj::__boot()
{
}

} // end namespace lime
} // end namespace text
