#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PolyK
#include <openfl/_internal/renderer/opengl/utils/PolyK.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void PolyK_obj::__construct()
{
	return null();
}

//PolyK_obj::~PolyK_obj() { }

Dynamic PolyK_obj::__CreateEmpty() { return  new PolyK_obj; }
hx::ObjectPtr< PolyK_obj > PolyK_obj::__new()
{  hx::ObjectPtr< PolyK_obj > result = new PolyK_obj();
	result->__construct();
	return result;}

Dynamic PolyK_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PolyK_obj > result = new PolyK_obj();
	result->__construct();
	return result;}

Array< int > PolyK_obj::triangulate( Array< Float > p){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","triangulate",0x8fb1bcbc,"openfl._internal.renderer.opengl.utils.PolyK.triangulate","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1568,0xd295150c)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(1570)
	bool sign = true;		HX_STACK_VAR(sign,"sign");
	HX_STACK_LINE(1572)
	int n = (int(p->length) >> int((int)1));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(1573)
	if (((n < (int)3))){
		HX_STACK_LINE(1573)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(1575)
	Array< int > tgs = Array_obj< int >::__new();		HX_STACK_VAR(tgs,"tgs");
	HX_STACK_LINE(1576)
	Array< int > avl;		HX_STACK_VAR(avl,"avl");
	HX_STACK_LINE(1576)
	{
		HX_STACK_LINE(1576)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1576)
		{
			HX_STACK_LINE(1576)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1576)
			while((true)){
				HX_STACK_LINE(1576)
				if ((!(((_g1 < n))))){
					HX_STACK_LINE(1576)
					break;
				}
				HX_STACK_LINE(1576)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1576)
				_g->push(i);
			}
		}
		HX_STACK_LINE(1576)
		avl = _g;
	}
	HX_STACK_LINE(1578)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1579)
	int al = n;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(1580)
	bool earFound = false;		HX_STACK_VAR(earFound,"earFound");
	HX_STACK_LINE(1582)
	while((true)){
		HX_STACK_LINE(1582)
		if ((!(((al > (int)3))))){
			HX_STACK_LINE(1582)
			break;
		}
		HX_STACK_LINE(1584)
		int i0 = avl->__get(hx::Mod(i,al));		HX_STACK_VAR(i0,"i0");
		HX_STACK_LINE(1585)
		int i1 = avl->__get(hx::Mod(((i + (int)1)),al));		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(1586)
		int i2 = avl->__get(hx::Mod(((i + (int)2)),al));		HX_STACK_VAR(i2,"i2");
		HX_STACK_LINE(1588)
		Float ax = p->__get(((int)2 * i0));		HX_STACK_VAR(ax,"ax");
		HX_STACK_LINE(1588)
		Float ay = p->__get((((int)2 * i0) + (int)1));		HX_STACK_VAR(ay,"ay");
		HX_STACK_LINE(1589)
		Float bx = p->__get(((int)2 * i1));		HX_STACK_VAR(bx,"bx");
		HX_STACK_LINE(1589)
		Float by = p->__get((((int)2 * i1) + (int)1));		HX_STACK_VAR(by,"by");
		HX_STACK_LINE(1590)
		Float cx = p->__get(((int)2 * i2));		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(1590)
		Float cy = p->__get((((int)2 * i2) + (int)1));		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(1592)
		earFound = false;
		HX_STACK_LINE(1594)
		if ((::openfl::_internal::renderer::opengl::utils::PolyK_obj::_convex(ax,ay,bx,by,cx,cy,sign))){
			HX_STACK_LINE(1596)
			earFound = true;
			HX_STACK_LINE(1598)
			{
				HX_STACK_LINE(1598)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1598)
				while((true)){
					HX_STACK_LINE(1598)
					if ((!(((_g1 < al))))){
						HX_STACK_LINE(1598)
						break;
					}
					HX_STACK_LINE(1598)
					int j = (_g1)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(1600)
					int vi = avl->__get(j);		HX_STACK_VAR(vi,"vi");
					HX_STACK_LINE(1601)
					if (((bool((bool((vi == i0)) || bool((vi == i1)))) || bool((vi == i2))))){
						HX_STACK_LINE(1601)
						continue;
					}
					HX_STACK_LINE(1603)
					if ((::openfl::_internal::renderer::opengl::utils::PolyK_obj::_PointInTriangle(p->__get(((int)2 * vi)),p->__get((((int)2 * vi) + (int)1)),ax,ay,bx,by,cx,cy))){
						HX_STACK_LINE(1605)
						earFound = false;
						HX_STACK_LINE(1606)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1614)
		if ((earFound)){
			HX_STACK_LINE(1616)
			tgs->push(i0);
			HX_STACK_LINE(1617)
			tgs->push(i1);
			HX_STACK_LINE(1618)
			tgs->push(i2);
			HX_STACK_LINE(1619)
			avl->splice(hx::Mod(((i + (int)1)),al),(int)1);
			HX_STACK_LINE(1620)
			(al)--;
			HX_STACK_LINE(1621)
			i = (int)0;
		}
		else{
			HX_STACK_LINE(1623)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1623)
			if (((_g > ((int)3 * al)))){
				HX_STACK_LINE(1625)
				if ((sign)){
					HX_STACK_LINE(1627)
					tgs = Array_obj< int >::__new();
					HX_STACK_LINE(1628)
					Array< int > _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1628)
					{
						HX_STACK_LINE(1628)
						Array< int > _g11 = Array_obj< int >::__new();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(1628)
						{
							HX_STACK_LINE(1628)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1628)
							while((true)){
								HX_STACK_LINE(1628)
								if ((!(((_g2 < n))))){
									HX_STACK_LINE(1628)
									break;
								}
								HX_STACK_LINE(1628)
								int k = (_g2)++;		HX_STACK_VAR(k,"k");
								HX_STACK_LINE(1628)
								_g11->push(k);
							}
						}
						HX_STACK_LINE(1628)
						_g1 = _g11;
					}
					HX_STACK_LINE(1628)
					avl = _g1;
					HX_STACK_LINE(1630)
					i = (int)0;
					HX_STACK_LINE(1631)
					al = n;
					HX_STACK_LINE(1632)
					sign = false;
				}
				else{
					HX_STACK_LINE(1636)
					::haxe::Log_obj::trace(HX_CSTRING("Warning: shape too complex to fill"),hx::SourceInfo(HX_CSTRING("GraphicsRenderer.hx"),1636,HX_CSTRING("openfl._internal.renderer.opengl.utils.PolyK"),HX_CSTRING("triangulate")));
					HX_STACK_LINE(1637)
					return Array_obj< int >::__new();
				}
			}
		}
	}
	HX_STACK_LINE(1645)
	tgs->push(avl->__get((int)0));
	HX_STACK_LINE(1646)
	tgs->push(avl->__get((int)1));
	HX_STACK_LINE(1647)
	tgs->push(avl->__get((int)2));
	HX_STACK_LINE(1648)
	return tgs;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolyK_obj,triangulate,return )

bool PolyK_obj::_PointInTriangle( Float px,Float py,Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_PointInTriangle",0x7548890e,"openfl._internal.renderer.opengl.utils.PolyK._PointInTriangle","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1653,0xd295150c)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(1655)
	int v0x = ::Std_obj::_int((cx - ax));		HX_STACK_VAR(v0x,"v0x");
	HX_STACK_LINE(1656)
	int v0y = ::Std_obj::_int((cy - ay));		HX_STACK_VAR(v0y,"v0y");
	HX_STACK_LINE(1657)
	int v1x = ::Std_obj::_int((bx - ax));		HX_STACK_VAR(v1x,"v1x");
	HX_STACK_LINE(1658)
	int v1y = ::Std_obj::_int((by - ay));		HX_STACK_VAR(v1y,"v1y");
	HX_STACK_LINE(1659)
	int v2x = ::Std_obj::_int((px - ax));		HX_STACK_VAR(v2x,"v2x");
	HX_STACK_LINE(1660)
	int v2y = ::Std_obj::_int((py - ay));		HX_STACK_VAR(v2y,"v2y");
	HX_STACK_LINE(1662)
	int dot00 = ((v0x * v0x) + (v0y * v0y));		HX_STACK_VAR(dot00,"dot00");
	HX_STACK_LINE(1663)
	int dot01 = ((v0x * v1x) + (v0y * v1y));		HX_STACK_VAR(dot01,"dot01");
	HX_STACK_LINE(1664)
	int dot02 = ((v0x * v2x) + (v0y * v2y));		HX_STACK_VAR(dot02,"dot02");
	HX_STACK_LINE(1665)
	int dot11 = ((v1x * v1x) + (v1y * v1y));		HX_STACK_VAR(dot11,"dot11");
	HX_STACK_LINE(1666)
	int dot12 = ((v1x * v2x) + (v1y * v2y));		HX_STACK_VAR(dot12,"dot12");
	HX_STACK_LINE(1668)
	Float invDenom = (Float((int)1) / Float((((dot00 * dot11) - (dot01 * dot01)))));		HX_STACK_VAR(invDenom,"invDenom");
	HX_STACK_LINE(1669)
	Float u = ((((dot11 * dot02) - (dot01 * dot12))) * invDenom);		HX_STACK_VAR(u,"u");
	HX_STACK_LINE(1670)
	Float v = ((((dot00 * dot12) - (dot01 * dot02))) * invDenom);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1672)
	return (bool((bool((u >= (int)0)) && bool((v >= (int)0)))) && bool(((u + v) < (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(PolyK_obj,_PointInTriangle,return )

bool PolyK_obj::_convex( Float ax,Float ay,Float bx,Float by,Float cx,Float cy,bool sign){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.PolyK","_convex",0xc062d896,"openfl._internal.renderer.opengl.utils.PolyK._convex","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1679,0xd295150c)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(sign,"sign")
	HX_STACK_LINE(1679)
	return ((((((ay - by)) * ((cx - bx))) + (((bx - ax)) * ((cy - by)))) >= (int)0) == sign);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(PolyK_obj,_convex,return )


PolyK_obj::PolyK_obj()
{
}

Dynamic PolyK_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_convex") ) { return _convex_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"triangulate") ) { return triangulate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_PointInTriangle") ) { return _PointInTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PolyK_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyK_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("triangulate"),
	HX_CSTRING("_PointInTriangle"),
	HX_CSTRING("_convex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PolyK_obj::__mClass,"__mClass");
};

#endif

Class PolyK_obj::__mClass;

void PolyK_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.utils.PolyK"), hx::TCanCast< PolyK_obj> ,sStaticFields,sMemberFields,
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

void PolyK_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
