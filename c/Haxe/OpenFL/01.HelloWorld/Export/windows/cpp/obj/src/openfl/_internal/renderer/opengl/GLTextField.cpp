#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLTextField
#include <openfl/_internal/renderer/opengl/GLTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

Void GLTextField_obj::__construct()
{
	return null();
}

//GLTextField_obj::~GLTextField_obj() { }

Dynamic GLTextField_obj::__CreateEmpty() { return  new GLTextField_obj; }
hx::ObjectPtr< GLTextField_obj > GLTextField_obj::__new()
{  hx::ObjectPtr< GLTextField_obj > result = new GLTextField_obj();
	result->__construct();
	return result;}

Dynamic GLTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLTextField_obj > result = new GLTextField_obj();
	result->__construct();
	return result;}

::haxe::ds::ObjectMap GLTextField_obj::bitmapData;

::haxe::ds::ObjectMap GLTextField_obj::glyphs;

::haxe::ds::ObjectMap GLTextField_obj::tilesheets;

::haxe::ds::ObjectMap GLTextField_obj::tileIDs;

Void GLTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLTextField","render",0x31a77300,"openfl._internal.renderer.opengl.GLTextField.render","openfl/_internal/renderer/opengl/GLTextField.hx",32,0x30c8ae9c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(34)
		if (((bool(!(textField->__renderable)) || bool((textField->__worldAlpha <= (int)0))))){
			HX_STACK_LINE(34)
			return null();
		}
		HX_STACK_LINE(36)
		::openfl::_internal::renderer::opengl::GLTextField_obj::update(textField);
		HX_STACK_LINE(38)
		if (((textField->__graphics == null()))){
			HX_STACK_LINE(40)
			::openfl::display::Graphics _g = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			textField->__graphics = _g;
		}
		HX_STACK_LINE(44)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(45)
		graphics->clear();
		HX_STACK_LINE(47)
		if (((bool(textField->border) || bool(textField->background)))){
			HX_STACK_LINE(49)
			if ((textField->border)){
				HX_STACK_LINE(51)
				graphics->lineStyle((int)1,textField->borderColor,null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(55)
			if ((textField->background)){
				HX_STACK_LINE(57)
				graphics->beginFill(textField->backgroundColor,null());
			}
			HX_STACK_LINE(61)
			graphics->drawRect(0.5,0.5,(textField->__width - (int)1),(textField->__height - (int)1));
		}
		HX_STACK_LINE(65)
		if (((textField->__tilesheets != null()))){
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			int _g = textField->__tilesheets->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(69)
				graphics->drawTiles(textField->__tilesheets->__get(i).StaticCast< ::openfl::display::Tilesheet >(),textField->__tileData->__get(i).StaticCast< Array< Float > >(),true,(int)4,null());
			}
		}
		HX_STACK_LINE(75)
		::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(textField,renderSession);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLTextField_obj,render,(void))

Void GLTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,Float textWidth){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.GLTextField","renderText",0xddafebcd,"openfl._internal.renderer.opengl.GLTextField.renderText","openfl/_internal/renderer/opengl/GLTextField.hx",80,0x30c8ae9c)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(textWidth,"textWidth")
		HX_STACK_LINE(82)
		::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(84)
		if (((bool((font != null())) && bool((format->size != null()))))){
			struct _Function_2_1{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",86,0x30c8ae9c)
					{
						HX_STACK_LINE(86)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(86)
						return ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(86)
			if ((!(_Function_2_1::Block(font)))){
				HX_STACK_LINE(88)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(88)
				::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->set(font,value);
			}
			HX_STACK_LINE(92)
			int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(93)
			::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
			HX_STACK_LINE(95)
			if ((!(fontGlyphs->exists(size)))){
				HX_STACK_LINE(97)
				Array< int > _g = font->getGlyphs(null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(97)
				::haxe::ds::IntMap value = font->renderGlyphs(_g,size);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(97)
				fontGlyphs->set(size,value);
			}
			HX_STACK_LINE(101)
			::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
			struct _Function_2_2{
				inline static bool Block( ::openfl::text::Font &font){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",103,0x30c8ae9c)
					{
						HX_STACK_LINE(103)
						int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(103)
						return ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(103)
			if ((!(_Function_2_2::Block(font)))){
				HX_STACK_LINE(105)
				::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(105)
				::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->set(font,value);
			}
			HX_STACK_LINE(109)
			::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
			HX_STACK_LINE(111)
			if ((!(fontBitmapData->exists(size)))){
				HX_STACK_LINE(113)
				int width;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(113)
				int height;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(113)
				::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(115)
				for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
					::lime::graphics::Image image = __it->next();
					{
						HX_STACK_LINE(117)
						width = image->buffer->width;
						HX_STACK_LINE(118)
						height = image->buffer->height;
						HX_STACK_LINE(119)
						::lime::utils::UInt8Array _g1 = image->get_data();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(119)
						data = _g1;
						HX_STACK_LINE(120)
						break;
					}
;
				}
				HX_STACK_LINE(124)
				::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(126)
					while((true)){
						HX_STACK_LINE(126)
						if ((!(((_g < width))))){
							HX_STACK_LINE(126)
							break;
						}
						HX_STACK_LINE(126)
						int x = (_g)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(128)
						{
							HX_STACK_LINE(128)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(128)
							while((true)){
								HX_STACK_LINE(128)
								if ((!(((_g1 < height))))){
									HX_STACK_LINE(128)
									break;
								}
								HX_STACK_LINE(128)
								int y = (_g1)++;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(130)
								int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
								HX_STACK_LINE(131)
								int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
								HX_STACK_LINE(132)
								bitmapData->setPixel32(x,y,color);
							}
						}
					}
				}
				HX_STACK_LINE(138)
				fontBitmapData->set(size,bitmapData);
			}
			HX_STACK_LINE(142)
			::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
			struct _Function_2_3{
				inline static bool Block( ::openfl::display::BitmapData &bitmapData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",144,0x30c8ae9c)
					{
						HX_STACK_LINE(144)
						int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(144)
						return ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->__Internal->exists(_g);
					}
					return null();
				}
			};
			HX_STACK_LINE(144)
			if ((!(_Function_2_3::Block(bitmapData)))){
				HX_STACK_LINE(146)
				::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
				HX_STACK_LINE(147)
				::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
				HX_STACK_LINE(149)
				::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(149)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(151)
				for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
					int key = __it->next();
					{
						HX_STACK_LINE(153)
						::lime::graphics::Image _g2 = images->get(key);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(153)
						image = _g2;
						HX_STACK_LINE(154)
						::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(154)
						int _g4 = tilesheet->addTileRect(_g3,null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(154)
						index = _g4;
						HX_STACK_LINE(156)
						tileID->set(key,index);
					}
;
				}
				HX_STACK_LINE(160)
				::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->set(bitmapData,tileID);
				HX_STACK_LINE(161)
				::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->set(bitmapData,tilesheet);
			}
			HX_STACK_LINE(165)
			::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
			HX_STACK_LINE(166)
			::IMap tileID = ::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
			HX_STACK_LINE(168)
			Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(169)
			Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(170)
			Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(172)
			::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
			HX_STACK_LINE(173)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(174)
			Float y = size;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(176)
			if (((format->align == ::openfl::text::TextFormatAlign_obj::RIGHT))){
				HX_STACK_LINE(178)
				hx::AddEq(x,(textField->__width - textWidth));
			}
			else{
				HX_STACK_LINE(180)
				if (((format->align == ::openfl::text::TextFormatAlign_obj::CENTER))){
					HX_STACK_LINE(182)
					hx::AddEq(x,(Float(((textField->__width - textWidth))) / Float((int)2)));
				}
			}
			HX_STACK_LINE(186)
			Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
			HX_STACK_LINE(188)
			if (((bool((textField->__tilesheets->length == (int)0)) || bool((textField->__tilesheets->__get((textField->__tilesheets->length - (int)1)).StaticCast< ::openfl::display::Tilesheet >() != tilesheet))))){
				HX_STACK_LINE(190)
				Array< Float > _g5 = Array_obj< Float >::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(190)
				tileData = _g5;
				HX_STACK_LINE(192)
				textField->__tilesheets->push(tilesheet);
				HX_STACK_LINE(193)
				textField->__tileData->push(tileData);
			}
			else{
				HX_STACK_LINE(197)
				tileData = textField->__tileData->__get((textField->__tileData->length - (int)1)).StaticCast< Array< Float > >();
			}
			HX_STACK_LINE(201)
			int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(202)
			Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(204)
			if (((textField->__textLayout == null()))){
				HX_STACK_LINE(206)
				::lime::text::TextLayout _g6 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(206)
				textField->__textLayout = _g6;
			}
			HX_STACK_LINE(210)
			::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(212)
					if ((!(((_g < lines->length))))){
						HX_STACK_LINE(212)
						break;
					}
					HX_STACK_LINE(212)
					::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(212)
					++(_g);
					HX_STACK_LINE(214)
					textLayout->set_text(null());
					HX_STACK_LINE(215)
					textLayout->set_font(font);
					HX_STACK_LINE(216)
					textLayout->set_size(size);
					HX_STACK_LINE(217)
					textLayout->set_text(line);
					HX_STACK_LINE(219)
					{
						HX_STACK_LINE(219)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(219)
						Array< ::Dynamic > _g2 = textLayout->positions;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(219)
						while((true)){
							HX_STACK_LINE(219)
							if ((!(((_g1 < _g2->length))))){
								HX_STACK_LINE(219)
								break;
							}
							HX_STACK_LINE(219)
							::lime::text::GlyphPosition position = _g2->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
							HX_STACK_LINE(219)
							++(_g1);
							HX_STACK_LINE(221)
							::lime::graphics::Image _g7 = images->get(position->glyph);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(221)
							image = _g7;
							HX_STACK_LINE(223)
							if (((image != null()))){
								HX_STACK_LINE(225)
								tileData->push(((x + position->offset->x) + image->x));
								HX_STACK_LINE(226)
								tileData->push(((y + position->offset->y) - image->y));
								HX_STACK_LINE(227)
								Dynamic _g8 = tileID->get(position->glyph);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(227)
								tileData->push(_g8);
								HX_STACK_LINE(228)
								tileData->push(r);
								HX_STACK_LINE(229)
								tileData->push(g);
								HX_STACK_LINE(230)
								tileData->push(b);
							}
							HX_STACK_LINE(234)
							hx::AddEq(x,position->advance->x);
							HX_STACK_LINE(235)
							hx::SubEq(y,position->advance->y);
						}
					}
					HX_STACK_LINE(239)
					x = (int)0;
					HX_STACK_LINE(240)
					hx::AddEq(y,(size * 1.185));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GLTextField_obj,renderText,(void))

bool GLTextField_obj::update( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLTextField","update",0xb3838db3,"openfl._internal.renderer.opengl.GLTextField.update","openfl/_internal/renderer/opengl/GLTextField.hx",249,0x30c8ae9c)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(251)
	if ((textField->__dirty)){
		struct _Function_2_1{
			inline static bool Block( ::openfl::text::TextField &textField){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",253,0x30c8ae9c)
				{
					HX_STACK_LINE(253)
					Float _g = textField->get_width();		HX_STACK_VAR(_g,"_g");
					struct _Function_3_1{
						inline static bool Block( ::openfl::text::TextField &textField){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",253,0x30c8ae9c)
							{
								HX_STACK_LINE(253)
								Float _g1 = textField->get_height();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(253)
								return (_g1 <= (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(253)
					return (  (((  ((!(((_g <= (int)0))))) ? bool(_Function_3_1::Block(textField)) : bool(true) ))) ? bool((textField->autoSize != ::openfl::text::TextFieldAutoSize_obj::LEFT)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(253)
		if (((  ((!(((bool((bool(((bool((textField->__text == null())) || bool((textField->__text == HX_CSTRING("")))))) && bool(!(textField->background)))) && bool(!(textField->border))))))) ? bool(_Function_2_1::Block(textField)) : bool(true) ))){
			HX_STACK_LINE(255)
			textField->__tilesheets = null();
			HX_STACK_LINE(256)
			textField->__tileData = null();
			HX_STACK_LINE(257)
			textField->__dirty = false;
		}
		else{
			HX_STACK_LINE(263)
			Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(263)
			textField->__tilesheets = _g2;
			HX_STACK_LINE(264)
			Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(264)
			textField->__tileData = _g3;
			HX_STACK_LINE(268)
			if (((bool((textField->__text != null())) && bool((textField->__text != HX_CSTRING("")))))){
				HX_STACK_LINE(270)
				::String text = textField->get_text();		HX_STACK_VAR(text,"text");
				HX_STACK_LINE(272)
				if ((textField->displayAsPassword)){
					HX_STACK_LINE(274)
					int length = text.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(275)
					::String mask = HX_CSTRING("");		HX_STACK_VAR(mask,"mask");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(277)
						while((true)){
							HX_STACK_LINE(277)
							if ((!(((_g < length))))){
								HX_STACK_LINE(277)
								break;
							}
							HX_STACK_LINE(277)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(279)
							hx::AddEq(mask,HX_CSTRING("*"));
						}
					}
					HX_STACK_LINE(283)
					text = mask;
				}
				HX_STACK_LINE(287)
				Array< Float > measurements = textField->__measureText();		HX_STACK_VAR(measurements,"measurements");
				HX_STACK_LINE(288)
				Float textWidth = 0.0;		HX_STACK_VAR(textWidth,"textWidth");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(290)
					while((true)){
						HX_STACK_LINE(290)
						if ((!(((_g < measurements->length))))){
							HX_STACK_LINE(290)
							break;
						}
						HX_STACK_LINE(290)
						Float measurement = measurements->__get(_g);		HX_STACK_VAR(measurement,"measurement");
						HX_STACK_LINE(290)
						++(_g);
						HX_STACK_LINE(292)
						hx::AddEq(textWidth,measurement);
					}
				}
				HX_STACK_LINE(296)
				if (((textField->autoSize == ::openfl::text::TextFieldAutoSize_obj::LEFT))){
					HX_STACK_LINE(298)
					textField->__width = (textWidth + (int)4);
				}
				HX_STACK_LINE(302)
				if (((textField->__ranges == null()))){
					HX_STACK_LINE(304)
					::openfl::text::TextFormat format = textField->__textFormat;		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(304)
					::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(304)
					if (((bool((font != null())) && bool((format->size != null()))))){
						struct _Function_6_1{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",304,0x30c8ae9c)
								{
									HX_STACK_LINE(304)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(304)
									return ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(304)
						if ((!(_Function_6_1::Block(font)))){
							HX_STACK_LINE(304)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->set(font,value);
						}
						HX_STACK_LINE(304)
						int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
						HX_STACK_LINE(304)
						::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
						HX_STACK_LINE(304)
						if ((!(fontGlyphs->exists(size)))){
							HX_STACK_LINE(304)
							Array< int > _g4 = font->getGlyphs(null());		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(304)
							::haxe::ds::IntMap value = font->renderGlyphs(_g4,size);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(304)
							fontGlyphs->set(size,value);
						}
						HX_STACK_LINE(304)
						::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
						struct _Function_6_2{
							inline static bool Block( ::openfl::text::Font &font){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",304,0x30c8ae9c)
								{
									HX_STACK_LINE(304)
									int _g = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(304)
									return ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(304)
						if ((!(_Function_6_2::Block(font)))){
							HX_STACK_LINE(304)
							::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->set(font,value);
						}
						HX_STACK_LINE(304)
						::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
						HX_STACK_LINE(304)
						if ((!(fontBitmapData->exists(size)))){
							HX_STACK_LINE(304)
							int width;		HX_STACK_VAR(width,"width");
							HX_STACK_LINE(304)
							int height;		HX_STACK_VAR(height,"height");
							HX_STACK_LINE(304)
							::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(304)
							for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
								::lime::graphics::Image image = __it->next();
								{
									HX_STACK_LINE(304)
									width = image->buffer->width;
									HX_STACK_LINE(304)
									height = image->buffer->height;
									HX_STACK_LINE(304)
									::lime::utils::UInt8Array _g5 = image->get_data();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(304)
									data = _g5;
									HX_STACK_LINE(304)
									break;
								}
;
							}
							HX_STACK_LINE(304)
							::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
							HX_STACK_LINE(304)
							{
								HX_STACK_LINE(304)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(304)
								while((true)){
									HX_STACK_LINE(304)
									if ((!(((_g < width))))){
										HX_STACK_LINE(304)
										break;
									}
									HX_STACK_LINE(304)
									int x = (_g)++;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(304)
									{
										HX_STACK_LINE(304)
										int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(304)
										while((true)){
											HX_STACK_LINE(304)
											if ((!(((_g1 < height))))){
												HX_STACK_LINE(304)
												break;
											}
											HX_STACK_LINE(304)
											int y = (_g1)++;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(304)
											int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
											HX_STACK_LINE(304)
											int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(304)
											bitmapData->setPixel32(x,y,color);
										}
									}
								}
							}
							HX_STACK_LINE(304)
							fontBitmapData->set(size,bitmapData);
						}
						HX_STACK_LINE(304)
						::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
						struct _Function_6_3{
							inline static bool Block( ::openfl::display::BitmapData &bitmapData){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",304,0x30c8ae9c)
								{
									HX_STACK_LINE(304)
									int _g = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(304)
									return ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->__Internal->exists(_g);
								}
								return null();
							}
						};
						HX_STACK_LINE(304)
						if ((!(_Function_6_3::Block(bitmapData)))){
							HX_STACK_LINE(304)
							::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
							HX_STACK_LINE(304)
							::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
							HX_STACK_LINE(304)
							::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
							HX_STACK_LINE(304)
							int index;		HX_STACK_VAR(index,"index");
							HX_STACK_LINE(304)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
								int key = __it->next();
								{
									HX_STACK_LINE(304)
									::lime::graphics::Image _g6 = images->get(key);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(304)
									image = _g6;
									HX_STACK_LINE(304)
									::openfl::geom::Rectangle _g7 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(304)
									int _g8 = tilesheet->addTileRect(_g7,null());		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(304)
									index = _g8;
									HX_STACK_LINE(304)
									tileID->set(key,index);
								}
;
							}
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->set(bitmapData,tileID);
							HX_STACK_LINE(304)
							::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->set(bitmapData,tilesheet);
						}
						HX_STACK_LINE(304)
						::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
						HX_STACK_LINE(304)
						::IMap tileID = ::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
						HX_STACK_LINE(304)
						Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(304)
						Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(304)
						Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(304)
						::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(304)
						Float x = (int)0;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(304)
						Float y = size;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(304)
						if (((format->align == ::openfl::text::TextFormatAlign_obj::RIGHT))){
							HX_STACK_LINE(304)
							hx::AddEq(x,(textField->__width - textWidth));
						}
						else{
							HX_STACK_LINE(304)
							if (((format->align == ::openfl::text::TextFormatAlign_obj::CENTER))){
								HX_STACK_LINE(304)
								hx::AddEq(x,(Float(((textField->__width - textWidth))) / Float((int)2)));
							}
						}
						HX_STACK_LINE(304)
						Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
						HX_STACK_LINE(304)
						if (((bool((textField->__tilesheets->length == (int)0)) || bool((textField->__tilesheets->__get((textField->__tilesheets->length - (int)1)).StaticCast< ::openfl::display::Tilesheet >() != tilesheet))))){
							HX_STACK_LINE(304)
							Array< Float > _g9 = Array_obj< Float >::__new();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(304)
							tileData = _g9;
							HX_STACK_LINE(304)
							textField->__tilesheets->push(tilesheet);
							HX_STACK_LINE(304)
							textField->__tileData->push(tileData);
						}
						else{
							HX_STACK_LINE(304)
							tileData = textField->__tileData->__get((textField->__tileData->length - (int)1)).StaticCast< Array< Float > >();
						}
						HX_STACK_LINE(304)
						int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
						HX_STACK_LINE(304)
						Array< ::String > lines = text.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
						HX_STACK_LINE(304)
						if (((textField->__textLayout == null()))){
							HX_STACK_LINE(304)
							::lime::text::TextLayout _g10 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(304)
							textField->__textLayout = _g10;
						}
						HX_STACK_LINE(304)
						::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
						HX_STACK_LINE(304)
						{
							HX_STACK_LINE(304)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(304)
							while((true)){
								HX_STACK_LINE(304)
								if ((!(((_g < lines->length))))){
									HX_STACK_LINE(304)
									break;
								}
								HX_STACK_LINE(304)
								::String line = lines->__get(_g);		HX_STACK_VAR(line,"line");
								HX_STACK_LINE(304)
								++(_g);
								HX_STACK_LINE(304)
								textLayout->set_text(null());
								HX_STACK_LINE(304)
								textLayout->set_font(font);
								HX_STACK_LINE(304)
								textLayout->set_size(size);
								HX_STACK_LINE(304)
								textLayout->set_text(line);
								HX_STACK_LINE(304)
								{
									HX_STACK_LINE(304)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(304)
									Array< ::Dynamic > _g21 = textLayout->positions;		HX_STACK_VAR(_g21,"_g21");
									HX_STACK_LINE(304)
									while((true)){
										HX_STACK_LINE(304)
										if ((!(((_g1 < _g21->length))))){
											HX_STACK_LINE(304)
											break;
										}
										HX_STACK_LINE(304)
										::lime::text::GlyphPosition position = _g21->__get(_g1).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
										HX_STACK_LINE(304)
										++(_g1);
										HX_STACK_LINE(304)
										::lime::graphics::Image _g11 = images->get(position->glyph);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(304)
										image = _g11;
										HX_STACK_LINE(304)
										if (((image != null()))){
											HX_STACK_LINE(304)
											tileData->push(((x + position->offset->x) + image->x));
											HX_STACK_LINE(304)
											tileData->push(((y + position->offset->y) - image->y));
											HX_STACK_LINE(304)
											Dynamic _g12 = tileID->get(position->glyph);		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(304)
											tileData->push(_g12);
											HX_STACK_LINE(304)
											tileData->push(r);
											HX_STACK_LINE(304)
											tileData->push(g);
											HX_STACK_LINE(304)
											tileData->push(b);
										}
										HX_STACK_LINE(304)
										hx::AddEq(x,position->advance->x);
										HX_STACK_LINE(304)
										hx::SubEq(y,position->advance->y);
									}
								}
								HX_STACK_LINE(304)
								x = (int)0;
								HX_STACK_LINE(304)
								hx::AddEq(y,(size * 1.185));
							}
						}
					}
				}
				else{
					HX_STACK_LINE(308)
					int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
					HX_STACK_LINE(309)
					::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
					HX_STACK_LINE(310)
					Float offsetX = 0.0;		HX_STACK_VAR(offsetX,"offsetX");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(312)
						int _g = textField->__ranges->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(312)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(314)
							range = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();
							HX_STACK_LINE(316)
							{
								HX_STACK_LINE(316)
								::String text1 = text.substring(range->start,range->end);		HX_STACK_VAR(text1,"text1");
								HX_STACK_LINE(316)
								::openfl::text::TextFormat format = range->format;		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(316)
								::openfl::text::Font font = textField->__getFontInstance(format);		HX_STACK_VAR(font,"font");
								HX_STACK_LINE(316)
								if (((bool((font != null())) && bool((format->size != null()))))){
									struct _Function_9_1{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",316,0x30c8ae9c)
											{
												HX_STACK_LINE(316)
												int _g4 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(316)
												return ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->__Internal->exists(_g4);
											}
											return null();
										}
									};
									HX_STACK_LINE(316)
									if ((!(_Function_9_1::Block(font)))){
										HX_STACK_LINE(316)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(316)
										::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->set(font,value);
									}
									HX_STACK_LINE(316)
									int size = ::Std_obj::_int(format->size);		HX_STACK_VAR(size,"size");
									HX_STACK_LINE(316)
									::haxe::ds::IntMap fontGlyphs = ::openfl::_internal::renderer::opengl::GLTextField_obj::glyphs->get(font);		HX_STACK_VAR(fontGlyphs,"fontGlyphs");
									HX_STACK_LINE(316)
									if ((!(fontGlyphs->exists(size)))){
										HX_STACK_LINE(316)
										Array< int > _g13 = font->getGlyphs(null());		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(316)
										::haxe::ds::IntMap value = font->renderGlyphs(_g13,size);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(316)
										fontGlyphs->set(size,value);
									}
									HX_STACK_LINE(316)
									::haxe::ds::IntMap images = fontGlyphs->get(size);		HX_STACK_VAR(images,"images");
									struct _Function_9_2{
										inline static bool Block( ::openfl::text::Font &font){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",316,0x30c8ae9c)
											{
												HX_STACK_LINE(316)
												int _g4 = ::__hxcpp_obj_id(font);		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(316)
												return ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->__Internal->exists(_g4);
											}
											return null();
										}
									};
									HX_STACK_LINE(316)
									if ((!(_Function_9_2::Block(font)))){
										HX_STACK_LINE(316)
										::haxe::ds::IntMap value = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(316)
										::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->set(font,value);
									}
									HX_STACK_LINE(316)
									::haxe::ds::IntMap fontBitmapData = ::openfl::_internal::renderer::opengl::GLTextField_obj::bitmapData->get(font);		HX_STACK_VAR(fontBitmapData,"fontBitmapData");
									HX_STACK_LINE(316)
									if ((!(fontBitmapData->exists(size)))){
										HX_STACK_LINE(316)
										int width;		HX_STACK_VAR(width,"width");
										HX_STACK_LINE(316)
										int height;		HX_STACK_VAR(height,"height");
										HX_STACK_LINE(316)
										::lime::utils::UInt8Array data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(316)
										for(::cpp::FastIterator_obj< ::lime::graphics::Image > *__it = ::cpp::CreateFastIterator< ::lime::graphics::Image >(images->iterator());  __it->hasNext(); ){
											::lime::graphics::Image image = __it->next();
											{
												HX_STACK_LINE(316)
												width = image->buffer->width;
												HX_STACK_LINE(316)
												height = image->buffer->height;
												HX_STACK_LINE(316)
												::lime::utils::UInt8Array _g14 = image->get_data();		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(316)
												data = _g14;
												HX_STACK_LINE(316)
												break;
											}
;
										}
										HX_STACK_LINE(316)
										::openfl::display::BitmapData bitmapData = ::openfl::display::BitmapData_obj::__new(width,height,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
										HX_STACK_LINE(316)
										{
											HX_STACK_LINE(316)
											int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
											HX_STACK_LINE(316)
											while((true)){
												HX_STACK_LINE(316)
												if ((!(((_g4 < width))))){
													HX_STACK_LINE(316)
													break;
												}
												HX_STACK_LINE(316)
												int x = (_g4)++;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(316)
												{
													HX_STACK_LINE(316)
													int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(316)
													while((true)){
														HX_STACK_LINE(316)
														if ((!(((_g11 < height))))){
															HX_STACK_LINE(316)
															break;
														}
														HX_STACK_LINE(316)
														int y = (_g11)++;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(316)
														int alpha = data->__get(((y * width) + x));		HX_STACK_VAR(alpha,"alpha");
														HX_STACK_LINE(316)
														int color = (int((int((int((int(alpha) << int((int)24))) | int((int)16711680))) | int((int)65280))) | int((int)255));		HX_STACK_VAR(color,"color");
														HX_STACK_LINE(316)
														bitmapData->setPixel32(x,y,color);
													}
												}
											}
										}
										HX_STACK_LINE(316)
										fontBitmapData->set(size,bitmapData);
									}
									HX_STACK_LINE(316)
									::openfl::display::BitmapData bitmapData = fontBitmapData->get(size);		HX_STACK_VAR(bitmapData,"bitmapData");
									struct _Function_9_3{
										inline static bool Block( ::openfl::display::BitmapData &bitmapData){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/renderer/opengl/GLTextField.hx",316,0x30c8ae9c)
											{
												HX_STACK_LINE(316)
												int _g4 = ::__hxcpp_obj_id(bitmapData);		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(316)
												return ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->__Internal->exists(_g4);
											}
											return null();
										}
									};
									HX_STACK_LINE(316)
									if ((!(_Function_9_3::Block(bitmapData)))){
										HX_STACK_LINE(316)
										::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
										HX_STACK_LINE(316)
										::haxe::ds::IntMap tileID = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tileID,"tileID");
										HX_STACK_LINE(316)
										::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
										HX_STACK_LINE(316)
										int index;		HX_STACK_VAR(index,"index");
										HX_STACK_LINE(316)
										for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(images->keys());  __it->hasNext(); ){
											int key = __it->next();
											{
												HX_STACK_LINE(316)
												::lime::graphics::Image _g15 = images->get(key);		HX_STACK_VAR(_g15,"_g15");
												HX_STACK_LINE(316)
												image = _g15;
												HX_STACK_LINE(316)
												::openfl::geom::Rectangle _g16 = ::openfl::geom::Rectangle_obj::__new(image->offsetX,image->offsetY,image->width,image->height);		HX_STACK_VAR(_g16,"_g16");
												HX_STACK_LINE(316)
												int _g17 = tilesheet->addTileRect(_g16,null());		HX_STACK_VAR(_g17,"_g17");
												HX_STACK_LINE(316)
												index = _g17;
												HX_STACK_LINE(316)
												tileID->set(key,index);
											}
;
										}
										HX_STACK_LINE(316)
										::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->set(bitmapData,tileID);
										HX_STACK_LINE(316)
										::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->set(bitmapData,tilesheet);
									}
									HX_STACK_LINE(316)
									::openfl::display::Tilesheet tilesheet = ::openfl::_internal::renderer::opengl::GLTextField_obj::tilesheets->get(bitmapData);		HX_STACK_VAR(tilesheet,"tilesheet");
									HX_STACK_LINE(316)
									::IMap tileID = ::openfl::_internal::renderer::opengl::GLTextField_obj::tileIDs->get(bitmapData);		HX_STACK_VAR(tileID,"tileID");
									HX_STACK_LINE(316)
									Float r = (Float(((int((int(format->color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(316)
									Float g = (Float(((int((int(format->color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(316)
									Float b = (Float(((int(format->color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(316)
									::lime::graphics::Image image;		HX_STACK_VAR(image,"image");
									HX_STACK_LINE(316)
									Float x = offsetX;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(316)
									Float y = size;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(316)
									if (((format->align == ::openfl::text::TextFormatAlign_obj::RIGHT))){
										HX_STACK_LINE(316)
										hx::AddEq(x,(textField->__width - textWidth));
									}
									else{
										HX_STACK_LINE(316)
										if (((format->align == ::openfl::text::TextFormatAlign_obj::CENTER))){
											HX_STACK_LINE(316)
											hx::AddEq(x,(Float(((textField->__width - textWidth))) / Float((int)2)));
										}
									}
									HX_STACK_LINE(316)
									Array< Float > tileData;		HX_STACK_VAR(tileData,"tileData");
									HX_STACK_LINE(316)
									if (((bool((textField->__tilesheets->length == (int)0)) || bool((textField->__tilesheets->__get((textField->__tilesheets->length - (int)1)).StaticCast< ::openfl::display::Tilesheet >() != tilesheet))))){
										HX_STACK_LINE(316)
										Array< Float > _g18 = Array_obj< Float >::__new();		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(316)
										tileData = _g18;
										HX_STACK_LINE(316)
										textField->__tilesheets->push(tilesheet);
										HX_STACK_LINE(316)
										textField->__tileData->push(tileData);
									}
									else{
										HX_STACK_LINE(316)
										tileData = textField->__tileData->__get((textField->__tileData->length - (int)1)).StaticCast< Array< Float > >();
									}
									HX_STACK_LINE(316)
									int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
									HX_STACK_LINE(316)
									Array< ::String > lines = text1.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
									HX_STACK_LINE(316)
									if (((textField->__textLayout == null()))){
										HX_STACK_LINE(316)
										::lime::text::TextLayout _g19 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(316)
										textField->__textLayout = _g19;
									}
									HX_STACK_LINE(316)
									::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
									HX_STACK_LINE(316)
									{
										HX_STACK_LINE(316)
										int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(316)
										while((true)){
											HX_STACK_LINE(316)
											if ((!(((_g4 < lines->length))))){
												HX_STACK_LINE(316)
												break;
											}
											HX_STACK_LINE(316)
											::String line = lines->__get(_g4);		HX_STACK_VAR(line,"line");
											HX_STACK_LINE(316)
											++(_g4);
											HX_STACK_LINE(316)
											textLayout->set_text(null());
											HX_STACK_LINE(316)
											textLayout->set_font(font);
											HX_STACK_LINE(316)
											textLayout->set_size(size);
											HX_STACK_LINE(316)
											textLayout->set_text(line);
											HX_STACK_LINE(316)
											{
												HX_STACK_LINE(316)
												int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(316)
												Array< ::Dynamic > _g21 = textLayout->positions;		HX_STACK_VAR(_g21,"_g21");
												HX_STACK_LINE(316)
												while((true)){
													HX_STACK_LINE(316)
													if ((!(((_g11 < _g21->length))))){
														HX_STACK_LINE(316)
														break;
													}
													HX_STACK_LINE(316)
													::lime::text::GlyphPosition position = _g21->__get(_g11).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(position,"position");
													HX_STACK_LINE(316)
													++(_g11);
													HX_STACK_LINE(316)
													::lime::graphics::Image _g20 = images->get(position->glyph);		HX_STACK_VAR(_g20,"_g20");
													HX_STACK_LINE(316)
													image = _g20;
													HX_STACK_LINE(316)
													if (((image != null()))){
														HX_STACK_LINE(316)
														tileData->push(((x + position->offset->x) + image->x));
														HX_STACK_LINE(316)
														tileData->push(((y + position->offset->y) - image->y));
														HX_STACK_LINE(316)
														Dynamic _g211 = tileID->get(position->glyph);		HX_STACK_VAR(_g211,"_g211");
														HX_STACK_LINE(316)
														tileData->push(_g211);
														HX_STACK_LINE(316)
														tileData->push(r);
														HX_STACK_LINE(316)
														tileData->push(g);
														HX_STACK_LINE(316)
														tileData->push(b);
													}
													HX_STACK_LINE(316)
													hx::AddEq(x,position->advance->x);
													HX_STACK_LINE(316)
													hx::SubEq(y,position->advance->y);
												}
											}
											HX_STACK_LINE(316)
											x = (int)0;
											HX_STACK_LINE(316)
											hx::AddEq(y,(size * 1.185));
										}
									}
								}
							}
							HX_STACK_LINE(317)
							hx::AddEq(offsetX,measurements->__get(i));
						}
					}
				}
			}
			else{
				HX_STACK_LINE(325)
				if (((textField->autoSize == ::openfl::text::TextFieldAutoSize_obj::LEFT))){
					HX_STACK_LINE(327)
					textField->__width = (int)4;
				}
			}
			HX_STACK_LINE(333)
			textField->__dirty = false;
			HX_STACK_LINE(334)
			return true;
		}
	}
	HX_STACK_LINE(340)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTextField_obj,update,return )


GLTextField_obj::GLTextField_obj()
{
}

Dynamic GLTextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return glyphs; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { return tileIDs; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { return tilesheets; }
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLTextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { tileIDs=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheets") ) { tilesheets=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLTextField_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("glyphs"),
	HX_CSTRING("tilesheets"),
	HX_CSTRING("tileIDs"),
	HX_CSTRING("render"),
	HX_CSTRING("renderText"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GLTextField_obj::bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(GLTextField_obj::glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(GLTextField_obj::tilesheets,"tilesheets");
	HX_MARK_MEMBER_NAME(GLTextField_obj::tileIDs,"tileIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GLTextField_obj::bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(GLTextField_obj::glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(GLTextField_obj::tilesheets,"tilesheets");
	HX_VISIT_MEMBER_NAME(GLTextField_obj::tileIDs,"tileIDs");
};

#endif

Class GLTextField_obj::__mClass;

void GLTextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._internal.renderer.opengl.GLTextField"), hx::TCanCast< GLTextField_obj> ,sStaticFields,sMemberFields,
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

void GLTextField_obj::__boot()
{
	bitmapData= ::haxe::ds::ObjectMap_obj::__new();
	glyphs= ::haxe::ds::ObjectMap_obj::__new();
	tilesheets= ::haxe::ds::ObjectMap_obj::__new();
	tileIDs= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
