#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_Int32Array
#include <lime/utils/Int32Array.h>
#endif
namespace lime{
namespace utils{

Void Int32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("lime.utils.Int32Array","new",0xa9d58d93,"lime.utils.Int32Array.new","lime/utils/Int32Array.hx",45,0x9a557d3b)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(45)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(47)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		int _g1 = (int(_g) << int((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		super::__construct(_g1,null(),null());
		HX_STACK_LINE(49)
		this->length = bufferOrArray;
	}
	else{
		HX_STACK_LINE(51)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(53)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(54)
			if (((length != null()))){
				HX_STACK_LINE(54)
				this->length = length;
			}
			else{
				HX_STACK_LINE(54)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(56)
			super::__construct((int(this->length) << int((int)2)),null(),null());
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(65)
					::__hxcpp_memory_set_i32(this->bytes,(int(i) << int((int)2)),ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(72)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::lime::utils::Int32Array >()))){
				HX_STACK_LINE(74)
				::lime::utils::Int32Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(75)
				if (((length != null()))){
					HX_STACK_LINE(75)
					this->length = length;
				}
				else{
					HX_STACK_LINE(75)
					this->length = (ints->length - start);
				}
				HX_STACK_LINE(77)
				super::__construct((int(this->length) << int((int)2)),null(),null());
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(83)
					int _g = this->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(83)
					while((true)){
						HX_STACK_LINE(83)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(83)
							break;
						}
						HX_STACK_LINE(83)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(86)
						::__hxcpp_memory_set_i32(this->bytes,(int(i) << int((int)2)),ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(95)
				super::__construct(bufferOrArray,start,(  (((length != null()))) ? Dynamic((int(length) << int((int)2))) : Dynamic(null()) ));
				HX_STACK_LINE(97)
				if (((((int(this->byteLength) & int((int)3))) > (int)0))){
					HX_STACK_LINE(99)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
				}
				HX_STACK_LINE(103)
				this->length = (int(this->byteLength) >> int((int)2));
				HX_STACK_LINE(105)
				if ((((int(this->length) << int((int)2)) != this->byteLength))){
					HX_STACK_LINE(107)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
				}
			}
		}
	}
}
;
	return null();
}

//Int32Array_obj::~Int32Array_obj() { }

Dynamic Int32Array_obj::__CreateEmpty() { return  new Int32Array_obj; }
hx::ObjectPtr< Int32Array_obj > Int32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(bufferOrArray,__o_start,length);
	return result;}

Dynamic Int32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int32Array_obj > result = new Int32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Int32Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.Int32Array","set",0xa9d958d5,"lime.utils.Int32Array.set","lime/utils/Int32Array.hx",118,0x9a557d3b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(118)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(120)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(122)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(122)
				while((true)){
					HX_STACK_LINE(122)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(122)
						break;
					}
					HX_STACK_LINE(122)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(124)
					::__hxcpp_memory_set_i32(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(128)
			if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::lime::utils::Int32Array >()))){
				HX_STACK_LINE(130)
				::lime::utils::Int32Array ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(132)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(134)
						::__hxcpp_memory_set_i32(this->bytes,(((int((i + offset)) << int((int)2))) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(140)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,set,(void))

::lime::utils::Int32Array Int32Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("lime.utils.Int32Array","subarray",0x21c5de06,"lime.utils.Int32Array.subarray","lime/utils/Int32Array.hx",147,0x9a557d3b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(149)
	if (((end == null()))){
		HX_STACK_LINE(149)
		end = this->length;
	}
	else{
		HX_STACK_LINE(149)
		end = end;
	}
	HX_STACK_LINE(150)
	return ::lime::utils::Int32Array_obj::__new(this->buffer,(int(start) << int((int)2)),(end - start));
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,subarray,return )

int Int32Array_obj::__get( int index){
	HX_STACK_FRAME("lime.utils.Int32Array","__get",0x4d7c9169,"lime.utils.Int32Array.__get","lime/utils/Int32Array.hx",155,0x9a557d3b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(155)
	return ::__hxcpp_memory_get_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Int32Array_obj,__get,return )

Void Int32Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("lime.utils.Int32Array","__set",0x4d85ac75,"lime.utils.Int32Array.__set","lime/utils/Int32Array.hx",156,0x9a557d3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(156)
		::__hxcpp_memory_set_i32(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int32Array_obj,__set,(void))

int Int32Array_obj::BYTES_PER_ELEMENT;


Int32Array_obj::Int32Array_obj()
{
}

Dynamic Int32Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Int32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int32Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("set"),
	HX_CSTRING("subarray"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int32Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int32Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int32Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

Class Int32Array_obj::__mClass;

void Int32Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.Int32Array"), hx::TCanCast< Int32Array_obj> ,sStaticFields,sMemberFields,
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

void Int32Array_obj::__boot()
{
	BYTES_PER_ELEMENT= (int)4;
}

} // end namespace lime
} // end namespace utils
