#ifndef INCLUDED_openfl_display_IBitmapDrawable
#define INCLUDED_openfl_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IBitmapDrawable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBitmapDrawable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession)=0;
		Dynamic __renderCanvas_dyn();
virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession)=0;
		Dynamic __renderGL_dyn();
virtual Void __renderMask( ::openfl::_internal::renderer::RenderSession renderSession)=0;
		Dynamic __renderMask_dyn();
virtual Void __updateChildren( bool transformOnly)=0;
		Dynamic __updateChildren_dyn();
virtual Void __updateMask( ::openfl::display::Graphics maskGraphics)=0;
		Dynamic __updateMask_dyn();
};

#define DELEGATE_openfl_display_IBitmapDrawable \
virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderCanvas(renderSession);}  \
virtual Dynamic __renderCanvas_dyn() { return mDelegate->__renderCanvas_dyn();}  \
virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderGL(renderSession);}  \
virtual Dynamic __renderGL_dyn() { return mDelegate->__renderGL_dyn();}  \
virtual Void __renderMask( ::openfl::_internal::renderer::RenderSession renderSession) { return mDelegate->__renderMask(renderSession);}  \
virtual Dynamic __renderMask_dyn() { return mDelegate->__renderMask_dyn();}  \
virtual Void __updateChildren( bool transformOnly) { return mDelegate->__updateChildren(transformOnly);}  \
virtual Dynamic __updateChildren_dyn() { return mDelegate->__updateChildren_dyn();}  \
virtual Void __updateMask( ::openfl::display::Graphics maskGraphics) { return mDelegate->__updateMask(maskGraphics);}  \
virtual Dynamic __updateMask_dyn() { return mDelegate->__updateMask_dyn();}  \


template<typename IMPL>
class IBitmapDrawable_delegate_ : public IBitmapDrawable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBitmapDrawable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_display_IBitmapDrawable
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IBitmapDrawable */ 
