#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#include <lime/ui/_GamepadAxis/GamepadAxis_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _GamepadAxis{

Void GamepadAxis_Impl__obj::__construct()
{
	return null();
}

//GamepadAxis_Impl__obj::~GamepadAxis_Impl__obj() { }

Dynamic GamepadAxis_Impl__obj::__CreateEmpty() { return  new GamepadAxis_Impl__obj; }
hx::ObjectPtr< GamepadAxis_Impl__obj > GamepadAxis_Impl__obj::__new()
{  hx::ObjectPtr< GamepadAxis_Impl__obj > result = new GamepadAxis_Impl__obj();
	result->__construct();
	return result;}

Dynamic GamepadAxis_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadAxis_Impl__obj > result = new GamepadAxis_Impl__obj();
	result->__construct();
	return result;}

int GamepadAxis_Impl__obj::LEFT_X;

int GamepadAxis_Impl__obj::LEFT_Y;

int GamepadAxis_Impl__obj::RIGHT_X;

int GamepadAxis_Impl__obj::RIGHT_Y;

int GamepadAxis_Impl__obj::TRIGGER_LEFT;

int GamepadAxis_Impl__obj::TRIGGER_RIGHT;

::String GamepadAxis_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.ui._GamepadAxis.GamepadAxis_Impl_","toString",0x829ca022,"lime.ui._GamepadAxis.GamepadAxis_Impl_.toString","lime/ui/GamepadAxis.hx",17,0x01182a1d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(17)
	switch( (int)(this1)){
		case (int)0: {
			HX_STACK_LINE(19)
			return HX_CSTRING("LEFT_X");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(20)
			return HX_CSTRING("LEFT_Y");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(21)
			return HX_CSTRING("RIGHT_X");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(22)
			return HX_CSTRING("RIGHT_Y");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(23)
			return HX_CSTRING("TRIGGER_LEFT");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(24)
			return HX_CSTRING("TRIGGER_RIGHT");
		}
		;break;
		default: {
			HX_STACK_LINE(25)
			return ((HX_CSTRING("UNKNOWN (") + this1) + HX_CSTRING(")"));
		}
	}
	HX_STACK_LINE(17)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadAxis_Impl__obj,toString,return )


GamepadAxis_Impl__obj::GamepadAxis_Impl__obj()
{
}

Dynamic GamepadAxis_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadAxis_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadAxis_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT_X"),
	HX_CSTRING("LEFT_Y"),
	HX_CSTRING("RIGHT_X"),
	HX_CSTRING("RIGHT_Y"),
	HX_CSTRING("TRIGGER_LEFT"),
	HX_CSTRING("TRIGGER_RIGHT"),
	HX_CSTRING("toString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_MARK_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_X,"LEFT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::LEFT_Y,"LEFT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_X,"RIGHT_X");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::RIGHT_Y,"RIGHT_Y");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_LEFT,"TRIGGER_LEFT");
	HX_VISIT_MEMBER_NAME(GamepadAxis_Impl__obj::TRIGGER_RIGHT,"TRIGGER_RIGHT");
};

#endif

Class GamepadAxis_Impl__obj::__mClass;

void GamepadAxis_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._GamepadAxis.GamepadAxis_Impl_"), hx::TCanCast< GamepadAxis_Impl__obj> ,sStaticFields,sMemberFields,
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

void GamepadAxis_Impl__obj::__boot()
{
	LEFT_X= (int)0;
	LEFT_Y= (int)1;
	RIGHT_X= (int)2;
	RIGHT_Y= (int)3;
	TRIGGER_LEFT= (int)4;
	TRIGGER_RIGHT= (int)5;
}

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis
