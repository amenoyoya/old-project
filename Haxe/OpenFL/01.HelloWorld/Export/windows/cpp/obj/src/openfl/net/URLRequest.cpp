#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestMethod
#include <openfl/net/URLRequestMethod.h>
#endif
namespace openfl{
namespace net{

Void URLRequest_obj::__construct(::String inURL)
{
HX_STACK_FRAME("openfl.net.URLRequest","new",0xe13767c1,"openfl.net.URLRequest.new","openfl/net/URLRequest.hx",254,0xe997cd0d)
HX_STACK_THIS(this)
HX_STACK_ARG(inURL,"inURL")
{
	HX_STACK_LINE(256)
	if (((inURL != null()))){
		HX_STACK_LINE(258)
		this->url = inURL;
	}
	HX_STACK_LINE(262)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(263)
	this->method = ::openfl::net::URLRequestMethod_obj::GET;
	HX_STACK_LINE(264)
	this->contentType = null();
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String inURL)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inURL);
	return result;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct(inArgs[0]);
	return result;}

Array< ::Dynamic > URLRequest_obj::formatRequestHeaders( ){
	HX_STACK_FRAME("openfl.net.URLRequest","formatRequestHeaders",0x4a7f73cd,"openfl.net.URLRequest.formatRequestHeaders","openfl/net/URLRequest.hx",269,0xe997cd0d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	Array< ::Dynamic > res = this->requestHeaders;		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(272)
	if (((res == null()))){
		HX_STACK_LINE(272)
		res = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(274)
	if (((bool((this->method == ::openfl::net::URLRequestMethod_obj::GET)) || bool((this->data == null()))))){
		HX_STACK_LINE(274)
		return res;
	}
	HX_STACK_LINE(276)
	if (((  ((!(::Std_obj::is(this->data,hx::ClassOf< ::String >())))) ? bool(::Std_obj::is(this->data,hx::ClassOf< ::lime::utils::ByteArray >())) : bool(true) ))){
		HX_STACK_LINE(278)
		Array< ::Dynamic > _g = res->copy();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(278)
		res = _g;
		HX_STACK_LINE(279)
		::openfl::net::URLRequestHeader _g1 = ::openfl::net::URLRequestHeader_obj::__new(HX_CSTRING("Content-Type"),(  (((this->contentType != null()))) ? ::String(this->contentType) : ::String(HX_CSTRING("application/x-www-form-urlencoded")) ));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(279)
		res->push(_g1);
	}
	HX_STACK_LINE(283)
	return res;
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,formatRequestHeaders,return )


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"formatRequestHeaders") ) { return formatRequestHeaders_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("requestHeaders"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("userAgent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_CSTRING("contentType")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_CSTRING("data")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_CSTRING("method")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_CSTRING("requestHeaders")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_CSTRING("url")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_CSTRING("userAgent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("contentType"),
	HX_CSTRING("data"),
	HX_CSTRING("method"),
	HX_CSTRING("requestHeaders"),
	HX_CSTRING("url"),
	HX_CSTRING("userAgent"),
	HX_CSTRING("formatRequestHeaders"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.net.URLRequest"), hx::TCanCast< URLRequest_obj> ,sStaticFields,sMemberFields,
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

void URLRequest_obj::__boot()
{
}

} // end namespace openfl
} // end namespace net
