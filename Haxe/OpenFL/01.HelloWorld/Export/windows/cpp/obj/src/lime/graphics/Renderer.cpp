#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace graphics{

Void Renderer_obj::__construct(::lime::ui::Window window)
{
HX_STACK_FRAME("lime.graphics.Renderer","new",0x7185ed3f,"lime.graphics.Renderer.new","lime/graphics/Renderer.hx",8,0x16f09331)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
{
	HX_STACK_LINE(14)
	this->onRender = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(13)
	this->onRenderContextRestored = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(12)
	this->onRenderContextLost = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(22)
	this->window = window;
	HX_STACK_LINE(24)
	::lime::_backend::native::NativeRenderer _g = ::lime::_backend::native::NativeRenderer_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->backend = _g;
	HX_STACK_LINE(26)
	this->window->currentRenderer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Renderer_obj::~Renderer_obj() { }

Dynamic Renderer_obj::__CreateEmpty() { return  new Renderer_obj; }
hx::ObjectPtr< Renderer_obj > Renderer_obj::__new(::lime::ui::Window window)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(window);
	return result;}

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Renderer_obj > result = new Renderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Renderer_obj::create( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","create",0x6b7d5f7d,"lime.graphics.Renderer.create","lime/graphics/Renderer.hx",33,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->backend->create();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create,(void))

Void Renderer_obj::flip( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","flip",0xde6538ee,"lime.graphics.Renderer.flip","lime/graphics/Renderer.hx",40,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->backend->flip();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,flip,(void))

Void Renderer_obj::render( ){
{
		HX_STACK_FRAME("lime.graphics.Renderer","render",0xf49763d7,"lime.graphics.Renderer.render","lime/graphics/Renderer.hx",47,0x16f09331)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->backend->render();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,render,(void))


Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(onRenderContextLost,"onRenderContextLost");
	HX_MARK_MEMBER_NAME(onRenderContextRestored,"onRenderContextRestored");
	HX_MARK_MEMBER_NAME(onRender,"onRender");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(onRenderContextLost,"onRenderContextLost");
	HX_VISIT_MEMBER_NAME(onRenderContextRestored,"onRenderContextRestored");
	HX_VISIT_MEMBER_NAME(onRender,"onRender");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

Dynamic Renderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Renderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::graphics::RenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeRenderer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { onRender=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { onRenderContextLost=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { onRenderContextRestored=inValue.Cast< ::lime::app::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	outFields->push(HX_CSTRING("onRenderContextLost"));
	outFields->push(HX_CSTRING("onRenderContextRestored"));
	outFields->push(HX_CSTRING("onRender"));
	outFields->push(HX_CSTRING("window"));
	outFields->push(HX_CSTRING("backend"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(Renderer_obj,context),HX_CSTRING("context")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Renderer_obj,onRenderContextLost),HX_CSTRING("onRenderContextLost")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Renderer_obj,onRenderContextRestored),HX_CSTRING("onRenderContextRestored")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Renderer_obj,onRender),HX_CSTRING("onRender")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Renderer_obj,window),HX_CSTRING("window")},
	{hx::fsObject /*::lime::_backend::native::NativeRenderer*/ ,(int)offsetof(Renderer_obj,backend),HX_CSTRING("backend")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onRender"),
	HX_CSTRING("window"),
	HX_CSTRING("backend"),
	HX_CSTRING("create"),
	HX_CSTRING("flip"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.graphics.Renderer"), hx::TCanCast< Renderer_obj> ,sStaticFields,sMemberFields,
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

void Renderer_obj::__boot()
{
}

} // end namespace lime
} // end namespace graphics
