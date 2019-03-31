#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
namespace lime{
namespace ui{

::lime::ui::MouseCursor MouseCursor_obj::ARROW;

::lime::ui::MouseCursor MouseCursor_obj::CROSSHAIR;

::lime::ui::MouseCursor MouseCursor_obj::CUSTOM;

::lime::ui::MouseCursor MouseCursor_obj::DEFAULT;

::lime::ui::MouseCursor MouseCursor_obj::MOVE;

::lime::ui::MouseCursor MouseCursor_obj::POINTER;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NESW;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NS;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NWSE;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_WE;

::lime::ui::MouseCursor MouseCursor_obj::TEXT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT_ARROW;

HX_DEFINE_CREATE_ENUM(MouseCursor_obj)

int MouseCursor_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ARROW")) return 0;
	if (inName==HX_CSTRING("CROSSHAIR")) return 1;
	if (inName==HX_CSTRING("CUSTOM")) return 12;
	if (inName==HX_CSTRING("DEFAULT")) return 2;
	if (inName==HX_CSTRING("MOVE")) return 3;
	if (inName==HX_CSTRING("POINTER")) return 4;
	if (inName==HX_CSTRING("RESIZE_NESW")) return 5;
	if (inName==HX_CSTRING("RESIZE_NS")) return 6;
	if (inName==HX_CSTRING("RESIZE_NWSE")) return 7;
	if (inName==HX_CSTRING("RESIZE_WE")) return 8;
	if (inName==HX_CSTRING("TEXT")) return 9;
	if (inName==HX_CSTRING("WAIT")) return 10;
	if (inName==HX_CSTRING("WAIT_ARROW")) return 11;
	return super::__FindIndex(inName);
}

int MouseCursor_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ARROW")) return 0;
	if (inName==HX_CSTRING("CROSSHAIR")) return 0;
	if (inName==HX_CSTRING("CUSTOM")) return 0;
	if (inName==HX_CSTRING("DEFAULT")) return 0;
	if (inName==HX_CSTRING("MOVE")) return 0;
	if (inName==HX_CSTRING("POINTER")) return 0;
	if (inName==HX_CSTRING("RESIZE_NESW")) return 0;
	if (inName==HX_CSTRING("RESIZE_NS")) return 0;
	if (inName==HX_CSTRING("RESIZE_NWSE")) return 0;
	if (inName==HX_CSTRING("RESIZE_WE")) return 0;
	if (inName==HX_CSTRING("TEXT")) return 0;
	if (inName==HX_CSTRING("WAIT")) return 0;
	if (inName==HX_CSTRING("WAIT_ARROW")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic MouseCursor_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ARROW")) return ARROW;
	if (inName==HX_CSTRING("CROSSHAIR")) return CROSSHAIR;
	if (inName==HX_CSTRING("CUSTOM")) return CUSTOM;
	if (inName==HX_CSTRING("DEFAULT")) return DEFAULT;
	if (inName==HX_CSTRING("MOVE")) return MOVE;
	if (inName==HX_CSTRING("POINTER")) return POINTER;
	if (inName==HX_CSTRING("RESIZE_NESW")) return RESIZE_NESW;
	if (inName==HX_CSTRING("RESIZE_NS")) return RESIZE_NS;
	if (inName==HX_CSTRING("RESIZE_NWSE")) return RESIZE_NWSE;
	if (inName==HX_CSTRING("RESIZE_WE")) return RESIZE_WE;
	if (inName==HX_CSTRING("TEXT")) return TEXT;
	if (inName==HX_CSTRING("WAIT")) return WAIT;
	if (inName==HX_CSTRING("WAIT_ARROW")) return WAIT_ARROW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ARROW"),
	HX_CSTRING("CROSSHAIR"),
	HX_CSTRING("DEFAULT"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("POINTER"),
	HX_CSTRING("RESIZE_NESW"),
	HX_CSTRING("RESIZE_NS"),
	HX_CSTRING("RESIZE_NWSE"),
	HX_CSTRING("RESIZE_WE"),
	HX_CSTRING("TEXT"),
	HX_CSTRING("WAIT"),
	HX_CSTRING("WAIT_ARROW"),
	HX_CSTRING("CUSTOM"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class MouseCursor_obj::__mClass;

Dynamic __Create_MouseCursor_obj() { return new MouseCursor_obj; }

void MouseCursor_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui.MouseCursor"), hx::TCanCast< MouseCursor_obj >,sStaticFields,sMemberFields,
	&__Create_MouseCursor_obj, &__Create,
	&super::__SGetClass(), &CreateMouseCursor_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void MouseCursor_obj::__boot()
{
hx::Static(ARROW) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("ARROW"),0);
hx::Static(CROSSHAIR) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("CROSSHAIR"),1);
hx::Static(CUSTOM) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("CUSTOM"),12);
hx::Static(DEFAULT) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("DEFAULT"),2);
hx::Static(MOVE) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("MOVE"),3);
hx::Static(POINTER) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("POINTER"),4);
hx::Static(RESIZE_NESW) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("RESIZE_NESW"),5);
hx::Static(RESIZE_NS) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("RESIZE_NS"),6);
hx::Static(RESIZE_NWSE) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("RESIZE_NWSE"),7);
hx::Static(RESIZE_WE) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("RESIZE_WE"),8);
hx::Static(TEXT) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("TEXT"),9);
hx::Static(WAIT) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("WAIT"),10);
hx::Static(WAIT_ARROW) = hx::CreateEnum< MouseCursor_obj >(HX_CSTRING("WAIT_ARROW"),11);
}


} // end namespace lime
} // end namespace ui
