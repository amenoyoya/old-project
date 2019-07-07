#ifndef INCLUDED_lime_graphics_format_BMPType
#define INCLUDED_lime_graphics_format_BMPType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,format,BMPType)
namespace lime{
namespace graphics{
namespace format{


class BMPType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BMPType_obj OBJ_;

	public:
		BMPType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("lime.graphics.format.BMPType"); }
		::String __ToString() const { return HX_CSTRING("BMPType.") + tag; }

		static ::lime::graphics::format::BMPType BITFIELD;
		static inline ::lime::graphics::format::BMPType BITFIELD_dyn() { return BITFIELD; }
		static ::lime::graphics::format::BMPType ICO;
		static inline ::lime::graphics::format::BMPType ICO_dyn() { return ICO; }
		static ::lime::graphics::format::BMPType RGB;
		static inline ::lime::graphics::format::BMPType RGB_dyn() { return RGB; }
};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_BMPType */ 
