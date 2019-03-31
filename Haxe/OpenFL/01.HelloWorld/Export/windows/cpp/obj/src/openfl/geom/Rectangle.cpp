#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
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
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("openfl.geom.Rectangle","new",0xe1148d6d,"openfl.geom.Rectangle.new","openfl/geom/Rectangle.hx",158,0xf2fb2b03)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(160)
	this->x = x;
	HX_STACK_LINE(161)
	this->y = y;
	HX_STACK_LINE(162)
	this->width = width;
	HX_STACK_LINE(163)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","clone",0x6896edaa,"openfl.geom.Rectangle.clone","openfl/geom/Rectangle.hx",179,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return ::openfl::geom::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	HX_STACK_FRAME("openfl.geom.Rectangle","contains",0x39912df2,"openfl.geom.Rectangle.contains","openfl/geom/Rectangle.hx",195,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::openfl::geom::Rectangle_obj > __this,Float &x){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Rectangle.hx",195,0xf2fb2b03)
			{
				HX_STACK_LINE(195)
				Float _g = __this->get_right();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(195)
				return (x < _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(195)
	if (((  (((bool((x >= this->x)) && bool((y >= this->y))))) ? bool(_Function_1_1::Block(this,x)) : bool(false) ))){
		HX_STACK_LINE(195)
		Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(195)
		return (y < _g1);
	}
	else{
		HX_STACK_LINE(195)
		return false;
	}
	HX_STACK_LINE(195)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.geom.Rectangle","containsPoint",0xa42628fe,"openfl.geom.Rectangle.containsPoint","openfl/geom/Rectangle.hx",213,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(213)
	return this->contains(point->x,point->y);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.geom.Rectangle","containsRect",0x6ba48836,"openfl.geom.Rectangle.containsRect","openfl/geom/Rectangle.hx",231,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(231)
	if (((bool((rect->width <= (int)0)) || bool((rect->height <= (int)0))))){
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::geom::Rectangle_obj > __this,::openfl::geom::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Rectangle.hx",233,0xf2fb2b03)
				{
					HX_STACK_LINE(233)
					Float _g = rect->get_right();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(233)
					Float _g1 = __this->get_right();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(233)
					return (_g < _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(233)
		if (((  (((bool((rect->x > this->x)) && bool((rect->y > this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(233)
			Float _g2 = rect->get_bottom();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(233)
			Float _g3 = this->get_bottom();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(233)
			return (_g2 < _g3);
		}
		else{
			HX_STACK_LINE(233)
			return false;
		}
	}
	else{
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::geom::Rectangle_obj > __this,::openfl::geom::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Rectangle.hx",237,0xf2fb2b03)
				{
					HX_STACK_LINE(237)
					Float _g4 = rect->get_right();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(237)
					Float _g5 = __this->get_right();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(237)
					return (_g4 <= _g5);
				}
				return null();
			}
		};
		HX_STACK_LINE(237)
		if (((  (((bool((rect->x >= this->x)) && bool((rect->y >= this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(237)
			Float _g6 = rect->get_bottom();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(237)
			Float _g7 = this->get_bottom();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(237)
			return (_g6 <= _g7);
		}
		else{
			HX_STACK_LINE(237)
			return false;
		}
	}
	HX_STACK_LINE(231)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::openfl::geom::Rectangle sourceRect){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","copyFrom",0xd576df92,"openfl.geom.Rectangle.copyFrom","openfl/geom/Rectangle.hx",244,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_LINE(246)
		this->x = sourceRect->x;
		HX_STACK_LINE(247)
		this->y = sourceRect->y;
		HX_STACK_LINE(248)
		this->width = sourceRect->width;
		HX_STACK_LINE(249)
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::geom::Rectangle toCompare){
	HX_STACK_FRAME("openfl.geom.Rectangle","equals",0xcd1e1752,"openfl.geom.Rectangle.equals","openfl/geom/Rectangle.hx",269,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(269)
	return (bool((bool((bool((bool((toCompare != null())) && bool((this->x == toCompare->x)))) && bool((this->y == toCompare->y)))) && bool((this->width == toCompare->width)))) && bool((this->height == toCompare->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","inflate",0x84b46414,"openfl.geom.Rectangle.inflate","openfl/geom/Rectangle.hx",287,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(289)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(289)
		hx::AddEq(this->width,(dx * (int)2));
		HX_STACK_LINE(290)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(290)
		hx::AddEq(this->height,(dy * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","inflatePoint",0xf7c1779c,"openfl.geom.Rectangle.inflatePoint","openfl/geom/Rectangle.hx",309,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(309)
		this->inflate(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::openfl::geom::Rectangle Rectangle_obj::intersection( ::openfl::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl.geom.Rectangle","intersection",0x4de95b9c,"openfl.geom.Rectangle.intersection","openfl/geom/Rectangle.hx",329,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(331)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(331)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(331)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(331)
		x0 = this->x;
	}
	HX_STACK_LINE(332)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(332)
	Float _g1 = toIntersect->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(332)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(332)
	if (((_g > _g1))){
		HX_STACK_LINE(332)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(332)
		x1 = this->get_right();
	}
	HX_STACK_LINE(334)
	if (((x1 <= x0))){
		HX_STACK_LINE(336)
		return ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(340)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(340)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(340)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(340)
		y0 = this->y;
	}
	HX_STACK_LINE(341)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(341)
	Float _g3 = toIntersect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(341)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(341)
	if (((_g2 > _g3))){
		HX_STACK_LINE(341)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(341)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(343)
	if (((y1 <= y0))){
		HX_STACK_LINE(345)
		return ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(349)
	return ::openfl::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl.geom.Rectangle","intersects",0xc0fc7147,"openfl.geom.Rectangle.intersects","openfl/geom/Rectangle.hx",366,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(368)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(368)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(368)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(368)
		x0 = this->x;
	}
	HX_STACK_LINE(369)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(369)
	Float _g1 = toIntersect->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(369)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(369)
	if (((_g > _g1))){
		HX_STACK_LINE(369)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(369)
		x1 = this->get_right();
	}
	HX_STACK_LINE(371)
	if (((x1 <= x0))){
		HX_STACK_LINE(373)
		return false;
	}
	HX_STACK_LINE(377)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(377)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(377)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(377)
		y0 = this->y;
	}
	HX_STACK_LINE(378)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(378)
	Float _g3 = toIntersect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(378)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(378)
	if (((_g2 > _g3))){
		HX_STACK_LINE(378)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(378)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(380)
	return (y1 > y0);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","isEmpty",0x84f8a5d0,"openfl.geom.Rectangle.isEmpty","openfl/geom/Rectangle.hx",393,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	return (bool((this->width <= (int)0)) || bool((this->height <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","offset",0x6d6ac0a6,"openfl.geom.Rectangle.offset","openfl/geom/Rectangle.hx",405,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(407)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(408)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::openfl::geom::Point point){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","offsetPoint",0xf09849ca,"openfl.geom.Rectangle.offsetPoint","openfl/geom/Rectangle.hx",420,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(422)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(423)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","setEmpty",0x8b24775e,"openfl.geom.Rectangle.setEmpty","openfl/geom/Rectangle.hx",436,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		Float _g = this->height = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(438)
		Float _g1 = this->width = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(438)
		Float _g2 = this->y = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(438)
		this->x = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","setTo",0x9a636c0a,"openfl.geom.Rectangle.setTo","openfl/geom/Rectangle.hx",443,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(widtha,"widtha")
		HX_STACK_ARG(heighta,"heighta")
		HX_STACK_LINE(445)
		this->x = xa;
		HX_STACK_LINE(446)
		this->y = ya;
		HX_STACK_LINE(447)
		this->width = widtha;
		HX_STACK_LINE(448)
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::openfl::geom::Rectangle Rectangle_obj::transform( ::openfl::geom::Matrix m){
	HX_STACK_FRAME("openfl.geom.Rectangle","transform",0xab96b239,"openfl.geom.Rectangle.transform","openfl/geom/Rectangle.hx",453,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(455)
	Float tx0 = ((m->a * this->x) + (m->c * this->y));		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(456)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(457)
	Float ty0 = ((m->b * this->x) + (m->d * this->y));		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(458)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(460)
	Float tx = ((m->a * ((this->x + this->width))) + (m->c * this->y));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(461)
	Float ty = ((m->b * ((this->x + this->width))) + (m->d * this->y));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(463)
	if (((tx < tx0))){
		HX_STACK_LINE(463)
		tx0 = tx;
	}
	HX_STACK_LINE(464)
	if (((ty < ty0))){
		HX_STACK_LINE(464)
		ty0 = ty;
	}
	HX_STACK_LINE(465)
	if (((tx > tx1))){
		HX_STACK_LINE(465)
		tx1 = tx;
	}
	HX_STACK_LINE(466)
	if (((ty > ty1))){
		HX_STACK_LINE(466)
		ty1 = ty;
	}
	HX_STACK_LINE(468)
	tx = ((m->a * ((this->x + this->width))) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(469)
	ty = ((m->b * ((this->x + this->width))) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(471)
	if (((tx < tx0))){
		HX_STACK_LINE(471)
		tx0 = tx;
	}
	HX_STACK_LINE(472)
	if (((ty < ty0))){
		HX_STACK_LINE(472)
		ty0 = ty;
	}
	HX_STACK_LINE(473)
	if (((tx > tx1))){
		HX_STACK_LINE(473)
		tx1 = tx;
	}
	HX_STACK_LINE(474)
	if (((ty > ty1))){
		HX_STACK_LINE(474)
		ty1 = ty;
	}
	HX_STACK_LINE(476)
	tx = ((m->a * this->x) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(477)
	ty = ((m->b * this->x) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(479)
	if (((tx < tx0))){
		HX_STACK_LINE(479)
		tx0 = tx;
	}
	HX_STACK_LINE(480)
	if (((ty < ty0))){
		HX_STACK_LINE(480)
		ty0 = ty;
	}
	HX_STACK_LINE(481)
	if (((tx > tx1))){
		HX_STACK_LINE(481)
		tx1 = tx;
	}
	HX_STACK_LINE(482)
	if (((ty > ty1))){
		HX_STACK_LINE(482)
		ty1 = ty;
	}
	HX_STACK_LINE(484)
	return ::openfl::geom::Rectangle_obj::__new((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

::openfl::geom::Rectangle Rectangle_obj::_union( ::openfl::geom::Rectangle toUnion){
	HX_STACK_FRAME("openfl.geom.Rectangle","union",0xc71b3f5c,"openfl.geom.Rectangle.union","openfl/geom/Rectangle.hx",500,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(502)
	if (((bool((this->width == (int)0)) || bool((this->height == (int)0))))){
		HX_STACK_LINE(504)
		return toUnion->clone();
	}
	else{
		HX_STACK_LINE(506)
		if (((bool((toUnion->width == (int)0)) || bool((toUnion->height == (int)0))))){
			HX_STACK_LINE(508)
			return this->clone();
		}
	}
	HX_STACK_LINE(512)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(512)
	if (((this->x > toUnion->x))){
		HX_STACK_LINE(512)
		x0 = toUnion->x;
	}
	else{
		HX_STACK_LINE(512)
		x0 = this->x;
	}
	HX_STACK_LINE(513)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(513)
	Float _g1 = toUnion->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(513)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(513)
	if (((_g < _g1))){
		HX_STACK_LINE(513)
		x1 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(513)
		x1 = this->get_right();
	}
	HX_STACK_LINE(514)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(514)
	if (((this->y > toUnion->y))){
		HX_STACK_LINE(514)
		y0 = toUnion->y;
	}
	else{
		HX_STACK_LINE(514)
		y0 = this->y;
	}
	HX_STACK_LINE(515)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(515)
	Float _g3 = toUnion->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(515)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(515)
	if (((_g2 < _g3))){
		HX_STACK_LINE(515)
		y1 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(515)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(517)
	return ::openfl::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Void Rectangle_obj::__contract( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","__contract",0xb7fb00c5,"openfl.geom.Rectangle.__contract","openfl/geom/Rectangle.hx",522,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(524)
		if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
			HX_STACK_LINE(526)
			return null();
		}
		HX_STACK_LINE(530)
		Float cacheRight = this->get_right();		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(531)
		Float cacheBottom = this->get_bottom();		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(533)
		if (((this->x < x))){
			HX_STACK_LINE(533)
			this->x = x;
		}
		HX_STACK_LINE(534)
		if (((this->y < y))){
			HX_STACK_LINE(534)
			this->y = y;
		}
		HX_STACK_LINE(535)
		Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(535)
		if (((_g > (x + width)))){
			HX_STACK_LINE(535)
			this->width = ((x + width) - this->x);
		}
		HX_STACK_LINE(536)
		Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(536)
		if (((_g1 > (y + height)))){
			HX_STACK_LINE(536)
			this->height = ((y + height) - this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__contract,(void))

Void Rectangle_obj::__expand( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.geom.Rectangle","__expand",0x79b82d4d,"openfl.geom.Rectangle.__expand","openfl/geom/Rectangle.hx",541,0xf2fb2b03)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(543)
		if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
			HX_STACK_LINE(545)
			this->x = x;
			HX_STACK_LINE(546)
			this->y = y;
			HX_STACK_LINE(547)
			this->width = width;
			HX_STACK_LINE(548)
			this->height = height;
			HX_STACK_LINE(549)
			return null();
		}
		HX_STACK_LINE(553)
		Float cacheRight = this->get_right();		HX_STACK_VAR(cacheRight,"cacheRight");
		HX_STACK_LINE(554)
		Float cacheBottom = this->get_bottom();		HX_STACK_VAR(cacheBottom,"cacheBottom");
		HX_STACK_LINE(556)
		if (((this->x > x))){
			HX_STACK_LINE(558)
			this->x = x;
			HX_STACK_LINE(559)
			this->width = (cacheRight - x);
		}
		HX_STACK_LINE(561)
		if (((this->y > y))){
			HX_STACK_LINE(563)
			this->y = y;
			HX_STACK_LINE(564)
			this->height = (cacheBottom - y);
		}
		HX_STACK_LINE(566)
		if (((cacheRight < (x + width)))){
			HX_STACK_LINE(566)
			this->width = ((x + width) - this->x);
		}
		HX_STACK_LINE(567)
		if (((cacheBottom < (y + height)))){
			HX_STACK_LINE(567)
			this->height = ((y + height) - this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,__expand,(void))

::lime::math::Rectangle Rectangle_obj::__toLimeRectangle( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","__toLimeRectangle",0x990c368c,"openfl.geom.Rectangle.__toLimeRectangle","openfl/geom/Rectangle.hx",574,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(574)
	return ::lime::math::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,__toLimeRectangle,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_bottom",0x33110547,"openfl.geom.Rectangle.get_bottom","openfl/geom/Rectangle.hx",586,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(586)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float b){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_bottom",0x368ea3bb,"openfl.geom.Rectangle.set_bottom","openfl/geom/Rectangle.hx",587,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(587)
	this->height = (b - this->y);
	HX_STACK_LINE(587)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::openfl::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_bottomRight",0xb804f515,"openfl.geom.Rectangle.get_bottomRight","openfl/geom/Rectangle.hx",588,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	return ::openfl::geom::Point_obj::__new((this->x + this->width),(this->y + this->height));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::openfl::geom::Point Rectangle_obj::set_bottomRight( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_bottomRight",0xb3d07221,"openfl.geom.Rectangle.set_bottomRight","openfl/geom/Rectangle.hx",589,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(589)
	this->width = (p->x - this->x);
	HX_STACK_LINE(589)
	this->height = (p->y - this->y);
	HX_STACK_LINE(589)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_left",0xd4809763,"openfl.geom.Rectangle.get_left","openfl/geom/Rectangle.hx",590,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float l){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_left",0x82ddf0d7,"openfl.geom.Rectangle.set_left","openfl/geom/Rectangle.hx",591,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(591)
	hx::SubEq(this->width,(l - this->x));
	HX_STACK_LINE(591)
	this->x = l;
	HX_STACK_LINE(591)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_right",0x9310ed00,"openfl.geom.Rectangle.get_right","openfl/geom/Rectangle.hx",592,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(592)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float r){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_right",0x7661d90c,"openfl.geom.Rectangle.set_right","openfl/geom/Rectangle.hx",593,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(593)
	this->width = (r - this->x);
	HX_STACK_LINE(593)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::openfl::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_size",0xd924301d,"openfl.geom.Rectangle.get_size","openfl/geom/Rectangle.hx",594,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	return ::openfl::geom::Point_obj::__new(this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::openfl::geom::Point Rectangle_obj::set_size( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_size",0x87818991,"openfl.geom.Rectangle.set_size","openfl/geom/Rectangle.hx",595,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(595)
	this->width = p->x;
	HX_STACK_LINE(595)
	this->height = p->y;
	HX_STACK_LINE(595)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_top",0x9f65f6b9,"openfl.geom.Rectangle.get_top","openfl/geom/Rectangle.hx",596,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float t){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_top",0x926787c5,"openfl.geom.Rectangle.set_top","openfl/geom/Rectangle.hx",597,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(597)
	hx::SubEq(this->height,(t - this->y));
	HX_STACK_LINE(597)
	this->y = t;
	HX_STACK_LINE(597)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::openfl::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("openfl.geom.Rectangle","get_topLeft",0x00437b60,"openfl.geom.Rectangle.get_topLeft","openfl/geom/Rectangle.hx",598,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	return ::openfl::geom::Point_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::openfl::geom::Point Rectangle_obj::set_topLeft( ::openfl::geom::Point p){
	HX_STACK_FRAME("openfl.geom.Rectangle","set_topLeft",0x0ab0826c,"openfl.geom.Rectangle.set_topLeft","openfl/geom/Rectangle.hx",599,0xf2fb2b03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(599)
	this->x = p->x;
	HX_STACK_LINE(599)
	this->y = p->y;
	HX_STACK_LINE(599)
	return p->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return __expand_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return __contract_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__toLimeRectangle") ) { return __toLimeRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("bottomRight"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("topLeft"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	HX_CSTRING("contains"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("containsRect"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("equals"),
	HX_CSTRING("inflate"),
	HX_CSTRING("inflatePoint"),
	HX_CSTRING("intersection"),
	HX_CSTRING("intersects"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("offset"),
	HX_CSTRING("offsetPoint"),
	HX_CSTRING("setEmpty"),
	HX_CSTRING("setTo"),
	HX_CSTRING("transform"),
	HX_CSTRING("union"),
	HX_CSTRING("__contract"),
	HX_CSTRING("__expand"),
	HX_CSTRING("__toLimeRectangle"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_bottomRight"),
	HX_CSTRING("set_bottomRight"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_topLeft"),
	HX_CSTRING("set_topLeft"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
}

} // end namespace openfl
} // end namespace geom
