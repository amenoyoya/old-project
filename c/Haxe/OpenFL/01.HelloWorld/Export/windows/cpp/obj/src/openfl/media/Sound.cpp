#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_AudioSource
#include <lime/audio/AudioSource.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
namespace openfl{
namespace media{

Void Sound_obj::__construct(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{
HX_STACK_FRAME("openfl.media.Sound","new",0xfdfd1c39,"openfl.media.Sound.new","openfl/media/Sound.hx",213,0x46a01619)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
{
	HX_STACK_LINE(215)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(217)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(218)
	this->bytesTotal = (int)0;
	HX_STACK_LINE(219)
	this->id3 = null();
	HX_STACK_LINE(220)
	this->isBuffering = false;
	HX_STACK_LINE(221)
	this->length = (int)0;
	HX_STACK_LINE(222)
	this->url = null();
	HX_STACK_LINE(224)
	if (((stream != null()))){
		HX_STACK_LINE(226)
		this->load(stream,context);
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(stream,context);
	return result;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > result = new Sound_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Sound_obj::close( ){
{
		HX_STACK_FRAME("openfl.media.Sound","close",0xfbd9cbd1,"openfl.media.Sound.close","openfl/media/Sound.hx",243,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		if (((this->__buffer != null()))){
			HX_STACK_LINE(245)
			this->__buffer->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::openfl::net::URLRequest stream,::openfl::media::SoundLoaderContext context){
{
		HX_STACK_FRAME("openfl.media.Sound","load",0x3e30ac2d,"openfl.media.Sound.load","openfl/media/Sound.hx",356,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stream,"stream")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(356)
		::lime::audio::AudioBuffer_obj::fromURL(stream->url,this->AudioBuffer_onURLLoad_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::lime::utils::ByteArray bytes,int bytesLength,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("openfl.media.Sound","loadCompressedDataFromByteArray",0x8f237f2f,"openfl.media.Sound.loadCompressedDataFromByteArray","openfl/media/Sound.hx",378,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(bytesLength,"bytesLength")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
{
		HX_STACK_LINE(383)
		::lime::audio::AudioBuffer _g = ::lime::audio::AudioBuffer_obj::fromBytes(bytes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(383)
		this->__buffer = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::lime::utils::ByteArray bytes,int samples,::String format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
	HX_STACK_FRAME("openfl.media.Sound","loadPCMFromByteArray",0xb6cc217a,"openfl.media.Sound.loadPCMFromByteArray","openfl/media/Sound.hx",391,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
{
		HX_STACK_LINE(396)
		::lime::audio::AudioBuffer _g = ::lime::audio::AudioBuffer_obj::fromBytes(bytes);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(396)
		this->__buffer = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

::openfl::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::openfl::media::SoundTransform sndTransform){
Float startTime = __o_startTime.Default(0.0);
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("openfl.media.Sound","play",0x40d33ffb,"openfl.media.Sound.play","openfl/media/Sound.hx",422,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(sndTransform,"sndTransform")
{
		HX_STACK_LINE(424)
		if (((sndTransform == null()))){
			HX_STACK_LINE(426)
			::openfl::media::SoundTransform _g = ::openfl::media::SoundTransform_obj::__new((int)1,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(426)
			sndTransform = _g;
		}
		HX_STACK_LINE(433)
		::lime::audio::AudioSource source = ::lime::audio::AudioSource_obj::__new(this->__buffer);		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(434)
		return ::openfl::media::SoundChannel_obj::__new(source);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

::openfl::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_FRAME("openfl.media.Sound","get_id3",0xac6378e8,"openfl.media.Sound.get_id3","openfl/media/Sound.hx",465,0x46a01619)
	HX_STACK_THIS(this)
	HX_STACK_LINE(465)
	return ::openfl::media::ID3Info_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

Void Sound_obj::AudioBuffer_onURLLoad( ::lime::audio::AudioBuffer buffer){
{
		HX_STACK_FRAME("openfl.media.Sound","AudioBuffer_onURLLoad",0x80e63186,"openfl.media.Sound.AudioBuffer_onURLLoad","openfl/media/Sound.hx",477,0x46a01619)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(479)
		this->__buffer = buffer;
		HX_STACK_LINE(480)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(480)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,AudioBuffer_onURLLoad,(void))

::openfl::media::Sound Sound_obj::fromAudioBuffer( ::lime::audio::AudioBuffer buffer){
	HX_STACK_FRAME("openfl.media.Sound","fromAudioBuffer",0xa9f89285,"openfl.media.Sound.fromAudioBuffer","openfl/media/Sound.hx",259,0x46a01619)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(261)
	::openfl::media::Sound sound = ::openfl::media::Sound_obj::__new(null(),null());		HX_STACK_VAR(sound,"sound");
	HX_STACK_LINE(262)
	sound->__buffer = buffer;
	HX_STACK_LINE(263)
	return sound;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromAudioBuffer,return )

::openfl::media::Sound Sound_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl.media.Sound","fromFile",0x06bfbe8d,"openfl.media.Sound.fromFile","openfl/media/Sound.hx",268,0x46a01619)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(270)
	::lime::audio::AudioBuffer _g = ::lime::audio::AudioBuffer_obj::fromFile(path);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(270)
	return ::openfl::media::Sound_obj::fromAudioBuffer(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,fromFile,return )


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp ? get_id3() : id3; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return isBuffering; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAudioBuffer") ) { return fromAudioBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"AudioBuffer_onURLLoad") ) { return AudioBuffer_onURLLoad_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::openfl::media::ID3Info >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::audio::AudioBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("id3"));
	outFields->push(HX_CSTRING("isBuffering"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("__buffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromAudioBuffer"),
	HX_CSTRING("fromFile"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_CSTRING("bytesLoaded")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_CSTRING("bytesTotal")},
	{hx::fsObject /*::openfl::media::ID3Info*/ ,(int)offsetof(Sound_obj,id3),HX_CSTRING("id3")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_CSTRING("isBuffering")},
	{hx::fsFloat,(int)offsetof(Sound_obj,length),HX_CSTRING("length")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_CSTRING("url")},
	{hx::fsObject /*::lime::audio::AudioBuffer*/ ,(int)offsetof(Sound_obj,__buffer),HX_CSTRING("__buffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("id3"),
	HX_CSTRING("isBuffering"),
	HX_CSTRING("length"),
	HX_CSTRING("url"),
	HX_CSTRING("__buffer"),
	HX_CSTRING("close"),
	HX_CSTRING("load"),
	HX_CSTRING("loadCompressedDataFromByteArray"),
	HX_CSTRING("loadPCMFromByteArray"),
	HX_CSTRING("play"),
	HX_CSTRING("get_id3"),
	HX_CSTRING("AudioBuffer_onURLLoad"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.media.Sound"), hx::TCanCast< Sound_obj> ,sStaticFields,sMemberFields,
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

void Sound_obj::__boot()
{
}

} // end namespace openfl
} // end namespace media
