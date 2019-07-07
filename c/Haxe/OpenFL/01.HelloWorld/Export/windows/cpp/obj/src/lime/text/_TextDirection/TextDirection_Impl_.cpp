#include <hxcpp.h>

#ifndef INCLUDED_lime_text__TextDirection_TextDirection_Impl_
#include <lime/text/_TextDirection/TextDirection_Impl_.h>
#endif
namespace lime{
namespace text{
namespace _TextDirection{

Void TextDirection_Impl__obj::__construct()
{
	return null();
}

//TextDirection_Impl__obj::~TextDirection_Impl__obj() { }

Dynamic TextDirection_Impl__obj::__CreateEmpty() { return  new TextDirection_Impl__obj; }
hx::ObjectPtr< TextDirection_Impl__obj > TextDirection_Impl__obj::__new()
{  hx::ObjectPtr< TextDirection_Impl__obj > result = new TextDirection_Impl__obj();
	result->__construct();
	return result;}

Dynamic TextDirection_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextDirection_Impl__obj > result = new TextDirection_Impl__obj();
	result->__construct();
	return result;}

int TextDirection_Impl__obj::INVALID;

int TextDirection_Impl__obj::LEFT_TO_RIGHT;

int TextDirection_Impl__obj::RIGHT_TO_LEFT;

int TextDirection_Impl__obj::TOP_TO_BOTTOM;

int TextDirection_Impl__obj::BOTTOM_TO_TOP;

Void TextDirection_Impl__obj::reverse( int this1){
{
		HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","reverse",0x86baba53,"lime.text._TextDirection.TextDirection_Impl_.reverse","lime/text/TextDirection.hx",22,0x7a217b74)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(22)
		this1 = (int(this1) ^ int((int)1));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,reverse,(void))

::String TextDirection_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","toString",0x13615a5b,"lime.text._TextDirection.TextDirection_Impl_.toString","lime/text/TextDirection.hx",29,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(29)
	switch( (int)(this1)){
		case (int)4: {
			HX_STACK_LINE(31)
			return HX_CSTRING("leftToRight");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(32)
			return HX_CSTRING("rightToLeft");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(33)
			return HX_CSTRING("topToBottom");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(34)
			return HX_CSTRING("bottomToTop");
		}
		;break;
		default: {
			HX_STACK_LINE(35)
			return HX_CSTRING("");
		}
	}
	HX_STACK_LINE(29)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,toString,return )

bool TextDirection_Impl__obj::get_backward( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_backward",0xc0bd1d1b,"lime.text._TextDirection.TextDirection_Impl_.get_backward","lime/text/TextDirection.hx",44,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	return (((int(this1) & int((int)-3))) == (int)5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_backward,return )

bool TextDirection_Impl__obj::get_forward( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_forward",0x75faaf8d,"lime.text._TextDirection.TextDirection_Impl_.get_forward","lime/text/TextDirection.hx",51,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(51)
	return (((int(this1) & int((int)-3))) == (int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_forward,return )

bool TextDirection_Impl__obj::get_horizontal( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_horizontal",0x91e4fc1c,"lime.text._TextDirection.TextDirection_Impl_.get_horizontal","lime/text/TextDirection.hx",58,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(58)
	return (((int(this1) & int((int)-2))) == (int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_horizontal,return )

bool TextDirection_Impl__obj::get_vertical( int this1){
	HX_STACK_FRAME("lime.text._TextDirection.TextDirection_Impl_","get_vertical",0x03b9fdae,"lime.text._TextDirection.TextDirection_Impl_.get_vertical","lime/text/TextDirection.hx",65,0x7a217b74)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(65)
	return (((int(this1) & int((int)-2))) == (int)6);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextDirection_Impl__obj,get_vertical,return )


TextDirection_Impl__obj::TextDirection_Impl__obj()
{
}

Dynamic TextDirection_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_forward") ) { return get_forward_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_backward") ) { return get_backward_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vertical") ) { return get_vertical_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_horizontal") ) { return get_horizontal_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextDirection_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDirection_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INVALID"),
	HX_CSTRING("LEFT_TO_RIGHT"),
	HX_CSTRING("RIGHT_TO_LEFT"),
	HX_CSTRING("TOP_TO_BOTTOM"),
	HX_CSTRING("BOTTOM_TO_TOP"),
	HX_CSTRING("reverse"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_backward"),
	HX_CSTRING("get_forward"),
	HX_CSTRING("get_horizontal"),
	HX_CSTRING("get_vertical"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(TextDirection_Impl__obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
};

#endif

Class TextDirection_Impl__obj::__mClass;

void TextDirection_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text._TextDirection.TextDirection_Impl_"), hx::TCanCast< TextDirection_Impl__obj> ,sStaticFields,sMemberFields,
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

void TextDirection_Impl__obj::__boot()
{
	INVALID= (int)0;
	LEFT_TO_RIGHT= (int)4;
	RIGHT_TO_LEFT= (int)5;
	TOP_TO_BOTTOM= (int)6;
	BOTTOM_TO_TOP= (int)7;
}

} // end namespace lime
} // end namespace text
} // end namespace _TextDirection
