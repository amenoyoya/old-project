#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
#endif
#ifndef INCLUDED_lime_audio_openal_AL
#include <lime/audio/openal/AL.h>
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
namespace lime{
namespace audio{

Void AudioSource_obj::__construct(::lime::audio::AudioBuffer buffer)
{
HX_STACK_FRAME("lime.audio.AudioSource","new",0x2bd91bf2,"lime.audio.AudioSource.new","lime/audio/AudioSource.hx",12,0x17352e00)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
{
	HX_STACK_LINE(15)
	this->onComplete = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(31)
	this->buffer = buffer;
	HX_STACK_LINE(32)
	this->id = (int)0;
	HX_STACK_LINE(33)
	this->pauseTime = (int)0;
	HX_STACK_LINE(35)
	if (((buffer != null()))){
		HX_STACK_LINE(37)
		this->init();
	}
}
;
	return null();
}

//AudioSource_obj::~AudioSource_obj() { }

Dynamic AudioSource_obj::__CreateEmpty() { return  new AudioSource_obj; }
hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new(::lime::audio::AudioBuffer buffer)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(buffer);
	return result;}

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioSource_obj > result = new AudioSource_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AudioSource_obj::init( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","init",0x2ed80f3e,"lime.audio.AudioSource.init","lime/audio/AudioSource.hx",46,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(46)
					::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
					HX_STACK_LINE(46)
					::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
					HX_STACK_LINE(48)
					{
						struct _Function_4_1{
							inline static Float Block( hx::ObjectPtr< ::lime::audio::AudioSource_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/audio/AudioSource.hx",50,0x17352e00)
								{
									HX_STACK_LINE(50)
									int _int = __this->buffer->id;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(50)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(50)
						if (((_Function_4_1::Block(this) == (int)0))){
							HX_STACK_LINE(52)
							int _g1 = al->genBuffer();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(52)
							this->buffer->id = _g1;
							HX_STACK_LINE(54)
							int format = (int)0;		HX_STACK_VAR(format,"format");
							HX_STACK_LINE(56)
							if (((this->buffer->channels == (int)1))){
								HX_STACK_LINE(58)
								if (((this->buffer->bitsPerSample == (int)8))){
									HX_STACK_LINE(60)
									format = al->FORMAT_MONO8;
								}
								else{
									HX_STACK_LINE(62)
									if (((this->buffer->bitsPerSample == (int)16))){
										HX_STACK_LINE(64)
										format = al->FORMAT_MONO16;
									}
								}
							}
							else{
								HX_STACK_LINE(68)
								if (((this->buffer->channels == (int)2))){
									HX_STACK_LINE(70)
									if (((this->buffer->bitsPerSample == (int)8))){
										HX_STACK_LINE(72)
										format = al->FORMAT_STEREO8;
									}
									else{
										HX_STACK_LINE(74)
										if (((this->buffer->bitsPerSample == (int)16))){
											HX_STACK_LINE(76)
											format = al->FORMAT_STEREO16;
										}
									}
								}
							}
							HX_STACK_LINE(82)
							al->bufferData(this->buffer->id,format,this->buffer->data,this->buffer->data->length,this->buffer->sampleRate);
						}
						HX_STACK_LINE(86)
						int _g1 = al->genSource();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(86)
						this->id = _g1;
						HX_STACK_LINE(87)
						al->sourcei(this->id,al->BUFFER,this->buffer->id);
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

Void AudioSource_obj::play( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","play",0x33770222,"lime.audio.AudioSource.play","lime/audio/AudioSource.hx",106,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::lime::audio::openal::AL_obj::sourcePlay(this->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

Void AudioSource_obj::pause( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","pause",0xcd74ab08,"lime.audio.AudioSource.pause","lime/audio/AudioSource.hx",127,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		::lime::audio::openal::AL_obj::sourcePause(this->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

Void AudioSource_obj::stop( ){
{
		HX_STACK_FRAME("lime.audio.AudioSource","stop",0x3578c430,"lime.audio.AudioSource.stop","lime/audio/AudioSource.hx",144,0x17352e00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		::lime::audio::openal::AL_obj::sourceStop(this->id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

Float AudioSource_obj::get_gain( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_gain",0xda9f2f36,"lime.audio.AudioSource.get_gain","lime/audio/AudioSource.hx",170,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	return ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4106);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain( Float value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_gain",0x88fc88aa,"lime.audio.AudioSource.set_gain","lime/audio/AudioSource.hx",177,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(192)
	::lime::audio::openal::AL_obj::sourcef(this->id,(int)4106,value);
	HX_STACK_LINE(193)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_timeOffset( ){
	HX_STACK_FRAME("lime.audio.AudioSource","get_timeOffset",0xb0e38177,"lime.audio.AudioSource.get_timeOffset","lime/audio/AudioSource.hx",200,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	Float _g = ::lime::audio::openal::AL_obj::getSourcef(this->id,(int)4132);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(212)
	Float _g1 = (_g * (int)1000);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(212)
	return ::Std_obj::_int(_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_timeOffset,return )

int AudioSource_obj::set_timeOffset( int value){
	HX_STACK_FRAME("lime.audio.AudioSource","set_timeOffset",0xd10369eb,"lime.audio.AudioSource.set_timeOffset","lime/audio/AudioSource.hx",219,0x17352e00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(233)
	::lime::audio::openal::AL_obj::sourcef(this->id,(int)4132,(Float(value) / Float((int)1000)));
	HX_STACK_LINE(234)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_timeOffset,return )


AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
}

Dynamic AudioSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { return get_gain(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_gain") ) { return get_gain_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return set_gain_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return get_timeOffset(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_timeOffset") ) { return get_timeOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_timeOffset") ) { return set_timeOffset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { return set_gain(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return set_timeOffset(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("onComplete"));
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("gain"));
	outFields->push(HX_CSTRING("timeOffset"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("pauseTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,id),HX_CSTRING("id")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,pauseTime),HX_CSTRING("pauseTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onComplete"),
	HX_CSTRING("buffer"),
	HX_CSTRING("id"),
	HX_CSTRING("pauseTime"),
	HX_CSTRING("init"),
	HX_CSTRING("play"),
	HX_CSTRING("pause"),
	HX_CSTRING("stop"),
	HX_CSTRING("get_gain"),
	HX_CSTRING("set_gain"),
	HX_CSTRING("get_timeOffset"),
	HX_CSTRING("set_timeOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.AudioSource"), hx::TCanCast< AudioSource_obj> ,sStaticFields,sMemberFields,
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

void AudioSource_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
