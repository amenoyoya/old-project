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
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
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

Void JPEG_obj::__construct()
{
	return null();
}

//JPEG_obj::~JPEG_obj() { }

Dynamic JPEG_obj::__CreateEmpty() { return  new JPEG_obj; }
hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{  hx::ObjectPtr< JPEG_obj > result = new JPEG_obj();
	result->__construct();
	return result;}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEG_obj > result = new JPEG_obj();
	result->__construct();
	return result;}

::lime::utils::ByteArray JPEG_obj::encode( ::lime::graphics::Image image,int quality){
	HX_STACK_FRAME("lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",12,0x0d45bec8)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(18)
	return ::lime::graphics::format::JPEG_obj::lime_image_encode(image->buffer,(int)1,quality);
	HX_STACK_LINE(22)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )

Dynamic JPEG_obj::lime_image_encode;


JPEG_obj::JPEG_obj()
{
}

Dynamic JPEG_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic JPEG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { lime_image_encode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JPEG_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JPEG_obj::lime_image_encode,"lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JPEG_obj::lime_image_encode,"lime_image_encode");
};

#endif

Class JPEG_obj::__mClass;

void JPEG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.format.JPEG"), hx::TCanCast< JPEG_obj> ,sStaticFields,sMemberFields,
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

void JPEG_obj::__boot()
{
	lime_image_encode= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_image_encode"),(int)3,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
