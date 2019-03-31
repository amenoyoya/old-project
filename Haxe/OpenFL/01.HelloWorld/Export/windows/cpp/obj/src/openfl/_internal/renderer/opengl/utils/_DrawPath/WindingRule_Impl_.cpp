#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__DrawPath_WindingRule_Impl_
#include <openfl/_internal/renderer/opengl/utils/_DrawPath/WindingRule_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _DrawPath{

Void WindingRule_Impl__obj::__construct()
{
	return null();
}

//WindingRule_Impl__obj::~WindingRule_Impl__obj() { }

Dynamic WindingRule_Impl__obj::__CreateEmpty() { return  new WindingRule_Impl__obj; }
hx::ObjectPtr< WindingRule_Impl__obj > WindingRule_Impl__obj::__new()
{  hx::ObjectPtr< WindingRule_Impl__obj > result = new WindingRule_Impl__obj();
	result->__construct();
	return result;}

Dynamic WindingRule_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WindingRule_Impl__obj > result = new WindingRule_Impl__obj();
	result->__construct();
	return result;}

int WindingRule_Impl__obj::EVEN_ODD;

int WindingRule_Impl__obj::NON_ZERO;


WindingRule_Impl__obj::WindingRule_Impl__obj()
{
}

Dynamic WindingRule_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WindingRule_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WindingRule_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EVEN_ODD"),
	HX_CSTRING("NON_ZERO"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindingRule_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WindingRule_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_MARK_MEMBER_NAME(WindingRule_Impl__obj::NON_ZERO,"NON_ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindingRule_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindingRule_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_VISIT_MEMBER_NAME(WindingRule_Impl__obj::NON_ZERO,"NON_ZERO");
};

#endif

Class WindingRule_Impl__obj::__mClass;

void WindingRule_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._DrawPath.WindingRule_Impl_"), hx::TCanCast< WindingRule_Impl__obj> ,sStaticFields,sMemberFields,
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

void WindingRule_Impl__obj::__boot()
{
	EVEN_ODD= (int)0;
	NON_ZERO= (int)1;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _DrawPath
