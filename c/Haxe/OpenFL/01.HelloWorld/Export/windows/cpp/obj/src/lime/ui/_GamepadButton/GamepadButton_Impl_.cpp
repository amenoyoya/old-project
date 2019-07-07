#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__GamepadButton_GamepadButton_Impl_
#include <lime/ui/_GamepadButton/GamepadButton_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _GamepadButton{

Void GamepadButton_Impl__obj::__construct()
{
	return null();
}

//GamepadButton_Impl__obj::~GamepadButton_Impl__obj() { }

Dynamic GamepadButton_Impl__obj::__CreateEmpty() { return  new GamepadButton_Impl__obj; }
hx::ObjectPtr< GamepadButton_Impl__obj > GamepadButton_Impl__obj::__new()
{  hx::ObjectPtr< GamepadButton_Impl__obj > result = new GamepadButton_Impl__obj();
	result->__construct();
	return result;}

Dynamic GamepadButton_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamepadButton_Impl__obj > result = new GamepadButton_Impl__obj();
	result->__construct();
	return result;}

int GamepadButton_Impl__obj::A;

int GamepadButton_Impl__obj::B;

int GamepadButton_Impl__obj::X;

int GamepadButton_Impl__obj::Y;

int GamepadButton_Impl__obj::BACK;

int GamepadButton_Impl__obj::GUIDE;

int GamepadButton_Impl__obj::START;

int GamepadButton_Impl__obj::LEFT_STICK;

int GamepadButton_Impl__obj::RIGHT_STICK;

int GamepadButton_Impl__obj::LEFT_SHOULDER;

int GamepadButton_Impl__obj::RIGHT_SHOULDER;

int GamepadButton_Impl__obj::DPAD_UP;

int GamepadButton_Impl__obj::DPAD_DOWN;

int GamepadButton_Impl__obj::DPAD_LEFT;

int GamepadButton_Impl__obj::DPAD_RIGHT;

::String GamepadButton_Impl__obj::toString( int this1){
	HX_STACK_FRAME("lime.ui._GamepadButton.GamepadButton_Impl_","toString",0xbd666d80,"lime.ui._GamepadButton.GamepadButton_Impl_.toString","lime/ui/GamepadButton.hx",26,0x5ef9656c)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(26)
	switch( (int)(this1)){
		case (int)0: {
			HX_STACK_LINE(28)
			return HX_CSTRING("A");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(29)
			return HX_CSTRING("B");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(30)
			return HX_CSTRING("X");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(31)
			return HX_CSTRING("Y");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(32)
			return HX_CSTRING("BACK");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(33)
			return HX_CSTRING("GUIDE");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(34)
			return HX_CSTRING("START");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(35)
			return HX_CSTRING("LEFT_STICK");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(36)
			return HX_CSTRING("RIGHT_STICK");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(37)
			return HX_CSTRING("LEFT_SHOULDER");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(38)
			return HX_CSTRING("RIGHT_SHOULDER");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(39)
			return HX_CSTRING("DPAD_UP");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(40)
			return HX_CSTRING("DPAD_DOWN");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(41)
			return HX_CSTRING("DPAD_LEFT");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(42)
			return HX_CSTRING("DPAD_RIGHT");
		}
		;break;
		default: {
			HX_STACK_LINE(43)
			return ((HX_CSTRING("UNKNOWN (") + this1) + HX_CSTRING(")"));
		}
	}
	HX_STACK_LINE(26)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadButton_Impl__obj,toString,return )


GamepadButton_Impl__obj::GamepadButton_Impl__obj()
{
}

Dynamic GamepadButton_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamepadButton_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GamepadButton_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("BACK"),
	HX_CSTRING("GUIDE"),
	HX_CSTRING("START"),
	HX_CSTRING("LEFT_STICK"),
	HX_CSTRING("RIGHT_STICK"),
	HX_CSTRING("LEFT_SHOULDER"),
	HX_CSTRING("RIGHT_SHOULDER"),
	HX_CSTRING("DPAD_UP"),
	HX_CSTRING("DPAD_DOWN"),
	HX_CSTRING("DPAD_LEFT"),
	HX_CSTRING("DPAD_RIGHT"),
	HX_CSTRING("toString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::START,"START");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_STICK,"LEFT_STICK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_STICK,"RIGHT_STICK");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::START,"START");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_STICK,"LEFT_STICK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_STICK,"RIGHT_STICK");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(GamepadButton_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
};

#endif

Class GamepadButton_Impl__obj::__mClass;

void GamepadButton_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._GamepadButton.GamepadButton_Impl_"), hx::TCanCast< GamepadButton_Impl__obj> ,sStaticFields,sMemberFields,
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

void GamepadButton_Impl__obj::__boot()
{
	A= (int)0;
	B= (int)1;
	X= (int)2;
	Y= (int)3;
	BACK= (int)4;
	GUIDE= (int)5;
	START= (int)6;
	LEFT_STICK= (int)7;
	RIGHT_STICK= (int)8;
	LEFT_SHOULDER= (int)9;
	RIGHT_SHOULDER= (int)10;
	DPAD_UP= (int)11;
	DPAD_DOWN= (int)12;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
}

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadButton
