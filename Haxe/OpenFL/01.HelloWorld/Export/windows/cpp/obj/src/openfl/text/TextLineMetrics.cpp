#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace text{

Void TextLineMetrics_obj::__construct(Float x,Float width,Float height,Float ascent,Float descent,Float leading)
{
HX_STACK_FRAME("openfl.text.TextLineMetrics","new",0x08194531,"openfl.text.TextLineMetrics.new","openfl/text/TextLineMetrics.hx",72,0x3c3b1fbf)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(ascent,"ascent")
HX_STACK_ARG(descent,"descent")
HX_STACK_ARG(leading,"leading")
{
	HX_STACK_LINE(74)
	this->x = x;
	HX_STACK_LINE(75)
	this->width = width;
	HX_STACK_LINE(76)
	this->height = height;
	HX_STACK_LINE(77)
	this->ascent = ascent;
	HX_STACK_LINE(78)
	this->descent = descent;
	HX_STACK_LINE(79)
	this->leading = leading;
}
;
	return null();
}

//TextLineMetrics_obj::~TextLineMetrics_obj() { }

Dynamic TextLineMetrics_obj::__CreateEmpty() { return  new TextLineMetrics_obj; }
hx::ObjectPtr< TextLineMetrics_obj > TextLineMetrics_obj::__new(Float x,Float width,Float height,Float ascent,Float descent,Float leading)
{  hx::ObjectPtr< TextLineMetrics_obj > result = new TextLineMetrics_obj();
	result->__construct(x,width,height,ascent,descent,leading);
	return result;}

Dynamic TextLineMetrics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLineMetrics_obj > result = new TextLineMetrics_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}


TextLineMetrics_obj::TextLineMetrics_obj()
{
}

Dynamic TextLineMetrics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ascent; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return descent; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLineMetrics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLineMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ascent"));
	outFields->push(HX_CSTRING("descent"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("leading"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,ascent),HX_CSTRING("ascent")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,descent),HX_CSTRING("descent")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,leading),HX_CSTRING("leading")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,x),HX_CSTRING("x")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ascent"),
	HX_CSTRING("descent"),
	HX_CSTRING("height"),
	HX_CSTRING("leading"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#endif

Class TextLineMetrics_obj::__mClass;

void TextLineMetrics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextLineMetrics"), hx::TCanCast< TextLineMetrics_obj> ,sStaticFields,sMemberFields,
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

void TextLineMetrics_obj::__boot()
{
}

} // end namespace openfl
} // end namespace text
