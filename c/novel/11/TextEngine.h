#pragma once

#include <kiri/win32.h>
#include <kiri/script.h>

class TextEngine{
	Lua				m_lua;			//スクリプト実行用Luaエンジン
	GDI				m_gdi;			//テキストレイヤー
	uint_t			m_screen;		//スクリーンHDC
	cstring			m_text;
	uchar_t			*m_textp;		//Text pointer（テキスト解釈位置をポイントします）
	Font			m_font;			//フォント
	uint_t			m_fontsize;		//フォントサイズ
	uint_t			m_face_color;	//文字色
	uint_t			m_shadow_color;	//影色
	uint_t			m_wait;			//１文字表示のウェイト
	Rect			m_textarea;		//テキスト表示領域
	uint_t			m_text_x;		//現在の表示位置Ｘ
	uint_t			m_text_y;		//現在の表示位置Ｙ
	uint_t			m_text_x_pitch;	//文字送りピッチＸ
	uint_t			m_text_y_pitch;	//文字送りピッチＹ
	Timer			m_timer;		//ウェイト用タイマー
	
	// 文字表示位置のインクリメント
	// int inc：何byteインクリメントするか→１or2
	void increment_text_pos(int inc){
		// テキスト描画エリアからはみ出してしまう
		// 場合には改行操作をする
		if((m_text_x + m_text_x_pitch*inc)
			< (m_textarea.right - m_text_x_pitch*2))
		{
			m_text_x += m_text_x_pitch*inc;
		}else{
			m_text_x = m_textarea.left;
			
			if((m_text_y + m_text_y_pitch)
				< (m_textarea.bottom - m_text_y_pitch))
			{
				m_text_y += m_text_y_pitch;
			}else{
				// 1ページの表示制限を越えてしまう場合は、
				// 警告を表示して強制終了
				// ※改ページ動作は未実装
				msgbox("画面の終端に達しました");
				quit_program();
			}
		}
	}
	
	bool check_control_char(){
		//テキストの１バイト文字をチェックし、
		//制御文字であれば処理して true を返し、それ以外は
		//false を返す
		switch ( *m_textp ) {
		case '[': call_command(); //コマンド処理部を呼ぶ
			++m_textp;
			return true;
		case 0x09: //TAB
		case 0x0a: //LF
		case 0x0d: //CR
			return true; //何もしないで戻る==無視♪
		}
		return false; //制御文字に該当しなかった → falseを返す
	}
	
	bool call_command(){
		cstring command;
		
		//[]の囲みの部分を取得
		++m_textp;
		for(int flag=1; flag!=0; ++m_textp){
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				msgbox("スクリプトの[と]の対応が間違っています");
				return false;
			}
			if(*m_textp == '[') ++flag;
			if(*m_textp == ']') --flag;
			command.push_back(*m_textp);
		}
		// 最後尾の余計な]を削除
		command.erase(command.end()-1);
		if(!m_lua.dostr(command)){
			msgbox(m_lua.tostr(-1));
			return false;
		}
		return true;
	}
public:
	bool	is_running;
	
	TextEngine(): is_running(false) {}
	
	bool open(uint_t screen_hdc){
		m_wait = 100, m_fontsize = 20;
		
		m_face_color = color_rgb(100,200,200),
		m_shadow_color = color_rgb(10,10,10);
		
		m_textarea.left = m_textarea.top = 20,
		m_textarea.right = 640-m_textarea.left,
		m_textarea.bottom = 480-m_textarea.top;
		
		m_text_x = m_textarea.left, m_text_y = m_textarea.top,
		
		m_text_x_pitch = m_fontsize/2,
		m_text_y_pitch = m_fontsize*130/100;
		
		if(!m_font.open(m_fontsize, 600, "ＭＳ 明朝")){
			msgbox("フォントの作成に失敗");
			return false;
		}
		
		// テキストレイヤー作成
		if(!m_gdi.open(m_screen = screen_hdc,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom))
		{
			msgbox("テキストレイヤーの作成に失敗");
			return false;
		}
		return true;
	}
	
	void set(_lpcSTR str){
		if(!is_running){
			m_text = str;
			m_textp = (uchar_t*)m_text;
			// テキストの準備が出来たらrunning可能にする
			is_running = true;
			m_timer.start();
		}
	}
	
	// エンジンにコマンドを登録
	void regist(_lpcSTR name, int (*func)(lua_State *)){
		m_lua.regist(name, func);
	}
	
	// テキストエンジン本体
	void run(){
		// テキストレイヤー描画
		m_gdi.blt(m_screen, 0, 0,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom);
		
		if(is_running){
			// 処理が終わったらrunning不可能にする
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				is_running = false;
				return;
			}
			
			//指定時間経過していない場合→Mainloopに戻る
			if(!m_timer.check(m_wait)) return;
			m_timer.start();
			
			//■１文字を表示する
			m_gdi.select_object(m_font);
			if((uchar_t)*m_textp < (uchar_t)0x80){
				//コントロール文字かどうかを判断し、
				//該当しなければ画面に出力
				if(!check_control_char()){
					m_gdi.text_out3D(m_text_x, m_text_y,
						m_face_color, m_shadow_color, (_lpcSTR)m_textp, 1);
					increment_text_pos(1);	//文字表示位置のインクリメント=1byte
				}
				++m_textp;	//テキストポインタを１バイト進める
			}else{
				//２バイト文字の場合は２バイトずつ出力
				m_gdi.text_out3D(m_text_x, m_text_y,
					m_face_color, m_shadow_color, (_lpcSTR)m_textp, 2);
				increment_text_pos(2);	//文字表示位置のインクリメント=2byte
				m_textp += 2;	//テキストポインタを２バイト進める	
			}
		}
	}
}g_text_engine;

inline bool engine_open(uint_t screen_hdc){
	return g_text_engine.open(screen_hdc);
}

inline void engine_set(_lpcSTR str){
	g_text_engine.set(str);
}

inline void engine_regist(_lpcSTR name, int (*func)(lua_State *)){
	g_text_engine.regist(name, func);
}

inline void engine_can_run(bool flag){
	g_text_engine.is_running = flag;
}

inline void engine_run(){
	g_text_engine.run();
}

