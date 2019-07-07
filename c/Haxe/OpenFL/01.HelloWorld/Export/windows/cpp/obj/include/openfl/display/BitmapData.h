#ifndef INCLUDED_openfl_display_BitmapData
#define INCLUDED_openfl_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/IBitmapDrawable.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,GLRenderContext)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,utils,ByteArray)
HX_DECLARE_CLASS2(lime,utils,IDataInput)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,FilterTexture)
HX_DECLARE_CLASS5(openfl,_internal,renderer,opengl,utils,SpriteBatch)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,BlendMode)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,TextureUvs)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapData_obj > __new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::openfl::display::IBitmapDrawable_obj *()
			{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapData"); }

		int height;
		::openfl::geom::Rectangle rect;
		bool transparent;
		int width;
		::openfl::display::BlendMode blendMode;
		::openfl::geom::Matrix __worldTransform;
		::openfl::geom::ColorTransform __worldColorTransform;
		::lime::graphics::opengl::GLBuffer __buffer;
		::lime::graphics::Image __image;
		bool __isValid;
		::lime::graphics::opengl::GLTexture __texture;
		::lime::graphics::Image __textureImage;
		::openfl::_internal::renderer::opengl::utils::FilterTexture __framebuffer;
		::openfl::display::TextureUvs __uvData;
		::openfl::_internal::renderer::opengl::utils::SpriteBatch __spritebatch;
		virtual Void applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter);
		Dynamic applyFilter_dyn();

		virtual ::openfl::display::BitmapData clone( );
		Dynamic clone_dyn();

		virtual Void colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform);
		Dynamic colorTransform_dyn();

		virtual Void copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel);
		Dynamic copyChannel_dyn();

		virtual Void copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  smoothing);
		Dynamic draw_dyn();

		virtual ::lime::utils::ByteArray encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray);
		Dynamic encode_dyn();

		virtual Void fillRect( ::openfl::geom::Rectangle rect,int color);
		Dynamic fillRect_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual ::openfl::geom::Rectangle generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter);
		Dynamic generateFilterRect_dyn();

		virtual ::lime::graphics::opengl::GLBuffer getBuffer( ::lime::graphics::GLRenderContext gl);
		Dynamic getBuffer_dyn();

		virtual ::openfl::geom::Rectangle getColorBoundsRect( int mask,int color,hx::Null< bool >  findColor);
		Dynamic getColorBoundsRect_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual ::lime::utils::ByteArray getPixels( ::openfl::geom::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual ::lime::graphics::opengl::GLTexture getTexture( ::lime::graphics::GLRenderContext gl);
		Dynamic getTexture_dyn();

		virtual Array< int > getVector( ::openfl::geom::Rectangle rect);
		Dynamic getVector_dyn();

		virtual Array< ::Dynamic > histogram( ::openfl::geom::Rectangle hRect);
		Dynamic histogram_dyn();

		virtual bool hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  secondAlphaThreshold);
		Dynamic hitTest_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier);
		Dynamic merge_dyn();

		virtual Void noise( int randomSeed,hx::Null< int >  low,hx::Null< int >  high,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale);
		Dynamic noise_dyn();

		virtual Void paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray);
		Dynamic paletteMap_dyn();

		virtual Void perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale,Array< ::Dynamic > offsets);
		Dynamic perlinNoise_dyn();

		virtual Void scroll( int x,int y);
		Dynamic scroll_dyn();

		virtual Void setPixel( int x,int y,int color);
		Dynamic setPixel_dyn();

		virtual Void setPixel32( int x,int y,int color);
		Dynamic setPixel32_dyn();

		virtual Void setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray);
		Dynamic setPixels_dyn();

		virtual Void setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector);
		Dynamic setVector_dyn();

		virtual int threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask,hx::Null< bool >  copySource);
		Dynamic threshold_dyn();

		virtual Void unlock( ::openfl::geom::Rectangle changeRect);
		Dynamic unlock_dyn();

		virtual Void __createUVs( Dynamic verticalFlip);
		Dynamic __createUVs_dyn();

		virtual Void __fromBase64( ::String base64,::String type,Dynamic onload);
		Dynamic __fromBase64_dyn();

		virtual Void __fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload);
		Dynamic __fromBytes_dyn();

		virtual Void __fromFile( ::String path,Dynamic onload,Dynamic onerror);
		Dynamic __fromFile_dyn();

		virtual Void __fromImage( ::lime::graphics::Image image);
		Dynamic __fromImage_dyn();

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderCanvas_dyn();

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderGL_dyn();

		virtual Void __renderMask( ::openfl::_internal::renderer::RenderSession renderSession);
		Dynamic __renderMask_dyn();

		virtual Void __updateMask( ::openfl::display::Graphics maskGraphics);
		Dynamic __updateMask_dyn();

		virtual Void __sync( );
		Dynamic __sync_dyn();

		virtual Void __updateChildren( bool transformOnly);
		Dynamic __updateChildren_dyn();

		static ::openfl::display::BitmapData fromBase64( ::String base64,::String type,Dynamic onload);
		static Dynamic fromBase64_dyn();

		static ::openfl::display::BitmapData fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload);
		static Dynamic fromBytes_dyn();

		static ::openfl::display::BitmapData fromFile( ::String path,Dynamic onload,Dynamic onerror);
		static Dynamic fromFile_dyn();

		static ::openfl::display::BitmapData fromImage( ::lime::graphics::Image image,hx::Null< bool >  transparent);
		static Dynamic fromImage_dyn();

		static int __flipPixel( int pixel);
		static Dynamic __flipPixel_dyn();

		static int __ucompare( int n1,int n2);
		static Dynamic __ucompare_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_BitmapData */ 
