#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
namespace lime{
namespace app{

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,init,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onGamepadAxisMove,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onGamepadButtonDown,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onGamepadButtonUp,)

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,onGamepadConnect,)

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,onGamepadDisconnect,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onKeyDown,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onKeyUp,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onMouseDown,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onMouseMove,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onMouseUp,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onMouseWheel,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onRenderContextLost,)

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,onRenderContextRestored,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onTouchEnd,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onTouchMove,)

HX_DEFINE_DYNAMIC_FUNC3(IModule_obj,onTouchStart,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowActivate,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowClose,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowDeactivate,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowFocusIn,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowFocusOut,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowFullscreen,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onWindowMove,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowMinimize,)

HX_DEFINE_DYNAMIC_FUNC2(IModule_obj,onWindowResize,)

HX_DEFINE_DYNAMIC_FUNC0(IModule_obj,onWindowRestore,)

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,render,)

HX_DEFINE_DYNAMIC_FUNC1(IModule_obj,update,)


static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("onGamepadAxisMove"),
	HX_CSTRING("onGamepadButtonDown"),
	HX_CSTRING("onGamepadButtonUp"),
	HX_CSTRING("onGamepadConnect"),
	HX_CSTRING("onGamepadDisconnect"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onRenderContextLost"),
	HX_CSTRING("onRenderContextRestored"),
	HX_CSTRING("onTouchEnd"),
	HX_CSTRING("onTouchMove"),
	HX_CSTRING("onTouchStart"),
	HX_CSTRING("onWindowActivate"),
	HX_CSTRING("onWindowClose"),
	HX_CSTRING("onWindowDeactivate"),
	HX_CSTRING("onWindowFocusIn"),
	HX_CSTRING("onWindowFocusOut"),
	HX_CSTRING("onWindowFullscreen"),
	HX_CSTRING("onWindowMove"),
	HX_CSTRING("onWindowMinimize"),
	HX_CSTRING("onWindowResize"),
	HX_CSTRING("onWindowRestore"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#endif

Class IModule_obj::__mClass;

void IModule_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.app.IModule"), hx::TCanCast< IModule_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IModule_obj::__boot()
{
}

} // end namespace lime
} // end namespace app
