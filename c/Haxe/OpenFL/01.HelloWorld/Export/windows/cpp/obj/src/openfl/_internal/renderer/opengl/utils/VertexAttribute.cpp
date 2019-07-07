#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void VertexAttribute_obj::__construct(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::Float32Array defaultValue)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","new",0x2b2790c9,"openfl._internal.renderer.opengl.utils.VertexAttribute.new","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",8,0x4f6c066a)
HX_STACK_THIS(this)
HX_STACK_ARG(components,"components")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_normalized,"normalized")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(defaultValue,"defaultValue")
bool normalized = __o_normalized.Default(false);
{
	HX_STACK_LINE(14)
	this->enabled = true;
	HX_STACK_LINE(11)
	this->normalized = false;
	HX_STACK_LINE(20)
	this->components = components;
	HX_STACK_LINE(21)
	this->type = type;
	HX_STACK_LINE(22)
	this->normalized = normalized;
	HX_STACK_LINE(23)
	this->name = name;
	HX_STACK_LINE(25)
	if (((defaultValue == null()))){
		HX_STACK_LINE(26)
		::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(components,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->defaultValue = _g;
	}
	else{
		HX_STACK_LINE(28)
		this->defaultValue = defaultValue;
	}
}
;
	return null();
}

//VertexAttribute_obj::~VertexAttribute_obj() { }

Dynamic VertexAttribute_obj::__CreateEmpty() { return  new VertexAttribute_obj; }
hx::ObjectPtr< VertexAttribute_obj > VertexAttribute_obj::__new(int components,int type,hx::Null< bool >  __o_normalized,::String name,::lime::utils::Float32Array defaultValue)
{  hx::ObjectPtr< VertexAttribute_obj > result = new VertexAttribute_obj();
	result->__construct(components,type,__o_normalized,name,defaultValue);
	return result;}

Dynamic VertexAttribute_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexAttribute_obj > result = new VertexAttribute_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::openfl::_internal::renderer::opengl::utils::VertexAttribute VertexAttribute_obj::copy( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","copy",0x9039572c,"openfl._internal.renderer.opengl.utils.VertexAttribute.copy","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",34,0x4f6c066a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new(this->components,this->type,this->normalized,this->name,this->defaultValue);
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,copy,return )

int VertexAttribute_obj::getElementsBytes( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","getElementsBytes",0x78aa7635,"openfl._internal.renderer.opengl.utils.VertexAttribute.getElementsBytes","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",38,0x4f6c066a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	int _g = this->type;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	switch( (int)(_g)){
		case (int)5120: case (int)5121: {
			HX_STACK_LINE(39)
			return (int)1;
		}
		;break;
		case (int)5122: case (int)5123: {
			HX_STACK_LINE(40)
			return (int)2;
		}
		;break;
		default: {
			HX_STACK_LINE(41)
			return (int)4;
		}
	}
	HX_STACK_LINE(38)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,getElementsBytes,return )

int VertexAttribute_obj::get_elements( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.VertexAttribute","get_elements",0x541d54b7,"openfl._internal.renderer.opengl.utils.VertexAttribute.get_elements","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",46,0x4f6c066a)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static int Block( hx::ObjectPtr< ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",46,0x4f6c066a)
			{
				HX_STACK_LINE(46)
				int _g = __this->type;		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static int Block( int &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/utils/VertexAttribute.hx",46,0x4f6c066a)
						{
							HX_STACK_LINE(46)
							switch( (int)(_g)){
								case (int)5120: case (int)5121: {
									HX_STACK_LINE(46)
									return (int)1;
								}
								;break;
								case (int)5122: case (int)5123: {
									HX_STACK_LINE(46)
									return (int)2;
								}
								;break;
								default: {
									HX_STACK_LINE(46)
									return (int)4;
								}
							}
						}
						return null();
					}
				};
				HX_STACK_LINE(46)
				return _Function_2_1::Block(_g);
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	return ::Math_obj::floor((Float((this->components * _Function_1_1::Block(this))) / Float((int)4)));
}


HX_DEFINE_DYNAMIC_FUNC0(VertexAttribute_obj,get_elements,return )


VertexAttribute_obj::VertexAttribute_obj()
{
}

void VertexAttribute_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexAttribute);
	HX_MARK_MEMBER_NAME(components,"components");
	HX_MARK_MEMBER_NAME(normalized,"normalized");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_END_CLASS();
}

void VertexAttribute_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(components,"components");
	HX_VISIT_MEMBER_NAME(normalized,"normalized");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
}

Dynamic VertexAttribute_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return get_elements(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { return components; }
		if (HX_FIELD_EQ(inName,"normalized") ) { return normalized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return defaultValue; }
		if (HX_FIELD_EQ(inName,"get_elements") ) { return get_elements_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getElementsBytes") ) { return getElementsBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexAttribute_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"components") ) { components=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"normalized") ) { normalized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexAttribute_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("components"));
	outFields->push(HX_CSTRING("normalized"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("elements"));
	outFields->push(HX_CSTRING("defaultValue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VertexAttribute_obj,components),HX_CSTRING("components")},
	{hx::fsBool,(int)offsetof(VertexAttribute_obj,normalized),HX_CSTRING("normalized")},
	{hx::fsInt,(int)offsetof(VertexAttribute_obj,type),HX_CSTRING("type")},
	{hx::fsString,(int)offsetof(VertexAttribute_obj,name),HX_CSTRING("name")},
	{hx::fsBool,(int)offsetof(VertexAttribute_obj,enabled),HX_CSTRING("enabled")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(VertexAttribute_obj,defaultValue),HX_CSTRING("defaultValue")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("components"),
	HX_CSTRING("normalized"),
	HX_CSTRING("type"),
	HX_CSTRING("name"),
	HX_CSTRING("enabled"),
	HX_CSTRING("defaultValue"),
	HX_CSTRING("copy"),
	HX_CSTRING("getElementsBytes"),
	HX_CSTRING("get_elements"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexAttribute_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexAttribute_obj::__mClass,"__mClass");
};

#endif

Class VertexAttribute_obj::__mClass;

void VertexAttribute_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.VertexAttribute"), hx::TCanCast< VertexAttribute_obj> ,sStaticFields,sMemberFields,
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

void VertexAttribute_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
