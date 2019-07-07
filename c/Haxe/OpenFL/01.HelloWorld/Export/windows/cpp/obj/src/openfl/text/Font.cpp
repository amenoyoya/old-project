#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_FontStyle
#include <openfl/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl_text_FontType
#include <openfl/text/FontType.h>
#endif
namespace openfl{
namespace text{

Void Font_obj::__construct(::String name)
{
HX_STACK_FRAME("openfl.text.Font","new",0xe13d5ce4,"openfl.text.Font.new","openfl/text/Font.hx",41,0x076bbaac)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
{
	HX_STACK_LINE(41)
	super::__construct(name);
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String name)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(name);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Font_obj::get_fontName( ){
	HX_STACK_FRAME("openfl.text.Font","get_fontName",0x9a8206bf,"openfl.text.Font.get_fontName","openfl/text/Font.hx",136,0x076bbaac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_fontName,return )

::String Font_obj::set_fontName( ::String value){
	HX_STACK_FRAME("openfl.text.Font","set_fontName",0xaf7b2a33,"openfl.text.Font.set_fontName","openfl/text/Font.hx",143,0x076bbaac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(143)
	return this->name = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,set_fontName,return )

Array< ::Dynamic > Font_obj::__registeredFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_FRAME("openfl.text.Font","enumerateFonts",0x792ac3fc,"openfl.text.Font.enumerateFonts","openfl/text/Font.hx",61,0x076bbaac)
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts")
{
		HX_STACK_LINE(61)
		return Array_obj< ::Dynamic >::__new();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

::openfl::text::Font Font_obj::fromBytes( ::lime::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl.text.Font","fromBytes",0x95ccba25,"openfl.text.Font.fromBytes","openfl/text/Font.hx",66,0x076bbaac)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(68)
	::openfl::text::Font font = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(69)
	font->__fromBytes(bytes);
	HX_STACK_LINE(72)
	if (((font->src != null()))){
		HX_STACK_LINE(72)
		return font;
	}
	else{
		HX_STACK_LINE(72)
		return null();
	}
	HX_STACK_LINE(72)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::openfl::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.text.Font","fromFile",0x919e3202,"openfl.text.Font.fromFile","openfl/text/Font.hx",80,0x076bbaac)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(82)
	::openfl::text::Font font = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(83)
	font->__fromFile(path);
	HX_STACK_LINE(86)
	if (((font->src != null()))){
		HX_STACK_LINE(86)
		return font;
	}
	else{
		HX_STACK_LINE(86)
		return null();
	}
	HX_STACK_LINE(86)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Void Font_obj::registerFont( ::Class font){
{
		HX_STACK_FRAME("openfl.text.Font","registerFont",0xd99a60ce,"openfl.text.Font.registerFont","openfl/text/Font.hx",98,0x076bbaac)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(100)
		::openfl::text::Font instance;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(100)
		instance = hx::TCast< openfl::text::Font >::cast(::Type_obj::createInstance(font,Dynamic( Array_obj<Dynamic>::__new())));
		HX_STACK_LINE(102)
		if (((instance != null()))){
			HX_STACK_LINE(110)
			::openfl::text::Font_obj::__registeredFonts->push(instance);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

::openfl::text::Font Font_obj::__fromLimeFont( ::lime::text::Font value){
	HX_STACK_FRAME("openfl.text.Font","__fromLimeFont",0x57c4282a,"openfl.text.Font.__fromLimeFont","openfl/text/Font.hx",117,0x076bbaac)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	::openfl::text::Font font = ::openfl::text::Font_obj::__new(null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(120)
	font->name = value->name;
	HX_STACK_LINE(121)
	font->src = value->src;
	HX_STACK_LINE(122)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromLimeFont,return )


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	::lime::text::Font_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	::lime::text::Font_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return get_fontName(); }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { return registerFont_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontName") ) { return get_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontName") ) { return set_fontName_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { return enumerateFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromLimeFont") ) { return __fromLimeFont_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { return __registeredFonts; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return set_fontName(inValue); }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::openfl::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::openfl::text::FontStyle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { __registeredFonts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fontName"));
	outFields->push(HX_CSTRING("fontStyle"));
	outFields->push(HX_CSTRING("fontType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__registeredFonts"),
	HX_CSTRING("enumerateFonts"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("registerFont"),
	HX_CSTRING("__fromLimeFont"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_CSTRING("fontStyle")},
	{hx::fsObject /*::openfl::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_CSTRING("fontType")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fontStyle"),
	HX_CSTRING("fontType"),
	HX_CSTRING("get_fontName"),
	HX_CSTRING("set_fontName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
};

#endif

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
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

void Font_obj::__boot()
{
	__registeredFonts= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace text
