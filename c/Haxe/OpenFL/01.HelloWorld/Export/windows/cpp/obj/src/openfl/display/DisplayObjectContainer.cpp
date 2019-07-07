#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",100,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(102)
	super::__construct();
	HX_STACK_LINE(104)
	this->mouseChildren = true;
	HX_STACK_LINE(106)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(106)
	this->__children = _g;
	HX_STACK_LINE(107)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(107)
	this->__removedChildren = _g1;
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",142,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(144)
	if (((child != null()))){
		HX_STACK_LINE(146)
		if (((child->parent != null()))){
			HX_STACK_LINE(148)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(152)
		this->__children->push(child);
		HX_STACK_LINE(153)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(155)
		if (((this->stage != null()))){
			HX_STACK_LINE(157)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(161)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(161)
			child->__transformDirty = true;
			HX_STACK_LINE(161)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(162)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(162)
			child->__renderDirty = true;
			HX_STACK_LINE(162)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(164)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(165)
		event->target = child;
		HX_STACK_LINE(166)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(170)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",204,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(206)
	if (((bool((index > this->__children->length)) || bool((index < (int)0))))){
		HX_STACK_LINE(208)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid index position ") + index));
	}
	HX_STACK_LINE(212)
	if (((child->parent == hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(214)
		this->__children->remove(child);
	}
	else{
		HX_STACK_LINE(218)
		if (((child->parent != null()))){
			HX_STACK_LINE(220)
			child->parent->removeChild(child);
		}
		HX_STACK_LINE(224)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(226)
		if (((this->stage != null()))){
			HX_STACK_LINE(228)
			child->__setStageReference(this->stage);
		}
		HX_STACK_LINE(232)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(232)
			child->__transformDirty = true;
			HX_STACK_LINE(232)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(233)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(233)
			child->__renderDirty = true;
			HX_STACK_LINE(233)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(235)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED,true,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(236)
		event->target = child;
		HX_STACK_LINE(237)
		child->dispatchEvent(event);
	}
	HX_STACK_LINE(241)
	this->__children->insert(index,child);
	HX_STACK_LINE(243)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",271,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(271)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",288,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(292)
	int _g = this->__children->indexOf(child,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(292)
	return (_g > (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",322,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(324)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(326)
		return this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();
	}
	HX_STACK_LINE(330)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",353,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(355)
		while((true)){
			HX_STACK_LINE(355)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(355)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(355)
			++(_g);
			HX_STACK_LINE(357)
			::String _g2 = child->get_name();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(357)
			if (((_g2 == name))){
				HX_STACK_LINE(357)
				return child;
			}
		}
	}
	HX_STACK_LINE(361)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",374,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(376)
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(376)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(378)
			if (((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >() == child))){
				HX_STACK_LINE(378)
				return i;
			}
		}
	}
	HX_STACK_LINE(382)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",406,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(408)
	::openfl::geom::Point _g = this->localToGlobal(point);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(408)
	point = _g;
	HX_STACK_LINE(409)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(410)
	this->__hitTest(point->x,point->y,false,stack,false);
	HX_STACK_LINE(411)
	stack->reverse();
	HX_STACK_LINE(412)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",436,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(438)
	if (((bool((child != null())) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(440)
		if (((this->stage != null()))){
			HX_STACK_LINE(442)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(446)
		child->parent = null();
		HX_STACK_LINE(447)
		this->__children->remove(child);
		HX_STACK_LINE(448)
		this->__removedChildren->push(child);
		HX_STACK_LINE(449)
		if ((!(child->__transformDirty))){
			HX_STACK_LINE(449)
			child->__transformDirty = true;
			HX_STACK_LINE(449)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
		HX_STACK_LINE(450)
		if ((!(child->__renderDirty))){
			HX_STACK_LINE(450)
			child->__renderDirty = true;
			HX_STACK_LINE(450)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
		HX_STACK_LINE(451)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED,true,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(451)
		child->dispatchEvent(_g);
	}
	HX_STACK_LINE(455)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",482,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(484)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(486)
		return this->removeChild(this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >());
	}
	HX_STACK_LINE(490)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",495,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(497)
		if (((endIndex == (int)2147483647))){
			HX_STACK_LINE(499)
			endIndex = (this->__children->length - (int)1);
			HX_STACK_LINE(501)
			if (((endIndex < (int)0))){
				HX_STACK_LINE(503)
				return null();
			}
		}
		HX_STACK_LINE(509)
		if (((beginIndex > (this->__children->length - (int)1)))){
			HX_STACK_LINE(511)
			return null();
		}
		else{
			HX_STACK_LINE(513)
			if (((bool((bool((endIndex < beginIndex)) || bool((beginIndex < (int)0)))) || bool((endIndex > this->__children->length))))){
				HX_STACK_LINE(515)
				HX_STACK_DO_THROW(::openfl::errors::RangeError_obj::__new(HX_CSTRING("The supplied index is out of bounds.")));
			}
		}
		HX_STACK_LINE(519)
		int numRemovals = (endIndex - beginIndex);		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(520)
		while((true)){
			HX_STACK_LINE(520)
			if ((!(((numRemovals >= (int)0))))){
				HX_STACK_LINE(520)
				break;
			}
			HX_STACK_LINE(522)
			this->removeChildAt(beginIndex);
			HX_STACK_LINE(523)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",560,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(560)
		if (((bool((bool((index >= (int)0)) && bool((index <= this->__children->length)))) && bool((child->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(562)
			this->__children->remove(child);
			HX_STACK_LINE(563)
			this->__children->insert(index,child);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",582,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(582)
		if (((bool((child1->parent == hx::ObjectPtr<OBJ_>(this))) && bool((child2->parent == hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(586)
			int index1 = this->__children->indexOf(child1,null());		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(587)
			int index2 = this->__children->indexOf(child2,null());		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(610)
			this->__children[index1] = child2;
			HX_STACK_LINE(611)
			this->__children[index2] = child1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int child1,int child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",627,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(629)
		::openfl::display::DisplayObject swap = this->__children->__get(child1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(630)
		this->__children[child1] = this->__children->__get(child2).StaticCast< ::openfl::display::DisplayObject >();
		HX_STACK_LINE(631)
		this->__children[child2] = swap;
		HX_STACK_LINE(632)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",637,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(639)
	if (((event->target == null()))){
		HX_STACK_LINE(641)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(645)
	if ((notifyChilden)){
		HX_STACK_LINE(647)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(647)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(647)
		while((true)){
			HX_STACK_LINE(647)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(647)
				break;
			}
			HX_STACK_LINE(647)
			::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(647)
			++(_g);
			HX_STACK_LINE(649)
			child->__broadcast(event,true);
			HX_STACK_LINE(651)
			if ((event->__isCancelled)){
				HX_STACK_LINE(653)
				return true;
			}
		}
	}
	HX_STACK_LINE(661)
	return this->super::__broadcast(event,notifyChilden);
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",666,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(668)
		if (((this->__children->length == (int)0))){
			HX_STACK_LINE(668)
			return null();
		}
		HX_STACK_LINE(670)
		::openfl::geom::Matrix matrixCache = null();		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(672)
		if (((matrix != null()))){
			HX_STACK_LINE(674)
			matrixCache = this->__worldTransform;
			HX_STACK_LINE(675)
			this->__worldTransform = matrix;
			HX_STACK_LINE(676)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(680)
		{
			HX_STACK_LINE(680)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(680)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(680)
			while((true)){
				HX_STACK_LINE(680)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(680)
					break;
				}
				HX_STACK_LINE(680)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(680)
				++(_g);
				HX_STACK_LINE(682)
				if ((!(child->__renderable))){
					HX_STACK_LINE(682)
					continue;
				}
				HX_STACK_LINE(683)
				child->__getBounds(rect,null());
			}
		}
		HX_STACK_LINE(687)
		if (((matrix != null()))){
			HX_STACK_LINE(689)
			this->__worldTransform = matrixCache;
			HX_STACK_LINE(690)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",697,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_LINE(699)
	if (((  ((!((!(this->get_visible()))))) ? bool((bool(interactiveOnly) && bool(!(this->mouseEnabled)))) : bool(true) ))){
		HX_STACK_LINE(699)
		return false;
	}
	HX_STACK_LINE(701)
	int i = this->__children->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(703)
	if ((interactiveOnly)){
		HX_STACK_LINE(705)
		if (((bool((stack == null())) || bool(!(this->mouseChildren))))){
			HX_STACK_LINE(707)
			while((true)){
				HX_STACK_LINE(707)
				int _g = --(i);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(707)
				if ((!(((_g >= (int)0))))){
					HX_STACK_LINE(707)
					break;
				}
				HX_STACK_LINE(709)
				if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,null(),true))){
					HX_STACK_LINE(711)
					if (((stack != null()))){
						HX_STACK_LINE(713)
						stack->push(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(717)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(723)
			if (((stack != null()))){
				HX_STACK_LINE(725)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(727)
				while((true)){
					HX_STACK_LINE(727)
					int _g1 = --(i);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(727)
					if ((!(((_g1 >= (int)0))))){
						HX_STACK_LINE(727)
						break;
					}
					HX_STACK_LINE(729)
					if ((this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,interactiveOnly))){
						HX_STACK_LINE(731)
						stack->insert(length,hx::ObjectPtr<OBJ_>(this));
						HX_STACK_LINE(733)
						return true;
					}
				}
			}
		}
	}
	else{
		HX_STACK_LINE(743)
		while((true)){
			HX_STACK_LINE(743)
			int _g2 = --(i);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(743)
			if ((!(((_g2 >= (int)0))))){
				HX_STACK_LINE(743)
				break;
			}
			HX_STACK_LINE(745)
			this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >()->__hitTest(x,y,shapeFlag,stack,false);
		}
	}
	HX_STACK_LINE(752)
	return false;
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",757,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(759)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(759)
			return null();
		}
		HX_STACK_LINE(763)
		this->super::__renderCanvas(renderSession);
		HX_STACK_LINE(765)
		::openfl::geom::Rectangle _g = this->get_scrollRect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(765)
		if (((_g != null()))){
		}
		HX_STACK_LINE(771)
		if (((this->__mask != null()))){
			HX_STACK_LINE(773)
			renderSession->maskManager->__Field(HX_CSTRING("pushMask"),true)(this->__mask);
		}
		HX_STACK_LINE(777)
		{
			HX_STACK_LINE(777)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(777)
			Array< ::Dynamic > _g11 = this->__children;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(777)
			while((true)){
				HX_STACK_LINE(777)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(777)
					break;
				}
				HX_STACK_LINE(777)
				::openfl::display::DisplayObject child = _g11->__get(_g1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(777)
				++(_g1);
				HX_STACK_LINE(779)
				child->__renderCanvas(renderSession);
			}
		}
		HX_STACK_LINE(783)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(785)
		if (((this->__mask != null()))){
			HX_STACK_LINE(787)
			renderSession->maskManager->__Field(HX_CSTRING("popMask"),true)();
		}
		HX_STACK_LINE(791)
		::openfl::geom::Rectangle _g1 = this->get_scrollRect();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(791)
		if (((_g1 != null()))){
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",802,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(808)
		this->super::__renderDOM(renderSession);
		HX_STACK_LINE(810)
		if (((this->__mask != null()))){
			HX_STACK_LINE(812)
			renderSession->maskManager->__Field(HX_CSTRING("pushMask"),true)(this->__mask);
		}
		HX_STACK_LINE(818)
		{
			HX_STACK_LINE(818)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(818)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(818)
			while((true)){
				HX_STACK_LINE(818)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(818)
					break;
				}
				HX_STACK_LINE(818)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(818)
				++(_g);
				HX_STACK_LINE(820)
				child->__renderDOM(renderSession);
			}
		}
		HX_STACK_LINE(824)
		{
			HX_STACK_LINE(824)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(824)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(824)
			while((true)){
				HX_STACK_LINE(824)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(824)
					break;
				}
				HX_STACK_LINE(824)
				::openfl::display::DisplayObject orphan = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(824)
				++(_g);
				HX_STACK_LINE(826)
				if (((orphan->stage == null()))){
					HX_STACK_LINE(828)
					orphan->__renderDOM(renderSession);
				}
			}
		}
		HX_STACK_LINE(834)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(836)
		if (((this->__mask != null()))){
			HX_STACK_LINE(838)
			renderSession->maskManager->__Field(HX_CSTRING("popMask"),true)();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",847,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(849)
		if (((bool(!(this->__renderable)) || bool((this->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(849)
			return null();
		}
		HX_STACK_LINE(851)
		bool masked = (bool((bool((this->__mask != null())) && bool((this->__maskGraphics != null())))) && bool((this->__maskGraphics->__commands->length > (int)0)));		HX_STACK_VAR(masked,"masked");
		HX_STACK_LINE(853)
		if ((masked)){
			HX_STACK_LINE(855)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(856)
			renderSession->maskManager->__Field(HX_CSTRING("pushMask"),true)(hx::ObjectPtr<OBJ_>(this),renderSession);
			HX_STACK_LINE(857)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(861)
		this->super::__renderGL(renderSession);
		HX_STACK_LINE(863)
		{
			HX_STACK_LINE(863)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(863)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(863)
			while((true)){
				HX_STACK_LINE(863)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(863)
					break;
				}
				HX_STACK_LINE(863)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(863)
				++(_g);
				HX_STACK_LINE(865)
				child->__renderGL(renderSession);
			}
		}
		HX_STACK_LINE(869)
		if ((masked)){
			HX_STACK_LINE(870)
			renderSession->spriteBatch->stop();
			HX_STACK_LINE(871)
			renderSession->maskManager->__Field(HX_CSTRING("popMask"),true)(hx::ObjectPtr<OBJ_>(this),renderSession);
			HX_STACK_LINE(872)
			renderSession->spriteBatch->start(null());
		}
		HX_STACK_LINE(875)
		this->__removedChildren = Array_obj< ::Dynamic >::__new();
	}
return null();
}


Void DisplayObjectContainer_obj::__renderMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderMask",0x1e09cb26,"openfl.display.DisplayObjectContainer.__renderMask","openfl/display/DisplayObjectContainer.hx",880,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(882)
		if (((this->__graphics != null()))){
			HX_STACK_LINE(884)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(this->__graphics,renderSession);
		}
		HX_STACK_LINE(888)
		::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(889)
			this->__getTransform();
			HX_STACK_LINE(889)
			::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(889)
			this->__getBounds(bounds,_g);
		}
		HX_STACK_LINE(891)
		renderSession->context->rect((int)0,(int)0,bounds->width,bounds->height);
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",904,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(904)
		if (((this->stage != stage))){
			HX_STACK_LINE(906)
			if (((this->stage != null()))){
				HX_STACK_LINE(908)
				::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::REMOVED_FROM_STAGE,false,false);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(908)
				this->dispatchEvent(_g);
			}
			HX_STACK_LINE(912)
			this->stage = stage;
			HX_STACK_LINE(914)
			if (((stage != null()))){
				HX_STACK_LINE(916)
				::openfl::events::Event _g1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::ADDED_TO_STAGE,false,false);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(916)
				this->dispatchEvent(_g1);
			}
			HX_STACK_LINE(920)
			if (((this->__children != null()))){
				HX_STACK_LINE(922)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(922)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(922)
				while((true)){
					HX_STACK_LINE(922)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(922)
						break;
					}
					HX_STACK_LINE(922)
					::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(922)
					++(_g);
					HX_STACK_LINE(924)
					child->__setStageReference(stage);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",935,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(937)
		this->super::__update(transformOnly,updateChildren,maskGraphics);
		HX_STACK_LINE(940)
		if (((bool(!(this->__renderable)) && bool(!(this->__isMask))))){
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(948)
		if ((updateChildren)){
			HX_STACK_LINE(950)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(950)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(950)
			while((true)){
				HX_STACK_LINE(950)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(950)
					break;
				}
				HX_STACK_LINE(950)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(950)
				++(_g);
				HX_STACK_LINE(952)
				child->__update(transformOnly,true,maskGraphics);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",961,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(963)
		this->super::__updateChildren(transformOnly);
		HX_STACK_LINE(965)
		{
			HX_STACK_LINE(965)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(965)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(965)
			while((true)){
				HX_STACK_LINE(965)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(965)
					break;
				}
				HX_STACK_LINE(965)
				::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(965)
				++(_g);
				HX_STACK_LINE(967)
				child->__update(transformOnly,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",983,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(983)
	return this->__children->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderMask") ) { return __renderMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mouseChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("__children"));
	outFields->push(HX_CSTRING("__removedChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_CSTRING("mouseChildren")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_CSTRING("numChildren")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_CSTRING("tabChildren")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_CSTRING("__children")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_CSTRING("__removedChildren")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mouseChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("__children"),
	HX_CSTRING("__removedChildren"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("contains"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__getBounds"),
	HX_CSTRING("__hitTest"),
	HX_CSTRING("__renderCanvas"),
	HX_CSTRING("__renderDOM"),
	HX_CSTRING("__renderGL"),
	HX_CSTRING("__renderMask"),
	HX_CSTRING("__setStageReference"),
	HX_CSTRING("__update"),
	HX_CSTRING("__updateChildren"),
	HX_CSTRING("get_numChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
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

void DisplayObjectContainer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
