#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
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
#ifndef INCLUDED_openfl_display_DrawCommand
#include <openfl/display/DrawCommand.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",166,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(718)
	this->__maskCached = false;
	HX_STACK_LINE(753)
	super::__construct(null());
	HX_STACK_LINE(755)
	this->__alpha = (int)1;
	HX_STACK_LINE(756)
	this->__rotation = (int)0;
	HX_STACK_LINE(757)
	this->__scaleX = (int)1;
	HX_STACK_LINE(758)
	this->__scaleY = (int)1;
	HX_STACK_LINE(759)
	this->__visible = true;
	HX_STACK_LINE(760)
	this->__x = (int)0;
	HX_STACK_LINE(761)
	this->__y = (int)0;
	HX_STACK_LINE(763)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(764)
	::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(764)
	this->__worldTransform = _g;
	HX_STACK_LINE(765)
	this->__rotationCache = (int)0;
	HX_STACK_LINE(766)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(767)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(769)
	::openfl::geom::ColorTransform _g1 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(769)
	this->__worldColorTransform = _g1;
	HX_STACK_LINE(775)
	int _g2 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(775)
	::String _g3 = (HX_CSTRING("instance") + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(775)
	this->set_name(_g3);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct();
	return result;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct();
	return result;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

bool DisplayObject_obj::dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","dispatchEvent",0xe6cd7049,"openfl.display.DisplayObject.dispatchEvent","openfl/display/DisplayObject.hx",780,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(782)
	bool result = this->super::dispatchEvent(event);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(784)
	if ((event->__isCancelled)){
		HX_STACK_LINE(786)
		return true;
	}
	HX_STACK_LINE(790)
	if (((bool((bool(event->bubbles) && bool((this->parent != null())))) && bool((this->parent != hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(792)
		event->eventPhase = ::openfl::events::EventPhase_obj::BUBBLING_PHASE;
		HX_STACK_LINE(793)
		this->parent->dispatchEvent(event);
	}
	HX_STACK_LINE(797)
	return result;
}


::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",826,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(828)
	::openfl::geom::Matrix matrix = this->__getTransform();		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(830)
	if (((targetCoordinateSpace != null()))){
		HX_STACK_LINE(832)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(832)
		matrix = _g;
		struct _Function_2_1{
			inline static ::openfl::geom::Matrix Block( ::openfl::display::DisplayObject &targetCoordinateSpace){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",833,0xc7539829)
				{
					HX_STACK_LINE(833)
					::openfl::geom::Matrix _this = targetCoordinateSpace->__worldTransform;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(833)
					return ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
				}
				return null();
			}
		};
		HX_STACK_LINE(833)
		::openfl::geom::Matrix _g1 = (_Function_2_1::Block(targetCoordinateSpace))->invert();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(833)
		matrix->concat(_g1);
	}
	HX_STACK_LINE(837)
	::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(838)
	this->__getBounds(bounds,matrix);
	HX_STACK_LINE(840)
	return bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",866,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(866)
	return this->getBounds(targetCoordinateSpace);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",890,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	struct _Function_1_1{
		inline static ::openfl::geom::Matrix Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",890,0xc7539829)
			{
				HX_STACK_LINE(890)
				::openfl::geom::Matrix _this = __this->__getTransform();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(890)
				return ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
			}
			return null();
		}
	};
	HX_STACK_LINE(890)
	return (_Function_1_1::Block(this))->invert()->transformPoint(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",903,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(905)
	if (((bool((bool((obj != null())) && bool((obj->parent != null())))) && bool((this->parent != null()))))){
		HX_STACK_LINE(907)
		::openfl::geom::Rectangle currentBounds = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(908)
		::openfl::geom::Rectangle targetBounds = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(910)
		return currentBounds->intersects(targetBounds);
	}
	HX_STACK_LINE(914)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",935,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(937)
		if (((this->parent != null()))){
			HX_STACK_LINE(939)
			::openfl::geom::Rectangle currentBounds = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(currentBounds,"currentBounds");
			HX_STACK_LINE(940)
			::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(940)
			return currentBounds->containsPoint(_g);
		}
		HX_STACK_LINE(944)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",974,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(974)
	return this->__getTransform()->transformPoint(point);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObject","__broadcast",0xe41880ea,"openfl.display.DisplayObject.__broadcast","openfl/display/DisplayObject.hx",979,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(981)
	if (((  (((this->__eventMap != null()))) ? bool(this->hasEventListener(event->type)) : bool(false) ))){
		HX_STACK_LINE(983)
		bool result = this->super::dispatchEvent(event);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(985)
		if ((event->__isCancelled)){
			HX_STACK_LINE(987)
			return true;
		}
		HX_STACK_LINE(991)
		return result;
	}
	HX_STACK_LINE(995)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__broadcast,return )

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",1002,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1002)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1004)
			this->__graphics->__getBounds(rect,(  (((matrix != null()))) ? ::openfl::geom::Matrix(matrix) : ::openfl::geom::Matrix(this->__worldTransform) ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

Void DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",1011,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stack,"stack")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,(void))

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",1018,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(1020)
		this->__getTransform();
		HX_STACK_LINE(1021)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1021)
		this->__getBounds(rect,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getTransform",0xb0d5c3ad,"openfl.display.DisplayObject.__getTransform","openfl/display/DisplayObject.hx",1026,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1028)
	if (((bool(this->__transformDirty) || bool((::openfl::display::DisplayObject_obj::__worldTransformDirty > (int)0))))){
		HX_STACK_LINE(1030)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1031)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1032)
		bool transformDirty = this->__transformDirty;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(1034)
		if (((this->parent == null()))){
			HX_STACK_LINE(1036)
			if ((transformDirty)){
				HX_STACK_LINE(1036)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(1040)
			while((true)){
				HX_STACK_LINE(1040)
				if ((!(((current->parent != null()))))){
					HX_STACK_LINE(1040)
					break;
				}
				HX_STACK_LINE(1042)
				list->push(current);
				HX_STACK_LINE(1043)
				current = current->parent;
				HX_STACK_LINE(1045)
				if ((current->__transformDirty)){
					HX_STACK_LINE(1047)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(1055)
		if ((transformDirty)){
			HX_STACK_LINE(1057)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1058)
			while((true)){
				HX_STACK_LINE(1058)
				int _g = --(i);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1058)
				if ((!(((_g >= (int)0))))){
					HX_STACK_LINE(1058)
					break;
				}
				HX_STACK_LINE(1060)
				list->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(1068)
	return this->__worldTransform;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",1073,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(1075)
	if (((this->__graphics != null()))){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this,Float &x,Float &y,bool &shapeFlag){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",1077,0xc7539829)
				{
					HX_STACK_LINE(1077)
					::openfl::geom::Matrix _g = __this->__getTransform();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1077)
					return __this->__graphics->__hitTest(x,y,shapeFlag,_g);
				}
				return null();
			}
		};
		HX_STACK_LINE(1077)
		if (((  ((this->get_visible())) ? bool(_Function_2_1::Block(this,x,y,shapeFlag)) : bool(false) ))){
			HX_STACK_LINE(1079)
			if ((!(interactiveOnly))){
				HX_STACK_LINE(1081)
				stack->push(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(1085)
			return true;
		}
	}
	HX_STACK_LINE(1091)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,__hitTest,return )

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",1098,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1098)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1100)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",1109,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1109)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1111)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",1118,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1120)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(1120)
			return null();
		}
		HX_STACK_LINE(1122)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1124)
			::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),renderSession);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__renderMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderMask",0x3f638959,"openfl.display.DisplayObject.__renderMask","openfl/display/DisplayObject.hx",1133,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1133)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1135)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(this->__graphics,renderSession);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderMask,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",1144,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(1144)
		if (((this->stage != stage))){
			HX_STACK_LINE(1146)
			if (((this->stage != null()))){
				HX_STACK_LINE(1148)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED_FROM_STAGE,false,false);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1148)
				this->dispatchEvent(_g);
			}
			HX_STACK_LINE(1152)
			this->stage = stage;
			HX_STACK_LINE(1154)
			if (((stage != null()))){
				HX_STACK_LINE(1156)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED_TO_STAGE,false,false);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1156)
				this->dispatchEvent(_g1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",1167,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1167)
		if ((!(this->__renderDirty))){
			HX_STACK_LINE(1169)
			this->__renderDirty = true;
			HX_STACK_LINE(1170)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",1179,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1179)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1181)
			this->__transformDirty = true;
			HX_STACK_LINE(1182)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",1189,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1191)
		bool _g2;		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",1191,0xc7539829)
				{
					HX_STACK_LINE(1191)
					Float _g = __this->get_scaleX();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1191)
					return (_g != (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",1191,0xc7539829)
				{
					HX_STACK_LINE(1191)
					Float _g1 = __this->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1191)
					return (_g1 != (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(1191)
		if (((  (((  ((this->get_visible())) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
			HX_STACK_LINE(1191)
			_g2 = !(this->__isMask);
		}
		else{
			HX_STACK_LINE(1191)
			_g2 = false;
		}
		HX_STACK_LINE(1191)
		this->__renderable = _g2;
		HX_STACK_LINE(1194)
		Float _g3 = this->get_rotation();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1194)
		if (((_g3 != this->__rotationCache))){
			HX_STACK_LINE(1196)
			Float _g4 = this->get_rotation();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1196)
			this->__rotationCache = _g4;
			HX_STACK_LINE(1197)
			Float _g5 = this->get_rotation();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1197)
			Float radians = (_g5 * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(1198)
			Float _g6 = ::Math_obj::sin(radians);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1198)
			this->__rotationSine = _g6;
			HX_STACK_LINE(1199)
			Float _g7 = ::Math_obj::cos(radians);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1199)
			this->__rotationCosine = _g7;
		}
		HX_STACK_LINE(1203)
		if (((this->parent != null()))){
			HX_STACK_LINE(1205)
			::openfl::geom::Matrix parentTransform = this->parent->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(1207)
			Float _g8 = this->get_scaleX();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1207)
			Float a00 = (this->__rotationCosine * _g8);		HX_STACK_VAR(a00,"a00");
			HX_STACK_LINE(1208)
			Float _g9 = this->get_scaleX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(1208)
			Float a01 = (this->__rotationSine * _g9);		HX_STACK_VAR(a01,"a01");
			HX_STACK_LINE(1209)
			Float _g10 = this->get_scaleY();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1209)
			Float a10 = (-(this->__rotationSine) * _g10);		HX_STACK_VAR(a10,"a10");
			HX_STACK_LINE(1210)
			Float _g11 = this->get_scaleY();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1210)
			Float a11 = (this->__rotationCosine * _g11);		HX_STACK_VAR(a11,"a11");
			HX_STACK_LINE(1211)
			Float b00 = parentTransform->a;		HX_STACK_VAR(b00,"b00");
			HX_STACK_LINE(1212)
			Float b01 = parentTransform->b;		HX_STACK_VAR(b01,"b01");
			HX_STACK_LINE(1213)
			Float b10 = parentTransform->c;		HX_STACK_VAR(b10,"b10");
			HX_STACK_LINE(1214)
			Float b11 = parentTransform->d;		HX_STACK_VAR(b11,"b11");
			HX_STACK_LINE(1216)
			if (((this->__worldTransform == null()))){
				HX_STACK_LINE(1216)
				::openfl::geom::Matrix _g12 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(1216)
				this->__worldTransform = _g12;
			}
			HX_STACK_LINE(1218)
			this->__worldTransform->a = ((a00 * b00) + (a01 * b10));
			HX_STACK_LINE(1219)
			this->__worldTransform->b = ((a00 * b01) + (a01 * b11));
			HX_STACK_LINE(1220)
			this->__worldTransform->c = ((a10 * b00) + (a11 * b10));
			HX_STACK_LINE(1221)
			this->__worldTransform->d = ((a10 * b01) + (a11 * b11));
			HX_STACK_LINE(1223)
			::openfl::geom::Rectangle _g13 = this->get_scrollRect();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(1223)
			if (((_g13 == null()))){
				HX_STACK_LINE(1225)
				Float _g14 = this->get_x();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(1225)
				Float _g15 = (_g14 * b00);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(1225)
				Float _g16 = this->get_y();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(1225)
				Float _g17 = (_g16 * b10);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(1225)
				Float _g18 = (_g15 + _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(1225)
				Float _g19 = (_g18 + parentTransform->tx);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(1225)
				this->__worldTransform->tx = _g19;
				HX_STACK_LINE(1226)
				Float _g20 = this->get_x();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(1226)
				Float _g21 = (_g20 * b01);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(1226)
				Float _g22 = this->get_y();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(1226)
				Float _g23 = (_g22 * b11);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(1226)
				Float _g24 = (_g21 + _g23);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(1226)
				Float _g25 = (_g24 + parentTransform->ty);		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(1226)
				this->__worldTransform->ty = _g25;
			}
			else{
				HX_STACK_LINE(1230)
				Float _g26 = this->get_x();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(1230)
				Float _g27 = (_g26 - this->get_scrollRect()->x);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(1230)
				Float _g28 = (_g27 * b00);		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(1230)
				Float _g29 = this->get_y();		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(1230)
				Float _g30 = (_g29 - this->get_scrollRect()->y);		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(1230)
				Float _g31 = (_g30 * b10);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(1230)
				Float _g32 = (_g28 + _g31);		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(1230)
				Float _g33 = (_g32 + parentTransform->tx);		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(1230)
				this->__worldTransform->tx = _g33;
				HX_STACK_LINE(1231)
				Float _g34 = this->get_x();		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(1231)
				Float _g35 = (_g34 - this->get_scrollRect()->x);		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(1231)
				Float _g36 = (_g35 * b01);		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(1231)
				Float _g37 = this->get_y();		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(1231)
				Float _g38 = (_g37 - this->get_scrollRect()->y);		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(1231)
				Float _g39 = (_g38 * b11);		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(1231)
				Float _g40 = (_g36 + _g39);		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(1231)
				Float _g41 = (_g40 + parentTransform->ty);		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(1231)
				this->__worldTransform->ty = _g41;
			}
			HX_STACK_LINE(1235)
			if ((this->__isMask)){
				HX_STACK_LINE(1235)
				this->__maskCached = false;
			}
		}
		else{
			HX_STACK_LINE(1239)
			Float _g42 = this->get_scaleX();		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(1239)
			Float _g43 = (this->__rotationCosine * _g42);		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(1239)
			this->__worldTransform->a = _g43;
			HX_STACK_LINE(1240)
			Float _g44 = this->get_scaleY();		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(1240)
			Float _g45 = (-(this->__rotationSine) * _g44);		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(1240)
			this->__worldTransform->c = _g45;
			HX_STACK_LINE(1241)
			Float _g46 = this->get_scaleX();		HX_STACK_VAR(_g46,"_g46");
			HX_STACK_LINE(1241)
			Float _g47 = (this->__rotationSine * _g46);		HX_STACK_VAR(_g47,"_g47");
			HX_STACK_LINE(1241)
			this->__worldTransform->b = _g47;
			HX_STACK_LINE(1242)
			Float _g48 = this->get_scaleY();		HX_STACK_VAR(_g48,"_g48");
			HX_STACK_LINE(1242)
			Float _g49 = (this->__rotationCosine * _g48);		HX_STACK_VAR(_g49,"_g49");
			HX_STACK_LINE(1242)
			this->__worldTransform->d = _g49;
			HX_STACK_LINE(1244)
			::openfl::geom::Rectangle _g50 = this->get_scrollRect();		HX_STACK_VAR(_g50,"_g50");
			HX_STACK_LINE(1244)
			if (((_g50 == null()))){
				HX_STACK_LINE(1246)
				Float _g51 = this->get_x();		HX_STACK_VAR(_g51,"_g51");
				HX_STACK_LINE(1246)
				this->__worldTransform->tx = _g51;
				HX_STACK_LINE(1247)
				Float _g52 = this->get_y();		HX_STACK_VAR(_g52,"_g52");
				HX_STACK_LINE(1247)
				this->__worldTransform->ty = _g52;
			}
			else{
				HX_STACK_LINE(1251)
				Float _g53 = this->get_y();		HX_STACK_VAR(_g53,"_g53");
				HX_STACK_LINE(1251)
				Float _g54 = (_g53 - this->get_scrollRect()->x);		HX_STACK_VAR(_g54,"_g54");
				HX_STACK_LINE(1251)
				this->__worldTransform->tx = _g54;
				HX_STACK_LINE(1252)
				Float _g55 = this->get_y();		HX_STACK_VAR(_g55,"_g55");
				HX_STACK_LINE(1252)
				Float _g56 = (_g55 - this->get_scrollRect()->y);		HX_STACK_VAR(_g56,"_g56");
				HX_STACK_LINE(1252)
				this->__worldTransform->ty = _g56;
			}
		}
		HX_STACK_LINE(1258)
		if (((bool(updateChildren) && bool(this->__transformDirty)))){
			HX_STACK_LINE(1260)
			this->__transformDirty = false;
			HX_STACK_LINE(1261)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(1265)
		if (((bool((bool(!(transformOnly)) && bool((this->__mask != null())))) && bool(!(this->__mask->__maskCached))))){
			HX_STACK_LINE(1267)
			if (((this->__maskGraphics == null()))){
				HX_STACK_LINE(1268)
				::openfl::display::Graphics _g57 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g57,"_g57");
				HX_STACK_LINE(1268)
				this->__maskGraphics = _g57;
			}
			HX_STACK_LINE(1271)
			this->__maskGraphics->clear();
			HX_STACK_LINE(1273)
			this->__mask->__update(true,true,this->__maskGraphics);
			HX_STACK_LINE(1274)
			this->__mask->__maskCached = true;
		}
		HX_STACK_LINE(1278)
		if (((maskGraphics != null()))){
			HX_STACK_LINE(1280)
			this->__updateMask(maskGraphics);
		}
		HX_STACK_LINE(1285)
		if ((!(transformOnly))){
			HX_STACK_LINE(1294)
			::openfl::geom::ColorTransform _g58 = this->get_transform()->get_colorTransform();		HX_STACK_VAR(_g58,"_g58");
			HX_STACK_LINE(1294)
			if ((!(this->__worldColorTransform->__equals(_g58,null())))){
				HX_STACK_LINE(1295)
				::openfl::geom::ColorTransform _g59 = this->get_transform()->get_colorTransform()->__clone();		HX_STACK_VAR(_g59,"_g59");
				HX_STACK_LINE(1295)
				this->__worldColorTransform = _g59;
			}
			HX_STACK_LINE(1298)
			if (((this->parent != null()))){
				HX_STACK_LINE(1302)
				Float _g60 = this->get_alpha();		HX_STACK_VAR(_g60,"_g60");
				HX_STACK_LINE(1302)
				Float _g61 = (_g60 * this->parent->__worldAlpha);		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(1302)
				this->__worldAlpha = _g61;
				HX_STACK_LINE(1303)
				this->__worldColorTransform->__combine(this->parent->__worldColorTransform);
			}
			else{
				HX_STACK_LINE(1340)
				Float _g62 = this->get_alpha();		HX_STACK_VAR(_g62,"_g62");
				HX_STACK_LINE(1340)
				this->__worldAlpha = _g62;
			}
			HX_STACK_LINE(1364)
			if (((bool(updateChildren) && bool(this->__renderDirty)))){
				HX_STACK_LINE(1366)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",1375,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(1377)
		bool _g2;		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",1377,0xc7539829)
				{
					HX_STACK_LINE(1377)
					Float _g = __this->get_scaleX();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1377)
					return (_g != (int)0);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::openfl::display::DisplayObject_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/DisplayObject.hx",1377,0xc7539829)
				{
					HX_STACK_LINE(1377)
					Float _g1 = __this->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1377)
					return (_g1 != (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(1377)
		if (((  (((  ((this->get_visible())) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool(_Function_1_2::Block(this)) : bool(false) ))){
			HX_STACK_LINE(1377)
			_g2 = !(this->__isMask);
		}
		else{
			HX_STACK_LINE(1377)
			_g2 = false;
		}
		HX_STACK_LINE(1377)
		this->__renderable = _g2;
		HX_STACK_LINE(1378)
		if (((bool(!(this->__renderable)) && bool(!(this->__isMask))))){
			HX_STACK_LINE(1378)
			return null();
		}
		HX_STACK_LINE(1379)
		Float _g3 = this->get_alpha();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1379)
		this->__worldAlpha = _g3;
		HX_STACK_LINE(1381)
		if ((this->__transformDirty)){
			HX_STACK_LINE(1383)
			this->__transformDirty = false;
			HX_STACK_LINE(1384)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",1393,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(1393)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(1395)
			::openfl::display::DrawCommand _g = ::openfl::display::DrawCommand_obj::OverrideMatrix(this->__worldTransform);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1395)
			maskGraphics->__commands->push(_g);
			HX_STACK_LINE(1396)
			Array< ::Dynamic > _g1 = maskGraphics->__commands->concat(this->__graphics->__commands);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1396)
			maskGraphics->__commands = _g1;
			HX_STACK_LINE(1397)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(1398)
			maskGraphics->__visible = true;
			HX_STACK_LINE(1399)
			if (((maskGraphics->__bounds == null()))){
				HX_STACK_LINE(1400)
				::openfl::geom::Rectangle _g2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1400)
				maskGraphics->__bounds = _g2;
			}
			HX_STACK_LINE(1403)
			this->__graphics->__getBounds(maskGraphics->__bounds,::openfl::geom::Matrix_obj::__identity);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",1419,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1419)
	return this->__alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",1424,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1426)
	if (((value != this->__alpha))){
		HX_STACK_LINE(1426)
		if ((!(this->__renderDirty))){
			HX_STACK_LINE(1426)
			this->__renderDirty = true;
			HX_STACK_LINE(1426)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1427)
	return this->__alpha = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1434,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1434)
	if (((this->__filters == null()))){
		HX_STACK_LINE(1436)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(1440)
		return this->__filters->copy();
	}
	HX_STACK_LINE(1434)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1451,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1451)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1456,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1458)
	::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1459)
	{
		HX_STACK_LINE(1459)
		this->__getTransform();
		HX_STACK_LINE(1459)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1459)
		this->__getBounds(bounds,_g);
	}
	HX_STACK_LINE(1461)
	Float _g1 = this->get_scaleY();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1461)
	return (bounds->height * _g1);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1466,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1468)
	::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1469)
	{
		HX_STACK_LINE(1469)
		this->__getTransform();
		HX_STACK_LINE(1469)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1469)
		this->__getBounds(bounds,_g);
	}
	HX_STACK_LINE(1471)
	if (((value != bounds->height))){
		HX_STACK_LINE(1473)
		this->set_scaleY((Float(value) / Float(bounds->height)));
	}
	else{
		HX_STACK_LINE(1477)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(1481)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",1488,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1488)
	return this->__mask;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",1493,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1495)
	if (((value != this->__mask))){
		HX_STACK_LINE(1496)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1496)
			this->__transformDirty = true;
			HX_STACK_LINE(1496)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(1497)
		if ((!(this->__renderDirty))){
			HX_STACK_LINE(1497)
			this->__renderDirty = true;
			HX_STACK_LINE(1497)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1499)
	if (((this->__mask != null()))){
		HX_STACK_LINE(1500)
		this->__mask->__isMask = false;
		HX_STACK_LINE(1501)
		this->__mask->__maskCached = false;
		HX_STACK_LINE(1502)
		{
			HX_STACK_LINE(1502)
			::openfl::display::DisplayObject _this = this->__mask;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1502)
			if ((!(_this->__transformDirty))){
				HX_STACK_LINE(1502)
				_this->__transformDirty = true;
				HX_STACK_LINE(1502)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1503)
		{
			HX_STACK_LINE(1503)
			::openfl::display::DisplayObject _this = this->__mask;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1503)
			if ((!(_this->__renderDirty))){
				HX_STACK_LINE(1503)
				_this->__renderDirty = true;
				HX_STACK_LINE(1503)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(1504)
		this->__maskGraphics = null();
	}
	HX_STACK_LINE(1506)
	if (((value != null()))){
		HX_STACK_LINE(1506)
		value->__isMask = true;
	}
	HX_STACK_LINE(1507)
	return this->__mask = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1512,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1514)
	if (((this->stage != null()))){
		HX_STACK_LINE(1516)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new(this->stage->__mouseX,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1516)
		return this->globalToLocal(_g)->x;
	}
	HX_STACK_LINE(1520)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1525,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1527)
	if (((this->stage != null()))){
		HX_STACK_LINE(1529)
		::openfl::geom::Point _g = ::openfl::geom::Point_obj::__new((int)0,this->stage->__mouseY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1529)
		return this->globalToLocal(_g)->y;
	}
	HX_STACK_LINE(1533)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1540,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1540)
	return this->__name;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1547,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1547)
	return this->__name = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1552,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1554)
	if (((this->stage != null()))){
		HX_STACK_LINE(1556)
		return ::openfl::Lib_obj::current;
	}
	HX_STACK_LINE(1560)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1567,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1567)
	return this->__rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1572,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1574)
	if (((value != this->__rotation))){
		HX_STACK_LINE(1574)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1574)
			this->__transformDirty = true;
			HX_STACK_LINE(1574)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1575)
	return this->__rotation = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1582,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1582)
	return this->__scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1587,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1589)
	if (((value != this->__scaleX))){
		HX_STACK_LINE(1589)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1589)
			this->__transformDirty = true;
			HX_STACK_LINE(1589)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1590)
	return this->__scaleX = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",1597,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1597)
	return this->__scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",1602,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1604)
	if (((this->__scaleY != value))){
		HX_STACK_LINE(1604)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1604)
			this->__transformDirty = true;
			HX_STACK_LINE(1604)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1605)
	return this->__scaleY = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",1612,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1612)
	return this->__scrollRect;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",1617,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1619)
	if (((value != this->__scrollRect))){
		HX_STACK_LINE(1621)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1621)
			this->__transformDirty = true;
			HX_STACK_LINE(1621)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1626)
	return this->__scrollRect = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",1631,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1633)
	if (((this->__transform == null()))){
		HX_STACK_LINE(1635)
		::openfl::geom::Transform _g = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1635)
		this->__transform = _g;
	}
	HX_STACK_LINE(1639)
	return this->__transform;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",1644,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1646)
	if (((value == null()))){
		HX_STACK_LINE(1648)
		HX_STACK_DO_THROW(::openfl::errors::TypeError_obj::__new(HX_CSTRING("Parameter transform must be non-null.")));
	}
	HX_STACK_LINE(1652)
	if (((this->__transform == null()))){
		HX_STACK_LINE(1654)
		::openfl::geom::Transform _g = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1654)
		this->__transform = _g;
	}
	HX_STACK_LINE(1658)
	if ((!(this->__transformDirty))){
		HX_STACK_LINE(1658)
		this->__transformDirty = true;
		HX_STACK_LINE(1658)
		(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
	}
	HX_STACK_LINE(1659)
	::openfl::geom::Matrix _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1659)
	{
		HX_STACK_LINE(1659)
		::openfl::geom::Matrix _this = value->get_matrix();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1659)
		_g1 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
	}
	HX_STACK_LINE(1659)
	this->__transform->set_matrix(_g1);
	HX_STACK_LINE(1660)
	::openfl::geom::ColorTransform _g2 = value->get_colorTransform()->__clone();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1660)
	this->__transform->set_colorTransform(_g2);
	HX_STACK_LINE(1662)
	return this->__transform;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",1669,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1669)
	return this->__visible;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",1674,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1676)
	if (((value != this->__visible))){
		HX_STACK_LINE(1676)
		if ((!(this->__renderDirty))){
			HX_STACK_LINE(1676)
			this->__renderDirty = true;
			HX_STACK_LINE(1676)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1677)
	return this->__visible = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",1682,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1684)
	::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1685)
	{
		HX_STACK_LINE(1685)
		this->__getTransform();
		HX_STACK_LINE(1685)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1685)
		this->__getBounds(bounds,_g);
	}
	HX_STACK_LINE(1687)
	Float _g1 = this->get_scaleX();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1687)
	return (bounds->width * _g1);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",1692,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1694)
	::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1695)
	{
		HX_STACK_LINE(1695)
		this->__getTransform();
		HX_STACK_LINE(1695)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1695)
		this->__getBounds(bounds,_g);
	}
	HX_STACK_LINE(1697)
	if (((value != bounds->width))){
		HX_STACK_LINE(1699)
		this->set_scaleX((Float(value) / Float(bounds->width)));
	}
	else{
		HX_STACK_LINE(1703)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(1707)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",1714,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1714)
	return this->__x;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",1719,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1721)
	if (((value != this->__x))){
		HX_STACK_LINE(1721)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1721)
			this->__transformDirty = true;
			HX_STACK_LINE(1721)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1722)
	return this->__x = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",1729,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1729)
	return this->__y;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",1734,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1736)
	if (((value != this->__y))){
		HX_STACK_LINE(1736)
		if ((!(this->__transformDirty))){
			HX_STACK_LINE(1736)
			this->__transformDirty = true;
			HX_STACK_LINE(1736)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1737)
	return this->__y = value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_MARK_MEMBER_NAME(__maskCached,"__maskCached");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCache,"__rotationCache");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(__scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_VISIT_MEMBER_NAME(__maskCached,"__maskCached");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCache,"__rotationCache");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(__scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return __scaleX; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return __scaleY; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"transform") ) { return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { return __maskCached; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderMask") ) { return __renderMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { return __maskGraphics; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__getTransform") ) { return __getTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { return __instanceCount; }
		if (HX_FIELD_EQ(inName,"__rotationCache") ) { return __rotationCache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { return __worldRenderDirty; }
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { return __worldTransformDirty; }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { __scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { __scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { __maskCached=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { __maskGraphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCache") ) { __rotationCache=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("cacheAsBitmap"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("loaderInfo"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("opaqueBackground"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scale9Grid"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("stage"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("__worldTransform"));
	outFields->push(HX_CSTRING("__worldColorTransform"));
	outFields->push(HX_CSTRING("__alpha"));
	outFields->push(HX_CSTRING("__filters"));
	outFields->push(HX_CSTRING("__graphics"));
	outFields->push(HX_CSTRING("__interactive"));
	outFields->push(HX_CSTRING("__isMask"));
	outFields->push(HX_CSTRING("__mask"));
	outFields->push(HX_CSTRING("__maskGraphics"));
	outFields->push(HX_CSTRING("__maskCached"));
	outFields->push(HX_CSTRING("__name"));
	outFields->push(HX_CSTRING("__renderable"));
	outFields->push(HX_CSTRING("__renderDirty"));
	outFields->push(HX_CSTRING("__rotation"));
	outFields->push(HX_CSTRING("__rotationCache"));
	outFields->push(HX_CSTRING("__rotationCosine"));
	outFields->push(HX_CSTRING("__rotationSine"));
	outFields->push(HX_CSTRING("__scaleX"));
	outFields->push(HX_CSTRING("__scaleY"));
	outFields->push(HX_CSTRING("__scrollRect"));
	outFields->push(HX_CSTRING("__transform"));
	outFields->push(HX_CSTRING("__transformDirty"));
	outFields->push(HX_CSTRING("__visible"));
	outFields->push(HX_CSTRING("__worldAlpha"));
	outFields->push(HX_CSTRING("__worldAlphaChanged"));
	outFields->push(HX_CSTRING("__worldClip"));
	outFields->push(HX_CSTRING("__worldClipChanged"));
	outFields->push(HX_CSTRING("__worldTransformCache"));
	outFields->push(HX_CSTRING("__worldTransformChanged"));
	outFields->push(HX_CSTRING("__worldVisible"));
	outFields->push(HX_CSTRING("__worldVisibleChanged"));
	outFields->push(HX_CSTRING("__worldZ"));
	outFields->push(HX_CSTRING("__x"));
	outFields->push(HX_CSTRING("__y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__instanceCount"),
	HX_CSTRING("__worldRenderDirty"),
	HX_CSTRING("__worldTransformDirty"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(DisplayObject_obj,blendMode),HX_CSTRING("blendMode")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,cacheAsBitmap),HX_CSTRING("cacheAsBitmap")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_CSTRING("loaderInfo")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_CSTRING("mouseX")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_CSTRING("mouseY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_CSTRING("opaqueBackground")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_CSTRING("root")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_CSTRING("scale9Grid")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_CSTRING("stage")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_CSTRING("__worldTransform")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_CSTRING("__worldColorTransform")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_CSTRING("__alpha")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_CSTRING("__filters")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_CSTRING("__graphics")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_CSTRING("__interactive")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_CSTRING("__isMask")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_CSTRING("__mask")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__maskGraphics),HX_CSTRING("__maskGraphics")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__maskCached),HX_CSTRING("__maskCached")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_CSTRING("__name")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_CSTRING("__renderable")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_CSTRING("__renderDirty")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_CSTRING("__rotation")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCache),HX_CSTRING("__rotationCache")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_CSTRING("__rotationCosine")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_CSTRING("__rotationSine")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleX),HX_CSTRING("__scaleX")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__scaleY),HX_CSTRING("__scaleY")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_CSTRING("__scrollRect")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_CSTRING("__transform")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_CSTRING("__transformDirty")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_CSTRING("__visible")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_CSTRING("__worldAlpha")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_CSTRING("__worldAlphaChanged")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_CSTRING("__worldClip")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_CSTRING("__worldClipChanged")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_CSTRING("__worldTransformCache")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_CSTRING("__worldTransformChanged")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_CSTRING("__worldVisible")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_CSTRING("__worldVisibleChanged")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_CSTRING("__worldZ")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__x),HX_CSTRING("__x")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__y),HX_CSTRING("__y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blendMode"),
	HX_CSTRING("cacheAsBitmap"),
	HX_CSTRING("loaderInfo"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("opaqueBackground"),
	HX_CSTRING("parent"),
	HX_CSTRING("root"),
	HX_CSTRING("scale9Grid"),
	HX_CSTRING("stage"),
	HX_CSTRING("__worldTransform"),
	HX_CSTRING("__worldColorTransform"),
	HX_CSTRING("__alpha"),
	HX_CSTRING("__filters"),
	HX_CSTRING("__graphics"),
	HX_CSTRING("__interactive"),
	HX_CSTRING("__isMask"),
	HX_CSTRING("__mask"),
	HX_CSTRING("__maskGraphics"),
	HX_CSTRING("__maskCached"),
	HX_CSTRING("__name"),
	HX_CSTRING("__renderable"),
	HX_CSTRING("__renderDirty"),
	HX_CSTRING("__rotation"),
	HX_CSTRING("__rotationCache"),
	HX_CSTRING("__rotationCosine"),
	HX_CSTRING("__rotationSine"),
	HX_CSTRING("__scaleX"),
	HX_CSTRING("__scaleY"),
	HX_CSTRING("__scrollRect"),
	HX_CSTRING("__transform"),
	HX_CSTRING("__transformDirty"),
	HX_CSTRING("__visible"),
	HX_CSTRING("__worldAlpha"),
	HX_CSTRING("__worldAlphaChanged"),
	HX_CSTRING("__worldClip"),
	HX_CSTRING("__worldClipChanged"),
	HX_CSTRING("__worldTransformCache"),
	HX_CSTRING("__worldTransformChanged"),
	HX_CSTRING("__worldVisible"),
	HX_CSTRING("__worldVisibleChanged"),
	HX_CSTRING("__worldZ"),
	HX_CSTRING("__x"),
	HX_CSTRING("__y"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("getRect"),
	HX_CSTRING("globalToLocal"),
	HX_CSTRING("hitTestObject"),
	HX_CSTRING("hitTestPoint"),
	HX_CSTRING("localToGlobal"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__getInteractive"),
	HX_CSTRING("__getLocalBounds"),
	HX_CSTRING("__getTransform"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__renderMask"),
	HX_CSTRING("__setStageReference"),
	HX_CSTRING("__setRenderDirty"),
	HX_CSTRING("__setTransformDirty"),
	HX_CSTRING("__update"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("__updateMask"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_filters"),
	HX_CSTRING("set_filters"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_mask"),
	HX_CSTRING("set_mask"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_name"),
	HX_CSTRING("set_name"),
	HX_CSTRING("get_root"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_scaleX"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("get_scaleY"),
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("get_scrollRect"),
	HX_CSTRING("set_scrollRect"),
	HX_CSTRING("get_transform"),
	HX_CSTRING("set_transform"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
};

#endif

Class DisplayObject_obj::__mClass;

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DisplayObject"), hx::TCanCast< DisplayObject_obj> ,sStaticFields,sMemberFields,
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

void DisplayObject_obj::__boot()
{
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
}

} // end namespace openfl
} // end namespace display
