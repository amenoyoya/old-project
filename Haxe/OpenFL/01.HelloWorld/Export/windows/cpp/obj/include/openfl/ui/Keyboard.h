#ifndef INCLUDED_openfl_ui_Keyboard
#define INCLUDED_openfl_ui_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,Keyboard)
namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Keyboard_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Keyboard"); }

		static int NUMBER_0;
		static int NUMBER_1;
		static int NUMBER_2;
		static int NUMBER_3;
		static int NUMBER_4;
		static int NUMBER_5;
		static int NUMBER_6;
		static int NUMBER_7;
		static int NUMBER_8;
		static int NUMBER_9;
		static int A;
		static int B;
		static int C;
		static int D;
		static int E;
		static int F;
		static int G;
		static int H;
		static int I;
		static int J;
		static int K;
		static int L;
		static int M;
		static int N;
		static int O;
		static int P;
		static int Q;
		static int R;
		static int S;
		static int T;
		static int U;
		static int V;
		static int W;
		static int X;
		static int Y;
		static int Z;
		static int NUMPAD_0;
		static int NUMPAD_1;
		static int NUMPAD_2;
		static int NUMPAD_3;
		static int NUMPAD_4;
		static int NUMPAD_5;
		static int NUMPAD_6;
		static int NUMPAD_7;
		static int NUMPAD_8;
		static int NUMPAD_9;
		static int NUMPAD_MULTIPLY;
		static int NUMPAD_ADD;
		static int NUMPAD_ENTER;
		static int NUMPAD_SUBTRACT;
		static int NUMPAD_DECIMAL;
		static int NUMPAD_DIVIDE;
		static int F1;
		static int F2;
		static int F3;
		static int F4;
		static int F5;
		static int F6;
		static int F7;
		static int F8;
		static int F9;
		static int F10;
		static int F11;
		static int F12;
		static int F13;
		static int F14;
		static int F15;
		static int BACKSPACE;
		static int TAB;
		static int ALTERNATE;
		static int ENTER;
		static int COMMAND;
		static int SHIFT;
		static int CONTROL;
		static int CAPS_LOCK;
		static int NUMPAD;
		static int ESCAPE;
		static int SPACE;
		static int PAGE_UP;
		static int PAGE_DOWN;
		static int END;
		static int HOME;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int INSERT;
		static int DELETE;
		static int NUMLOCK;
		static int BREAK;
		static int SEMICOLON;
		static int EQUAL;
		static int COMMA;
		static int MINUS;
		static int PERIOD;
		static int SLASH;
		static int BACKQUOTE;
		static int LEFTBRACKET;
		static int BACKSLASH;
		static int RIGHTBRACKET;
		static int QUOTE;
		static int DOM_VK_CANCEL;
		static int DOM_VK_HELP;
		static int DOM_VK_BACK_SPACE;
		static int DOM_VK_TAB;
		static int DOM_VK_CLEAR;
		static int DOM_VK_RETURN;
		static int DOM_VK_ENTER;
		static int DOM_VK_SHIFT;
		static int DOM_VK_CONTROL;
		static int DOM_VK_ALT;
		static int DOM_VK_PAUSE;
		static int DOM_VK_CAPS_LOCK;
		static int DOM_VK_ESCAPE;
		static int DOM_VK_SPACE;
		static int DOM_VK_PAGE_UP;
		static int DOM_VK_PAGE_DOWN;
		static int DOM_VK_END;
		static int DOM_VK_HOME;
		static int DOM_VK_LEFT;
		static int DOM_VK_UP;
		static int DOM_VK_RIGHT;
		static int DOM_VK_DOWN;
		static int DOM_VK_PRINTSCREEN;
		static int DOM_VK_INSERT;
		static int DOM_VK_DELETE;
		static int DOM_VK_0;
		static int DOM_VK_1;
		static int DOM_VK_2;
		static int DOM_VK_3;
		static int DOM_VK_4;
		static int DOM_VK_5;
		static int DOM_VK_6;
		static int DOM_VK_7;
		static int DOM_VK_8;
		static int DOM_VK_9;
		static int DOM_VK_SEMICOLON;
		static int DOM_VK_EQUALS;
		static int DOM_VK_A;
		static int DOM_VK_B;
		static int DOM_VK_C;
		static int DOM_VK_D;
		static int DOM_VK_E;
		static int DOM_VK_F;
		static int DOM_VK_G;
		static int DOM_VK_H;
		static int DOM_VK_I;
		static int DOM_VK_J;
		static int DOM_VK_K;
		static int DOM_VK_L;
		static int DOM_VK_M;
		static int DOM_VK_N;
		static int DOM_VK_O;
		static int DOM_VK_P;
		static int DOM_VK_Q;
		static int DOM_VK_R;
		static int DOM_VK_S;
		static int DOM_VK_T;
		static int DOM_VK_U;
		static int DOM_VK_V;
		static int DOM_VK_W;
		static int DOM_VK_X;
		static int DOM_VK_Y;
		static int DOM_VK_Z;
		static int DOM_VK_CONTEXT_MENU;
		static int DOM_VK_NUMPAD0;
		static int DOM_VK_NUMPAD1;
		static int DOM_VK_NUMPAD2;
		static int DOM_VK_NUMPAD3;
		static int DOM_VK_NUMPAD4;
		static int DOM_VK_NUMPAD5;
		static int DOM_VK_NUMPAD6;
		static int DOM_VK_NUMPAD7;
		static int DOM_VK_NUMPAD8;
		static int DOM_VK_NUMPAD9;
		static int DOM_VK_MULTIPLY;
		static int DOM_VK_ADD;
		static int DOM_VK_SEPARATOR;
		static int DOM_VK_SUBTRACT;
		static int DOM_VK_DECIMAL;
		static int DOM_VK_DIVIDE;
		static int DOM_VK_F1;
		static int DOM_VK_F2;
		static int DOM_VK_F3;
		static int DOM_VK_F4;
		static int DOM_VK_F5;
		static int DOM_VK_F6;
		static int DOM_VK_F7;
		static int DOM_VK_F8;
		static int DOM_VK_F9;
		static int DOM_VK_F10;
		static int DOM_VK_F11;
		static int DOM_VK_F12;
		static int DOM_VK_F13;
		static int DOM_VK_F14;
		static int DOM_VK_F15;
		static int DOM_VK_F16;
		static int DOM_VK_F17;
		static int DOM_VK_F18;
		static int DOM_VK_F19;
		static int DOM_VK_F20;
		static int DOM_VK_F21;
		static int DOM_VK_F22;
		static int DOM_VK_F23;
		static int DOM_VK_F24;
		static int DOM_VK_NUM_LOCK;
		static int DOM_VK_SCROLL_LOCK;
		static int DOM_VK_COMMA;
		static int DOM_VK_PERIOD;
		static int DOM_VK_SLASH;
		static int DOM_VK_BACK_QUOTE;
		static int DOM_VK_OPEN_BRACKET;
		static int DOM_VK_BACK_SLASH;
		static int DOM_VK_CLOSE_BRACKET;
		static int DOM_VK_QUOTE;
		static int DOM_VK_META;
		static int DOM_VK_KANA;
		static int DOM_VK_HANGUL;
		static int DOM_VK_JUNJA;
		static int DOM_VK_FINAL;
		static int DOM_VK_HANJA;
		static int DOM_VK_KANJI;
		static int DOM_VK_CONVERT;
		static int DOM_VK_NONCONVERT;
		static int DOM_VK_ACEPT;
		static int DOM_VK_MODECHANGE;
		static int DOM_VK_SELECT;
		static int DOM_VK_PRINT;
		static int DOM_VK_EXECUTE;
		static int DOM_VK_SLEEP;
		static bool capsLock;
		static bool numLock;
		static bool isAccessible( );
		static Dynamic isAccessible_dyn();

		static int __convertMozillaCode( int code);
		static Dynamic __convertMozillaCode_dyn();

		static int __convertWebkitCode( ::String code);
		static Dynamic __convertWebkitCode_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Keyboard */ 
