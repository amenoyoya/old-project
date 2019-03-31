#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FillType
#include <openfl/_internal/renderer/opengl/utils/FillType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicType
#include <openfl/_internal/renderer/opengl/utils/GraphicType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_LineStyle
#include <openfl/_internal/renderer/opengl/utils/LineStyle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PathBuiler
#include <openfl/_internal/renderer/opengl/utils/PathBuiler.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void DrawPath_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","new",0xc087ab9c,"openfl._internal.renderer.opengl.utils.DrawPath.new","openfl/_internal/renderer/opengl/utils/DrawPath.hx",24,0xf0fd7951)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	this->type = ::openfl::_internal::renderer::opengl::utils::GraphicType_obj::Polygon;
	HX_STACK_LINE(33)
	this->points = Array_obj< Float >::__new();
	HX_STACK_LINE(31)
	this->winding = (int)0;
	HX_STACK_LINE(30)
	this->isRemovable = true;
	HX_STACK_LINE(29)
	this->fillIndex = (int)0;
	HX_STACK_LINE(38)
	::openfl::_internal::renderer::opengl::utils::LineStyle _g = ::openfl::_internal::renderer::opengl::utils::LineStyle_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->line = _g;
	HX_STACK_LINE(39)
	this->fill = ::openfl::_internal::renderer::opengl::utils::FillType_obj::None;
}
;
	return null();
}

//DrawPath_obj::~DrawPath_obj() { }

Dynamic DrawPath_obj::__CreateEmpty() { return  new DrawPath_obj; }
hx::ObjectPtr< DrawPath_obj > DrawPath_obj::__new()
{  hx::ObjectPtr< DrawPath_obj > result = new DrawPath_obj();
	result->__construct();
	return result;}

Dynamic DrawPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawPath_obj > result = new DrawPath_obj();
	result->__construct();
	return result;}

Void DrawPath_obj::update( ::openfl::_internal::renderer::opengl::utils::LineStyle line,::openfl::_internal::renderer::opengl::utils::FillType fill,int fillIndex,int winding){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","update",0x9215584d,"openfl._internal.renderer.opengl.utils.DrawPath.update","openfl/_internal/renderer/opengl/utils/DrawPath.hx",42,0xf0fd7951)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_ARG(fill,"fill")
		HX_STACK_ARG(fillIndex,"fillIndex")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(43)
		this->updateLine(line);
		HX_STACK_LINE(44)
		this->fill = fill;
		HX_STACK_LINE(45)
		this->fillIndex = fillIndex;
		HX_STACK_LINE(46)
		this->winding = winding;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DrawPath_obj,update,(void))

Void DrawPath_obj::updateLine( ::openfl::_internal::renderer::opengl::utils::LineStyle line){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","updateLine",0x8c0846e1,"openfl._internal.renderer.opengl.utils.DrawPath.updateLine","openfl/_internal/renderer/opengl/utils/DrawPath.hx",49,0xf0fd7951)
		HX_STACK_THIS(this)
		HX_STACK_ARG(line,"line")
		HX_STACK_LINE(50)
		this->line->width = line->width;
		HX_STACK_LINE(51)
		this->line->color = line->color;
		HX_STACK_LINE(52)
		if (((line->alpha == null()))){
			HX_STACK_LINE(52)
			this->line->alpha = (int)1;
		}
		else{
			HX_STACK_LINE(52)
			this->line->alpha = line->alpha;
		}
		HX_STACK_LINE(53)
		if (((line->scaleMode == null()))){
			HX_STACK_LINE(53)
			this->line->scaleMode = ::openfl::display::LineScaleMode_obj::NORMAL;
		}
		else{
			HX_STACK_LINE(53)
			this->line->scaleMode = line->scaleMode;
		}
		HX_STACK_LINE(54)
		if (((line->caps == null()))){
			HX_STACK_LINE(54)
			this->line->caps = ::openfl::display::CapsStyle_obj::ROUND;
		}
		else{
			HX_STACK_LINE(54)
			this->line->caps = line->caps;
		}
		HX_STACK_LINE(55)
		if (((line->joints == null()))){
			HX_STACK_LINE(55)
			this->line->joints = ::openfl::display::JointStyle_obj::ROUND;
		}
		else{
			HX_STACK_LINE(55)
			this->line->joints = line->joints;
		}
		HX_STACK_LINE(56)
		this->line->miterLimit = line->miterLimit;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DrawPath_obj,updateLine,(void))

::openfl::_internal::renderer::opengl::utils::GLStack DrawPath_obj::getStack( ::openfl::display::Graphics graphics,::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.DrawPath","getStack",0xb03e6216,"openfl._internal.renderer.opengl.utils.DrawPath.getStack","openfl/_internal/renderer/opengl/utils/DrawPath.hx",60,0xf0fd7951)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(60)
	return ::openfl::_internal::renderer::opengl::utils::PathBuiler_obj::build(graphics,gl);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DrawPath_obj,getStack,return )


DrawPath_obj::DrawPath_obj()
{
}

void DrawPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawPath);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(fillIndex,"fillIndex");
	HX_MARK_MEMBER_NAME(isRemovable,"isRemovable");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DrawPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(fillIndex,"fillIndex");
	HX_VISIT_MEMBER_NAME(isRemovable,"isRemovable");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic DrawPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return winding; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getStack") ) { return getStack_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { return fillIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateLine") ) { return updateLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { return isRemovable; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::LineStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GraphicType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillIndex") ) { fillIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isRemovable") ) { isRemovable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("line"));
	outFields->push(HX_CSTRING("fill"));
	outFields->push(HX_CSTRING("fillIndex"));
	outFields->push(HX_CSTRING("isRemovable"));
	outFields->push(HX_CSTRING("winding"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getStack"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::LineStyle*/ ,(int)offsetof(DrawPath_obj,line),HX_CSTRING("line")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FillType*/ ,(int)offsetof(DrawPath_obj,fill),HX_CSTRING("fill")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,fillIndex),HX_CSTRING("fillIndex")},
	{hx::fsBool,(int)offsetof(DrawPath_obj,isRemovable),HX_CSTRING("isRemovable")},
	{hx::fsInt,(int)offsetof(DrawPath_obj,winding),HX_CSTRING("winding")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(DrawPath_obj,points),HX_CSTRING("points")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GraphicType*/ ,(int)offsetof(DrawPath_obj,type),HX_CSTRING("type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("line"),
	HX_CSTRING("fill"),
	HX_CSTRING("fillIndex"),
	HX_CSTRING("isRemovable"),
	HX_CSTRING("winding"),
	HX_CSTRING("points"),
	HX_CSTRING("type"),
	HX_CSTRING("update"),
	HX_CSTRING("updateLine"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawPath_obj::__mClass,"__mClass");
};

#endif

Class DrawPath_obj::__mClass;

void DrawPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.DrawPath"), hx::TCanCast< DrawPath_obj> ,sStaticFields,sMemberFields,
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

void DrawPath_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
