#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void Tilesheet_obj::__construct(::openfl::display::BitmapData image)
{
HX_STACK_FRAME("openfl.display.Tilesheet","new",0x93eb2f79,"openfl.display.Tilesheet.new","openfl/display/Tilesheet.hx",54,0x2fc30619)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(56)
	this->__bitmap = image;
	HX_STACK_LINE(57)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	this->__centerPoints = _g;
	HX_STACK_LINE(58)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(58)
	this->__tileRects = _g1;
	HX_STACK_LINE(59)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	this->__tileUVs = _g2;
	HX_STACK_LINE(61)
	::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(61)
	this->__rectTile = _g3;
	HX_STACK_LINE(62)
	::openfl::geom::Rectangle _g4 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(62)
	this->__rectUV = _g4;
	HX_STACK_LINE(63)
	::openfl::geom::Point _g5 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(63)
	this->__point = _g5;
}
;
	return null();
}

//Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::openfl::display::BitmapData image)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(image);
	return result;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(inArgs[0]);
	return result;}

int Tilesheet_obj::addTileRect( ::openfl::geom::Rectangle rectangle,::openfl::geom::Point centerPoint){
	HX_STACK_FRAME("openfl.display.Tilesheet","addTileRect",0x692b4acc,"openfl.display.Tilesheet.addTileRect","openfl/display/Tilesheet.hx",82,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(84)
	this->__tileRects->push(rectangle);
	HX_STACK_LINE(86)
	if (((centerPoint == null()))){
		HX_STACK_LINE(88)
		centerPoint = ::openfl::display::Tilesheet_obj::__defaultPoint;
	}
	HX_STACK_LINE(95)
	this->__centerPoints->push(centerPoint);
	HX_STACK_LINE(98)
	Float _g = rectangle->get_left();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(98)
	Float _g1 = (Float(_g) / Float(this->__bitmap->width));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(98)
	Float _g2 = rectangle->get_top();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(98)
	Float _g3 = (Float(_g2) / Float(this->__bitmap->height));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(98)
	Float _g4 = rectangle->get_right();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(98)
	Float _g5 = (Float(_g4) / Float(this->__bitmap->width));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(98)
	Float _g6 = rectangle->get_bottom();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(98)
	Float _g7 = (Float(_g6) / Float(this->__bitmap->height));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(98)
	::openfl::geom::Rectangle _g8 = ::openfl::geom::Rectangle_obj::__new(_g1,_g3,_g5,_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(98)
	this->__tileUVs->push(_g8);
	HX_STACK_LINE(100)
	return (this->__tileRects->length - (int)1);
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Void Tilesheet_obj::drawTiles( ::openfl::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Tilesheet","drawTiles",0x3dc16aba,"openfl.display.Tilesheet.drawTiles","openfl/display/Tilesheet.hx",188,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(188)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,smooth,flags,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilesheet_obj,drawTiles,(void))

::openfl::geom::Point Tilesheet_obj::getTileCenter( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileCenter",0x7cc0f032,"openfl.display.Tilesheet.getTileCenter","openfl/display/Tilesheet.hx",194,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(194)
	return this->__centerPoints->__get(index).StaticCast< ::openfl::geom::Point >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileCenter,return )

::openfl::geom::Rectangle Tilesheet_obj::getTileRect( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileRect",0x5dc2d641,"openfl.display.Tilesheet.getTileRect","openfl/display/Tilesheet.hx",201,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(201)
	return this->__tileRects->__get(index).StaticCast< ::openfl::geom::Rectangle >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileRect,return )

::openfl::geom::Rectangle Tilesheet_obj::getTileUVs( int index){
	HX_STACK_FRAME("openfl.display.Tilesheet","getTileUVs",0x006ddc95,"openfl.display.Tilesheet.getTileUVs","openfl/display/Tilesheet.hx",208,0x2fc30619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(208)
	return this->__tileUVs->__get(index).StaticCast< ::openfl::geom::Rectangle >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileUVs,return )

int Tilesheet_obj::TILE_SCALE;

int Tilesheet_obj::TILE_ROTATION;

int Tilesheet_obj::TILE_RGB;

int Tilesheet_obj::TILE_ALPHA;

int Tilesheet_obj::TILE_TRANS_2x2;

int Tilesheet_obj::TILE_RECT;

int Tilesheet_obj::TILE_ORIGIN;

int Tilesheet_obj::TILE_BLEND_NORMAL;

int Tilesheet_obj::TILE_BLEND_ADD;

int Tilesheet_obj::TILE_BLEND_MULTIPLY;

int Tilesheet_obj::TILE_BLEND_SCREEN;

int Tilesheet_obj::TILE_BLEND_SUBTRACT;

::openfl::geom::Point Tilesheet_obj::__defaultPoint;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(__centerPoints,"__centerPoints");
	HX_MARK_MEMBER_NAME(__tileRects,"__tileRects");
	HX_MARK_MEMBER_NAME(__tileUVs,"__tileUVs");
	HX_MARK_MEMBER_NAME(__rectTile,"__rectTile");
	HX_MARK_MEMBER_NAME(__rectUV,"__rectUV");
	HX_MARK_MEMBER_NAME(__point,"__point");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(__centerPoints,"__centerPoints");
	HX_VISIT_MEMBER_NAME(__tileRects,"__tileRects");
	HX_VISIT_MEMBER_NAME(__tileUVs,"__tileUVs");
	HX_VISIT_MEMBER_NAME(__rectTile,"__rectTile");
	HX_VISIT_MEMBER_NAME(__rectUV,"__rectUV");
	HX_VISIT_MEMBER_NAME(__point,"__point");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__point") ) { return __point; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"__rectUV") ) { return __rectUV; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__tileUVs") ) { return __tileUVs; }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rectTile") ) { return __rectTile; }
		if (HX_FIELD_EQ(inName,"getTileUVs") ) { return getTileUVs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tileRects") ) { return __tileRects; }
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileRect") ) { return getTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileCenter") ) { return getTileCenter_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultPoint") ) { return __defaultPoint; }
		if (HX_FIELD_EQ(inName,"__centerPoints") ) { return __centerPoints; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__point") ) { __point=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rectUV") ) { __rectUV=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__tileUVs") ) { __tileUVs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rectTile") ) { __rectTile=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__tileRects") ) { __tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__defaultPoint") ) { __defaultPoint=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__centerPoints") ) { __centerPoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__bitmap"));
	outFields->push(HX_CSTRING("__centerPoints"));
	outFields->push(HX_CSTRING("__tileRects"));
	outFields->push(HX_CSTRING("__tileUVs"));
	outFields->push(HX_CSTRING("__rectTile"));
	outFields->push(HX_CSTRING("__rectUV"));
	outFields->push(HX_CSTRING("__point"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SCALE"),
	HX_CSTRING("TILE_ROTATION"),
	HX_CSTRING("TILE_RGB"),
	HX_CSTRING("TILE_ALPHA"),
	HX_CSTRING("TILE_TRANS_2x2"),
	HX_CSTRING("TILE_RECT"),
	HX_CSTRING("TILE_ORIGIN"),
	HX_CSTRING("TILE_BLEND_NORMAL"),
	HX_CSTRING("TILE_BLEND_ADD"),
	HX_CSTRING("TILE_BLEND_MULTIPLY"),
	HX_CSTRING("TILE_BLEND_SCREEN"),
	HX_CSTRING("TILE_BLEND_SUBTRACT"),
	HX_CSTRING("__defaultPoint"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Tilesheet_obj,__bitmap),HX_CSTRING("__bitmap")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__centerPoints),HX_CSTRING("__centerPoints")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__tileRects),HX_CSTRING("__tileRects")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,__tileUVs),HX_CSTRING("__tileUVs")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Tilesheet_obj,__rectTile),HX_CSTRING("__rectTile")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Tilesheet_obj,__rectUV),HX_CSTRING("__rectUV")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Tilesheet_obj,__point),HX_CSTRING("__point")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__bitmap"),
	HX_CSTRING("__centerPoints"),
	HX_CSTRING("__tileRects"),
	HX_CSTRING("__tileUVs"),
	HX_CSTRING("__rectTile"),
	HX_CSTRING("__rectUV"),
	HX_CSTRING("__point"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("getTileCenter"),
	HX_CSTRING("getTileRect"),
	HX_CSTRING("getTileUVs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__defaultPoint,"__defaultPoint");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__defaultPoint,"__defaultPoint");
};

#endif

Class Tilesheet_obj::__mClass;

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Tilesheet"), hx::TCanCast< Tilesheet_obj> ,sStaticFields,sMemberFields,
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

void Tilesheet_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	__defaultPoint= ::openfl::geom::Point_obj::__new((int)0,(int)0);
}

} // end namespace openfl
} // end namespace display
