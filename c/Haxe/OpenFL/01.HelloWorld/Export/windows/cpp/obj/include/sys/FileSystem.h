#ifndef INCLUDED_sys_FileSystem
#define INCLUDED_sys_FileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sys,FileSystem)
namespace sys{


class HXCPP_CLASS_ATTRIBUTES  FileSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileSystem_obj OBJ_;
		FileSystem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FileSystem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FileSystem"); }

		static Dynamic stat( ::String path);
		static Dynamic stat_dyn();

		static ::String fullPath( ::String relPath);
		static Dynamic fullPath_dyn();

		static Dynamic sys_stat;
		static Dynamic &sys_stat_dyn() { return sys_stat;}
		static Dynamic file_full_path;
		static Dynamic &file_full_path_dyn() { return file_full_path;}
};

} // end namespace sys

#endif /* INCLUDED_sys_FileSystem */ 
