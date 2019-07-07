#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("openfl.geom.Matrix","new",0xd1b9ff67,"openfl.geom.Matrix.new","openfl/geom/Matrix.hx",128,0xa0d54189)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(130)
	this->a = a;
	HX_STACK_LINE(131)
	this->b = b;
	HX_STACK_LINE(132)
	this->c = c;
	HX_STACK_LINE(133)
	this->d = d;
	HX_STACK_LINE(134)
	this->tx = tx;
	HX_STACK_LINE(135)
	this->ty = ty;
	HX_STACK_LINE(137)
	::lime::utils::Float32Array _g = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add(c).Add(d).Add(tx).Add(ty).Add((int)0).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(137)
	this->__array = _g;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::openfl::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Matrix","clone",0xe2f85224,"openfl.geom.Matrix.clone","openfl/geom/Matrix.hx",150,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return ::openfl::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.geom.Matrix","concat",0x6fd1b86d,"openfl.geom.Matrix.concat","openfl/geom/Matrix.hx",173,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(175)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(176)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(177)
		this->a = a1;
		HX_STACK_LINE(179)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(180)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(181)
		this->c = c1;
		HX_STACK_LINE(183)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(184)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(185)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyColumnFrom",0xa86bc7ce,"openfl.geom.Matrix.copyColumnFrom","openfl/geom/Matrix.hx",194,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(194)
		if (((column > (int)2))){
			HX_STACK_LINE(196)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(198)
			if (((column == (int)0))){
				HX_STACK_LINE(200)
				this->a = vector3D->x;
				HX_STACK_LINE(201)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(203)
				if (((column == (int)1))){
					HX_STACK_LINE(205)
					this->b = vector3D->x;
					HX_STACK_LINE(206)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(210)
					this->tx = vector3D->x;
					HX_STACK_LINE(211)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyColumnTo",0xb6db66df,"openfl.geom.Matrix.copyColumnTo","openfl/geom/Matrix.hx",220,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(220)
		if (((column > (int)2))){
			HX_STACK_LINE(222)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(224)
			if (((column == (int)0))){
				HX_STACK_LINE(226)
				vector3D->x = this->a;
				HX_STACK_LINE(227)
				vector3D->y = this->c;
				HX_STACK_LINE(228)
				vector3D->z = (int)0;
			}
			else{
				HX_STACK_LINE(230)
				if (((column == (int)1))){
					HX_STACK_LINE(232)
					vector3D->x = this->b;
					HX_STACK_LINE(233)
					vector3D->y = this->d;
					HX_STACK_LINE(234)
					vector3D->z = (int)0;
				}
				else{
					HX_STACK_LINE(238)
					vector3D->x = this->tx;
					HX_STACK_LINE(239)
					vector3D->y = this->ty;
					HX_STACK_LINE(240)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyFrom( ::openfl::geom::Matrix sourceMatrix){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyFrom",0xb7b00358,"openfl.geom.Matrix.copyFrom","openfl/geom/Matrix.hx",247,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceMatrix,"sourceMatrix")
		HX_STACK_LINE(249)
		this->a = sourceMatrix->a;
		HX_STACK_LINE(250)
		this->b = sourceMatrix->b;
		HX_STACK_LINE(251)
		this->c = sourceMatrix->c;
		HX_STACK_LINE(252)
		this->d = sourceMatrix->d;
		HX_STACK_LINE(253)
		this->tx = sourceMatrix->tx;
		HX_STACK_LINE(254)
		this->ty = sourceMatrix->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyRowFrom",0xadd25376,"openfl.geom.Matrix.copyRowFrom","openfl/geom/Matrix.hx",261,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(261)
		if (((row > (int)2))){
			HX_STACK_LINE(263)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(265)
			if (((row == (int)0))){
				HX_STACK_LINE(267)
				this->a = vector3D->x;
				HX_STACK_LINE(268)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(270)
				if (((row == (int)1))){
					HX_STACK_LINE(272)
					this->b = vector3D->x;
					HX_STACK_LINE(273)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(277)
					this->tx = vector3D->x;
					HX_STACK_LINE(278)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl.geom.Matrix","copyRowTo",0xe92c3887,"openfl.geom.Matrix.copyRowTo","openfl/geom/Matrix.hx",287,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(287)
		if (((row > (int)2))){
			HX_STACK_LINE(289)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(291)
			if (((row == (int)0))){
				HX_STACK_LINE(293)
				vector3D->x = this->a;
				HX_STACK_LINE(294)
				vector3D->y = this->b;
				HX_STACK_LINE(295)
				vector3D->z = this->tx;
			}
			else{
				HX_STACK_LINE(297)
				if (((row == (int)1))){
					HX_STACK_LINE(299)
					vector3D->x = this->c;
					HX_STACK_LINE(300)
					vector3D->y = this->d;
					HX_STACK_LINE(301)
					vector3D->z = this->ty;
				}
				else{
					HX_STACK_LINE(305)
					vector3D->x = (int)0;
					HX_STACK_LINE(305)
					vector3D->y = (int)0;
					HX_STACK_LINE(305)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix","createBox",0xbfa242b6,"openfl.geom.Matrix.createBox","openfl/geom/Matrix.hx",330,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(337)
		if (((rotation != (int)0))){
			HX_STACK_LINE(339)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(340)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(342)
			this->a = (cos * scaleX);
			HX_STACK_LINE(343)
			this->b = (sin * scaleY);
			HX_STACK_LINE(344)
			this->c = (-(sin) * scaleX);
			HX_STACK_LINE(345)
			this->d = (cos * scaleY);
		}
		else{
			HX_STACK_LINE(349)
			this->a = scaleX;
			HX_STACK_LINE(350)
			this->b = (int)0;
			HX_STACK_LINE(351)
			this->c = (int)0;
			HX_STACK_LINE(352)
			this->d = scaleY;
		}
		HX_STACK_LINE(356)
		this->tx = tx;
		HX_STACK_LINE(357)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl.geom.Matrix","createGradientBox",0xa2dcb9a6,"openfl.geom.Matrix.createGradientBox","openfl/geom/Matrix.hx",395,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(397)
		this->a = (Float(width) / Float(1638.4));
		HX_STACK_LINE(398)
		this->d = (Float(height) / Float(1638.4));
		HX_STACK_LINE(401)
		if (((rotation != (int)0))){
			HX_STACK_LINE(403)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(404)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(406)
			this->b = (sin * this->d);
			HX_STACK_LINE(407)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(408)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(409)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(413)
			this->b = (int)0;
			HX_STACK_LINE(414)
			this->c = (int)0;
		}
		HX_STACK_LINE(418)
		this->tx = (tx + (Float(width) / Float((int)2)));
		HX_STACK_LINE(419)
		this->ty = (ty + (Float(height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::openfl::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.geom.Matrix","deltaTransformPoint",0xeb963a63,"openfl.geom.Matrix.deltaTransformPoint","openfl/geom/Matrix.hx",438,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(438)
	return ::openfl::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( Dynamic matrix){
	HX_STACK_FRAME("openfl.geom.Matrix","equals",0x67f49d98,"openfl.geom.Matrix.equals","openfl/geom/Matrix.hx",445,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(445)
	return (bool((bool((bool((bool((bool((bool((matrix != null())) && bool((this->tx == matrix->__Field(HX_CSTRING("tx"),true))))) && bool((this->ty == matrix->__Field(HX_CSTRING("ty"),true))))) && bool((this->a == matrix->__Field(HX_CSTRING("a"),true))))) && bool((this->b == matrix->__Field(HX_CSTRING("b"),true))))) && bool((this->c == matrix->__Field(HX_CSTRING("c"),true))))) && bool((this->d == matrix->__Field(HX_CSTRING("d"),true))));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix","identity",0xa87e3cd7,"openfl.geom.Matrix.identity","openfl/geom/Matrix.hx",463,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(465)
		this->a = (int)1;
		HX_STACK_LINE(466)
		this->b = (int)0;
		HX_STACK_LINE(467)
		this->c = (int)0;
		HX_STACK_LINE(468)
		this->d = (int)1;
		HX_STACK_LINE(469)
		this->tx = (int)0;
		HX_STACK_LINE(470)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::openfl::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_FRAME("openfl.geom.Matrix","invert",0x47da966f,"openfl.geom.Matrix.invert","openfl/geom/Matrix.hx",481,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(483)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(485)
	if (((norm == (int)0))){
		HX_STACK_LINE(487)
		Float _g = this->d = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(487)
		Float _g1 = this->c = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(487)
		Float _g2 = this->b = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(487)
		this->a = _g2;
		HX_STACK_LINE(488)
		this->tx = -(this->tx);
		HX_STACK_LINE(489)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(493)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(494)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(495)
		this->d = (this->a * norm);
		HX_STACK_LINE(496)
		this->a = a1;
		HX_STACK_LINE(497)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(498)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(500)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(501)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(502)
		this->tx = tx1;
	}
	HX_STACK_LINE(508)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

::openfl::geom::Matrix Matrix_obj::mult( ::openfl::geom::Matrix m){
	HX_STACK_FRAME("openfl.geom.Matrix","mult",0xb0685f09,"openfl.geom.Matrix.mult","openfl/geom/Matrix.hx",513,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(515)
	::openfl::geom::Matrix result = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(517)
	result->a = ((this->a * m->a) + (this->b * m->c));
	HX_STACK_LINE(518)
	result->b = ((this->a * m->b) + (this->b * m->d));
	HX_STACK_LINE(519)
	result->c = ((this->c * m->a) + (this->d * m->c));
	HX_STACK_LINE(520)
	result->d = ((this->c * m->b) + (this->d * m->d));
	HX_STACK_LINE(522)
	result->tx = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
	HX_STACK_LINE(523)
	result->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
	HX_STACK_LINE(525)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

Void Matrix_obj::rotate( Float theta){
{
		HX_STACK_FRAME("openfl.geom.Matrix","rotate",0x7321f5b4,"openfl.geom.Matrix.rotate","openfl/geom/Matrix.hx",540,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(theta,"theta")
		HX_STACK_LINE(556)
		Float cos = ::Math_obj::cos(theta);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(557)
		Float sin = ::Math_obj::sin(theta);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(559)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(560)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(561)
		this->a = a1;
		HX_STACK_LINE(563)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(564)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(565)
		this->c = c1;
		HX_STACK_LINE(567)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(568)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(569)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float sx,Float sy){
{
		HX_STACK_FRAME("openfl.geom.Matrix","scale",0x13640d51,"openfl.geom.Matrix.scale","openfl/geom/Matrix.hx",589,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sx,"sx")
		HX_STACK_ARG(sy,"sy")
		HX_STACK_LINE(600)
		hx::MultEq(this->a,sx);
		HX_STACK_LINE(601)
		hx::MultEq(this->b,sy);
		HX_STACK_LINE(602)
		hx::MultEq(this->c,sx);
		HX_STACK_LINE(603)
		hx::MultEq(this->d,sy);
		HX_STACK_LINE(604)
		hx::MultEq(this->tx,sx);
		HX_STACK_LINE(605)
		hx::MultEq(this->ty,sy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float theta,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("openfl.geom.Matrix","setRotation",0xf72e1507,"openfl.geom.Matrix.setRotation","openfl/geom/Matrix.hx",612,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(theta,"theta")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(614)
		Float _g = ::Math_obj::cos(theta);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(614)
		Float _g1 = (_g * scale);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(614)
		this->a = _g1;
		HX_STACK_LINE(615)
		Float _g2 = ::Math_obj::sin(theta);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(615)
		Float _g3 = (_g2 * scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(615)
		this->c = _g3;
		HX_STACK_LINE(616)
		this->b = -(this->c);
		HX_STACK_LINE(617)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("openfl.geom.Matrix","setTo",0x14c4d084,"openfl.geom.Matrix.setTo","openfl/geom/Matrix.hx",624,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(626)
		this->a = a;
		HX_STACK_LINE(627)
		this->b = b;
		HX_STACK_LINE(628)
		this->c = c;
		HX_STACK_LINE(629)
		this->d = d;
		HX_STACK_LINE(630)
		this->tx = tx;
		HX_STACK_LINE(631)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::to3DString( hx::Null< bool >  __o_roundPixels){
bool roundPixels = __o_roundPixels.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix","to3DString",0xe99e8cb6,"openfl.geom.Matrix.to3DString","openfl/geom/Matrix.hx",646,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(roundPixels,"roundPixels")
{
		HX_STACK_LINE(646)
		if ((roundPixels)){
			HX_STACK_LINE(648)
			int _g = ::Std_obj::_int(this->tx);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(648)
			::String _g1 = (((((((((((HX_CSTRING("matrix3d(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, 0, 0, 1, 0, ")) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(648)
			::String _g2 = (_g1 + HX_CSTRING(", "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(648)
			int _g3 = ::Std_obj::_int(this->ty);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(648)
			::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(648)
			return (_g4 + HX_CSTRING(", 0, 1)"));
		}
		else{
			HX_STACK_LINE(652)
			return ((((((((((((((HX_CSTRING("matrix3d(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + HX_CSTRING("0, 0, 0, 0, 1, 0, ")) + this->tx) + HX_CSTRING(", ")) + this->ty) + HX_CSTRING(", 0, 1)"));
		}
		HX_STACK_LINE(646)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,to3DString,return )

::String Matrix_obj::toMozString( ){
	HX_STACK_FRAME("openfl.geom.Matrix","toMozString",0xd9d4e6d5,"openfl.geom.Matrix.toMozString","openfl/geom/Matrix.hx",661,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(661)
	return ((((((((((((HX_CSTRING("matrix(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + this->tx) + HX_CSTRING("px, ")) + this->ty) + HX_CSTRING("px)"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toMozString,return )

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Matrix","toString",0x27bdc845,"openfl.geom.Matrix.toString","openfl/geom/Matrix.hx",675,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_LINE(675)
	return ((((((((((((HX_CSTRING("matrix(") + this->a) + HX_CSTRING(", ")) + this->b) + HX_CSTRING(", ")) + this->c) + HX_CSTRING(", ")) + this->d) + HX_CSTRING(", ")) + this->tx) + HX_CSTRING(", ")) + this->ty) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

::openfl::geom::Point Matrix_obj::transformPoint( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.geom.Matrix","transformPoint",0xaac7ff9d,"openfl.geom.Matrix.transformPoint","openfl/geom/Matrix.hx",690,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(690)
	return ::openfl::geom::Point_obj::__new((((pos->x * this->a) + (pos->y * this->c)) + this->tx),(((pos->x * this->b) + (pos->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl.geom.Matrix","translate",0xbf498595,"openfl.geom.Matrix.translate","openfl/geom/Matrix.hx",703,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(705)
		::openfl::geom::Matrix m = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(706)
		m->tx = dx;
		HX_STACK_LINE(707)
		m->ty = dy;
		HX_STACK_LINE(708)
		this->concat(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::lime::utils::Float32Array Matrix_obj::toArray( hx::Null< bool >  __o_transpose){
bool transpose = __o_transpose.Default(false);
	HX_STACK_FRAME("openfl.geom.Matrix","toArray",0x4b8b78a5,"openfl.geom.Matrix.toArray","openfl/geom/Matrix.hx",713,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(transpose,"transpose")
{
		HX_STACK_LINE(715)
		if ((transpose)){
			HX_STACK_LINE(717)
			hx::__ArrayImplRef(this->__array,(int)0) = this->a;
			HX_STACK_LINE(718)
			hx::__ArrayImplRef(this->__array,(int)1) = this->c;
			HX_STACK_LINE(719)
			hx::__ArrayImplRef(this->__array,(int)2) = (int)0;
			HX_STACK_LINE(720)
			hx::__ArrayImplRef(this->__array,(int)3) = this->b;
			HX_STACK_LINE(721)
			hx::__ArrayImplRef(this->__array,(int)4) = this->d;
			HX_STACK_LINE(722)
			hx::__ArrayImplRef(this->__array,(int)5) = (int)0;
			HX_STACK_LINE(723)
			hx::__ArrayImplRef(this->__array,(int)6) = this->tx;
			HX_STACK_LINE(724)
			hx::__ArrayImplRef(this->__array,(int)7) = this->ty;
			HX_STACK_LINE(725)
			hx::__ArrayImplRef(this->__array,(int)8) = (int)1;
		}
		else{
			HX_STACK_LINE(729)
			hx::__ArrayImplRef(this->__array,(int)0) = this->a;
			HX_STACK_LINE(730)
			hx::__ArrayImplRef(this->__array,(int)1) = this->b;
			HX_STACK_LINE(731)
			hx::__ArrayImplRef(this->__array,(int)2) = this->tx;
			HX_STACK_LINE(732)
			hx::__ArrayImplRef(this->__array,(int)3) = this->c;
			HX_STACK_LINE(733)
			hx::__ArrayImplRef(this->__array,(int)4) = this->d;
			HX_STACK_LINE(734)
			hx::__ArrayImplRef(this->__array,(int)5) = this->ty;
			HX_STACK_LINE(735)
			hx::__ArrayImplRef(this->__array,(int)6) = (int)0;
			HX_STACK_LINE(736)
			hx::__ArrayImplRef(this->__array,(int)7) = (int)0;
			HX_STACK_LINE(737)
			hx::__ArrayImplRef(this->__array,(int)8) = (int)1;
		}
		HX_STACK_LINE(741)
		return this->__array;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,toArray,return )

Void Matrix_obj::__cleanValues( ){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__cleanValues",0xae7254f2,"openfl.geom.Matrix.__cleanValues","openfl/geom/Matrix.hx",746,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_LINE(748)
		int _g = ::Math_obj::round((this->a * (int)1000));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(748)
		Float _g1 = (Float(_g) / Float((int)1000));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(748)
		this->a = _g1;
		HX_STACK_LINE(749)
		int _g2 = ::Math_obj::round((this->b * (int)1000));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(749)
		Float _g3 = (Float(_g2) / Float((int)1000));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(749)
		this->b = _g3;
		HX_STACK_LINE(750)
		int _g4 = ::Math_obj::round((this->c * (int)1000));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(750)
		Float _g5 = (Float(_g4) / Float((int)1000));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(750)
		this->c = _g5;
		HX_STACK_LINE(751)
		int _g6 = ::Math_obj::round((this->d * (int)1000));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(751)
		Float _g7 = (Float(_g6) / Float((int)1000));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(751)
		this->d = _g7;
		HX_STACK_LINE(752)
		int _g8 = ::Math_obj::round((this->tx * (int)10));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(752)
		Float _g9 = (Float(_g8) / Float((int)10));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(752)
		this->tx = _g9;
		HX_STACK_LINE(753)
		int _g10 = ::Math_obj::round((this->ty * (int)10));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(753)
		Float _g11 = (Float(_g10) / Float((int)10));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(753)
		this->ty = _g11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,__cleanValues,(void))

Float Matrix_obj::__transformX( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformX",0x93ad44a5,"openfl.geom.Matrix.__transformX","openfl/geom/Matrix.hx",760,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(760)
	return (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformX,return )

Float Matrix_obj::__transformY( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.geom.Matrix","__transformY",0x93ad44a6,"openfl.geom.Matrix.__transformY","openfl/geom/Matrix.hx",767,0xa0d54189)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(767)
	return (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__transformY,return )

Void Matrix_obj::__translateTransformed( ::openfl::geom::Point pos){
{
		HX_STACK_FRAME("openfl.geom.Matrix","__translateTransformed",0x123e9496,"openfl.geom.Matrix.__translateTransformed","openfl/geom/Matrix.hx",772,0xa0d54189)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(774)
		this->tx = (((pos->x * this->a) + (pos->y * this->c)) + this->tx);
		HX_STACK_LINE(775)
		this->ty = (((pos->x * this->b) + (pos->y * this->d)) + this->ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,__translateTransformed,(void))

::openfl::geom::Matrix Matrix_obj::__identity;


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(__array,"__array");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(__array,"__array");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return __array; }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { return __identity; }
		if (HX_FIELD_EQ(inName,"to3DString") ) { return to3DString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"toMozString") ) { return toMozString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformX") ) { return __transformX_dyn(); }
		if (HX_FIELD_EQ(inName,"__transformY") ) { return __transformY_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cleanValues") ) { return __cleanValues_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__translateTransformed") ) { return __translateTransformed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { __array=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__identity") ) { __identity=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("__array"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__identity"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_CSTRING("b")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_CSTRING("c")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_CSTRING("d")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_CSTRING("tx")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_CSTRING("ty")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(Matrix_obj,__array),HX_CSTRING("__array")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("c"),
	HX_CSTRING("d"),
	HX_CSTRING("tx"),
	HX_CSTRING("ty"),
	HX_CSTRING("__array"),
	HX_CSTRING("clone"),
	HX_CSTRING("concat"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("createBox"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("deltaTransformPoint"),
	HX_CSTRING("equals"),
	HX_CSTRING("identity"),
	HX_CSTRING("invert"),
	HX_CSTRING("mult"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setTo"),
	HX_CSTRING("to3DString"),
	HX_CSTRING("toMozString"),
	HX_CSTRING("toString"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("translate"),
	HX_CSTRING("toArray"),
	HX_CSTRING("__cleanValues"),
	HX_CSTRING("__transformX"),
	HX_CSTRING("__transformY"),
	HX_CSTRING("__translateTransformed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix_obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix_obj::__identity,"__identity");
};

#endif

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
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

void Matrix_obj::__boot()
{
	__identity= ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace openfl
} // end namespace geom
