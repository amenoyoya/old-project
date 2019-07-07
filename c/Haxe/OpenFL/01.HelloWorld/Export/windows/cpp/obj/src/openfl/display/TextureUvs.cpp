#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
namespace openfl{
namespace display{

Void TextureUvs_obj::__construct()
{
HX_STACK_FRAME("openfl.display.TextureUvs","new",0xe69f4b33,"openfl.display.TextureUvs.new","openfl/display/BitmapData.hx",1794,0xdd12d5b9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1804)
	this->y3 = (int)0;
	HX_STACK_LINE(1803)
	this->y2 = (int)0;
	HX_STACK_LINE(1802)
	this->y1 = (int)0;
	HX_STACK_LINE(1801)
	this->y0 = (int)0;
	HX_STACK_LINE(1800)
	this->x3 = (int)0;
	HX_STACK_LINE(1799)
	this->x2 = (int)0;
	HX_STACK_LINE(1798)
	this->x1 = (int)0;
	HX_STACK_LINE(1797)
	this->x0 = (int)0;
}
;
	return null();
}

//TextureUvs_obj::~TextureUvs_obj() { }

Dynamic TextureUvs_obj::__CreateEmpty() { return  new TextureUvs_obj; }
hx::ObjectPtr< TextureUvs_obj > TextureUvs_obj::__new()
{  hx::ObjectPtr< TextureUvs_obj > result = new TextureUvs_obj();
	result->__construct();
	return result;}

Dynamic TextureUvs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureUvs_obj > result = new TextureUvs_obj();
	result->__construct();
	return result;}


TextureUvs_obj::TextureUvs_obj()
{
}

Dynamic TextureUvs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"x3") ) { return x3; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		if (HX_FIELD_EQ(inName,"y3") ) { return y3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureUvs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x3") ) { x3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y3") ) { y3=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureUvs_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x0"));
	outFields->push(HX_CSTRING("x1"));
	outFields->push(HX_CSTRING("x2"));
	outFields->push(HX_CSTRING("x3"));
	outFields->push(HX_CSTRING("y0"));
	outFields->push(HX_CSTRING("y1"));
	outFields->push(HX_CSTRING("y2"));
	outFields->push(HX_CSTRING("y3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x0),HX_CSTRING("x0")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x1),HX_CSTRING("x1")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x2),HX_CSTRING("x2")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,x3),HX_CSTRING("x3")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y0),HX_CSTRING("y0")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y1),HX_CSTRING("y1")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y2),HX_CSTRING("y2")},
	{hx::fsFloat,(int)offsetof(TextureUvs_obj,y3),HX_CSTRING("y3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x0"),
	HX_CSTRING("x1"),
	HX_CSTRING("x2"),
	HX_CSTRING("x3"),
	HX_CSTRING("y0"),
	HX_CSTRING("y1"),
	HX_CSTRING("y2"),
	HX_CSTRING("y3"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUvs_obj::__mClass,"__mClass");
};

#endif

Class TextureUvs_obj::__mClass;

void TextureUvs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.TextureUvs"), hx::TCanCast< TextureUvs_obj> ,sStaticFields,sMemberFields,
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

void TextureUvs_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
