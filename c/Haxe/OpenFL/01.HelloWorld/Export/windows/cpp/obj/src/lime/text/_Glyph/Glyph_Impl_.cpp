#include <hxcpp.h>

#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#include <lime/text/_Glyph/Glyph_Impl_.h>
#endif
namespace lime{
namespace text{
namespace _Glyph{

Void Glyph_Impl__obj::__construct()
{
	return null();
}

//Glyph_Impl__obj::~Glyph_Impl__obj() { }

Dynamic Glyph_Impl__obj::__CreateEmpty() { return  new Glyph_Impl__obj; }
hx::ObjectPtr< Glyph_Impl__obj > Glyph_Impl__obj::__new()
{  hx::ObjectPtr< Glyph_Impl__obj > result = new Glyph_Impl__obj();
	result->__construct();
	return result;}

Dynamic Glyph_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Glyph_Impl__obj > result = new Glyph_Impl__obj();
	result->__construct();
	return result;}

int Glyph_Impl__obj::_new( int i){
	HX_STACK_FRAME("lime.text._Glyph.Glyph_Impl_","_new",0x786a5adc,"lime.text._Glyph.Glyph_Impl_._new","lime/text/Glyph.hx",9,0x27d291da)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(9)
	return i;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Glyph_Impl__obj,_new,return )


Glyph_Impl__obj::Glyph_Impl__obj()
{
}

Dynamic Glyph_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Glyph_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Glyph_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Glyph_Impl__obj::__mClass,"__mClass");
};

#endif

Class Glyph_Impl__obj::__mClass;

void Glyph_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.text._Glyph.Glyph_Impl_"), hx::TCanCast< Glyph_Impl__obj> ,sStaticFields,sMemberFields,
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

void Glyph_Impl__obj::__boot()
{
}

} // end namespace lime
} // end namespace text
} // end namespace _Glyph
