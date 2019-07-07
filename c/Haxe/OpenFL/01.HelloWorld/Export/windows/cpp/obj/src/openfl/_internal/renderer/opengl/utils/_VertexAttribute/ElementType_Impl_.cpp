#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__VertexAttribute_ElementType_Impl_
#include <openfl/_internal/renderer/opengl/utils/_VertexAttribute/ElementType_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _VertexAttribute{

Void ElementType_Impl__obj::__construct()
{
	return null();
}

//ElementType_Impl__obj::~ElementType_Impl__obj() { }

Dynamic ElementType_Impl__obj::__CreateEmpty() { return  new ElementType_Impl__obj; }
hx::ObjectPtr< ElementType_Impl__obj > ElementType_Impl__obj::__new()
{  hx::ObjectPtr< ElementType_Impl__obj > result = new ElementType_Impl__obj();
	result->__construct();
	return result;}

Dynamic ElementType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElementType_Impl__obj > result = new ElementType_Impl__obj();
	result->__construct();
	return result;}

int ElementType_Impl__obj::BYTE;

int ElementType_Impl__obj::UNSIGNED_BYTE;

int ElementType_Impl__obj::SHORT;

int ElementType_Impl__obj::UNSIGNED_SHORT;

int ElementType_Impl__obj::FLOAT;


ElementType_Impl__obj::ElementType_Impl__obj()
{
}

Dynamic ElementType_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ElementType_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ElementType_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BYTE"),
	HX_CSTRING("UNSIGNED_BYTE"),
	HX_CSTRING("SHORT"),
	HX_CSTRING("UNSIGNED_SHORT"),
	HX_CSTRING("FLOAT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(ElementType_Impl__obj::FLOAT,"FLOAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(ElementType_Impl__obj::FLOAT,"FLOAT");
};

#endif

Class ElementType_Impl__obj::__mClass;

void ElementType_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._VertexAttribute.ElementType_Impl_"), hx::TCanCast< ElementType_Impl__obj> ,sStaticFields,sMemberFields,
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

void ElementType_Impl__obj::__boot()
{
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	FLOAT= (int)5126;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _VertexAttribute
