#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DrawTrianglesShader
#include <openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace shaders2{

Void DrawTrianglesShader_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader","new",0x507c6298,"openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader.new","openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.hx",10,0x86c1b977)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(11)
	super::__construct(gl);
	HX_STACK_LINE(14)
	::String _g = ::Std_obj::string(HX_CSTRING("aPosition"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	::String _g1 = (HX_CSTRING("attribute vec2 ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14)
	::String _g2 = (_g1 + HX_CSTRING(";"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(15)
	::String _g3 = ::Std_obj::string(HX_CSTRING("aTexCoord0"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(15)
	::String _g4 = (HX_CSTRING("attribute vec2 ") + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(15)
	::String _g5 = (_g4 + HX_CSTRING(";"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(16)
	::String _g6 = ::Std_obj::string(HX_CSTRING("aColor"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(16)
	::String _g7 = (HX_CSTRING("attribute vec4 ") + _g6);		HX_STACK_VAR(_g7,"_g7");
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
	HX_STACK_LINE(26)
	::String _g15 = ::Std_obj::string(HX_CSTRING("aPosition"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(26)
	::String _g16 = (HX_CSTRING("   gl_Position = vec4( ((") + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(26)
	::String _g17 = (_g16 + HX_CSTRING(" + "));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(26)
	::String _g18 = ::Std_obj::string(HX_CSTRING("uOffsetVector"));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(26)
	::String _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(26)
	::String _g20 = (_g19 + HX_CSTRING(") / "));		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(26)
	::String _g21 = ::Std_obj::string(HX_CSTRING("uProjectionVector"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(26)
	::String _g22 = (_g20 + _g21);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(26)
	::String _g23 = (_g22 + HX_CSTRING(") + center , 0.0, 1.0);"));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(27)
	::String _g24 = ::Std_obj::string(HX_CSTRING("aTexCoord0"));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(27)
	::String _g25 = (HX_CSTRING("   vTexCoord = ") + _g24);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(27)
	::String _g26 = (_g25 + HX_CSTRING(";"));		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(29)
	::String _g27 = ::Std_obj::string(HX_CSTRING("aColor"));		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(29)
	::String _g28 = (HX_CSTRING("   vColor = ") + _g27);		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(29)
	::String _g29 = (_g28 + HX_CSTRING(".bgra;"));		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(13)
	Array< ::String > _g30 = Array_obj< ::String >::__new().Add(_g2).Add(_g5).Add(_g8).Add(_g11).Add(_g14).Add(HX_CSTRING("varying vec2 vTexCoord;")).Add(HX_CSTRING("varying vec4 vColor;")).Add(HX_CSTRING("const vec2 center = vec2(-1.0, 1.0);")).Add(HX_CSTRING("void main(void) {")).Add(_g23).Add(_g26).Add(_g29).Add(HX_CSTRING("}"));		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(13)
	this->vertexSrc = _g30;
	HX_STACK_LINE(39)
	::String _g31 = ::Std_obj::string(HX_CSTRING("uSampler0"));		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(39)
	::String _g32 = (HX_CSTRING("uniform sampler2D ") + _g31);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(39)
	::String _g33 = (_g32 + HX_CSTRING(";"));		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(40)
	::String _g34 = ::Std_obj::string(HX_CSTRING("uColor"));		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(40)
	::String _g35 = (HX_CSTRING("uniform vec3 ") + _g34);		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(40)
	::String _g36 = (_g35 + HX_CSTRING(";"));		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(41)
	::String _g37 = ::Std_obj::string(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(41)
	::String _g38 = (HX_CSTRING("uniform bool ") + _g37);		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(41)
	::String _g39 = (_g38 + HX_CSTRING(";"));		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(42)
	::String _g40 = ::Std_obj::string(HX_CSTRING("uAlpha"));		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(42)
	::String _g41 = (HX_CSTRING("uniform float ") + _g40);		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(42)
	::String _g42 = (_g41 + HX_CSTRING(";"));		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(43)
	::String _g43 = ::Std_obj::string(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(43)
	::String _g44 = (HX_CSTRING("uniform vec4 ") + _g43);		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(43)
	::String _g45 = (_g44 + HX_CSTRING(";"));		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(44)
	::String _g46 = ::Std_obj::string(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(44)
	::String _g47 = (HX_CSTRING("uniform vec4 ") + _g46);		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(44)
	::String _g48 = (_g47 + HX_CSTRING(";"));		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(61)
	::String _g49 = ::Std_obj::string(HX_CSTRING("uUseTexture"));		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(61)
	::String _g50 = (HX_CSTRING("   if(") + _g49);		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(61)
	::String _g51 = (_g50 + HX_CSTRING(") {"));		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(62)
	::String _g52 = ::Std_obj::string(HX_CSTRING("uSampler0"));		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(62)
	::String _g53 = (HX_CSTRING("       tmp = texture2D(") + _g52);		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(62)
	::String _g54 = (_g53 + HX_CSTRING(", vTexCoord);"));		HX_STACK_VAR(_g54,"_g54");
	HX_STACK_LINE(64)
	::String _g55 = ::Std_obj::string(HX_CSTRING("uColor"));		HX_STACK_VAR(_g55,"_g55");
	HX_STACK_LINE(64)
	::String _g56 = (HX_CSTRING("       tmp = vec4(") + _g55);		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(64)
	::String _g57 = (_g56 + HX_CSTRING(", 1.);"));		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(66)
	::String _g58 = ::Std_obj::string(HX_CSTRING("uColorMultiplier"));		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(66)
	::String _g59 = (HX_CSTRING("   gl_FragColor = colorTransform(tmp, vColor, ") + _g58);		HX_STACK_VAR(_g59,"_g59");
	HX_STACK_LINE(66)
	::String _g60 = (_g59 + HX_CSTRING(", "));		HX_STACK_VAR(_g60,"_g60");
	HX_STACK_LINE(66)
	::String _g61 = ::Std_obj::string(HX_CSTRING("uColorOffset"));		HX_STACK_VAR(_g61,"_g61");
	HX_STACK_LINE(66)
	::String _g62 = (_g60 + _g61);		HX_STACK_VAR(_g62,"_g62");
	HX_STACK_LINE(66)
	::String _g63 = (_g62 + HX_CSTRING(");"));		HX_STACK_VAR(_g63,"_g63");
	HX_STACK_LINE(34)
	Array< ::String > _g64 = Array_obj< ::String >::__new().Add(HX_CSTRING("#ifdef GL_ES")).Add(HX_CSTRING("precision lowp float;")).Add(HX_CSTRING("#endif")).Add(_g33).Add(_g36).Add(_g39).Add(_g42).Add(_g45).Add(_g48).Add(HX_CSTRING("varying vec2 vTexCoord;")).Add(HX_CSTRING("varying vec4 vColor;")).Add(HX_CSTRING("vec4 tmp;")).Add(HX_CSTRING("vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {")).Add(HX_CSTRING("   vec4 unmultiply = vec4(color.rgb / color.a, color.a);")).Add(HX_CSTRING("   vec4 result = unmultiply * tint * multiplier;")).Add(HX_CSTRING("   result = result + offset;")).Add(HX_CSTRING("   result = clamp(result, 0., 1.);")).Add(HX_CSTRING("   result = vec4(result.rgb * result.a, result.a);")).Add(HX_CSTRING("   return result;")).Add(HX_CSTRING("}")).Add(HX_CSTRING("void main(void) {")).Add(_g51).Add(_g54).Add(HX_CSTRING("   } else {")).Add(_g57).Add(HX_CSTRING("   }")).Add(_g63).Add(HX_CSTRING("}"));		HX_STACK_VAR(_g64,"_g64");
	HX_STACK_LINE(34)
	this->fragmentSrc = _g64;
	HX_STACK_LINE(70)
	this->init();
}
;
	return null();
}

//DrawTrianglesShader_obj::~DrawTrianglesShader_obj() { }

Dynamic DrawTrianglesShader_obj::__CreateEmpty() { return  new DrawTrianglesShader_obj; }
hx::ObjectPtr< DrawTrianglesShader_obj > DrawTrianglesShader_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< DrawTrianglesShader_obj > result = new DrawTrianglesShader_obj();
	result->__construct(gl);
	return result;}

Dynamic DrawTrianglesShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawTrianglesShader_obj > result = new DrawTrianglesShader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DrawTrianglesShader_obj::init( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader","init",0x191299d8,"openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader.init","openfl/_internal/renderer/opengl/shaders2/DrawTrianglesShader.hx",73,0x86c1b977)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		this->super::init();
		HX_STACK_LINE(77)
		this->getAttribLocation(HX_CSTRING("aPosition"));
		HX_STACK_LINE(78)
		this->getAttribLocation(HX_CSTRING("aTexCoord0"));
		HX_STACK_LINE(79)
		this->getAttribLocation(HX_CSTRING("aColor"));
		HX_STACK_LINE(81)
		this->getUniformLocation(HX_CSTRING("uSampler0"));
		HX_STACK_LINE(82)
		this->getUniformLocation(HX_CSTRING("uProjectionVector"));
		HX_STACK_LINE(83)
		this->getUniformLocation(HX_CSTRING("uOffsetVector"));
		HX_STACK_LINE(84)
		this->getUniformLocation(HX_CSTRING("uColor"));
		HX_STACK_LINE(85)
		this->getUniformLocation(HX_CSTRING("uAlpha"));
		HX_STACK_LINE(86)
		this->getUniformLocation(HX_CSTRING("uUseTexture"));
		HX_STACK_LINE(87)
		this->getUniformLocation(HX_CSTRING("uColorMultiplier"));
		HX_STACK_LINE(88)
		this->getUniformLocation(HX_CSTRING("uColorOffset"));
	}
return null();
}



DrawTrianglesShader_obj::DrawTrianglesShader_obj()
{
}

Dynamic DrawTrianglesShader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawTrianglesShader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawTrianglesShader_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(DrawTrianglesShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawTrianglesShader_obj::__mClass,"__mClass");
};

#endif

Class DrawTrianglesShader_obj::__mClass;

void DrawTrianglesShader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader"), hx::TCanCast< DrawTrianglesShader_obj> ,sStaticFields,sMemberFields,
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

void DrawTrianglesShader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace shaders2
