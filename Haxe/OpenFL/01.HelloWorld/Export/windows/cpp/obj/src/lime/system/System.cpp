#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > result = new System_obj();
	result->__construct();
	return result;}

::String System_obj::applicationDirectory;

::String System_obj::applicationStorageDirectory;

::String System_obj::desktopDirectory;

bool System_obj::disableCFFI;

::String System_obj::documentsDirectory;

::String System_obj::fontsDirectory;

::String System_obj::userDirectory;

::haxe::ds::StringMap System_obj::__moduleNames;

::String System_obj::findHaxeLib( ::String library){
	HX_STACK_FRAME("lime.system.System","findHaxeLib",0x4637f12d,"lime.system.System.findHaxeLib","lime/system/System.hx",110,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_LINE(114)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(116)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(118)
		if (((proc != null()))){
			HX_STACK_LINE(120)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(122)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(124)
				while((true)){
					HX_STACK_LINE(126)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(128)
					::String _g = s.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(128)
					if (((_g != HX_CSTRING("-")))){
						HX_STACK_LINE(130)
						stream->close();
						HX_STACK_LINE(131)
						proc->close();
						HX_STACK_LINE(132)
						::lime::system::System_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(133)
						return s;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(141)
			stream->close();
			HX_STACK_LINE(142)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(150)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,findHaxeLib,return )

int System_obj::getTimer( ){
	HX_STACK_FRAME("lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",162,0x6434b429)
	HX_STACK_LINE(162)
	return ::lime::system::System_obj::lime_system_get_timer();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

Dynamic System_obj::load( ::String library,::String method,hx::Null< int >  __o_args,hx::Null< bool >  __o_lazy){
int args = __o_args.Default(0);
bool lazy = __o_lazy.Default(false);
	HX_STACK_FRAME("lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",174,0x6434b429)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_ARG(lazy,"lazy")
{
		HX_STACK_LINE(180)
		if ((::lime::system::System_obj::disableCFFI)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Dynamic run(Dynamic __){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","lime/system/System.hx",182,0x6434b429)
				HX_STACK_ARG(__,"__")
				{
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/System.hx",182,0x6434b429)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(182)
					return _Function_3_1::Block();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(182)
			return ::Reflect_obj::makeVarArgs( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(186)
		if ((lazy)){
			HX_STACK_LINE(191)
			return ::cpp::Lib_obj::loadLazy(library,method,args);
		}
		HX_STACK_LINE(203)
		if (((::lime::system::System_obj::__moduleNames == null()))){
			HX_STACK_LINE(203)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(203)
			::lime::system::System_obj::__moduleNames = _g;
		}
		HX_STACK_LINE(204)
		if ((::lime::system::System_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(207)
			::String _g1 = ::lime::system::System_obj::__moduleNames->get(library);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(207)
			return ::cpp::Lib_obj::load(_g1,method,args);
		}
		HX_STACK_LINE(232)
		::lime::system::System_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(234)
		Dynamic result = ::lime::system::System_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(236)
		if (((result == null()))){
			HX_STACK_LINE(238)
			Dynamic _g2 = ::lime::system::System_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(238)
			result = _g2;
		}
		HX_STACK_LINE(242)
		if (((result == null()))){
			HX_STACK_LINE(244)
			Dynamic _g3 = ::lime::system::System_obj::tryLoad(library,library,method,args);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(244)
			result = _g3;
		}
		HX_STACK_LINE(248)
		if (((result == null()))){
			HX_STACK_LINE(250)
			::String _g4 = ::lime::system::System_obj::sysName().substr((int)7,null()).toLowerCase();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(250)
			::String slash;		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(250)
			if (((_g4 == HX_CSTRING("windows")))){
				HX_STACK_LINE(250)
				slash = HX_CSTRING("\\");
			}
			else{
				HX_STACK_LINE(250)
				slash = HX_CSTRING("/");
			}
			HX_STACK_LINE(251)
			::String haxelib = ::lime::system::System_obj::findHaxeLib(HX_CSTRING("lime"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(253)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(255)
				::String _g5 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(255)
				::String _g6 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(255)
				::String _g7 = (_g6 + slash);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(255)
				::String _g8 = (_g7 + library);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(255)
				Dynamic _g9 = ::lime::system::System_obj::tryLoad(_g8,library,method,args);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(255)
				result = _g9;
				HX_STACK_LINE(257)
				if (((result == null()))){
					HX_STACK_LINE(259)
					::String _g10 = ::lime::system::System_obj::sysName();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(259)
					::String _g11 = ((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(259)
					::String _g12 = (_g11 + HX_CSTRING("64"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(259)
					::String _g13 = (_g12 + slash);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(259)
					::String _g14 = (_g13 + library);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(259)
					Dynamic _g15 = ::lime::system::System_obj::tryLoad(_g14,library,method,args);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(259)
					result = _g15;
				}
			}
		}
		HX_STACK_LINE(267)
		::String _g16 = ::Std_obj::string(result);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(267)
		::String _g17 = (HX_CSTRING("Result : ") + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(267)
		::lime::system::System_obj::loaderTrace(_g17);
		HX_STACK_LINE(288)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

::String System_obj::sysName( ){
	HX_STACK_FRAME("lime.system.System","sysName",0x424b781f,"lime.system.System.sysName","lime/system/System.hx",293,0x6434b429)
	HX_STACK_LINE(299)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(300)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,sysName,return )

Dynamic System_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_FRAME("lime.system.System","tryLoad",0x12810b28,"lime.system.System.tryLoad","lime/system/System.hx",317,0x6434b429)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(321)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(324)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(333)
		if (((result != null()))){
			HX_STACK_LINE(335)
			::lime::system::System_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(336)
			::lime::system::System_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(337)
			return result;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(343)
				::lime::system::System_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(349)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,tryLoad,return )

Void System_obj::loaderTrace( ::String message){
{
		HX_STACK_FRAME("lime.system.System","loaderTrace",0xe7255319,"lime.system.System.loaderTrace","lime/system/System.hx",354,0x6434b429)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(360)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(361)
		Dynamic _g = get_env(HX_CSTRING("OPENFL_LOAD_DEBUG"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		bool debug = (_g != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(369)
		if ((debug)){
			HX_STACK_LINE(371)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,loaderTrace,(void))

::String System_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",418,0x6434b429)
	HX_STACK_LINE(418)
	return ::lime::system::System_obj::lime_system_get_directory((int)0,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",426,0x6434b429)
	HX_STACK_LINE(428)
	::String company = HX_CSTRING("MyCompany");		HX_STACK_VAR(company,"company");
	HX_STACK_LINE(429)
	::String file = HX_CSTRING("MyApplication");		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(432)
	if (((bool((::lime::app::Application_obj::current != null())) && bool((::lime::app::Application_obj::current->config != null()))))){
		HX_STACK_LINE(434)
		if (((::lime::app::Application_obj::current->config->__Field(HX_CSTRING("company"),true) != null()))){
			HX_STACK_LINE(436)
			company = ::lime::app::Application_obj::current->config->__Field(HX_CSTRING("company"),true);
		}
		HX_STACK_LINE(440)
		if (((::lime::app::Application_obj::current->config->__Field(HX_CSTRING("file"),true) != null()))){
			HX_STACK_LINE(442)
			file = ::lime::app::Application_obj::current->config->__Field(HX_CSTRING("file"),true);
		}
	}
	HX_STACK_LINE(450)
	return ::lime::system::System_obj::lime_system_get_directory((int)1,company,file);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",461,0x6434b429)
	HX_STACK_LINE(461)
	return ::lime::system::System_obj::lime_system_get_directory((int)2,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",472,0x6434b429)
	HX_STACK_LINE(472)
	return ::lime::system::System_obj::lime_system_get_directory((int)3,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

::String System_obj::get_fontsDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",483,0x6434b429)
	HX_STACK_LINE(483)
	return ::lime::system::System_obj::lime_system_get_directory((int)4,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

::String System_obj::get_userDirectory( ){
	HX_STACK_FRAME("lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",494,0x6434b429)
	HX_STACK_LINE(494)
	return ::lime::system::System_obj::lime_system_get_directory((int)5,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )

Dynamic System_obj::lime_system_get_directory;

Dynamic System_obj::lime_system_get_timer;


System_obj::System_obj()
{
}

Dynamic System_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { return disableCFFI; }
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { return inCallProp ? get_fontsDirectory() : fontsDirectory; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { return get_fontsDirectory_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { return lime_system_get_timer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { return lime_system_get_directory; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic System_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { fontsDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_system_get_timer") ) { lime_system_get_timer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_system_get_directory") ) { lime_system_get_directory=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void System_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("disableCFFI"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("fontsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("getTimer"),
	HX_CSTRING("load"),
	HX_CSTRING("sysName"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("loaderTrace"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_fontsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("lime_system_get_directory"),
	HX_CSTRING("lime_system_get_timer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_MARK_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::fontsDirectory,"fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::__moduleNames,"__moduleNames");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_directory,"lime_system_get_directory");
	HX_VISIT_MEMBER_NAME(System_obj::lime_system_get_timer,"lime_system_get_timer");
};

#endif

Class System_obj::__mClass;

void System_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.system.System"), hx::TCanCast< System_obj> ,sStaticFields,sMemberFields,
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

void System_obj::__boot()
{
	__moduleNames= null();
	lime_system_get_directory= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_system_get_directory"),(int)3,null());
	lime_system_get_timer= ::lime::system::System_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_system_get_timer"),(int)0,null());
}

} // end namespace lime
} // end namespace system
