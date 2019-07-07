#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",177,0x7a569d9f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(179)
	super::__construct();
	HX_STACK_LINE(181)
	::openfl::display::LoaderInfo _g = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	this->contentLoaderInfo = _g;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Void Loader_obj::close( ){
{
		HX_STACK_FRAME("openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",193,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Loader.close"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

Void Loader_obj::load( ::openfl::net::URLRequest request,::openfl::system::LoaderContext context){
{
		HX_STACK_FRAME("openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",359,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(361)
		::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(362)
		Array< ::String > parts = request->url.split(HX_CSTRING("."));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(364)
		if (((parts->length > (int)0))){
			HX_STACK_LINE(366)
			::String _g = parts->__get((parts->length - (int)1)).toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(366)
			extension = _g;
		}
		HX_STACK_LINE(370)
		int _g1 = extension.indexOf(HX_CSTRING("?"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		if (((_g1 != (int)-1))){
			HX_STACK_LINE(372)
			Array< ::String > _g2 = extension.split(HX_CSTRING("?"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(372)
			::String _g3 = _g2->__get((int)0);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(372)
			extension = _g3;
		}
		HX_STACK_LINE(376)
		bool transparent = true;		HX_STACK_VAR(transparent,"transparent");
		HX_STACK_LINE(378)
		this->contentLoaderInfo->url = request->url;
		HX_STACK_LINE(380)
		if (((bool((request->contentType == null())) && bool((request->contentType != HX_CSTRING("")))))){
			HX_STACK_LINE(384)
			::String _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(384)
			::String _switch_1 = (extension);
			if (  ( _switch_1==HX_CSTRING("swf"))){
				HX_STACK_LINE(386)
				_g4 = HX_CSTRING("application/x-shockwave-flash");
			}
			else if (  ( _switch_1==HX_CSTRING("jpg")) ||  ( _switch_1==HX_CSTRING("jpeg"))){
				HX_STACK_LINE(387)
				transparent = false;
				HX_STACK_LINE(387)
				_g4 = HX_CSTRING("image/jpeg");
			}
			else if (  ( _switch_1==HX_CSTRING("png"))){
				HX_STACK_LINE(388)
				_g4 = HX_CSTRING("image/png");
			}
			else if (  ( _switch_1==HX_CSTRING("gif"))){
				HX_STACK_LINE(389)
				_g4 = HX_CSTRING("image/gif");
			}
			else  {
				HX_STACK_LINE(390)
				_g4 = HX_CSTRING("application/x-www-form-urlencoded");
			}
;
;
			HX_STACK_LINE(384)
			this->contentLoaderInfo->contentType = _g4;
		}
		else{
			HX_STACK_LINE(398)
			this->contentLoaderInfo->contentType = request->contentType;
		}
		HX_STACK_LINE(402)
		::openfl::display::BitmapData_obj::fromFile(request->url,this->BitmapData_onLoad_dyn(),this->BitmapData_onError_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::lime::utils::ByteArray buffer){
{
		HX_STACK_FRAME("openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",495,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(495)
		::openfl::display::BitmapData_obj::fromBytes(buffer,null(),this->BitmapData_onLoad_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",523,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(525)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(525)
		if (((_g > (int)0))){
			HX_STACK_LINE(527)
			while((true)){
				HX_STACK_LINE(527)
				int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(527)
				if ((!(((_g1 > (int)0))))){
					HX_STACK_LINE(527)
					break;
				}
				HX_STACK_LINE(529)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(533)
			this->content = null();
			HX_STACK_LINE(534)
			this->contentLoaderInfo->url = null();
			HX_STACK_LINE(535)
			this->contentLoaderInfo->contentType = null();
			HX_STACK_LINE(536)
			this->contentLoaderInfo->content = null();
			HX_STACK_LINE(537)
			this->contentLoaderInfo->bytesLoaded = (int)0;
			HX_STACK_LINE(538)
			this->contentLoaderInfo->bytesTotal = (int)0;
			HX_STACK_LINE(539)
			this->contentLoaderInfo->width = (int)0;
			HX_STACK_LINE(540)
			this->contentLoaderInfo->height = (int)0;
			HX_STACK_LINE(542)
			::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::UNLOAD,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(543)
			event->currentTarget = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(544)
			this->dispatchEvent(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::unloadAndStop( hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
	HX_STACK_FRAME("openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",581,0x7a569d9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gc,"gc")
{
		HX_STACK_LINE(581)
		::openfl::Lib_obj::notImplemented(HX_CSTRING("Loader.unloadAndStop"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

Void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",593,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(595)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(595)
		this->contentLoaderInfo->content = _g;
		HX_STACK_LINE(596)
		this->content = this->contentLoaderInfo->content;
		HX_STACK_LINE(597)
		this->addChild(this->contentLoaderInfo->content);
		HX_STACK_LINE(599)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(600)
		event->target = this->contentLoaderInfo;
		HX_STACK_LINE(601)
		event->currentTarget = this->contentLoaderInfo;
		HX_STACK_LINE(602)
		this->contentLoaderInfo->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

Void Loader_obj::BitmapData_onError( ){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",607,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		::openfl::events::IOErrorEvent event = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,null(),null(),null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(610)
		event->target = this->contentLoaderInfo;
		HX_STACK_LINE(611)
		event->currentTarget = this->contentLoaderInfo;
		HX_STACK_LINE(612)
		this->contentLoaderInfo->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,BitmapData_onError,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(mImage,"mImage");
	HX_MARK_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(mImage,"mImage");
	HX_VISIT_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { return mImage; }
		if (HX_FIELD_EQ(inName,"mShape") ) { return mShape; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return unloadAndStop_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return BitmapData_onLoad_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return BitmapData_onError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { mImage=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mShape") ) { mShape=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("contentLoaderInfo"));
	outFields->push(HX_CSTRING("mImage"));
	outFields->push(HX_CSTRING("mShape"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_CSTRING("contentLoaderInfo")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Loader_obj,mImage),HX_CSTRING("mImage")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(Loader_obj,mShape),HX_CSTRING("mShape")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("content"),
	HX_CSTRING("contentLoaderInfo"),
	HX_CSTRING("mImage"),
	HX_CSTRING("mShape"),
	HX_CSTRING("close"),
	HX_CSTRING("load"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("unload"),
	HX_CSTRING("unloadAndStop"),
	HX_CSTRING("BitmapData_onLoad"),
	HX_CSTRING("BitmapData_onError"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
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

void Loader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
