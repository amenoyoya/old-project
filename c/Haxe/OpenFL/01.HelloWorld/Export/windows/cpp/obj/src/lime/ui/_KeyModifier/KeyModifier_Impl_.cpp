#include <hxcpp.h>

#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
namespace lime{
namespace ui{
namespace _KeyModifier{

Void KeyModifier_Impl__obj::__construct()
{
	return null();
}

//KeyModifier_Impl__obj::~KeyModifier_Impl__obj() { }

Dynamic KeyModifier_Impl__obj::__CreateEmpty() { return  new KeyModifier_Impl__obj; }
hx::ObjectPtr< KeyModifier_Impl__obj > KeyModifier_Impl__obj::__new()
{  hx::ObjectPtr< KeyModifier_Impl__obj > result = new KeyModifier_Impl__obj();
	result->__construct();
	return result;}

Dynamic KeyModifier_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyModifier_Impl__obj > result = new KeyModifier_Impl__obj();
	result->__construct();
	return result;}

int KeyModifier_Impl__obj::NONE;

int KeyModifier_Impl__obj::LEFT_SHIFT;

int KeyModifier_Impl__obj::RIGHT_SHIFT;

int KeyModifier_Impl__obj::LEFT_CTRL;

int KeyModifier_Impl__obj::RIGHT_CTRL;

int KeyModifier_Impl__obj::LEFT_ALT;

int KeyModifier_Impl__obj::RIGHT_ALT;

int KeyModifier_Impl__obj::LEFT_META;

int KeyModifier_Impl__obj::RIGHT_META;

int KeyModifier_Impl__obj::NUM_LOCK;

int KeyModifier_Impl__obj::CAPS_LOCK;

int KeyModifier_Impl__obj::MODE;

int KeyModifier_Impl__obj::CTRL;

int KeyModifier_Impl__obj::SHIFT;

int KeyModifier_Impl__obj::ALT;

int KeyModifier_Impl__obj::META;

bool KeyModifier_Impl__obj::get_altKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_altKey",0x98ede94d,"lime.ui._KeyModifier.KeyModifier_Impl_.get_altKey","lime/ui/KeyModifier.hx",35,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(35)
	return (bool((((int(this1) & int((int)256))) > (int)0)) || bool((((int(this1) & int((int)512))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_altKey,return )

bool KeyModifier_Impl__obj::set_altKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_altKey",0x9c6b87c1,"lime.ui._KeyModifier.KeyModifier_Impl_.set_altKey","lime/ui/KeyModifier.hx",40,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	if ((value)){
		HX_STACK_LINE(44)
		hx::OrEq(this1,(int)768);
	}
	else{
		HX_STACK_LINE(48)
		hx::AndEq(this1,((int)268435455 - (int)768));
	}
	HX_STACK_LINE(52)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_altKey,return )

bool KeyModifier_Impl__obj::get_capsLock( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_capsLock",0x26398dc3,"lime.ui._KeyModifier.KeyModifier_Impl_.get_capsLock","lime/ui/KeyModifier.hx",59,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(59)
	return (bool((((int(this1) & int((int)8192))) > (int)0)) || bool((((int(this1) & int((int)8192))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_capsLock,return )

bool KeyModifier_Impl__obj::set_capsLock( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_capsLock",0x3b32b137,"lime.ui._KeyModifier.KeyModifier_Impl_.set_capsLock","lime/ui/KeyModifier.hx",64,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	if ((value)){
		HX_STACK_LINE(68)
		hx::OrEq(this1,(int)8192);
	}
	else{
		HX_STACK_LINE(72)
		hx::AndEq(this1,((int)268435455 - (int)8192));
	}
	HX_STACK_LINE(76)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_capsLock,return )

bool KeyModifier_Impl__obj::get_ctrlKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_ctrlKey",0xac33207d,"lime.ui._KeyModifier.KeyModifier_Impl_.get_ctrlKey","lime/ui/KeyModifier.hx",83,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(83)
	return (bool((((int(this1) & int((int)64))) > (int)0)) || bool((((int(this1) & int((int)128))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_ctrlKey,return )

bool KeyModifier_Impl__obj::set_ctrlKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_ctrlKey",0xb6a02789,"lime.ui._KeyModifier.KeyModifier_Impl_.set_ctrlKey","lime/ui/KeyModifier.hx",88,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(90)
	if ((value)){
		HX_STACK_LINE(92)
		hx::OrEq(this1,(int)192);
	}
	else{
		HX_STACK_LINE(96)
		hx::AndEq(this1,((int)268435455 - (int)192));
	}
	HX_STACK_LINE(100)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_ctrlKey,return )

bool KeyModifier_Impl__obj::get_metaKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_metaKey",0x6c372aa3,"lime.ui._KeyModifier.KeyModifier_Impl_.get_metaKey","lime/ui/KeyModifier.hx",107,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(107)
	return (bool((((int(this1) & int((int)1024))) > (int)0)) || bool((((int(this1) & int((int)2048))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_metaKey,return )

bool KeyModifier_Impl__obj::set_metaKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_metaKey",0x76a431af,"lime.ui._KeyModifier.KeyModifier_Impl_.set_metaKey","lime/ui/KeyModifier.hx",112,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	if ((value)){
		HX_STACK_LINE(116)
		hx::OrEq(this1,(int)3072);
	}
	else{
		HX_STACK_LINE(120)
		hx::AndEq(this1,((int)268435455 - (int)3072));
	}
	HX_STACK_LINE(124)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_metaKey,return )

bool KeyModifier_Impl__obj::get_numLock( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_numLock",0xe5ee2c1a,"lime.ui._KeyModifier.KeyModifier_Impl_.get_numLock","lime/ui/KeyModifier.hx",131,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(131)
	return (bool((((int(this1) & int((int)4096))) > (int)0)) || bool((((int(this1) & int((int)4096))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_numLock,return )

bool KeyModifier_Impl__obj::set_numLock( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_numLock",0xf05b3326,"lime.ui._KeyModifier.KeyModifier_Impl_.set_numLock","lime/ui/KeyModifier.hx",136,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	if ((value)){
		HX_STACK_LINE(140)
		hx::OrEq(this1,(int)4096);
	}
	else{
		HX_STACK_LINE(144)
		hx::AndEq(this1,((int)268435455 - (int)4096));
	}
	HX_STACK_LINE(148)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_numLock,return )

bool KeyModifier_Impl__obj::get_shiftKey( int this1){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","get_shiftKey",0xae171754,"lime.ui._KeyModifier.KeyModifier_Impl_.get_shiftKey","lime/ui/KeyModifier.hx",155,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(155)
	return (bool((((int(this1) & int((int)1))) > (int)0)) || bool((((int(this1) & int((int)2))) > (int)0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyModifier_Impl__obj,get_shiftKey,return )

bool KeyModifier_Impl__obj::set_shiftKey( int this1,bool value){
	HX_STACK_FRAME("lime.ui._KeyModifier.KeyModifier_Impl_","set_shiftKey",0xc3103ac8,"lime.ui._KeyModifier.KeyModifier_Impl_.set_shiftKey","lime/ui/KeyModifier.hx",160,0xae70b869)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(162)
	if ((value)){
		HX_STACK_LINE(164)
		hx::OrEq(this1,(int)3);
	}
	else{
		HX_STACK_LINE(168)
		hx::AndEq(this1,((int)268435455 - (int)3));
	}
	HX_STACK_LINE(172)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(KeyModifier_Impl__obj,set_shiftKey,return )


KeyModifier_Impl__obj::KeyModifier_Impl__obj()
{
}

Dynamic KeyModifier_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"get_altKey") ) { return get_altKey_dyn(); }
		if (HX_FIELD_EQ(inName,"set_altKey") ) { return set_altKey_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_ctrlKey") ) { return get_ctrlKey_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ctrlKey") ) { return set_ctrlKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_metaKey") ) { return get_metaKey_dyn(); }
		if (HX_FIELD_EQ(inName,"set_metaKey") ) { return set_metaKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLock") ) { return get_numLock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_numLock") ) { return set_numLock_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_capsLock") ) { return get_capsLock_dyn(); }
		if (HX_FIELD_EQ(inName,"set_capsLock") ) { return set_capsLock_dyn(); }
		if (HX_FIELD_EQ(inName,"get_shiftKey") ) { return get_shiftKey_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shiftKey") ) { return set_shiftKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyModifier_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyModifier_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("LEFT_SHIFT"),
	HX_CSTRING("RIGHT_SHIFT"),
	HX_CSTRING("LEFT_CTRL"),
	HX_CSTRING("RIGHT_CTRL"),
	HX_CSTRING("LEFT_ALT"),
	HX_CSTRING("RIGHT_ALT"),
	HX_CSTRING("LEFT_META"),
	HX_CSTRING("RIGHT_META"),
	HX_CSTRING("NUM_LOCK"),
	HX_CSTRING("CAPS_LOCK"),
	HX_CSTRING("MODE"),
	HX_CSTRING("CTRL"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("ALT"),
	HX_CSTRING("META"),
	HX_CSTRING("get_altKey"),
	HX_CSTRING("set_altKey"),
	HX_CSTRING("get_capsLock"),
	HX_CSTRING("set_capsLock"),
	HX_CSTRING("get_ctrlKey"),
	HX_CSTRING("set_ctrlKey"),
	HX_CSTRING("get_metaKey"),
	HX_CSTRING("set_metaKey"),
	HX_CSTRING("get_numLock"),
	HX_CSTRING("set_numLock"),
	HX_CSTRING("get_shiftKey"),
	HX_CSTRING("set_shiftKey"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_SHIFT,"LEFT_SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_SHIFT,"RIGHT_SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_CTRL,"LEFT_CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_CTRL,"RIGHT_CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_ALT,"LEFT_ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_ALT,"RIGHT_ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_META,"LEFT_META");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_META,"RIGHT_META");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::NUM_LOCK,"NUM_LOCK");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::MODE,"MODE");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::CTRL,"CTRL");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(KeyModifier_Impl__obj::META,"META");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_SHIFT,"LEFT_SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_SHIFT,"RIGHT_SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_CTRL,"LEFT_CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_CTRL,"RIGHT_CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_ALT,"LEFT_ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_ALT,"RIGHT_ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::LEFT_META,"LEFT_META");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::RIGHT_META,"RIGHT_META");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::NUM_LOCK,"NUM_LOCK");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::MODE,"MODE");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::CTRL,"CTRL");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(KeyModifier_Impl__obj::META,"META");
};

#endif

Class KeyModifier_Impl__obj::__mClass;

void KeyModifier_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.ui._KeyModifier.KeyModifier_Impl_"), hx::TCanCast< KeyModifier_Impl__obj> ,sStaticFields,sMemberFields,
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

void KeyModifier_Impl__obj::__boot()
{
	NONE= (int)0;
	LEFT_SHIFT= (int)1;
	RIGHT_SHIFT= (int)2;
	LEFT_CTRL= (int)64;
	RIGHT_CTRL= (int)128;
	LEFT_ALT= (int)256;
	RIGHT_ALT= (int)512;
	LEFT_META= (int)1024;
	RIGHT_META= (int)2048;
	NUM_LOCK= (int)4096;
	CAPS_LOCK= (int)8192;
	MODE= (int)16384;
	CTRL= (int)192;
	SHIFT= (int)3;
	ALT= (int)768;
	META= (int)3072;
}

} // end namespace lime
} // end namespace ui
} // end namespace _KeyModifier
