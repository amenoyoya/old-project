#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
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

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > result = new BMP_obj();
	result->__construct();
	return result;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > result = new BMP_obj();
	result->__construct();
	return result;}

::lime::utils::ByteArray BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
	HX_STACK_FRAME("lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	if (((type == null()))){
		HX_STACK_LINE(16)
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	HX_STACK_LINE(20)
	int fileHeaderLength = (int)14;		HX_STACK_VAR(fileHeaderLength,"fileHeaderLength");
	HX_STACK_LINE(21)
	int infoHeaderLength = (int)40;		HX_STACK_VAR(infoHeaderLength,"infoHeaderLength");
	HX_STACK_LINE(22)
	int pixelValuesLength = ((image->width * image->height) * (int)4);		HX_STACK_VAR(pixelValuesLength,"pixelValuesLength");
	HX_STACK_LINE(24)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(28)
			infoHeaderLength = (int)108;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(32)
			fileHeaderLength = (int)0;
			HX_STACK_LINE(33)
			hx::AddEq(pixelValuesLength,(image->width * image->height));
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(40)
	::lime::utils::ByteArray data = ::lime::utils::ByteArray_obj::__new(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		data->littleEndian = true;
		HX_STACK_LINE(47)
		false;
	}
	HX_STACK_LINE(50)
	if (((fileHeaderLength > (int)0))){
		HX_STACK_LINE(52)
		data->writeByte((int)66);
		HX_STACK_LINE(53)
		data->writeByte((int)77);
		HX_STACK_LINE(54)
		data->writeInt(data->length);
		HX_STACK_LINE(55)
		data->writeInt((int)0);
		HX_STACK_LINE(56)
		data->writeInt((fileHeaderLength + infoHeaderLength));
	}
	HX_STACK_LINE(60)
	data->writeInt(infoHeaderLength);
	HX_STACK_LINE(61)
	data->writeInt(image->width);
	HX_STACK_LINE(63)
	if (((type == ::lime::graphics::format::BMPType_obj::ICO))){
		HX_STACK_LINE(65)
		data->writeInt((image->height * (int)2));
	}
	else{
		HX_STACK_LINE(69)
		data->writeInt(image->height);
	}
	HX_STACK_LINE(73)
	data->writeShort((int)1);
	HX_STACK_LINE(74)
	data->writeShort((int)32);
	HX_STACK_LINE(76)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(78)
			data->writeInt((int)3);
		}
		;break;
		default: {
			HX_STACK_LINE(79)
			data->writeInt((int)0);
		}
	}
	HX_STACK_LINE(83)
	data->writeInt(pixelValuesLength);
	HX_STACK_LINE(84)
	data->writeInt((int)11824);
	HX_STACK_LINE(85)
	data->writeInt((int)11824);
	HX_STACK_LINE(86)
	data->writeInt((int)0);
	HX_STACK_LINE(87)
	data->writeInt((int)0);
	HX_STACK_LINE(89)
	if (((type == ::lime::graphics::format::BMPType_obj::BITFIELD))){
		HX_STACK_LINE(91)
		data->writeInt((int)16711680);
		HX_STACK_LINE(92)
		data->writeInt((int)65280);
		HX_STACK_LINE(93)
		data->writeInt((int)255);
		HX_STACK_LINE(94)
		data->writeInt((int)-16777216);
		HX_STACK_LINE(95)
		data->writeByte((int)32);
		HX_STACK_LINE(96)
		data->writeByte((int)110);
		HX_STACK_LINE(97)
		data->writeByte((int)105);
		HX_STACK_LINE(98)
		data->writeByte((int)87);
		HX_STACK_LINE(99)
		data->writeInt((int)0);
		HX_STACK_LINE(100)
		data->writeInt((int)0);
		HX_STACK_LINE(101)
		data->writeInt((int)0);
		HX_STACK_LINE(102)
		data->writeInt((int)0);
		HX_STACK_LINE(103)
		data->writeInt((int)0);
		HX_STACK_LINE(104)
		data->writeInt((int)0);
		HX_STACK_LINE(105)
		data->writeInt((int)0);
		HX_STACK_LINE(106)
		data->writeInt((int)0);
		HX_STACK_LINE(107)
		data->writeInt((int)0);
		HX_STACK_LINE(108)
		data->writeInt((int)0);
		HX_STACK_LINE(109)
		data->writeInt((int)0);
		HX_STACK_LINE(110)
		data->writeInt((int)0);
	}
	HX_STACK_LINE(114)
	::lime::math::Rectangle _g = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(114)
	::lime::utils::ByteArray pixels = image->getPixels(_g);		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(115)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(115)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(115)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(115)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(117)
	if (((type != ::lime::graphics::format::BMPType_obj::ICO))){
		HX_STACK_LINE(119)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(121)
			pixels->position = (((((image->height - (int)1) - y)) * (int)4) * image->width);
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(123)
				int _g21 = image->width;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(125)
					int _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						int val;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(125)
						if (((pixels->position < pixels->length))){
							HX_STACK_LINE(125)
							int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(125)
							val = pixels->b->__get(pos);
						}
						else{
							HX_STACK_LINE(125)
							val = pixels->ThrowEOFi();
						}
						HX_STACK_LINE(125)
						if (((((int(val) & int((int)128))) != (int)0))){
							HX_STACK_LINE(125)
							_g11 = (val - (int)256);
						}
						else{
							HX_STACK_LINE(125)
							_g11 = val;
						}
					}
					HX_STACK_LINE(125)
					a = _g11;
					HX_STACK_LINE(126)
					int _g22;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(126)
					{
						HX_STACK_LINE(126)
						int val;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(126)
						if (((pixels->position < pixels->length))){
							HX_STACK_LINE(126)
							int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(126)
							val = pixels->b->__get(pos);
						}
						else{
							HX_STACK_LINE(126)
							val = pixels->ThrowEOFi();
						}
						HX_STACK_LINE(126)
						if (((((int(val) & int((int)128))) != (int)0))){
							HX_STACK_LINE(126)
							_g22 = (val - (int)256);
						}
						else{
							HX_STACK_LINE(126)
							_g22 = val;
						}
					}
					HX_STACK_LINE(126)
					r = _g22;
					HX_STACK_LINE(127)
					int _g31;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(127)
					{
						HX_STACK_LINE(127)
						int val;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(127)
						if (((pixels->position < pixels->length))){
							HX_STACK_LINE(127)
							int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(127)
							val = pixels->b->__get(pos);
						}
						else{
							HX_STACK_LINE(127)
							val = pixels->ThrowEOFi();
						}
						HX_STACK_LINE(127)
						if (((((int(val) & int((int)128))) != (int)0))){
							HX_STACK_LINE(127)
							_g31 = (val - (int)256);
						}
						else{
							HX_STACK_LINE(127)
							_g31 = val;
						}
					}
					HX_STACK_LINE(127)
					g = _g31;
					HX_STACK_LINE(128)
					int _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(128)
					{
						HX_STACK_LINE(128)
						int val;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(128)
						if (((pixels->position < pixels->length))){
							HX_STACK_LINE(128)
							int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(128)
							val = pixels->b->__get(pos);
						}
						else{
							HX_STACK_LINE(128)
							val = pixels->ThrowEOFi();
						}
						HX_STACK_LINE(128)
						if (((((int(val) & int((int)128))) != (int)0))){
							HX_STACK_LINE(128)
							_g4 = (val - (int)256);
						}
						else{
							HX_STACK_LINE(128)
							_g4 = val;
						}
					}
					HX_STACK_LINE(128)
					b = _g4;
					HX_STACK_LINE(130)
					data->writeByte(b);
					HX_STACK_LINE(131)
					data->writeByte(g);
					HX_STACK_LINE(132)
					data->writeByte(r);
					HX_STACK_LINE(133)
					data->writeByte(a);
				}
			}
		}
	}
	else{
		HX_STACK_LINE(142)
		::lime::utils::ByteArray andMask = ::lime::utils::ByteArray_obj::__new((image->width * image->height));		HX_STACK_VAR(andMask,"andMask");
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(148)
			int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(148)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(150)
				pixels->position = (((((image->height - (int)1) - y)) * (int)4) * image->width);
				HX_STACK_LINE(152)
				{
					HX_STACK_LINE(152)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(152)
					int _g21 = image->width;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(152)
					while((true)){
						HX_STACK_LINE(152)
						if ((!(((_g3 < _g21))))){
							HX_STACK_LINE(152)
							break;
						}
						HX_STACK_LINE(152)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(154)
						int _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(154)
						{
							HX_STACK_LINE(154)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(154)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(154)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(154)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(154)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(154)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(154)
								_g5 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(154)
								_g5 = val;
							}
						}
						HX_STACK_LINE(154)
						a = _g5;
						HX_STACK_LINE(155)
						int _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(155)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(155)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(155)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(155)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(155)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(155)
								_g6 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(155)
								_g6 = val;
							}
						}
						HX_STACK_LINE(155)
						r = _g6;
						HX_STACK_LINE(156)
						int _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(156)
						{
							HX_STACK_LINE(156)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(156)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(156)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(156)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(156)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(156)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(156)
								_g7 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(156)
								_g7 = val;
							}
						}
						HX_STACK_LINE(156)
						g = _g7;
						HX_STACK_LINE(157)
						int _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(157)
						{
							HX_STACK_LINE(157)
							int val;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(157)
							if (((pixels->position < pixels->length))){
								HX_STACK_LINE(157)
								int pos = (pixels->position)++;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(157)
								val = pixels->b->__get(pos);
							}
							else{
								HX_STACK_LINE(157)
								val = pixels->ThrowEOFi();
							}
							HX_STACK_LINE(157)
							if (((((int(val) & int((int)128))) != (int)0))){
								HX_STACK_LINE(157)
								_g8 = (val - (int)256);
							}
							else{
								HX_STACK_LINE(157)
								_g8 = val;
							}
						}
						HX_STACK_LINE(157)
						b = _g8;
						HX_STACK_LINE(159)
						data->writeByte(b);
						HX_STACK_LINE(160)
						data->writeByte(g);
						HX_STACK_LINE(161)
						data->writeByte(r);
						HX_STACK_LINE(162)
						data->writeByte(a);
						HX_STACK_LINE(172)
						andMask->writeByte((int)0);
					}
				}
			}
		}
		HX_STACK_LINE(180)
		data->writeBytes(andMask,null(),null());
	}
	HX_STACK_LINE(184)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

Dynamic BMP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BMP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BMP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

Class BMP_obj::__mClass;

void BMP_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.format.BMP"), hx::TCanCast< BMP_obj> ,sStaticFields,sMemberFields,
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

void BMP_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
