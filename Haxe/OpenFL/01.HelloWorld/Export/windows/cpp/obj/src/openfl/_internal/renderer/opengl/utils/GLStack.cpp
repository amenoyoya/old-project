#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLStack_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","new",0xd9c5ae34,"openfl._internal.renderer.opengl.utils.GLStack.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1158,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1160)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1165)
	this->gl = gl;
	HX_STACK_LINE(1166)
	this->buckets = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(1167)
	this->lastIndex = (int)0;
}
;
	return null();
}

//GLStack_obj::~GLStack_obj() { }

Dynamic GLStack_obj::__CreateEmpty() { return  new GLStack_obj; }
hx::ObjectPtr< GLStack_obj > GLStack_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLStack_obj > result = new GLStack_obj();
	result->__construct(gl);
	return result;}

Dynamic GLStack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLStack_obj > result = new GLStack_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GLStack_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","reset",0x66cc44a3,"openfl._internal.renderer.opengl.utils.GLStack.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1170,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1171)
		this->buckets = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(1172)
		this->lastIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,reset,(void))

Void GLStack_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLStack","upload",0x0fd148ad,"openfl._internal.renderer.opengl.utils.GLStack.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1176,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1176)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1176)
		Array< ::Dynamic > _g1 = this->buckets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1176)
		while((true)){
			HX_STACK_LINE(1176)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1176)
				break;
			}
			HX_STACK_LINE(1176)
			::openfl::_internal::renderer::opengl::utils::GLBucket bucket = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::GLBucket >();		HX_STACK_VAR(bucket,"bucket");
			HX_STACK_LINE(1176)
			++(_g);
			HX_STACK_LINE(1178)
			if ((bucket->dirty)){
				HX_STACK_LINE(1179)
				bucket->upload();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLStack_obj,upload,(void))


GLStack_obj::GLStack_obj()
{
}

void GLStack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLStack);
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(buckets,"buckets");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_END_CLASS();
}

void GLStack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(buckets,"buckets");
	HX_VISIT_MEMBER_NAME(gl,"gl");
}

Dynamic GLStack_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { return buckets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLStack_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buckets") ) { buckets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLStack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lastIndex"));
	outFields->push(HX_CSTRING("buckets"));
	outFields->push(HX_CSTRING("gl"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLStack_obj,lastIndex),HX_CSTRING("lastIndex")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLStack_obj,buckets),HX_CSTRING("buckets")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLStack_obj,gl),HX_CSTRING("gl")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lastIndex"),
	HX_CSTRING("buckets"),
	HX_CSTRING("gl"),
	HX_CSTRING("reset"),
	HX_CSTRING("upload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLStack_obj::__mClass,"__mClass");
};

#endif

Class GLStack_obj::__mClass;

void GLStack_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.GLStack"), hx::TCanCast< GLStack_obj> ,sStaticFields,sMemberFields,
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

void GLStack_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
