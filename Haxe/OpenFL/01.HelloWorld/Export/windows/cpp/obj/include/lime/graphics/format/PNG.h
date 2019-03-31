#ifndef INCLUDED_lime_graphics_format_PNG
#define INCLUDED_lime_graphics_format_PNG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS3(lime,graphics,format,PNG)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES  PNG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PNG_obj OBJ_;
		PNG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PNG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PNG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PNG"); }

		static ::lime::utils::ByteArray encode( ::lime::graphics::Image image);
		static Dynamic encode_dyn();

		static Dynamic lime_image_encode;
		static Dynamic &lime_image_encode_dyn() { return lime_image_encode;}
};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_PNG */ 
