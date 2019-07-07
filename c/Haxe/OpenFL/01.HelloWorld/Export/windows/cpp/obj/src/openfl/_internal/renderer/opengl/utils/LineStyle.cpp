#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void LineStyle_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.LineStyle","new",0x3c350e8e,"openfl._internal.renderer.opengl.utils.LineStyle.new","openfl/_internal/renderer/opengl/utils/DrawPath.hx",507,0xf0fd7951)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(508)
	this->width = (int)0;
	HX_STACK_LINE(509)
	this->color = (int)0;
	HX_STACK_LINE(510)
	this->alpha = (int)1;
	HX_STACK_LINE(511)
	this->scaleMode = ::openfl::display::LineScaleMode_obj::NORMAL;
	HX_STACK_LINE(512)
	this->caps = ::openfl::display::CapsStyle_obj::ROUND;
	HX_STACK_LINE(513)
	this->joints = ::openfl::display::JointStyle_obj::ROUND;
	HX_STACK_LINE(514)
	this->miterLimit = (int)3;
}
;
	return null();
}

//LineStyle_obj::~LineStyle_obj() { }

Dynamic LineStyle_obj::__CreateEmpty() { return  new LineStyle_obj; }
hx::ObjectPtr< LineStyle_obj > LineStyle_obj::__new()
{  hx::ObjectPtr< LineStyle_obj > result = new LineStyle_obj();
	result->__construct();
	return result;}

Dynamic LineStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineStyle_obj > result = new LineStyle_obj();
	result->__construct();
	return result;}


LineStyle_obj::LineStyle_obj()
{
}

void LineStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineStyle);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(caps,"caps");
	HX_MARK_MEMBER_NAME(joints,"joints");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_END_CLASS();
}

void LineStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(caps,"caps");
	HX_VISIT_MEMBER_NAME(joints,"joints");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
}

Dynamic LineStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { return caps; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { return joints; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return miterLimit; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"caps") ) { caps=inValue.Cast< ::openfl::display::CapsStyle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"joints") ) { joints=inValue.Cast< ::openfl::display::JointStyle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< ::openfl::display::LineScaleMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("scaleMode"));
	outFields->push(HX_CSTRING("caps"));
	outFields->push(HX_CSTRING("joints"));
	outFields->push(HX_CSTRING("miterLimit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LineStyle_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(LineStyle_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LineStyle_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsObject /*::openfl::display::LineScaleMode*/ ,(int)offsetof(LineStyle_obj,scaleMode),HX_CSTRING("scaleMode")},
	{hx::fsObject /*::openfl::display::CapsStyle*/ ,(int)offsetof(LineStyle_obj,caps),HX_CSTRING("caps")},
	{hx::fsObject /*::openfl::display::JointStyle*/ ,(int)offsetof(LineStyle_obj,joints),HX_CSTRING("joints")},
	{hx::fsFloat,(int)offsetof(LineStyle_obj,miterLimit),HX_CSTRING("miterLimit")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("color"),
	HX_CSTRING("alpha"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("caps"),
	HX_CSTRING("joints"),
	HX_CSTRING("miterLimit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#endif

Class LineStyle_obj::__mClass;

void LineStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.LineStyle"), hx::TCanCast< LineStyle_obj> ,sStaticFields,sMemberFields,
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

void LineStyle_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
