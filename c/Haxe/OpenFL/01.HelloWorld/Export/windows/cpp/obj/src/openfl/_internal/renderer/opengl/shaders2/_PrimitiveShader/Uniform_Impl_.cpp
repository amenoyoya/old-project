#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2__PrimitiveShader_Uniform_Impl_
#include <openfl/_internal/renderer/opengl/shaders2/_PrimitiveShader/Uniform_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{
namespace _PrimitiveShader{

Void Uniform_Impl__obj::__construct()
{
	return null();
}

//Uniform_Impl__obj::~Uniform_Impl__obj() { }

Dynamic Uniform_Impl__obj::__CreateEmpty() { return  new Uniform_Impl__obj; }
hx::ObjectPtr< Uniform_Impl__obj > Uniform_Impl__obj::__new()
{  hx::ObjectPtr< Uniform_Impl__obj > result = new Uniform_Impl__obj();
	result->__construct();
	return result;}

Dynamic Uniform_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_Impl__obj > result = new Uniform_Impl__obj();
	result->__construct();
	return result;}

::String Uniform_Impl__obj::TranslationMatrix;

::String Uniform_Impl__obj::ProjectionVector;

::String Uniform_Impl__obj::OffsetVector;

::String Uniform_Impl__obj::Alpha;

::String Uniform_Impl__obj::ColorMultiplier;

::String Uniform_Impl__obj::ColorOffset;


Uniform_Impl__obj::Uniform_Impl__obj()
{
}

Dynamic Uniform_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TranslationMatrix"),
	HX_CSTRING("ProjectionVector"),
	HX_CSTRING("OffsetVector"),
	HX_CSTRING("Alpha"),
	HX_CSTRING("ColorMultiplier"),
	HX_CSTRING("ColorOffset"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::TranslationMatrix,"TranslationMatrix");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::ProjectionVector,"ProjectionVector");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::OffsetVector,"OffsetVector");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::Alpha,"Alpha");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::ColorMultiplier,"ColorMultiplier");
	HX_MARK_MEMBER_NAME(Uniform_Impl__obj::ColorOffset,"ColorOffset");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::TranslationMatrix,"TranslationMatrix");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::ProjectionVector,"ProjectionVector");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::OffsetVector,"OffsetVector");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::Alpha,"Alpha");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::ColorMultiplier,"ColorMultiplier");
	HX_VISIT_MEMBER_NAME(Uniform_Impl__obj::ColorOffset,"ColorOffset");
};

#endif

Class Uniform_Impl__obj::__mClass;

void Uniform_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.shaders2._PrimitiveShader.Uniform_Impl_"), hx::TCanCast< Uniform_Impl__obj> ,sStaticFields,sMemberFields,
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

void Uniform_Impl__obj::__boot()
{
	TranslationMatrix= HX_CSTRING("uTranslationMatrix");
	ProjectionVector= HX_CSTRING("uProjectionVector");
	OffsetVector= HX_CSTRING("uOffsetVector");
	Alpha= HX_CSTRING("uAlpha");
	ColorMultiplier= HX_CSTRING("uColorMultiplier");
	ColorOffset= HX_CSTRING("uColorOffset");
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
} // end namespace _PrimitiveShader
