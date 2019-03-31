#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
namespace openfl{
namespace text{

Void TextFormat_obj::__construct(::String font,Dynamic size,Dynamic color,Dynamic bold,Dynamic italic,Dynamic underline,::String url,::String target,::openfl::text::TextFormatAlign align,Dynamic leftMargin,Dynamic rightMargin,Dynamic indent,Dynamic leading)
{
HX_STACK_FRAME("openfl.text.TextFormat","new",0xfdb2c999,"openfl.text.TextFormat.new","openfl/text/TextFormat.hx",227,0xd3329397)
HX_STACK_THIS(this)
HX_STACK_ARG(font,"font")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(bold,"bold")
HX_STACK_ARG(italic,"italic")
HX_STACK_ARG(underline,"underline")
HX_STACK_ARG(url,"url")
HX_STACK_ARG(target,"target")
HX_STACK_ARG(align,"align")
HX_STACK_ARG(leftMargin,"leftMargin")
HX_STACK_ARG(rightMargin,"rightMargin")
HX_STACK_ARG(indent,"indent")
HX_STACK_ARG(leading,"leading")
{
	HX_STACK_LINE(229)
	this->font = font;
	HX_STACK_LINE(230)
	this->size = size;
	HX_STACK_LINE(231)
	this->color = color;
	HX_STACK_LINE(232)
	this->bold = bold;
	HX_STACK_LINE(233)
	this->italic = italic;
	HX_STACK_LINE(234)
	this->underline = underline;
	HX_STACK_LINE(235)
	this->url = url;
	HX_STACK_LINE(236)
	this->target = target;
	HX_STACK_LINE(237)
	this->align = align;
	HX_STACK_LINE(238)
	this->leftMargin = leftMargin;
	HX_STACK_LINE(239)
	this->rightMargin = rightMargin;
	HX_STACK_LINE(240)
	this->indent = indent;
	HX_STACK_LINE(241)
	this->leading = leading;
}
;
	return null();
}

//TextFormat_obj::~TextFormat_obj() { }

Dynamic TextFormat_obj::__CreateEmpty() { return  new TextFormat_obj; }
hx::ObjectPtr< TextFormat_obj > TextFormat_obj::__new(::String font,Dynamic size,Dynamic color,Dynamic bold,Dynamic italic,Dynamic underline,::String url,::String target,::openfl::text::TextFormatAlign align,Dynamic leftMargin,Dynamic rightMargin,Dynamic indent,Dynamic leading)
{  hx::ObjectPtr< TextFormat_obj > result = new TextFormat_obj();
	result->__construct(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading);
	return result;}

Dynamic TextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFormat_obj > result = new TextFormat_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return result;}

::openfl::text::TextFormat TextFormat_obj::clone( ){
	HX_STACK_FRAME("openfl.text.TextFormat","clone",0x965d8cd6,"openfl.text.TextFormat.clone","openfl/text/TextFormat.hx",246,0xd3329397)
	HX_STACK_THIS(this)
	HX_STACK_LINE(248)
	::openfl::text::TextFormat newFormat = ::openfl::text::TextFormat_obj::__new(this->font,this->size,this->color,this->bold,this->italic,this->underline,this->url,this->target,null(),null(),null(),null(),null());		HX_STACK_VAR(newFormat,"newFormat");
	HX_STACK_LINE(250)
	newFormat->align = this->align;
	HX_STACK_LINE(251)
	newFormat->leftMargin = this->leftMargin;
	HX_STACK_LINE(252)
	newFormat->rightMargin = this->rightMargin;
	HX_STACK_LINE(253)
	newFormat->indent = this->indent;
	HX_STACK_LINE(254)
	newFormat->leading = this->leading;
	HX_STACK_LINE(256)
	newFormat->blockIndent = this->blockIndent;
	HX_STACK_LINE(257)
	newFormat->bullet = this->bullet;
	HX_STACK_LINE(258)
	newFormat->kerning = this->kerning;
	HX_STACK_LINE(259)
	newFormat->letterSpacing = this->letterSpacing;
	HX_STACK_LINE(260)
	newFormat->tabStops = this->tabStops;
	HX_STACK_LINE(262)
	return newFormat;
}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,clone,return )

Void TextFormat_obj::__merge( ::openfl::text::TextFormat format){
{
		HX_STACK_FRAME("openfl.text.TextFormat","__merge",0x0ccb8551,"openfl.text.TextFormat.__merge","openfl/text/TextFormat.hx",267,0xd3329397)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(269)
		if (((format->font != null()))){
			HX_STACK_LINE(269)
			this->font = format->font;
		}
		HX_STACK_LINE(270)
		if (((format->size != null()))){
			HX_STACK_LINE(270)
			this->size = format->size;
		}
		HX_STACK_LINE(271)
		if (((format->color != null()))){
			HX_STACK_LINE(271)
			this->color = format->color;
		}
		HX_STACK_LINE(272)
		if (((format->bold != null()))){
			HX_STACK_LINE(272)
			this->bold = format->bold;
		}
		HX_STACK_LINE(273)
		if (((format->italic != null()))){
			HX_STACK_LINE(273)
			this->italic = format->italic;
		}
		HX_STACK_LINE(274)
		if (((format->underline != null()))){
			HX_STACK_LINE(274)
			this->underline = format->underline;
		}
		HX_STACK_LINE(275)
		if (((format->url != null()))){
			HX_STACK_LINE(275)
			this->url = format->url;
		}
		HX_STACK_LINE(276)
		if (((format->target != null()))){
			HX_STACK_LINE(276)
			this->target = format->target;
		}
		HX_STACK_LINE(277)
		if (((format->align != null()))){
			HX_STACK_LINE(277)
			this->align = format->align;
		}
		HX_STACK_LINE(278)
		if (((format->leftMargin != null()))){
			HX_STACK_LINE(278)
			this->leftMargin = format->leftMargin;
		}
		HX_STACK_LINE(279)
		if (((format->rightMargin != null()))){
			HX_STACK_LINE(279)
			this->rightMargin = format->rightMargin;
		}
		HX_STACK_LINE(280)
		if (((format->indent != null()))){
			HX_STACK_LINE(280)
			this->indent = format->indent;
		}
		HX_STACK_LINE(281)
		if (((format->leading != null()))){
			HX_STACK_LINE(281)
			this->leading = format->leading;
		}
		HX_STACK_LINE(282)
		if (((format->blockIndent != null()))){
			HX_STACK_LINE(282)
			this->blockIndent = format->blockIndent;
		}
		HX_STACK_LINE(283)
		if (((format->bullet != null()))){
			HX_STACK_LINE(283)
			this->bullet = format->bullet;
		}
		HX_STACK_LINE(284)
		if (((format->kerning != null()))){
			HX_STACK_LINE(284)
			this->kerning = format->kerning;
		}
		HX_STACK_LINE(285)
		if (((format->letterSpacing != null()))){
			HX_STACK_LINE(285)
			this->letterSpacing = format->letterSpacing;
		}
		HX_STACK_LINE(286)
		if (((format->tabStops != null()))){
			HX_STACK_LINE(286)
			this->tabStops = format->tabStops;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,__merge,(void))


TextFormat_obj::TextFormat_obj()
{
}

void TextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormat);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(blockIndent,"blockIndent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(tabStops,"tabStops");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(underline,"underline");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void TextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(blockIndent,"blockIndent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(tabStops,"tabStops");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(underline,"underline");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic TextFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold; }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"indent") ) { return indent; }
		if (HX_FIELD_EQ(inName,"italic") ) { return italic; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return kerning; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"__merge") ) { return __merge_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { return tabStops; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return underline; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return leftMargin; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { return blockIndent; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return rightMargin; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return letterSpacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::openfl::text::TextFormatAlign >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { tabStops=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { underline=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { blockIndent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { letterSpacing=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("align"));
	outFields->push(HX_CSTRING("blockIndent"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("bullet"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("indent"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("kerning"));
	outFields->push(HX_CSTRING("leading"));
	outFields->push(HX_CSTRING("leftMargin"));
	outFields->push(HX_CSTRING("letterSpacing"));
	outFields->push(HX_CSTRING("rightMargin"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("tabStops"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("underline"));
	outFields->push(HX_CSTRING("url"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextFormatAlign*/ ,(int)offsetof(TextFormat_obj,align),HX_CSTRING("align")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,blockIndent),HX_CSTRING("blockIndent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bold),HX_CSTRING("bold")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bullet),HX_CSTRING("bullet")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,color),HX_CSTRING("color")},
	{hx::fsString,(int)offsetof(TextFormat_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,indent),HX_CSTRING("indent")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,italic),HX_CSTRING("italic")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,kerning),HX_CSTRING("kerning")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leading),HX_CSTRING("leading")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leftMargin),HX_CSTRING("leftMargin")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,letterSpacing),HX_CSTRING("letterSpacing")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,rightMargin),HX_CSTRING("rightMargin")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextFormat_obj,tabStops),HX_CSTRING("tabStops")},
	{hx::fsString,(int)offsetof(TextFormat_obj,target),HX_CSTRING("target")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,underline),HX_CSTRING("underline")},
	{hx::fsString,(int)offsetof(TextFormat_obj,url),HX_CSTRING("url")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("align"),
	HX_CSTRING("blockIndent"),
	HX_CSTRING("bold"),
	HX_CSTRING("bullet"),
	HX_CSTRING("color"),
	HX_CSTRING("font"),
	HX_CSTRING("indent"),
	HX_CSTRING("italic"),
	HX_CSTRING("kerning"),
	HX_CSTRING("leading"),
	HX_CSTRING("leftMargin"),
	HX_CSTRING("letterSpacing"),
	HX_CSTRING("rightMargin"),
	HX_CSTRING("size"),
	HX_CSTRING("tabStops"),
	HX_CSTRING("target"),
	HX_CSTRING("underline"),
	HX_CSTRING("url"),
	HX_CSTRING("clone"),
	HX_CSTRING("__merge"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#endif

Class TextFormat_obj::__mClass;

void TextFormat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.text.TextFormat"), hx::TCanCast< TextFormat_obj> ,sStaticFields,sMemberFields,
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

void TextFormat_obj::__boot()
{
}

} // end namespace openfl
} // end namespace text
