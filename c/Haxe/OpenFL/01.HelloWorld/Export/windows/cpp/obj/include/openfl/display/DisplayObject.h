#ifndef INCLUDED_openfl_display_DisplayObject
#define INCLUDED_openfl_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/EventDispatcher.h>
#include <openfl/display/IBitmapDrawable.h>
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::openfl::display::IBitmapDrawable_obj *()
			{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DisplayObject"); }

		::openfl::display::BlendMode blendMode;
		bool cacheAsBitmap;
		::openfl::display::LoaderInfo loaderInfo;
		Float mouseX;
		Float mouseY;
		Dynamic opaqueBackground;
		::openfl::display::DisplayObjectContainer parent;
		::openfl::display::DisplayObject root;
		::openfl::geom::Rectangle scale9Grid;
		::openfl::display::Stage stage;
		::openfl::geom::Matrix __worldTransform;
		::openfl::geom::ColorTransform __worldColorTransform;
		Float __alpha;
		Array< ::Dynamic > __filters;
		::openfl::display::Graphics __graphics;
		bool __interactive;
		bool __isMask;
		::openfl::display::DisplayObject __mask;
		::openfl::display::Graphics __maskGraphics;
		bool __maskCached;
		::String __name;
		bool __renderable;
		bool __renderDirty;
		Float __rotation;
		Float __rotationCache;
		Float __rotationCosine;
		Float __rotationSine;
		Float __scaleX;
		Float __scaleY;
		::openfl::geom::Rectangle __scrollRect;
		::openfl::geom::Transform __transform;
		bool __transformDirty;
		bool __visible;
		Float __worldAlpha;
		bool __worldAlphaChanged;
		::openfl::geom::Rectangle __worldClip;
		bool __worldClipChanged;
		::openfl::geom::Matrix __worldTransformCache;
		bool __worldTransformChanged;
		bool __worldVisible;
		bool __worldVisibleChanged;
		int __worldZ;
		Float __x;
		Float __y;
		virtual bool dispatchEvent( ::openfl::events::Event event);

		virtual ::openfl::geom::Rectangle getBounds( ::openfl::display::DisplayObject targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual ::openfl::geom::Rectangle getRect( ::openfl::display::DisplayObject targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);
		Dynamic globalToLocal_dyn();

		virtual bool hitTestObject( ::openfl::display::DisplayObject obj);
		Dynamic hitTestObject_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual ::openfl::geom::Point localToGlobal( ::openfl::geom::Point point);
		Dynamic localToGlobal_dyn();

		virtual bool __broadcast( ::openfl::events::Event event,bool notifyChilden);
		Dynamic __broadcast_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);
		Dynamic __getBounds_dyn();

		virtual Void __getInteractive( Array< ::Dynamic > stack);
		Dynamic __getInteractive_dyn();

		virtual Void __getLocalBounds( ::openfl::geom::Rectangle rect);
		Dynamic __getLocalBounds_dyn();

		virtual ::openfl::geom::Matrix __getTransform( );
		Dynamic __getTransform_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);
		Dynamic __hitTest_dyn();

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvas_dyn();

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderDOM_dyn();

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderGL_dyn();

		virtual Void __renderMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderMask_dyn();

		virtual Void __setStageReference( ::openfl::display::Stage stage);
		Dynamic __setStageReference_dyn();

		virtual Void __setRenderDirty( );
		Dynamic __setRenderDirty_dyn();

		virtual Void __setTransformDirty( );
		Dynamic __setTransformDirty_dyn();

		virtual Void __update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics);
		Dynamic __update_dyn();

		virtual Void __updateChildren( bool transformOnly);
		Dynamic __updateChildren_dyn();

		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics);
		Dynamic __updateMask_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual Array< ::Dynamic > get_filters( );
		Dynamic get_filters_dyn();

		virtual Array< ::Dynamic > set_filters( Array< ::Dynamic > value);
		Dynamic set_filters_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual ::openfl::display::DisplayObject get_mask( );
		Dynamic get_mask_dyn();

		virtual ::openfl::display::DisplayObject set_mask( ::openfl::display::DisplayObject value);
		Dynamic set_mask_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String value);
		Dynamic set_name_dyn();

		virtual ::openfl::display::DisplayObject get_root( );
		Dynamic get_root_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float value);
		Dynamic set_rotation_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float value);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float value);
		Dynamic set_scaleY_dyn();

		virtual ::openfl::geom::Rectangle get_scrollRect( );
		Dynamic get_scrollRect_dyn();

		virtual ::openfl::geom::Rectangle set_scrollRect( ::openfl::geom::Rectangle value);
		Dynamic set_scrollRect_dyn();

		virtual ::openfl::geom::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::openfl::geom::Transform set_transform( ::openfl::geom::Transform value);
		Dynamic set_transform_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		static int __instanceCount;
		static int __worldRenderDirty;
		static int __worldTransformDirty;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObject */ 
