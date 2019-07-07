#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{
namespace _SpriteBatch{

Void State_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","new",0xda8a05cc,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",596,0x8289eb2d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(601)
	this->skipColorTransformAlpha = false;
	HX_STACK_LINE(598)
	this->textureSmooth = true;
}
;
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new()
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

bool State_obj::equals( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","equals",0xfb2ee453,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.equals","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",607,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(607)
	if (((bool((bool((bool(((bool((bool((this->shader == null())) || bool((other->shader == null())))) || bool((this->shader->ID == other->shader->ID))))) && bool((this->texture == other->texture)))) && bool((this->textureSmooth == other->textureSmooth)))) && bool((this->blendMode == other->blendMode))))){
		HX_STACK_LINE(612)
		if (((this->colorTransform != null()))){
			HX_STACK_LINE(612)
			return this->colorTransform->__equals(other->colorTransform,this->skipColorTransformAlpha);
		}
		else{
			HX_STACK_LINE(612)
			return false;
		}
	}
	else{
		HX_STACK_LINE(607)
		return false;
	}
	HX_STACK_LINE(607)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,equals,return )

Void State_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils._SpriteBatch.State","destroy",0xbdc18866,"openfl._internal.renderer.opengl.utils._SpriteBatch.State.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",616,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(617)
		this->texture = null();
		HX_STACK_LINE(618)
		this->colorTransform = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,destroy,(void))


State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(skipColorTransformAlpha,"skipColorTransformAlpha");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(textureSmooth,"textureSmooth");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(skipColorTransformAlpha,"skipColorTransformAlpha");
	HX_VISIT_MEMBER_NAME(shader,"shader");
}

Dynamic State_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { return textureSmooth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"skipColorTransformAlpha") ) { return skipColorTransformAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"textureSmooth") ) { textureSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"skipColorTransformAlpha") ) { skipColorTransformAlpha=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("textureSmooth"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("colorTransform"));
	outFields->push(HX_CSTRING("skipColorTransformAlpha"));
	outFields->push(HX_CSTRING("shader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(State_obj,texture),HX_CSTRING("texture")},
	{hx::fsBool,(int)offsetof(State_obj,textureSmooth),HX_CSTRING("textureSmooth")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(State_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(State_obj,colorTransform),HX_CSTRING("colorTransform")},
	{hx::fsBool,(int)offsetof(State_obj,skipColorTransformAlpha),HX_CSTRING("skipColorTransformAlpha")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(State_obj,shader),HX_CSTRING("shader")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("texture"),
	HX_CSTRING("textureSmooth"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("skipColorTransformAlpha"),
	HX_CSTRING("shader"),
	HX_CSTRING("equals"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#endif

Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils._SpriteBatch.State"), hx::TCanCast< State_obj> ,sStaticFields,sMemberFields,
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

void State_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
} // end namespace _SpriteBatch
