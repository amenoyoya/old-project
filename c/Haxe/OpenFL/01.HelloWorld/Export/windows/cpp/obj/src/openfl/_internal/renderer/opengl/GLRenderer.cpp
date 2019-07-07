#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_MaskManager
#include <openfl/_internal/renderer/opengl/utils/MaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_StencilManager
#include <openfl/_internal/renderer/opengl/utils/StencilManager.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLRenderer_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",45,0xb2b97130)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_antialias,"antialias")
HX_STACK_ARG(__o_preserveDrawingBuffer,"preserveDrawingBuffer")
int width = __o_width.Default(800);
int height = __o_height.Default(600);
bool transparent = __o_transparent.Default(false);
bool antialias = __o_antialias.Default(false);
bool preserveDrawingBuffer = __o_preserveDrawingBuffer.Default(false);
{
	HX_STACK_LINE(47)
	super::__construct(width,height);
	HX_STACK_LINE(49)
	this->transparent = transparent;
	HX_STACK_LINE(50)
	this->preserveDrawingBuffer = preserveDrawingBuffer;
	HX_STACK_LINE(51)
	this->width = width;
	HX_STACK_LINE(52)
	this->height = height;
	struct _Function_1_1{
		inline static Dynamic Block( bool &preserveDrawingBuffer,bool &antialias,bool &transparent){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLRenderer.hx",54,0xb2b97130)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("alpha") , transparent,false);
				__result->Add(HX_CSTRING("antialias") , antialias,false);
				__result->Add(HX_CSTRING("premultipliedAlpha") , transparent,false);
				__result->Add(HX_CSTRING("stencil") , true,false);
				__result->Add(HX_CSTRING("preserveDrawingBuffer") , preserveDrawingBuffer,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	this->options = _Function_1_1::Block(preserveDrawingBuffer,antialias,transparent);
	HX_STACK_LINE(62)
	int _g = (::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->_glContextId = _g;
	HX_STACK_LINE(63)
	this->gl = gl;
	HX_STACK_LINE(65)
	::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = gl;
	HX_STACK_LINE(67)
	if (((::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL == null()))){
		HX_STACK_LINE(69)
		::haxe::ds::EnumValueMap _g1 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL = _g1;
		HX_STACK_LINE(71)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::NORMAL,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(72)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::ADD,Array_obj< int >::__new().Add(gl->SRC_ALPHA).Add(gl->DST_ALPHA));
		HX_STACK_LINE(73)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::MULTIPLY,Array_obj< int >::__new().Add(gl->DST_COLOR).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(74)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::SCREEN,Array_obj< int >::__new().Add(gl->SRC_ALPHA).Add(gl->ONE));
		HX_STACK_LINE(76)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::ALPHA,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(77)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::DARKEN,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(78)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::DIFFERENCE,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(79)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::ERASE,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(80)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::HARDLIGHT,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(81)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::INVERT,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(82)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::LAYER,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(83)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::LIGHTEN,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(84)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::OVERLAY,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
		HX_STACK_LINE(85)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::blendModesWebGL->set(::openfl::display::BlendMode_obj::SUBTRACT,Array_obj< int >::__new().Add(gl->ONE).Add(gl->ONE_MINUS_SRC_ALPHA));
	}
	HX_STACK_LINE(89)
	::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(89)
	this->projection = _g2;
	HX_STACK_LINE(90)
	this->projection->x = (Float(this->width) / Float((int)2));
	HX_STACK_LINE(91)
	this->projection->y = (Float(-(this->height)) / Float((int)2));
	HX_STACK_LINE(93)
	::openfl::geom::Point _g3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(93)
	this->offset = _g3;
	HX_STACK_LINE(95)
	this->resize(this->width,this->height);
	HX_STACK_LINE(96)
	this->contextLost = false;
	HX_STACK_LINE(98)
	::openfl::_internal::renderer::opengl::utils::ShaderManager _g4 = ::openfl::_internal::renderer::opengl::utils::ShaderManager_obj::__new(gl);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(98)
	this->shaderManager = _g4;
	HX_STACK_LINE(99)
	::openfl::_internal::renderer::opengl::utils::SpriteBatch _g5 = ::openfl::_internal::renderer::opengl::utils::SpriteBatch_obj::__new(gl,null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(99)
	this->spriteBatch = _g5;
	HX_STACK_LINE(100)
	::openfl::_internal::renderer::opengl::utils::MaskManager _g6 = ::openfl::_internal::renderer::opengl::utils::MaskManager_obj::__new(gl);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(100)
	this->maskManager = _g6;
	HX_STACK_LINE(101)
	::openfl::_internal::renderer::opengl::utils::FilterManager _g7 = ::openfl::_internal::renderer::opengl::utils::FilterManager_obj::__new(gl,this->transparent);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(101)
	this->filterManager = _g7;
	HX_STACK_LINE(102)
	::openfl::_internal::renderer::opengl::utils::StencilManager _g8 = ::openfl::_internal::renderer::opengl::utils::StencilManager_obj::__new(gl);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(102)
	this->stencilManager = _g8;
	HX_STACK_LINE(103)
	::openfl::_internal::renderer::opengl::utils::BlendModeManager _g9 = ::openfl::_internal::renderer::opengl::utils::BlendModeManager_obj::__new(gl);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(103)
	this->blendModeManager = _g9;
	HX_STACK_LINE(105)
	::openfl::_internal::renderer::RenderSession _g10 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(105)
	this->renderSession = _g10;
	HX_STACK_LINE(106)
	this->renderSession->gl = this->gl;
	HX_STACK_LINE(107)
	this->renderSession->drawCount = (int)0;
	HX_STACK_LINE(108)
	this->renderSession->shaderManager = this->shaderManager;
	HX_STACK_LINE(109)
	this->renderSession->maskManager = this->maskManager;
	HX_STACK_LINE(110)
	this->renderSession->filterManager = this->filterManager;
	HX_STACK_LINE(111)
	this->renderSession->blendModeManager = this->blendModeManager;
	HX_STACK_LINE(112)
	this->renderSession->spriteBatch = this->spriteBatch;
	HX_STACK_LINE(113)
	this->renderSession->stencilManager = this->stencilManager;
	HX_STACK_LINE(114)
	this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(116)
	this->renderSession->projection = this->projection;
	HX_STACK_LINE(117)
	this->renderSession->offset = this->offset;
	HX_STACK_LINE(119)
	this->shaderManager->setShader(this->shaderManager->defaultShader,null());
	HX_STACK_LINE(121)
	::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->DEPTH_TEST);
	HX_STACK_LINE(122)
	::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->CULL_FACE);
	HX_STACK_LINE(124)
	::lime::graphics::opengl::GL_obj::lime_gl_enable(gl->BLEND);
	HX_STACK_LINE(125)
	::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,this->transparent);
}
;
	return null();
}

//GLRenderer_obj::~GLRenderer_obj() { }

Dynamic GLRenderer_obj::__CreateEmpty() { return  new GLRenderer_obj; }
hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,::lime::graphics::GLRenderContext gl,hx::Null< bool >  __o_transparent,hx::Null< bool >  __o_antialias,hx::Null< bool >  __o_preserveDrawingBuffer)
{  hx::ObjectPtr< GLRenderer_obj > result = new GLRenderer_obj();
	result->__construct(__o_width,__o_height,gl,__o_transparent,__o_antialias,__o_preserveDrawingBuffer);
	return result;}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderer_obj > result = new GLRenderer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void GLRenderer_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","destroy",0xb1ffe0f8,"openfl._internal.renderer.opengl.GLRenderer.destroy","openfl/_internal/renderer/opengl/GLRenderer.hx",130,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::openfl::_internal::renderer::opengl::GLRenderer_obj::glContexts[this->_glContextId] = null();
		HX_STACK_LINE(137)
		this->projection = null();
		HX_STACK_LINE(138)
		this->offset = null();
		HX_STACK_LINE(140)
		this->shaderManager->destroy();
		HX_STACK_LINE(141)
		this->spriteBatch->destroy();
		HX_STACK_LINE(142)
		this->maskManager->destroy();
		HX_STACK_LINE(143)
		this->filterManager->destroy();
		HX_STACK_LINE(145)
		this->shaderManager = null();
		HX_STACK_LINE(146)
		this->spriteBatch = null();
		HX_STACK_LINE(147)
		this->maskManager = null();
		HX_STACK_LINE(148)
		this->filterManager = null();
		HX_STACK_LINE(150)
		this->gl = null();
		HX_STACK_LINE(152)
		this->renderSession = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,destroy,(void))

Void GLRenderer_obj::handleContextLost( Dynamic event){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextLost",0x032f5229,"openfl._internal.renderer.opengl.GLRenderer.handleContextLost","openfl/_internal/renderer/opengl/GLRenderer.hx",181,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(183)
		event->__Field(HX_CSTRING("preventDefault"),true)();
		HX_STACK_LINE(184)
		this->contextLost = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,handleContextLost,(void))

Void GLRenderer_obj::handleContextRestored( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","handleContextRestored",0x3ebbac1b,"openfl._internal.renderer.opengl.GLRenderer.handleContextRestored","openfl/_internal/renderer/opengl/GLRenderer.hx",189,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(210)
		(::openfl::_internal::renderer::opengl::GLRenderer_obj::glContextId)++;
		HX_STACK_LINE(212)
		this->shaderManager->setContext(gl);
		HX_STACK_LINE(213)
		this->spriteBatch->setContext(gl);
		HX_STACK_LINE(214)
		this->maskManager->setContext(gl);
		HX_STACK_LINE(215)
		this->filterManager->setContext(gl);
		HX_STACK_LINE(217)
		this->renderSession->gl = gl;
		HX_STACK_LINE(219)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->DEPTH_TEST);
		HX_STACK_LINE(220)
		::lime::graphics::opengl::GL_obj::lime_gl_disable(gl->CULL_FACE);
		HX_STACK_LINE(222)
		::lime::graphics::opengl::GL_obj::lime_gl_enable(gl->BLEND);
		HX_STACK_LINE(223)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,this->transparent);
		HX_STACK_LINE(225)
		::lime::graphics::opengl::GL_obj::lime_gl_viewport((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(234)
		this->contextLost = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,handleContextRestored,(void))

Void GLRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",239,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(241)
		if ((this->contextLost)){
			HX_STACK_LINE(241)
			return null();
		}
		HX_STACK_LINE(245)
		::lime::graphics::GLRenderContext gl = this->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(246)
		::lime::graphics::opengl::GL_obj::lime_gl_viewport((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(247)
		::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(gl->FRAMEBUFFER,(int)0);
		HX_STACK_LINE(249)
		if ((this->transparent)){
			HX_STACK_LINE(251)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
		}
		else{
			HX_STACK_LINE(255)
			::lime::graphics::opengl::GL_obj::lime_gl_clear_color(stage->__colorSplit->__get((int)0),stage->__colorSplit->__get((int)1),stage->__colorSplit->__get((int)2),(int)1);
		}
		HX_STACK_LINE(259)
		::lime::graphics::opengl::GL_obj::lime_gl_clear(gl->COLOR_BUFFER_BIT);
		HX_STACK_LINE(260)
		this->renderDisplayObject(stage,this->projection,null());
	}
return null();
}


Void GLRenderer_obj::renderDisplayObject( ::openfl::display::DisplayObject displayObject,::openfl::geom::Point projection,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","renderDisplayObject",0x5792fa69,"openfl._internal.renderer.opengl.GLRenderer.renderDisplayObject","openfl/_internal/renderer/opengl/GLRenderer.hx",265,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(displayObject,"displayObject")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(267)
		this->renderSession->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL);
		HX_STACK_LINE(269)
		this->renderSession->drawCount = (int)0;
		HX_STACK_LINE(270)
		this->renderSession->currentBlendMode = null();
		HX_STACK_LINE(272)
		this->renderSession->projection = projection;
		HX_STACK_LINE(273)
		this->renderSession->offset = this->offset;
		HX_STACK_LINE(275)
		this->spriteBatch->begin(this->renderSession,null());
		HX_STACK_LINE(276)
		this->filterManager->begin(this->renderSession,buffer);
		HX_STACK_LINE(277)
		displayObject->__renderGL(this->renderSession);
		HX_STACK_LINE(279)
		this->spriteBatch->finish();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderer_obj,renderDisplayObject,(void))

Void GLRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",284,0xb2b97130)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(286)
		this->width = width;
		HX_STACK_LINE(287)
		this->height = height;
		HX_STACK_LINE(289)
		this->super::resize(width,height);
		HX_STACK_LINE(291)
		::lime::graphics::opengl::GL_obj::lime_gl_viewport((int)0,(int)0,width,height);
		HX_STACK_LINE(293)
		this->projection->x = (Float(width) / Float((int)2));
		HX_STACK_LINE(294)
		this->projection->y = (Float(-(height)) / Float((int)2));
	}
return null();
}


::haxe::ds::EnumValueMap GLRenderer_obj::blendModesWebGL;

int GLRenderer_obj::glContextId;

Array< ::Dynamic > GLRenderer_obj::glContexts;


GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(contextLost,"contextLost");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(_glContextId,"_glContextId");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_MARK_MEMBER_NAME(stencilManager,"stencilManager");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(__stage,"__stage");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(contextLost,"contextLost");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(_glContextId,"_glContextId");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(preserveDrawingBuffer,"preserveDrawingBuffer");
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
	HX_VISIT_MEMBER_NAME(spriteBatch,"spriteBatch");
	HX_VISIT_MEMBER_NAME(stencilManager,"stencilManager");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(__stage,"__stage");
	::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GLRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		if (HX_FIELD_EQ(inName,"__stage") ) { return __stage; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { return glContexts; }
		if (HX_FIELD_EQ(inName,"projection") ) { return projection; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { return glContextId; }
		if (HX_FIELD_EQ(inName,"contextLost") ) { return contextLost; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return maskManager; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { return spriteBatch; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { return _glContextId; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { return filterManager; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return shaderManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { return stencilManager; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blendModesWebGL") ) { return blendModesWebGL; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return blendModeManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleContextLost") ) { return handleContextLost_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDisplayObject") ) { return renderDisplayObject_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { return preserveDrawingBuffer; }
		if (HX_FIELD_EQ(inName,"handleContextRestored") ) { return handleContextRestored_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stage") ) { __stage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"glContexts") ) { glContexts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glContextId") ) { glContextId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contextLost") ) { contextLost=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::MaskManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spriteBatch") ) { spriteBatch=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::SpriteBatch >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_glContextId") ) { _glContextId=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::ShaderManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stencilManager") ) { stencilManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::StencilManager >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blendModesWebGL") ) { blendModesWebGL=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BlendModeManager >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"preserveDrawingBuffer") ) { preserveDrawingBuffer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blendModeManager"));
	outFields->push(HX_CSTRING("contextLost"));
	outFields->push(HX_CSTRING("filterManager"));
	outFields->push(HX_CSTRING("gl"));
	outFields->push(HX_CSTRING("_glContextId"));
	outFields->push(HX_CSTRING("maskManager"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("preserveDrawingBuffer"));
	outFields->push(HX_CSTRING("projection"));
	outFields->push(HX_CSTRING("shaderManager"));
	outFields->push(HX_CSTRING("spriteBatch"));
	outFields->push(HX_CSTRING("stencilManager"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("__stage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("blendModesWebGL"),
	HX_CSTRING("glContextId"),
	HX_CSTRING("glContexts"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BlendModeManager*/ ,(int)offsetof(GLRenderer_obj,blendModeManager),HX_CSTRING("blendModeManager")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,contextLost),HX_CSTRING("contextLost")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterManager*/ ,(int)offsetof(GLRenderer_obj,filterManager),HX_CSTRING("filterManager")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_CSTRING("gl")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,_glContextId),HX_CSTRING("_glContextId")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::MaskManager*/ ,(int)offsetof(GLRenderer_obj,maskManager),HX_CSTRING("maskManager")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,options),HX_CSTRING("options")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,preserveDrawingBuffer),HX_CSTRING("preserveDrawingBuffer")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(GLRenderer_obj,projection),HX_CSTRING("projection")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::ShaderManager*/ ,(int)offsetof(GLRenderer_obj,shaderManager),HX_CSTRING("shaderManager")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::SpriteBatch*/ ,(int)offsetof(GLRenderer_obj,spriteBatch),HX_CSTRING("spriteBatch")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::StencilManager*/ ,(int)offsetof(GLRenderer_obj,stencilManager),HX_CSTRING("stencilManager")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GLRenderer_obj,__stage),HX_CSTRING("__stage")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blendModeManager"),
	HX_CSTRING("contextLost"),
	HX_CSTRING("filterManager"),
	HX_CSTRING("gl"),
	HX_CSTRING("_glContextId"),
	HX_CSTRING("maskManager"),
	HX_CSTRING("offset"),
	HX_CSTRING("options"),
	HX_CSTRING("preserveDrawingBuffer"),
	HX_CSTRING("projection"),
	HX_CSTRING("shaderManager"),
	HX_CSTRING("spriteBatch"),
	HX_CSTRING("stencilManager"),
	HX_CSTRING("view"),
	HX_CSTRING("__stage"),
	HX_CSTRING("destroy"),
	HX_CSTRING("handleContextLost"),
	HX_CSTRING("handleContextRestored"),
	HX_CSTRING("render"),
	HX_CSTRING("renderDisplayObject"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::blendModesWebGL,"blendModesWebGL");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_MARK_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::blendModesWebGL,"blendModesWebGL");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContextId,"glContextId");
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::glContexts,"glContexts");
};

#endif

Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.GLRenderer"), hx::TCanCast< GLRenderer_obj> ,sStaticFields,sMemberFields,
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

void GLRenderer_obj::__boot()
{
	blendModesWebGL= null();
	glContextId= (int)0;
	glContexts= Array_obj< ::Dynamic >::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
