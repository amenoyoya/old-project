#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_ALAudioContext
#include <lime/audio/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_ALCAudioContext
#include <lime/audio/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioContext
#include <lime/audio/AudioContext.h>
#endif
#ifndef INCLUDED_lime_audio_AudioManager
#include <lime/audio/AudioManager.h>
#endif
#ifndef INCLUDED_lime_audio_openal_ALC
#include <lime/audio/openal/ALC.h>
#endif
namespace lime{
namespace audio{

Void AudioManager_obj::__construct()
{
	return null();
}

//AudioManager_obj::~AudioManager_obj() { }

Dynamic AudioManager_obj::__CreateEmpty() { return  new AudioManager_obj; }
hx::ObjectPtr< AudioManager_obj > AudioManager_obj::__new()
{  hx::ObjectPtr< AudioManager_obj > result = new AudioManager_obj();
	result->__construct();
	return result;}

Dynamic AudioManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioManager_obj > result = new AudioManager_obj();
	result->__construct();
	return result;}

::lime::audio::AudioContext AudioManager_obj::context;

Void AudioManager_obj::init( ::lime::audio::AudioContext context){
{
		HX_STACK_FRAME("lime.audio.AudioManager","init",0x0c9d6096,"lime.audio.AudioManager.init","lime/audio/AudioManager.hx",22,0x9f466694)
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(22)
		if (((::lime::audio::AudioManager_obj::context == null()))){
			HX_STACK_LINE(24)
			if (((context == null()))){
				HX_STACK_LINE(45)
				::lime::audio::ALCAudioContext _g = ::lime::audio::ALCAudioContext_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				::lime::audio::ALAudioContext _g1 = ::lime::audio::ALAudioContext_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(45)
				::lime::audio::AudioContext _g2 = ::lime::audio::AudioContext_obj::OPENAL(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(45)
				::lime::audio::AudioManager_obj::context = _g2;
				HX_STACK_LINE(47)
				Dynamic device = ::lime::audio::openal::ALC_obj::openDevice(null());		HX_STACK_VAR(device,"device");
				HX_STACK_LINE(48)
				Dynamic ctx = ::lime::audio::openal::ALC_obj::createContext(device,null());		HX_STACK_VAR(ctx,"ctx");
				HX_STACK_LINE(49)
				::lime::audio::openal::ALC_obj::makeContextCurrent(ctx);
				HX_STACK_LINE(50)
				::lime::audio::openal::ALC_obj::processContext(ctx);
			}
			else{
				HX_STACK_LINE(56)
				::lime::audio::AudioManager_obj::context = context;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioManager_obj,init,(void))

Void AudioManager_obj::resume( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","resume",0xe85f7cb3,"lime.audio.AudioManager.resume","lime/audio/AudioManager.hx",67,0x9f466694)
		HX_STACK_LINE(67)
		if (((::lime::audio::AudioManager_obj::context != null()))){
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(69)
						::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(69)
						::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(71)
						{
							HX_STACK_LINE(73)
							Dynamic _g1 = alc->getCurrentContext();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(73)
							alc->processContext(_g1);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,resume,(void))

Void AudioManager_obj::shutdown( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","shutdown",0x46165d1c,"lime.audio.AudioManager.shutdown","lime/audio/AudioManager.hx",86,0x9f466694)
		HX_STACK_LINE(86)
		if (((::lime::audio::AudioManager_obj::context != null()))){
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(88)
						::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(88)
						::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(90)
						{
							HX_STACK_LINE(92)
							Dynamic currentContext = alc->getCurrentContext();		HX_STACK_VAR(currentContext,"currentContext");
							HX_STACK_LINE(94)
							if (((currentContext != null()))){
								HX_STACK_LINE(96)
								Dynamic device = alc->getContextsDevice(currentContext);		HX_STACK_VAR(device,"device");
								HX_STACK_LINE(97)
								alc->makeContextCurrent(null());
								HX_STACK_LINE(98)
								alc->destroyContext(currentContext);
								HX_STACK_LINE(99)
								alc->closeDevice(device);
							}
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,shutdown,(void))

Void AudioManager_obj::suspend( ){
{
		HX_STACK_FRAME("lime.audio.AudioManager","suspend",0xf724c1b6,"lime.audio.AudioManager.suspend","lime/audio/AudioManager.hx",114,0x9f466694)
		HX_STACK_LINE(114)
		if (((::lime::audio::AudioManager_obj::context != null()))){
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::lime::audio::AudioContext _g = ::lime::audio::AudioManager_obj::context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(116)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(116)
						::lime::audio::ALAudioContext al = (::lime::audio::AudioContext(_g))->__Param(1);		HX_STACK_VAR(al,"al");
						HX_STACK_LINE(116)
						::lime::audio::ALCAudioContext alc = (::lime::audio::AudioContext(_g))->__Param(0);		HX_STACK_VAR(alc,"alc");
						HX_STACK_LINE(118)
						{
							HX_STACK_LINE(120)
							Dynamic _g1 = alc->getCurrentContext();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(120)
							alc->suspendContext(_g1);
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,suspend,(void))


AudioManager_obj::AudioManager_obj()
{
}

Dynamic AudioManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"suspend") ) { return suspend_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return shutdown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::lime::audio::AudioContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("context"),
	HX_CSTRING("init"),
	HX_CSTRING("resume"),
	HX_CSTRING("shutdown"),
	HX_CSTRING("suspend"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioManager_obj::context,"context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioManager_obj::context,"context");
};

#endif

Class AudioManager_obj::__mClass;

void AudioManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.audio.AudioManager"), hx::TCanCast< AudioManager_obj> ,sStaticFields,sMemberFields,
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

void AudioManager_obj::__boot()
{
}

} // end namespace lime
} // end namespace audio
