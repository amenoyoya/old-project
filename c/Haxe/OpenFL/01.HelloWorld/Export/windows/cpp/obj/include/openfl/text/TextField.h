#ifndef INCLUDED_openfl_text_TextField
#define INCLUDED_openfl_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/InteractiveObject.h>
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,TextLayout)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,AntiAliasType)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,GridFitType)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFieldAutoSize)
HX_DECLARE_CLASS2(openfl,text,TextFieldType)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,text,TextFormatRange)
HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)
namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextField_obj : public ::openfl::display::InteractiveObject_obj{
	public:
		typedef ::openfl::display::InteractiveObject_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextField"); }

		::openfl::text::AntiAliasType antiAliasType;
		::openfl::text::TextFieldAutoSize autoSize;
		bool background;
		int backgroundColor;
		bool border;
		int borderColor;
		int bottomScrollV;
		int caretIndex;
		int caretPos;
		bool displayAsPassword;
		bool embedFonts;
		::openfl::text::GridFitType gridFitType;
		int length;
		int maxChars;
		int maxScrollH;
		int maxScrollV;
		bool multiline;
		int numLines;
		::String restrict;
		int scrollH;
		int scrollV;
		bool selectable;
		int selectionBeginIndex;
		int selectionEndIndex;
		Float sharpness;
		Float textHeight;
		Float textWidth;
		::openfl::text::TextFieldType type;
		bool wordWrap;
		int __cursorPosition;
		::haxe::Timer __cursorTimer;
		bool __dirty;
		bool __hasFocus;
		Float __height;
		bool __isHTML;
		bool __isKeyDown;
		int __measuredHeight;
		int __measuredWidth;
		Array< ::Dynamic > __ranges;
		int __selectionStart;
		bool __showCursor;
		::String __text;
		::openfl::text::TextFormat __textFormat;
		::lime::text::TextLayout __textLayout;
		::lime::graphics::opengl::GLTexture __texture;
		Array< ::Dynamic > __tileData;
		Array< ::Dynamic > __tilesheets;
		Float __width;
		virtual Void appendText( ::String text);
		Dynamic appendText_dyn();

		virtual ::openfl::geom::Rectangle getCharBoundaries( int a);
		Dynamic getCharBoundaries_dyn();

		virtual int getCharIndexAtPoint( Float x,Float y);
		Dynamic getCharIndexAtPoint_dyn();

		virtual int getLineIndexAtPoint( Float x,Float y);
		Dynamic getLineIndexAtPoint_dyn();

		virtual ::openfl::text::TextLineMetrics getLineMetrics( int lineIndex);
		Dynamic getLineMetrics_dyn();

		virtual int getLineOffset( int lineIndex);
		Dynamic getLineOffset_dyn();

		virtual ::String getLineText( int lineIndex);
		Dynamic getLineText_dyn();

		virtual ::openfl::text::TextFormat getTextFormat( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic getTextFormat_dyn();

		virtual Void setSelection( int beginIndex,int endIndex);
		Dynamic setSelection_dyn();

		virtual Void setTextFormat( ::openfl::text::TextFormat format,hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic setTextFormat_dyn();

		virtual ::String __clipText( ::String value);
		Dynamic __clipText_dyn();

		virtual Void __disableInputMode( );
		Dynamic __disableInputMode_dyn();

		virtual Void __enableInputMode( );
		Dynamic __enableInputMode_dyn();

		virtual Void __getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix);

		virtual ::String __getFont( ::openfl::text::TextFormat format);
		Dynamic __getFont_dyn();

		virtual ::openfl::text::Font __getFontInstance( ::openfl::text::TextFormat format);
		Dynamic __getFontInstance_dyn();

		virtual int __getPosition( Float x,Float y);
		Dynamic __getPosition_dyn();

		virtual Float __getTextWidth( ::String text);
		Dynamic __getTextWidth_dyn();

		virtual bool __hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly);

		virtual Array< Float > __measureText( );
		Dynamic __measureText_dyn();

		virtual Void __measureTextWithDOM( );
		Dynamic __measureTextWithDOM_dyn();

		virtual Void __renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		virtual Void __startCursorTimer( );
		Dynamic __startCursorTimer_dyn();

		virtual Void __stopCursorTimer( );
		Dynamic __stopCursorTimer_dyn();

		virtual ::openfl::text::TextFieldAutoSize set_autoSize( ::openfl::text::TextFieldAutoSize value);
		Dynamic set_autoSize_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual bool set_border( bool value);
		Dynamic set_border_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual int get_bottomScrollV( );
		Dynamic get_bottomScrollV_dyn();

		virtual int get_caretPos( );
		Dynamic get_caretPos_dyn();

		virtual ::openfl::text::TextFormat get_defaultTextFormat( );
		Dynamic get_defaultTextFormat_dyn();

		virtual ::openfl::text::TextFormat set_defaultTextFormat( ::openfl::text::TextFormat value);
		Dynamic set_defaultTextFormat_dyn();

		virtual Float get_height( );

		virtual Float set_height( Float value);

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual int get_maxScrollH( );
		Dynamic get_maxScrollH_dyn();

		virtual int get_maxScrollV( );
		Dynamic get_maxScrollV_dyn();

		virtual int get_numLines( );
		Dynamic get_numLines_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual int get_textColor( );
		Dynamic get_textColor_dyn();

		virtual int set_textColor( int value);
		Dynamic set_textColor_dyn();

		virtual Float get_textWidth( );
		Dynamic get_textWidth_dyn();

		virtual Float get_textHeight( );
		Dynamic get_textHeight_dyn();

		virtual ::openfl::text::TextFieldType set_type( ::openfl::text::TextFieldType value);
		Dynamic set_type_dyn();

		virtual Float get_width( );

		virtual Float set_width( Float value);

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		static ::openfl::text::TextFormat __defaultTextFormat;
};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextField */ 
