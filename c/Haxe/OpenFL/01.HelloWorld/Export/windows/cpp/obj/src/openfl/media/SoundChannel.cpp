#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace openfl{
namespace media{

Void SoundChannel_obj::__construct(::lime::audio::AudioSource source)
{
HX_STACK_FRAME("openfl.media.SoundChannel","new",0xfc94e2ae,"openfl.media.SoundChannel.new","openfl/media/SoundChannel.hx",65,0xa4290000)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(67)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(69)
	this->leftPeak = (int)1;
	HX_STACK_LINE(70)
	this->rightPeak = (int)1;
	HX_STACK_LINE(74)
	if (((source != null()))){
		HX_STACK_LINE(76)
		this->__source = source;
		HX_STACK_LINE(77)
		this->__source->onComplete->add(this->source_onComplete_dyn(),null(),null());
		HX_STACK_LINE(78)
		this->__isValid = true;
		HX_STACK_LINE(80)
		this->__source->play();
	}
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(::lime::audio::AudioSource source)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(source);
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","stop",0x090ae1f4,"openfl.media.SoundChannel.stop","openfl/media/SoundChannel.hx",103,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		if ((!(this->__isValid))){
			HX_STACK_LINE(105)
			return null();
		}
		HX_STACK_LINE(108)
		this->__source->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_position",0x46d188a4,"openfl.media.SoundChannel.get_position","openfl/media/SoundChannel.hx",135,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	if ((!(this->__isValid))){
		HX_STACK_LINE(137)
		return (int)0;
	}
	HX_STACK_LINE(140)
	int _g = this->__source->get_timeOffset();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	return (Float(_g) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_position",0x5bcaac18,"openfl.media.SoundChannel.set_position","openfl/media/SoundChannel.hx",148,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	if ((!(this->__isValid))){
		HX_STACK_LINE(150)
		return (int)0;
	}
	HX_STACK_LINE(153)
	int _g = ::Std_obj::_int((value * (int)1000));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(153)
	this->__source->set_timeOffset(_g);
	HX_STACK_LINE(154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("openfl.media.SoundChannel","get_soundTransform",0xc6e884d8,"openfl.media.SoundChannel.get_soundTransform","openfl/media/SoundChannel.hx",163,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	if ((!(this->__isValid))){
		HX_STACK_LINE(165)
		return ::openfl::media::SoundTransform_obj::__new(null(),null());
	}
	HX_STACK_LINE(170)
	Float _g = this->__source->get_gain();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(170)
	return ::openfl::media::SoundTransform_obj::__new(_g,(int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
	HX_STACK_FRAME("openfl.media.SoundChannel","set_soundTransform",0xa397b74c,"openfl.media.SoundChannel.set_soundTransform","openfl/media/SoundChannel.hx",178,0xa4290000)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(180)
	if ((!(this->__isValid))){
		HX_STACK_LINE(180)
		return value;
	}
	HX_STACK_LINE(183)
	this->__source->set_gain(value->volume);
	HX_STACK_LINE(187)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

Void SoundChannel_obj::source_onComplete( ){
{
		HX_STACK_FRAME("openfl.media.SoundChannel","source_onComplete",0xb57ef7ea,"openfl.media.SoundChannel.source_onComplete","openfl/media/SoundChannel.hx",214,0xa4290000)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::SOUND_COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,source_onComplete,(void))


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__source,"__source");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { return get_position(); }
		if (HX_FIELD_EQ(inName,"__source") ) { return __source; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return rightPeak; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return get_soundTransform(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"source_onComplete") ) { return source_onComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { return set_position(inValue); }
		if (HX_FIELD_EQ(inName,"__source") ) { __source=inValue.Cast< ::lime::audio::AudioSource >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { return set_soundTransform(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("leftPeak"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("rightPeak"));
	outFields->push(HX_CSTRING("soundTransform"));
	outFields->push(HX_CSTRING("__isValid"));
	outFields->push(HX_CSTRING("__source"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_CSTRING("leftPeak")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_CSTRING("rightPeak")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__isValid),HX_CSTRING("__isValid")},
	{hx::fsObject /*::lime::audio::AudioSource*/ ,(int)offsetof(SoundChannel_obj,__source),HX_CSTRING("__source")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("leftPeak"),
	HX_CSTRING("rightPeak"),
	HX_CSTRING("__isValid"),
	HX_CSTRING("__source"),
	HX_CSTRING("stop"),
	HX_CSTRING("get_position"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_soundTransform"),
	HX_CSTRING("set_soundTransform"),
	HX_CSTRING("source_onComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
};

#endif

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.media.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
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

void SoundChannel_obj::__boot()
{
}

} // end namespace openfl
} // end namespace media
