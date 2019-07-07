#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
namespace openfl{

Void Memory_obj::__construct()
{
	return null();
}

//Memory_obj::~Memory_obj() { }

Dynamic Memory_obj::__CreateEmpty() { return  new Memory_obj; }
hx::ObjectPtr< Memory_obj > Memory_obj::__new()
{  hx::ObjectPtr< Memory_obj > result = new Memory_obj();
	result->__construct();
	return result;}

Dynamic Memory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Memory_obj > result = new Memory_obj();
	result->__construct();
	return result;}

::lime::utils::ByteArray Memory_obj::gcRef;

int Memory_obj::len;

Dynamic Memory_obj::_setPositionTemporarily( int position,Dynamic action){
	HX_STACK_FRAME("openfl.Memory","_setPositionTemporarily",0x2a841813,"openfl.Memory._setPositionTemporarily","openfl/Memory.hx",15,0x3e66e7be)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(action,"action")
	HX_STACK_LINE(17)
	int oldPosition = ::openfl::Memory_obj::gcRef->position;		HX_STACK_VAR(oldPosition,"oldPosition");
	HX_STACK_LINE(18)
	::openfl::Memory_obj::gcRef->position = position;
	HX_STACK_LINE(19)
	Dynamic value = action();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(20)
	::openfl::Memory_obj::gcRef->position = oldPosition;
	HX_STACK_LINE(22)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,_setPositionTemporarily,return )

int Memory_obj::getByte( int addr){
	HX_STACK_FRAME("openfl.Memory","getByte",0xd720eb8f,"openfl.Memory.getByte","openfl/Memory.hx",31,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(31)
	return ::openfl::Memory_obj::gcRef->b->__get(addr);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getByte,return )

Float Memory_obj::getDouble( int addr){
	HX_STACK_FRAME("openfl.Memory","getDouble",0x9d3a6758,"openfl.Memory.getDouble","openfl/Memory.hx",40,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Float run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",42,0x3e66e7be)
		{
			HX_STACK_LINE(42)
			return ::openfl::Memory_obj::gcRef->readDouble();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(40)
	return ::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getDouble,return )

Float Memory_obj::getFloat( int addr){
	HX_STACK_FRAME("openfl.Memory","getFloat",0xaaabef35,"openfl.Memory.getFloat","openfl/Memory.hx",53,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Float run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",55,0x3e66e7be)
		{
			HX_STACK_LINE(55)
			return ::openfl::Memory_obj::gcRef->readFloat();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(53)
	return ::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getFloat,return )

int Memory_obj::getI32( int addr){
	HX_STACK_FRAME("openfl.Memory","getI32",0x92c73aa1,"openfl.Memory.getI32","openfl/Memory.hx",66,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",68,0x3e66e7be)
		{
			HX_STACK_LINE(68)
			return ::openfl::Memory_obj::gcRef->readInt();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(66)
	return ::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getI32,return )

int Memory_obj::getUI16( int addr){
	HX_STACK_FRAME("openfl.Memory","getUI16",0xe38b52a0,"openfl.Memory.getUI16","openfl/Memory.hx",79,0x3e66e7be)
	HX_STACK_ARG(addr,"addr")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",81,0x3e66e7be)
		{
			HX_STACK_LINE(81)
			return ::openfl::Memory_obj::gcRef->readUnsignedShort();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(79)
	return ::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getUI16,return )

Void Memory_obj::select( ::lime::utils::ByteArray inBytes){
{
		HX_STACK_FRAME("openfl.Memory","select",0x59db434b,"openfl.Memory.select","openfl/Memory.hx",88,0x3e66e7be)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(90)
		::openfl::Memory_obj::gcRef = inBytes;
		HX_STACK_LINE(91)
		if (((inBytes != null()))){
			HX_STACK_LINE(91)
			::openfl::Memory_obj::len = inBytes->length;
		}
		else{
			HX_STACK_LINE(91)
			::openfl::Memory_obj::len = (int)0;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,select,(void))

Void Memory_obj::setByte( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setByte",0xca227c9b,"openfl.Memory.setByte","openfl/Memory.hx",100,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(100)
		::openfl::Memory_obj::gcRef->b[addr] = v;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setByte,(void))

Void Memory_obj::setDouble( int addr,Float v){
{
		HX_STACK_FRAME("openfl.Memory","setDouble",0x808b5364,"openfl.Memory.setDouble","openfl/Memory.hx",105,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(105)
		Array< Float > v1 = Array_obj< Float >::__new().Add(v);		HX_STACK_VAR(v1,"v1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< Float >,v1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",111,0x3e66e7be)
			{
				HX_STACK_LINE(111)
				::openfl::Memory_obj::gcRef->writeDouble(v1->__get((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(109)
		::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1(v1)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setDouble,(void))

Void Memory_obj::setFloat( int addr,Float v){
{
		HX_STACK_FRAME("openfl.Memory","setFloat",0x590948a9,"openfl.Memory.setFloat","openfl/Memory.hx",118,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(118)
		Array< Float > v1 = Array_obj< Float >::__new().Add(v);		HX_STACK_VAR(v1,"v1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< Float >,v1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",124,0x3e66e7be)
			{
				HX_STACK_LINE(124)
				::openfl::Memory_obj::gcRef->writeFloat(v1->__get((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(122)
		::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1(v1)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setFloat,(void))

Void Memory_obj::setI16( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setI16",0x5f0f8d5b,"openfl.Memory.setI16","openfl/Memory.hx",131,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(131)
		Array< int > v1 = Array_obj< int >::__new().Add(v);		HX_STACK_VAR(v1,"v1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< int >,v1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",137,0x3e66e7be)
			{
				HX_STACK_LINE(137)
				::openfl::Memory_obj::gcRef->writeUnsignedShort(v1->__get((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(135)
		::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1(v1)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI16,(void))

Void Memory_obj::setI32( int addr,int v){
{
		HX_STACK_FRAME("openfl.Memory","setI32",0x5f0f8f15,"openfl.Memory.setI32","openfl/Memory.hx",144,0x3e66e7be)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(144)
		Array< int > v1 = Array_obj< int >::__new().Add(v);		HX_STACK_VAR(v1,"v1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< int >,v1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/Memory.hx",150,0x3e66e7be)
			{
				HX_STACK_LINE(150)
				::openfl::Memory_obj::gcRef->writeInt(v1->__get((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(148)
		::openfl::Memory_obj::_setPositionTemporarily(addr, Dynamic(new _Function_1_1(v1)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI32,(void))


Memory_obj::Memory_obj()
{
}

Dynamic Memory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { return gcRef; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getI32") ) { return getI32_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"setI16") ) { return setI16_dyn(); }
		if (HX_FIELD_EQ(inName,"setI32") ) { return setI32_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { return getByte_dyn(); }
		if (HX_FIELD_EQ(inName,"getUI16") ) { return getUI16_dyn(); }
		if (HX_FIELD_EQ(inName,"setByte") ) { return setByte_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat") ) { return setFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { return getDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"setDouble") ) { return setDouble_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_setPositionTemporarily") ) { return _setPositionTemporarily_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Memory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { gcRef=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Memory_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("gcRef"),
	HX_CSTRING("len"),
	HX_CSTRING("_setPositionTemporarily"),
	HX_CSTRING("getByte"),
	HX_CSTRING("getDouble"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getI32"),
	HX_CSTRING("getUI16"),
	HX_CSTRING("select"),
	HX_CSTRING("setByte"),
	HX_CSTRING("setDouble"),
	HX_CSTRING("setFloat"),
	HX_CSTRING("setI16"),
	HX_CSTRING("setI32"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_MARK_MEMBER_NAME(Memory_obj::len,"len");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_VISIT_MEMBER_NAME(Memory_obj::len,"len");
};

#endif

Class Memory_obj::__mClass;

void Memory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Memory"), hx::TCanCast< Memory_obj> ,sStaticFields,sMemberFields,
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

void Memory_obj::__boot()
{
}

} // end namespace openfl
