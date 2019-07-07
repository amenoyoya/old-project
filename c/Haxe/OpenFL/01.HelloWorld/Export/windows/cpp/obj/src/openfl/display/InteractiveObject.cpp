#include <hxcpp.h>

#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void InteractiveObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.InteractiveObject","new",0x042d7309,"openfl.display.InteractiveObject.new","openfl/display/InteractiveObject.hx",1126,0x983a3689)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1128)
	super::__construct();
	HX_STACK_LINE(1130)
	this->doubleClickEnabled = false;
	HX_STACK_LINE(1131)
	this->mouseEnabled = true;
	HX_STACK_LINE(1132)
	this->needsSoftKeyboard = false;
	HX_STACK_LINE(1133)
	this->tabEnabled = true;
	HX_STACK_LINE(1134)
	this->tabIndex = (int)-1;
}
;
	return null();
}

//InteractiveObject_obj::~InteractiveObject_obj() { }

Dynamic InteractiveObject_obj::__CreateEmpty() { return  new InteractiveObject_obj; }
hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new()
{  hx::ObjectPtr< InteractiveObject_obj > result = new InteractiveObject_obj();
	result->__construct();
	return result;}

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractiveObject_obj > result = new InteractiveObject_obj();
	result->__construct();
	return result;}

bool InteractiveObject_obj::requestSoftKeyboard( ){
	HX_STACK_FRAME("openfl.display.InteractiveObject","requestSoftKeyboard",0x985d3a49,"openfl.display.InteractiveObject.requestSoftKeyboard","openfl/display/InteractiveObject.hx",1155,0x983a3689)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1157)
	::openfl::Lib_obj::notImplemented(HX_CSTRING("InteractiveObject.requestSoftKeyboard"));
	HX_STACK_LINE(1159)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

Void InteractiveObject_obj::__getInteractive( Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.InteractiveObject","__getInteractive",0xf3ec43c3,"openfl.display.InteractiveObject.__getInteractive","openfl/display/InteractiveObject.hx",1164,0x983a3689)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(1166)
		stack->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(1168)
		if (((this->parent != null()))){
			HX_STACK_LINE(1170)
			this->parent->__getInteractive(stack);
		}
	}
return null();
}



InteractiveObject_obj::InteractiveObject_obj()
{
}

void InteractiveObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveObject);
	HX_MARK_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_MARK_MEMBER_NAME(focusRect,"focusRect");
	HX_MARK_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_MARK_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_MARK_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_MARK_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_MARK_MEMBER_NAME(tabIndex,"tabIndex");
	::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(doubleClickEnabled,"doubleClickEnabled");
	HX_VISIT_MEMBER_NAME(focusRect,"focusRect");
	HX_VISIT_MEMBER_NAME(mouseEnabled,"mouseEnabled");
	HX_VISIT_MEMBER_NAME(needsSoftKeyboard,"needsSoftKeyboard");
	HX_VISIT_MEMBER_NAME(softKeyboardInputAreaOfInterest,"softKeyboardInputAreaOfInterest");
	HX_VISIT_MEMBER_NAME(tabEnabled,"tabEnabled");
	HX_VISIT_MEMBER_NAME(tabIndex,"tabIndex");
	::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic InteractiveObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { return tabIndex; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { return focusRect; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { return tabEnabled; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { return mouseEnabled; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { return needsSoftKeyboard; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { return softKeyboardInputAreaOfInterest; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InteractiveObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabIndex") ) { tabIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusRect") ) { focusRect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabEnabled") ) { tabEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { mouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { needsSoftKeyboard=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"softKeyboardInputAreaOfInterest") ) { softKeyboardInputAreaOfInterest=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("doubleClickEnabled"));
	outFields->push(HX_CSTRING("focusRect"));
	outFields->push(HX_CSTRING("mouseEnabled"));
	outFields->push(HX_CSTRING("needsSoftKeyboard"));
	outFields->push(HX_CSTRING("softKeyboardInputAreaOfInterest"));
	outFields->push(HX_CSTRING("tabEnabled"));
	outFields->push(HX_CSTRING("tabIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_CSTRING("doubleClickEnabled")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InteractiveObject_obj,focusRect),HX_CSTRING("focusRect")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,mouseEnabled),HX_CSTRING("mouseEnabled")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,needsSoftKeyboard),HX_CSTRING("needsSoftKeyboard")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(InteractiveObject_obj,softKeyboardInputAreaOfInterest),HX_CSTRING("softKeyboardInputAreaOfInterest")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,tabEnabled),HX_CSTRING("tabEnabled")},
	{hx::fsInt,(int)offsetof(InteractiveObject_obj,tabIndex),HX_CSTRING("tabIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("doubleClickEnabled"),
	HX_CSTRING("focusRect"),
	HX_CSTRING("mouseEnabled"),
	HX_CSTRING("needsSoftKeyboard"),
	HX_CSTRING("softKeyboardInputAreaOfInterest"),
	HX_CSTRING("tabEnabled"),
	HX_CSTRING("tabIndex"),
	HX_CSTRING("requestSoftKeyboard"),
	HX_CSTRING("__getInteractive"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
};

#endif

Class InteractiveObject_obj::__mClass;

void InteractiveObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.InteractiveObject"), hx::TCanCast< InteractiveObject_obj> ,sStaticFields,sMemberFields,
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

void InteractiveObject_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
