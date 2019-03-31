#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2__DrawTrianglesShader_Attrib_Impl_
#include <openfl/_internal/renderer/opengl/shaders2/_DrawTrianglesShader/Attrib_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{
namespace _DrawTrianglesShader{

Void Attrib_Impl__obj::__construct()
{
	return null();
}

//Attrib_Impl__obj::~Attrib_Impl__obj() { }

Dynamic Attrib_Impl__obj::__CreateEmpty() { return  new Attrib_Impl__obj; }
hx::ObjectPtr< Attrib_Impl__obj > Attrib_Impl__obj::__new()
{  hx::ObjectPtr< Attrib_Impl__obj > result = new Attrib_Impl__obj();
	result->__construct();
	return result;}

Dynamic Attrib_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attrib_Impl__obj > result = new Attrib_Impl__obj();
	result->__construct();
	return result;}

::String Attrib_Impl__obj::Position;

::String Attrib_Impl__obj::TexCoord;

::String Attrib_Impl__obj::Color;


Attrib_Impl__obj::Attrib_Impl__obj()
{
}

Dynamic Attrib_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Attrib_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Attrib_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Position"),
	HX_CSTRING("TexCoord"),
	HX_CSTRING("Color"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Attrib_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Attrib_Impl__obj::Position,"Position");
	HX_MARK_MEMBER_NAME(Attrib_Impl__obj::TexCoord,"TexCoord");
	HX_MARK_MEMBER_NAME(Attrib_Impl__obj::Color,"Color");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attrib_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Attrib_Impl__obj::Position,"Position");
	HX_VISIT_MEMBER_NAME(Attrib_Impl__obj::TexCoord,"TexCoord");
	HX_VISIT_MEMBER_NAME(Attrib_Impl__obj::Color,"Color");
};

#endif

Class Attrib_Impl__obj::__mClass;

void Attrib_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.shaders2._DrawTrianglesShader.Attrib_Impl_"), hx::TCanCast< Attrib_Impl__obj> ,sStaticFields,sMemberFields,
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

void Attrib_Impl__obj::__boot()
{
	Position= HX_CSTRING("aPosition");
	TexCoord= HX_CSTRING("aTexCoord0");
	Color= HX_CSTRING("aColor");
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
} // end namespace _DrawTrianglesShader
