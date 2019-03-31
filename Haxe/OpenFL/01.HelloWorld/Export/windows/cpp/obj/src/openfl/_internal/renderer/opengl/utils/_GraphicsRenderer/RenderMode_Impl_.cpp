#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__GraphicsRenderer_RenderMode_Impl_
#include <openfl/_internal/renderer/opengl/utils/_GraphicsRenderer/RenderMode_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _GraphicsRenderer{

Void RenderMode_Impl__obj::__construct()
{
	return null();
}

//RenderMode_Impl__obj::~RenderMode_Impl__obj() { }

Dynamic RenderMode_Impl__obj::__CreateEmpty() { return  new RenderMode_Impl__obj; }
hx::ObjectPtr< RenderMode_Impl__obj > RenderMode_Impl__obj::__new()
{  hx::ObjectPtr< RenderMode_Impl__obj > result = new RenderMode_Impl__obj();
	result->__construct();
	return result;}

Dynamic RenderMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderMode_Impl__obj > result = new RenderMode_Impl__obj();
	result->__construct();
	return result;}

int RenderMode_Impl__obj::DEFAULT;

int RenderMode_Impl__obj::STENCIL;


RenderMode_Impl__obj::RenderMode_Impl__obj()
{
}

Dynamic RenderMode_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic RenderMode_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderMode_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("STENCIL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderMode_Impl__obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(RenderMode_Impl__obj::STENCIL,"STENCIL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderMode_Impl__obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(RenderMode_Impl__obj::STENCIL,"STENCIL");
};

#endif

Class RenderMode_Impl__obj::__mClass;

void RenderMode_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._GraphicsRenderer.RenderMode_Impl_"), hx::TCanCast< RenderMode_Impl__obj> ,sStaticFields,sMemberFields,
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

void RenderMode_Impl__obj::__boot()
{
	DEFAULT= (int)0;
	STENCIL= (int)1;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _GraphicsRenderer
