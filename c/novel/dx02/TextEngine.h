#pragma once

#include <kiri/d3d9.h>

class TextEngine{
	DxString		m_text;
	size_t			m_textp;		//Text pointer（テキスト解釈位置をポイントします）
	size_t			m_fontsize;
	uint_t			m_face_color;	//文字色
	uint_t			m_shadow_color;	//影色
	uint_t			m_wait;			//１文字表示のウェイト
	Rect			m_textarea;		//テキスト表示領域
	uint_t			m_text_x;		//現在の表示位置Ｘ
	uint_t			m_text_y;		//現在の表示位置Ｙ
	vector<uint_t>	m_xArray, m_yArray;
	Timer			m_timer;		//ウェイト用タイマー
	
	// 文字表示位置のインクリメント
	void increment_text_pos(){
		// テキスト描画エリアからはみ出してしまう
		// 場合には改行操作をする
		float x_pitch = m_text.p_char(m_textp)->width(),
			y_pitch = m_text.p_char(m_textp)->height();
		
		if(m_text_x + x_pitch < m_textarea.right - x_pitch){
			m_text_x += x_pitch;
		}else{
			m_text_x = m_textarea.left;
			
			if(m_text_y + y_pitch < m_textarea.bottom - y_pitch){
				m_text_y += y_pitch;
			}else{
				// 1ページの表示制限を越えてしまう場合は、
				// 警告を表示して強制終了
				// ※改ページ動作は未実装
				msgbox("画面の終端に達しました");
				quit_program();
			}
		}
		m_xArray.push_back(m_text_x), m_yArray.push_back(m_text_y);
	}
public:
	void init(){
		m_wait = 100, m_fontsize = 23;
		
		m_face_color = d3d_rgb(100,200,200),
		m_shadow_color = d3d_rgb(10,10,10);
		
		m_textarea.left = m_textarea.top = 10,
		m_textarea.right = 640-m_textarea.left,
		m_textarea.bottom = 480-m_textarea.top;
		
		m_xArray.push_back(m_text_x = m_textarea.left);
		m_yArray.push_back(m_text_y = m_textarea.top);
	}
	
	void open(DirectX *dx, _lpcSTR filename){
		cstring text = read_file(filename);
		
		init();
		dx->create_string(&m_text);
		m_text.regist(text);
		m_text.font(m_fontsize, 600, "メイリオ");
		m_textp = 0;
		m_timer.start();
	}
	
	// テキストエンジン本体
	void run(){
		// 常に表示されている部分
		for(size_t i=0; i<m_textp; ++i){
			m_text.p_char(i)->draw3D(m_xArray[i], m_yArray[i],
				m_face_color, m_shadow_color);
		}
		
		if(m_textp >= m_text.len()) return;
		
		//指定時間経過していない場合→Mainloopに戻る
		if(!m_timer.check(m_wait)) return;
		m_timer.start();
		
		//■１文字を表示する
		increment_text_pos();	//文字表示位置のインクリメント
		++m_textp;	//テキストポインタを１バイト進める
	}
};
