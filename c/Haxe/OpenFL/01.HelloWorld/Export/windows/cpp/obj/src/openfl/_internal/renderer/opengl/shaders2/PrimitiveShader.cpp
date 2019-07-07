#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_PrimitiveShader
#include <openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void PrimitiveShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.PrimitiveShader","new",0x50219a38,"openfl._internal.renderer.opengl.shaders2.PrimitiveShader.new","openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.hx",9,0x297e5a57)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(10)
	super::__construct(gl);
	HX_STACK_LINE(13)
	::String _g = ::Std_obj::string(HX_CSTRING("aPosition"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	::String _g1 = (HX_CSTRING("attribute vec2 ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(13)
	::String _g2 = (_g1 + HX_CSTRING(";"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(14)
	::String _g3 = ::Std_obj::string(HX_CSTRING("aColor"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(14)
	::String _g4 = (HX_CSTRING("attribute vec4 ") + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(14)
	::String _g5 = (_g4 + HX_CSTRING(";"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(16)
	::String _g6 = ::Std_obj::string(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(16)
	::String _g7 = (HX_CSTRING("uniform mat3 ") + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(16)
	::String _g8 = (_g7 + HX_CSTRING(";"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(17)
	::String _g9 = ::Std_obj::string(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(17)
	::String _g10 = (HX_CSTRING("uniform vec2 ") + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(17)
	::String _g11 = (_g10 + HX_CSTRING(";"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(18)
	::String _g12 = ::Std_obj::string(HX_CSTRING("uOffsetVector"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(18)
	::String _g13 = (HX_CSTRING("uniform vec2 ") + _g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(18)
	::String _g14 = (_g13 + HX_CSTRING(";"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(19)
	::String _g15 = ::Std_obj::string(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(19)
	::String _g16 = (HX_CSTRING("uniform vec4 ") + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(19)
	::String _g17 = (_g16 + HX_CSTRING(";"));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(20)
	::String _g18 = ::Std_obj::string(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(20)
	::String _g19 = (HX_CSTRING("uniform vec4 ") + _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(20)
	::String _g20 = (_g19 + HX_CSTRING(";"));		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(21)
	::String _g21 = ::Std_obj::string(HX_CSTRING("uAlpha"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(21)
	::String _g22 = (HX_CSTRING("uniform float ") + _g21);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(21)
	::String _g23 = (_g22 + HX_CSTRING(";"));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(35)
	::String _g24 = ::Std_obj::string(HX_CSTRING("uTranslationMatrix"));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(35)
	::String _g25 = (HX_CSTRING("   vec3 v = ") + _g24);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(35)
	::String _g26 = (_g25 + HX_CSTRING(" * vec3("));		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(35)
	::String _g27 = ::Std_obj::string(HX_CSTRING("aPosition"));		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(35)
	::String _g28 = (_g26 + _g27);		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(35)
	::String _g29 = (_g28 + HX_CSTRING(" , 1.0);"));		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(36)
	::String _g30 = ::Std_obj::string(HX_CSTRING("uOffsetVector"));		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(36)
	::String _g31 = (HX_CSTRING("   v -= ") + _g30);		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(36)
	::String _g32 = (_g31 + HX_CSTRING(".xyx;"));		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(37)
	::String _g33 = ::Std_obj::string(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(37)
	::String _g34 = (HX_CSTRING("   gl_Position = vec4( v.x / ") + _g33);		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(37)
	::String _g35 = (_g34 + HX_CSTRING(".x -1.0, v.y / -"));		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(37)
	::String _g36 = ::Std_obj::string(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(37)
	::String _g37 = (_g35 + _g36);		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(37)
	::String _g38 = (_g37 + HX_CSTRING(".y + 1.0 , 0.0, 1.0);"));		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(38)
	::String _g39 = ::Std_obj::string(HX_CSTRING("aColor"));		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(38)
	::String _g40 = (HX_CSTRING("   vColor = colorTransform(") + _g39);		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(38)
	::String _g41 = (_g40 + HX_CSTRING(", "));		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(38)
	::String _g42 = ::Std_obj::string(HX_CSTRING("uAlpha"));		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(38)
	::String _g43 = (_g41 + _g42);		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(38)
	::String _g44 = (_g43 + HX_CSTRING(", "));		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(38)
	::String _g45 = ::Std_obj::string(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(38)
	::String _g46 = (_g44 + _g45);		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(38)
	::String _g47 = (_g46 + HX_CSTRING(", "));		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(38)
	::String _g48 = ::Std_obj::string(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(38)
	::String _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(38)
	::String _g50 = (_g49 + HX_CSTRING(");"));		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(12)
	Array< ::String > _g51 = Array_obj< ::String >::__new().Add(_g2).Add(_g5).Add(_g8).Add(_g11).Add(_g14).Add(_g17).Add(_g20).Add(_g23).Add(HX_CSTRING("varying vec4 vColor;")).Add(HX_CSTRING("vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {")).Add(HX_CSTRING("   vec4 result = color * multiplier;")).Add(HX_CSTRING("   result.a *= alpha;")).Add(HX_CSTRING("   result = result + offset;")).Add(HX_CSTRING("   result = clamp(result, 0., 1.);")).Add(HX_CSTRING("   result = vec4(result.rgb * result.a, result.a);")).Add(HX_CSTRING("   return result;")).Add(HX_CSTRING("}")).Add(HX_CSTRING("void main(void) {")).Add(_g29).Add(_g32).Add(_g38).Add(_g50).Add(HX_CSTRING("}"));		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(12)
	this->vertexSrc = _g51;
	HX_STACK_LINE(42)
	this->fragmentSrc = Array_obj< ::String >::__new().Add(HX_CSTRING("#ifdef GL_ES")).Add(HX_CSTRING("precision lowp float;")).Add(HX_CSTRING("#endif")).Add(HX_CSTRING("varying vec4 vColor;")).Add(HX_CSTRING("void main(void) {")).Add(HX_CSTRING("   gl_FragColor = vColor;")).Add(HX_CSTRING("}"));
	HX_STACK_LINE(54)
	this->init();
}
;
	return null();
}

//PrimitiveShader_obj::~PrimitiveShader_obj() { }

Dynamic PrimitiveShader_obj::__CreateEmpty() { return  new PrimitiveShader_obj; }
hx::ObjectPtr< PrimitiveShader_obj > PrimitiveShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< PrimitiveShader_obj > result = new PrimitiveShader_obj();
	result->__construct(gl);
	return result;}

Dynamic PrimitiveShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrimitiveShader_obj > result = new PrimitiveShader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PrimitiveShader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.PrimitiveShader","init",0xc9fe0e38,"openfl._internal.renderer.opengl.shaders2.PrimitiveShader.init","openfl/_internal/renderer/opengl/shaders2/PrimitiveShader.hx",58,0x297e5a57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->super::init();
		HX_STACK_LINE(61)
		this->getAttribLocation(HX_CSTRING("aPosition"));
		HX_STACK_LINE(62)
		this->getAttribLocation(HX_CSTRING("aColor"));
		HX_STACK_LINE(63)
		this->getUniformLocation(HX_CSTRING("uTranslationMatrix"));
		HX_STACK_LINE(64)
		this->getUniformLocation(HX_CSTRING("uProjectionVector"));
		HX_STACK_LINE(65)
		this->getUniformLocation(HX_CSTRING("uOffsetVector"));
		HX_STACK_LINE(66)
		this->getUniformLocation(HX_CSTRING("uAlpha"));
		HX_STACK_LINE(67)
		this->getUniformLocation(HX_CSTRING("uColorMultiplier"));
		HX_STACK_LINE(68)
		this->getUniformLocation(HX_CSTRING("uColorOffset"));
	}
return null();
}



PrimitiveShader_obj::PrimitiveShader_obj()
{
}

Dynamic PrimitiveShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PrimitiveShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PrimitiveShader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrimitiveShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrimitiveShader_obj::__mClass,"__mClass");
};

#endif

Class PrimitiveShader_obj::__mClass;

void PrimitiveShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.shaders2.PrimitiveShader"), hx::TCanCast< PrimitiveShader_obj> ,sStaticFields,sMemberFields,
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

void PrimitiveShader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
