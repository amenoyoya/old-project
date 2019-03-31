#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
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
namespace openfl{
namespace _internal{
namespace renderer{

Void AbstractRenderer_obj::__construct(int width,int height)
{
HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","new",0x86c2b0b2,"openfl._internal.renderer.AbstractRenderer.new","openfl/_internal/renderer/AbstractRenderer.hx",18,0x115f79df)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(20)
	this->width = width;
	HX_STACK_LINE(21)
	this->height = height;
}
;
	return null();
}

//AbstractRenderer_obj::~AbstractRenderer_obj() { }

Dynamic AbstractRenderer_obj::__CreateEmpty() { return  new AbstractRenderer_obj; }
hx::ObjectPtr< AbstractRenderer_obj > AbstractRenderer_obj::__new(int width,int height)
{  hx::ObjectPtr< AbstractRenderer_obj > result = new AbstractRenderer_obj();
	result->__construct(width,height);
	return result;}

Dynamic AbstractRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractRenderer_obj > result = new AbstractRenderer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AbstractRenderer_obj::render( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","render",0xfd7a0a44,"openfl._internal.renderer.AbstractRenderer.render","openfl/_internal/renderer/AbstractRenderer.hx",26,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractRenderer_obj,render,(void))

Void AbstractRenderer_obj::renderShape( ::openfl::display::Shape shape){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","renderShape",0xb970923d,"openfl._internal.renderer.AbstractRenderer.renderShape","openfl/_internal/renderer/AbstractRenderer.hx",33,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shape,"shape")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractRenderer_obj,renderShape,(void))

Void AbstractRenderer_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.AbstractRenderer","resize",0x00cbf8e2,"openfl._internal.renderer.AbstractRenderer.resize","openfl/_internal/renderer/AbstractRenderer.hx",40,0x115f79df)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AbstractRenderer_obj,resize,(void))


AbstractRenderer_obj::AbstractRenderer_obj()
{
}

void AbstractRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractRenderer);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_END_CLASS();
}

void AbstractRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
}

Dynamic AbstractRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"renderShape") ) { return renderShape_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("renderSession"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AbstractRenderer_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(AbstractRenderer_obj,width),HX_CSTRING("width")},
	{hx::fsBool,(int)offsetof(AbstractRenderer_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(AbstractRenderer_obj,renderSession),HX_CSTRING("renderSession")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("transparent"),
	HX_CSTRING("renderSession"),
	HX_CSTRING("render"),
	HX_CSTRING("renderShape"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractRenderer_obj::__mClass,"__mClass");
};

#endif

Class AbstractRenderer_obj::__mClass;

void AbstractRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.AbstractRenderer"), hx::TCanCast< AbstractRenderer_obj> ,sStaticFields,sMemberFields,
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

void AbstractRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
