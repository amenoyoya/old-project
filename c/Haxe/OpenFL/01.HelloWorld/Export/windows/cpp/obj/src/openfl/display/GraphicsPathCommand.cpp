#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsPathCommand
#include <openfl/display/GraphicsPathCommand.h>
#endif
namespace openfl{
namespace display{

Void GraphicsPathCommand_obj::__construct()
{
	return null();
}

//GraphicsPathCommand_obj::~GraphicsPathCommand_obj() { }

Dynamic GraphicsPathCommand_obj::__CreateEmpty() { return  new GraphicsPathCommand_obj; }
hx::ObjectPtr< GraphicsPathCommand_obj > GraphicsPathCommand_obj::__new()
{  hx::ObjectPtr< GraphicsPathCommand_obj > result = new GraphicsPathCommand_obj();
	result->__construct();
	return result;}

Dynamic GraphicsPathCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPathCommand_obj > result = new GraphicsPathCommand_obj();
	result->__construct();
	return result;}

int GraphicsPathCommand_obj::LINE_TO;

int GraphicsPathCommand_obj::MOVE_TO;

int GraphicsPathCommand_obj::CURVE_TO;

int GraphicsPathCommand_obj::WIDE_LINE_TO;

int GraphicsPathCommand_obj::WIDE_MOVE_TO;

int GraphicsPathCommand_obj::NO_OP;

int GraphicsPathCommand_obj::CUBIC_CURVE_TO;


GraphicsPathCommand_obj::GraphicsPathCommand_obj()
{
}

Dynamic GraphicsPathCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicsPathCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsPathCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LINE_TO"),
	HX_CSTRING("MOVE_TO"),
	HX_CSTRING("CURVE_TO"),
	HX_CSTRING("WIDE_LINE_TO"),
	HX_CSTRING("WIDE_MOVE_TO"),
	HX_CSTRING("NO_OP"),
	HX_CSTRING("CUBIC_CURVE_TO"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::LINE_TO,"LINE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::MOVE_TO,"MOVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::CURVE_TO,"CURVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_LINE_TO,"WIDE_LINE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_MOVE_TO,"WIDE_MOVE_TO");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::NO_OP,"NO_OP");
	HX_MARK_MEMBER_NAME(GraphicsPathCommand_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::LINE_TO,"LINE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::MOVE_TO,"MOVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::CURVE_TO,"CURVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_LINE_TO,"WIDE_LINE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::WIDE_MOVE_TO,"WIDE_MOVE_TO");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::NO_OP,"NO_OP");
	HX_VISIT_MEMBER_NAME(GraphicsPathCommand_obj::CUBIC_CURVE_TO,"CUBIC_CURVE_TO");
};

#endif

Class GraphicsPathCommand_obj::__mClass;

void GraphicsPathCommand_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.GraphicsPathCommand"), hx::TCanCast< GraphicsPathCommand_obj> ,sStaticFields,sMemberFields,
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

void GraphicsPathCommand_obj::__boot()
{
	LINE_TO= (int)2;
	MOVE_TO= (int)1;
	CURVE_TO= (int)3;
	WIDE_LINE_TO= (int)5;
	WIDE_MOVE_TO= (int)4;
	NO_OP= (int)0;
	CUBIC_CURVE_TO= (int)6;
}

} // end namespace openfl
} // end namespace display
