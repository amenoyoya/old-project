#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace lime{
namespace graphics{
namespace format{

Void PNG_obj::__construct()
{
	return null();
}

//PNG_obj::~PNG_obj() { }

Dynamic PNG_obj::__CreateEmpty() { return  new PNG_obj; }
hx::ObjectPtr< PNG_obj > PNG_obj::__new()
{  hx::ObjectPtr< PNG_obj > result = new PNG_obj();
	result->__construct();
	return result;}

Dynamic PNG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PNG_obj > result = new PNG_obj();
	result->__construct();
	return result;}

::lime::utils::ByteArray PNG_obj::encode( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.format.PNG","encode",0x30ec4988,"lime.graphics.format.PNG.encode","lime/graphics/format/PNG.hx",20,0x0cfd2463)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(26)
	if ((!(::lime::system::System_obj::disableCFFI))){
		HX_STACK_LINE(28)
		return ::lime::graphics::format::PNG_obj::lime_image_encode(image->buffer,(int)0,(int)0);
	}
	HX_STACK_LINE(80)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PNG_obj,encode,return )

Dynamic PNG_obj::lime_image_encode;


PNG_obj::PNG_obj()
{
}

Dynamic PNG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { return lime_image_encode; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PNG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { lime_image_encode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PNG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	HX_CSTRING("lime_image_encode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#endif

Class PNG_obj::__mClass;

void PNG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.format.PNG"), hx::TCanCast< PNG_obj> ,sStaticFields,sMemberFields,
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

void PNG_obj::__boot()
{
	lime_image_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_encode"),(int)3,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
