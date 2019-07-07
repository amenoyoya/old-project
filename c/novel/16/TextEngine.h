#pragma once

#include <kiri/win32.h>
#include <kiri/script.h>

// フラグ
enum{
	_None, _Message, _Delay, _Wait
};

class TextEngine{
	Lua				m_lua;			//スクリプト実行用Luaエンジン
	Layer			m_layer;		//テキストレイヤー
	cstring			m_text;
	uchar_t			*m_textp;		//Text pointer（テキスト解釈位置をポイントします）
	uint_t			m_fontsize;		//フォントサイズ
	uint_t			m_face_color;	//文字色
	uint_t			m_shadow_color;	//影色
	uint_t			m_wait;			//１文字表示のウェイト
	Rect			m_textarea;		//テキスト表示領域
	uint_t			m_text_x;		//現在の表示位置Ｘ
	uint_t			m_text_y;		//現在の表示位置Ｙ
	uint_t			m_text_x_pitch;	//文字送りピッチＸ
	uint_t			m_text_y_pitch;	//文字送りピッチＹ
	Timer			m_timer;		//文字送りタイマー
	Timer			m_cursor_timer;	//カーソルブリンクタイマー
	uint_t			m_cursor_wait;	//カーソルブリンクウェイト
	Bitmap			m_cursor;		//カーソル画像
	Layer			m_parts;		//カーソルブリンク用クリアレイヤー
	
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
	
	// 改行処理
	void linefeed(){
		m_text_x = m_textarea.left;
		m_text_y += m_text_y_pitch;
		
		// ※ここではまだ画面最下端を飛び出すところまでは
		// 想定していない
		/*if(m_text_y > m_textarea.bottom-m_text_y_pitch){
			本来、ここで「改ページ」処理を呼ぶ筈だが･･･
			まだ作ってない（汗 ^^;）
		}*/
	}
	
	// カーソルブリンク
	void cursor_blink(){
		flag = _Wait;
		
		// 背景を保存しておく
		m_layer.blt(m_parts, 0, 0, 25, 25, m_text_x, m_text_y);
		
		//１発目のカーソル表示
		m_layer.draw_transparent_bmp(m_cursor,
			m_text_x, m_text_y, 25, 25, color_rgb(0,0,0));
		//タイマーショット
		m_cursor_timer.start();
	}
	
	// カーソルブリンクタスク
	void task_cursor_blink(){
		if(flag == _Wait){
			// カーソル表示状態
			static bool cursor_state = true;
			
			// えんたーが押された場合、タスク終了する
			if(v_key(VK::enter) == 1){
				flag = _Message;
				m_parts.blt(m_layer, m_text_x, m_text_y, 25, 25);
				return;
			}
			
			// 指定時間経過したか？ → していなければ Mainloop に戻る
			if(!m_cursor_timer.check(m_cursor_wait)) return;
			m_cursor_timer.start();
			
			if(cursor_state){
				// カーソル表示状態
				m_layer.draw_bmp(m_cursor, m_text_x, m_text_y, 25, 25);
				cursor_state = false; //次回はOFF
			}else{
				// カーソル非表示状態
				m_parts.blt(m_layer, m_text_x, m_text_y, 25, 25);
				cursor_state = true; //次回はON
			}
		}
	}
	
	//テキストの１バイト文字をチェックし、
	//制御文字であれば処理して true を返し、それ以外は
	//false を返す
	bool check_control_char(){
		static bool escape = false;		// エスケープシーケンス対応
		
		if(escape){
			// エスケープモードでは制御文字も通常表示
			return escape = false;
		}else{
			switch ( *m_textp ) {
			case '\\':
				escape = true;	//エスケープモードに入る
				return true;
			case ';':
				linefeed();		//改行処理
				return true;
			case '#':
				cursor_blink();	//カーソル待ち
				return true;
			case 0x09: //TAB
			case 0x0a: //LF
			case 0x0d: //CR
				return true; //何もしないで戻る==無視♪
			}
		}
		return false; //制御文字に該当しなかった → falseを返す
	}
public:
	uint_t	status, flag;
	
	TextEngine(): status(0), flag(_None) {}
	
	bool open(uint_t screen_hdc){
		m_wait = 80, m_fontsize = 20, m_cursor_wait = 200;
		
		m_face_color = color_rgb(100,200,200),
		m_shadow_color = color_rgb(10,10,10);
		
		m_textarea.left = m_textarea.top = 20,
		m_textarea.right = 640-m_textarea.left,
		m_textarea.bottom = 480-m_textarea.top;
		
		m_text_x = m_textarea.left, m_text_y = m_textarea.top,
		
		m_text_x_pitch = m_fontsize/2,
		m_text_y_pitch = m_fontsize*130/100;
		
		// テキストレイヤー作成
		if(!m_layer.open(screen_hdc,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom))
		{
			msgbox("テキストレイヤーの作成に失敗");
			return false;
		}
		
		if(!m_layer.font(m_fontsize, 600, "ＭＳ 明朝")){
			msgbox("フォントの作成に失敗");
			return false;
		}
		
		// カーソル画像読み込み
		if(!m_cursor.open("cursor.bmp")){
			msgbox("cursor.bmpの読み込みに失敗");
			return false;
		}
		return m_parts.open(m_layer, 25, 25);
	}
	
	void set(_lpcSTR str){
		if(flag == _None){
			m_text = str;
			m_textp = (uchar_t*)m_text;
			// テキストの準備が出来たらrunning可能にする
			flag = _Message;
			m_timer.start();
		}
	}
	
	// エンジンにコマンドを登録
	void regist(_lpcSTR name, int (*func)(lua_State *)){
		m_lua.regist(name, func);
	}
	
	// スクリプト実行
	void dofile(_lpcSTR name){
		if(!m_lua.dofile(name)) msgbox(m_lua.tostr(-1));
	}
	
	// テキストエンジン本体
	void run(){
		// テキストレイヤー描画
		m_layer.flip();
		
		// カーソルブリンクタスク
		task_cursor_blink();
		
		if(flag == _Message){
			// 処理が終わったらrunning不可能にする
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				flag = _None;
				++status;
				return;
			}
			
			//指定時間経過していない場合→Mainloopに戻る
			if(!m_timer.check(m_wait)) return;
			m_timer.start();
			
			//■１文字を表示する
			if((uchar_t)*m_textp < (uchar_t)0x80){
				//コントロール文字かどうかを判断し、
				//該当しなければ画面に出力
				if(!check_control_char()){
					m_layer.text_out3D(m_text_x, m_text_y,
						m_face_color, m_shadow_color, (_lpcSTR)m_textp, 1);
					increment_text_pos(1);	//文字表示位置のインクリメント=1byte
				}
				++m_textp;	//テキストポインタを１バイト進める
			}else{
				//２バイト文字の場合は２バイトずつ出力
				m_layer.text_out3D(m_text_x, m_text_y,
					m_face_color, m_shadow_color, (_lpcSTR)m_textp, 2);
				increment_text_pos(2);	//文字表示位置のインクリメント=2byte
				m_textp += 2;	//テキストポインタを２バイト進める	
			}
		}
	}
	
	operator uint_t() const{return m_layer;}
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

inline void engine_dofile(_lpcSTR name){
	g_text_engine.dofile(name);
}

inline void engine_run(){
	g_text_engine.run();
}

inline uint_t &engine_status(){
	return g_text_engine.status;
}

inline uint_t &engine_flag(){
	return g_text_engine.flag;
}
