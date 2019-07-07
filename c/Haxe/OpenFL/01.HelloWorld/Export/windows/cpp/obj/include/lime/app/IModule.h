#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IModule_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IModule_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void init( ::lime::graphics::RenderContext context)=0;
		Dynamic init_dyn();
virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value)=0;
		Dynamic onGamepadAxisMove_dyn();
virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button)=0;
		Dynamic onGamepadButtonDown_dyn();
virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button)=0;
		Dynamic onGamepadButtonUp_dyn();
virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad)=0;
		Dynamic onGamepadConnect_dyn();
virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad)=0;
		Dynamic onGamepadDisconnect_dyn();
virtual Void onKeyDown( int keyCode,int modifier)=0;
		Dynamic onKeyDown_dyn();
virtual Void onKeyUp( int keyCode,int modifier)=0;
		Dynamic onKeyUp_dyn();
virtual Void onMouseDown( Float x,Float y,int button)=0;
		Dynamic onMouseDown_dyn();
virtual Void onMouseMove( Float x,Float y,int button)=0;
		Dynamic onMouseMove_dyn();
virtual Void onMouseUp( Float x,Float y,int button)=0;
		Dynamic onMouseUp_dyn();
virtual Void onMouseWheel( Float deltaX,Float deltaY)=0;
		Dynamic onMouseWheel_dyn();
virtual Void onRenderContextLost( )=0;
		Dynamic onRenderContextLost_dyn();
virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context)=0;
		Dynamic onRenderContextRestored_dyn();
virtual Void onTouchEnd( Float x,Float y,int id)=0;
		Dynamic onTouchEnd_dyn();
virtual Void onTouchMove( Float x,Float y,int id)=0;
		Dynamic onTouchMove_dyn();
virtual Void onTouchStart( Float x,Float y,int id)=0;
		Dynamic onTouchStart_dyn();
virtual Void onWindowActivate( )=0;
		Dynamic onWindowActivate_dyn();
virtual Void onWindowClose( )=0;
		Dynamic onWindowClose_dyn();
virtual Void onWindowDeactivate( )=0;
		Dynamic onWindowDeactivate_dyn();
virtual Void onWindowFocusIn( )=0;
		Dynamic onWindowFocusIn_dyn();
virtual Void onWindowFocusOut( )=0;
		Dynamic onWindowFocusOut_dyn();
virtual Void onWindowFullscreen( )=0;
		Dynamic onWindowFullscreen_dyn();
virtual Void onWindowMove( Float x,Float y)=0;
		Dynamic onWindowMove_dyn();
virtual Void onWindowMinimize( )=0;
		Dynamic onWindowMinimize_dyn();
virtual Void onWindowResize( int width,int height)=0;
		Dynamic onWindowResize_dyn();
virtual Void onWindowRestore( )=0;
		Dynamic onWindowRestore_dyn();
virtual Void render( ::lime::graphics::RenderContext context)=0;
		Dynamic render_dyn();
virtual Void update( int deltaTime)=0;
		Dynamic update_dyn();
};

#define DELEGATE_lime_app_IModule \
virtual Void init( ::lime::graphics::RenderContext context) { return mDelegate->init(context);}  \
virtual Dynamic init_dyn() { return mDelegate->init_dyn();}  \
virtual Void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value) { return mDelegate->onGamepadAxisMove(gamepad,axis,value);}  \
virtual Dynamic onGamepadAxisMove_dyn() { return mDelegate->onGamepadAxisMove_dyn();}  \
virtual Void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonDown(gamepad,button);}  \
virtual Dynamic onGamepadButtonDown_dyn() { return mDelegate->onGamepadButtonDown_dyn();}  \
virtual Void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button) { return mDelegate->onGamepadButtonUp(gamepad,button);}  \
virtual Dynamic onGamepadButtonUp_dyn() { return mDelegate->onGamepadButtonUp_dyn();}  \
virtual Void onGamepadConnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadConnect(gamepad);}  \
virtual Dynamic onGamepadConnect_dyn() { return mDelegate->onGamepadConnect_dyn();}  \
virtual Void onGamepadDisconnect( ::lime::ui::Gamepad gamepad) { return mDelegate->onGamepadDisconnect(gamepad);}  \
virtual Dynamic onGamepadDisconnect_dyn() { return mDelegate->onGamepadDisconnect_dyn();}  \
virtual Void onKeyDown( int keyCode,int modifier) { return mDelegate->onKeyDown(keyCode,modifier);}  \
virtual Dynamic onKeyDown_dyn() { return mDelegate->onKeyDown_dyn();}  \
virtual Void onKeyUp( int keyCode,int modifier) { return mDelegate->onKeyUp(keyCode,modifier);}  \
virtual Dynamic onKeyUp_dyn() { return mDelegate->onKeyUp_dyn();}  \
virtual Void onMouseDown( Float x,Float y,int button) { return mDelegate->onMouseDown(x,y,button);}  \
virtual Dynamic onMouseDown_dyn() { return mDelegate->onMouseDown_dyn();}  \
virtual Void onMouseMove( Float x,Float y,int button) { return mDelegate->onMouseMove(x,y,button);}  \
virtual Dynamic onMouseMove_dyn() { return mDelegate->onMouseMove_dyn();}  \
virtual Void onMouseUp( Float x,Float y,int button) { return mDelegate->onMouseUp(x,y,button);}  \
virtual Dynamic onMouseUp_dyn() { return mDelegate->onMouseUp_dyn();}  \
virtual Void onMouseWheel( Float deltaX,Float deltaY) { return mDelegate->onMouseWheel(deltaX,deltaY);}  \
virtual Dynamic onMouseWheel_dyn() { return mDelegate->onMouseWheel_dyn();}  \
virtual Void onRenderContextLost( ) { return mDelegate->onRenderContextLost();}  \
virtual Dynamic onRenderContextLost_dyn() { return mDelegate->onRenderContextLost_dyn();}  \
virtual Void onRenderContextRestored( ::lime::graphics::RenderContext context) { return mDelegate->onRenderContextRestored(context);}  \
virtual Dynamic onRenderContextRestored_dyn() { return mDelegate->onRenderContextRestored_dyn();}  \
virtual Void onTouchEnd( Float x,Float y,int id) { return mDelegate->onTouchEnd(x,y,id);}  \
virtual Dynamic onTouchEnd_dyn() { return mDelegate->onTouchEnd_dyn();}  \
virtual Void onTouchMove( Float x,Float y,int id) { return mDelegate->onTouchMove(x,y,id);}  \
virtual Dynamic onTouchMove_dyn() { return mDelegate->onTouchMove_dyn();}  \
virtual Void onTouchStart( Float x,Float y,int id) { return mDelegate->onTouchStart(x,y,id);}  \
virtual Dynamic onTouchStart_dyn() { return mDelegate->onTouchStart_dyn();}  \
virtual Void onWindowActivate( ) { return mDelegate->onWindowActivate();}  \
virtual Dynamic onWindowActivate_dyn() { return mDelegate->onWindowActivate_dyn();}  \
virtual Void onWindowClose( ) { return mDelegate->onWindowClose();}  \
virtual Dynamic onWindowClose_dyn() { return mDelegate->onWindowClose_dyn();}  \
virtual Void onWindowDeactivate( ) { return mDelegate->onWindowDeactivate();}  \
virtual Dynamic onWindowDeactivate_dyn() { return mDelegate->onWindowDeactivate_dyn();}  \
virtual Void onWindowFocusIn( ) { return mDelegate->onWindowFocusIn();}  \
virtual Dynamic onWindowFocusIn_dyn() { return mDelegate->onWindowFocusIn_dyn();}  \
virtual Void onWindowFocusOut( ) { return mDelegate->onWindowFocusOut();}  \
virtual Dynamic onWindowFocusOut_dyn() { return mDelegate->onWindowFocusOut_dyn();}  \
virtual Void onWindowFullscreen( ) { return mDelegate->onWindowFullscreen();}  \
virtual Dynamic onWindowFullscreen_dyn() { return mDelegate->onWindowFullscreen_dyn();}  \
virtual Void onWindowMove( Float x,Float y) { return mDelegate->onWindowMove(x,y);}  \
virtual Dynamic onWindowMove_dyn() { return mDelegate->onWindowMove_dyn();}  \
virtual Void onWindowMinimize( ) { return mDelegate->onWindowMinimize();}  \
virtual Dynamic onWindowMinimize_dyn() { return mDelegate->onWindowMinimize_dyn();}  \
virtual Void onWindowResize( int width,int height) { return mDelegate->onWindowResize(width,height);}  \
virtual Dynamic onWindowResize_dyn() { return mDelegate->onWindowResize_dyn();}  \
virtual Void onWindowRestore( ) { return mDelegate->onWindowRestore();}  \
virtual Dynamic onWindowRestore_dyn() { return mDelegate->onWindowRestore_dyn();}  \
virtual Void render( ::lime::graphics::RenderContext context) { return mDelegate->render(context);}  \
virtual Dynamic render_dyn() { return mDelegate->render_dyn();}  \
virtual Void update( int deltaTime) { return mDelegate->update(deltaTime);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class IModule_delegate_ : public IModule_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IModule_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_lime_app_IModule
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 
