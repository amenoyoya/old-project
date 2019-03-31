#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void RectangleTexture_obj::__construct(::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",18,0x83565556)
HX_STACK_THIS(this)
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(20)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(26)
	super::__construct(glTexture,width,height);
	HX_STACK_LINE(29)
	if ((this->optimizeForRenderToTexture)){
		HX_STACK_LINE(30)
		::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
	}
	HX_STACK_LINE(32)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
	HX_STACK_LINE(33)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
	HX_STACK_LINE(34)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
	HX_STACK_LINE(35)
	::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
}
;
	return null();
}

//RectangleTexture_obj::~RectangleTexture_obj() { }

Dynamic RectangleTexture_obj::__CreateEmpty() { return  new RectangleTexture_obj; }
hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new(::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< RectangleTexture_obj > result = new RectangleTexture_obj();
	result->__construct(glTexture,optimize,width,height);
	return result;}

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RectangleTexture_obj > result = new RectangleTexture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",46,0x83565556)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(55)
		::lime::utils::ByteArray p = bitmapData->__image->get_data()->buffer;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(58)
		this->width = bitmapData->width;
		HX_STACK_LINE(59)
		this->height = bitmapData->height;
		HX_STACK_LINE(61)
		this->uploadFromByteArray(p,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromBitmapData,(void))

Void RectangleTexture_obj::uploadFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",66,0x83565556)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			::lime::graphics::opengl::GLTexture texture = this->glTexture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(68)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(94)
		if ((this->optimizeForRenderToTexture)){
			HX_STACK_LINE(96)
			::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
			HX_STACK_LINE(97)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(98)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(99)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(100)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(104)
		::lime::utils::UInt8Array source = ::lime::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::lime::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			if (((source == null()))){
				HX_STACK_LINE(109)
				_g = null();
			}
			else{
				HX_STACK_LINE(109)
				_g = source->getByteBuffer();
			}
			HX_STACK_LINE(109)
			Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(109)
			if (((source == null()))){
				HX_STACK_LINE(109)
				_g1 = null();
			}
			else{
				HX_STACK_LINE(109)
				_g1 = source->getStart();
			}
			HX_STACK_LINE(109)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,this->width,this->height,(int)0,(int)6408,(int)5121,_g,_g1);
		}
		HX_STACK_LINE(110)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)3553,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))


RectangleTexture_obj::RectangleTexture_obj()
{
}

Dynamic RectangleTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RectangleTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RectangleTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("optimizeForRenderToTexture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RectangleTexture_obj,optimizeForRenderToTexture),HX_CSTRING("optimizeForRenderToTexture")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("optimizeForRenderToTexture"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadFromByteArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.textures.RectangleTexture"), hx::TCanCast< RectangleTexture_obj> ,sStaticFields,sMemberFields,
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

void RectangleTexture_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
