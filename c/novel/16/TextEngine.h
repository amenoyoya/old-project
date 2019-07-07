#pragma once

#include <kiri/win32.h>
#include <kiri/script.h>

// �t���O
enum{
	_None, _Message, _Delay, _Wait
};

class TextEngine{
	Lua				m_lua;			//�X�N���v�g���s�pLua�G���W��
	Layer			m_layer;		//�e�L�X�g���C���[
	cstring			m_text;
	uchar_t			*m_textp;		//Text pointer�i�e�L�X�g���߈ʒu���|�C���g���܂��j
	uint_t			m_fontsize;		//�t�H���g�T�C�Y
	uint_t			m_face_color;	//�����F
	uint_t			m_shadow_color;	//�e�F
	uint_t			m_wait;			//�P�����\���̃E�F�C�g
	Rect			m_textarea;		//�e�L�X�g�\���̈�
	uint_t			m_text_x;		//���݂̕\���ʒu�w
	uint_t			m_text_y;		//���݂̕\���ʒu�x
	uint_t			m_text_x_pitch;	//��������s�b�`�w
	uint_t			m_text_y_pitch;	//��������s�b�`�x
	Timer			m_timer;		//��������^�C�}�[
	Timer			m_cursor_timer;	//�J�[�\���u�����N�^�C�}�[
	uint_t			m_cursor_wait;	//�J�[�\���u�����N�E�F�C�g
	Bitmap			m_cursor;		//�J�[�\���摜
	Layer			m_parts;		//�J�[�\���u�����N�p�N���A���C���[
	
	// �����\���ʒu�̃C���N�������g
	// int inc�F��byte�C���N�������g���邩���Por2
	void increment_text_pos(int inc){
		// �e�L�X�g�`��G���A����͂ݏo���Ă��܂�
		// �ꍇ�ɂ͉��s���������
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
				// 1�y�[�W�̕\���������z���Ă��܂��ꍇ�́A
				// �x����\�����ċ����I��
				// �����y�[�W����͖�����
				msgbox("��ʂ̏I�[�ɒB���܂���");
				quit_program();
			}
		}
	}
	
	// ���s����
	void linefeed(){
		m_text_x = m_textarea.left;
		m_text_y += m_text_y_pitch;
		
		// �������ł͂܂���ʍŉ��[���яo���Ƃ���܂ł�
		// �z�肵�Ă��Ȃ�
		/*if(m_text_y > m_textarea.bottom-m_text_y_pitch){
			�{���A�����Łu���y�[�W�v�������ĂԔ��������
			�܂�����ĂȂ��i�� ^^;�j
		}*/
	}
	
	// �J�[�\���u�����N
	void cursor_blink(){
		flag = _Wait;
		
		// �w�i��ۑ����Ă���
		m_layer.blt(m_parts, 0, 0, 25, 25, m_text_x, m_text_y);
		
		//�P���ڂ̃J�[�\���\��
		m_layer.draw_transparent_bmp(m_cursor,
			m_text_x, m_text_y, 25, 25, color_rgb(0,0,0));
		//�^�C�}�[�V���b�g
		m_cursor_timer.start();
	}
	
	// �J�[�\���u�����N�^�X�N
	void task_cursor_blink(){
		if(flag == _Wait){
			// �J�[�\���\�����
			static bool cursor_state = true;
			
			// ���񂽁[�������ꂽ�ꍇ�A�^�X�N�I������
			if(v_key(VK::enter) == 1){
				flag = _Message;
				m_parts.blt(m_layer, m_text_x, m_text_y, 25, 25);
				return;
			}
			
			// �w�莞�Ԍo�߂������H �� ���Ă��Ȃ���� Mainloop �ɖ߂�
			if(!m_cursor_timer.check(m_cursor_wait)) return;
			m_cursor_timer.start();
			
			if(cursor_state){
				// �J�[�\���\�����
				m_layer.draw_bmp(m_cursor, m_text_x, m_text_y, 25, 25);
				cursor_state = false; //�����OFF
			}else{
				// �J�[�\����\�����
				m_parts.blt(m_layer, m_text_x, m_text_y, 25, 25);
				cursor_state = true; //�����ON
			}
		}
	}
	
	//�e�L�X�g�̂P�o�C�g�������`�F�b�N���A
	//���䕶���ł���Ώ������� true ��Ԃ��A����ȊO��
	//false ��Ԃ�
	bool check_control_char(){
		static bool escape = false;		// �G�X�P�[�v�V�[�P���X�Ή�
		
		if(escape){
			// �G�X�P�[�v���[�h�ł͐��䕶�����ʏ�\��
			return escape = false;
		}else{
			switch ( *m_textp ) {
			case '\\':
				escape = true;	//�G�X�P�[�v���[�h�ɓ���
				return true;
			case ';':
				linefeed();		//���s����
				return true;
			case '#':
				cursor_blink();	//�J�[�\���҂�
				return true;
			case 0x09: //TAB
			case 0x0a: //LF
			case 0x0d: //CR
				return true; //�������Ȃ��Ŗ߂�==������
			}
		}
		return false; //���䕶���ɊY�����Ȃ����� �� false��Ԃ�
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
		
		// �e�L�X�g���C���[�쐬
		if(!m_layer.open(screen_hdc,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom))
		{
			msgbox("�e�L�X�g���C���[�̍쐬�Ɏ��s");
			return false;
		}
		
		if(!m_layer.font(m_fontsize, 600, "�l�r ����")){
			msgbox("�t�H���g�̍쐬�Ɏ��s");
			return false;
		}
		
		// �J�[�\���摜�ǂݍ���
		if(!m_cursor.open("cursor.bmp")){
			msgbox("cursor.bmp�̓ǂݍ��݂Ɏ��s");
			return false;
		}
		return m_parts.open(m_layer, 25, 25);
	}
	
	void set(_lpcSTR str){
		if(flag == _None){
			m_text = str;
			m_textp = (uchar_t*)m_text;
			// �e�L�X�g�̏������o������running�\�ɂ���
			flag = _Message;
			m_timer.start();
		}
	}
	
	// �G���W���ɃR�}���h��o�^
	void regist(_lpcSTR name, int (*func)(lua_State *)){
		m_lua.regist(name, func);
	}
	
	// �X�N���v�g���s
	void dofile(_lpcSTR name){
		if(!m_lua.dofile(name)) msgbox(m_lua.tostr(-1));
	}
	
	// �e�L�X�g�G���W���{��
	void run(){
		// �e�L�X�g���C���[�`��
		m_layer.flip();
		
		// �J�[�\���u�����N�^�X�N
		task_cursor_blink();
		
		if(flag == _Message){
			// �������I�������running�s�\�ɂ���
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				flag = _None;
				++status;
				return;
			}
			
			//�w�莞�Ԍo�߂��Ă��Ȃ��ꍇ��Mainloop�ɖ߂�
			if(!m_timer.check(m_wait)) return;
			m_timer.start();
			
			//���P������\������
			if((uchar_t)*m_textp < (uchar_t)0x80){
				//�R���g���[���������ǂ����𔻒f���A
				//�Y�����Ȃ���Ή�ʂɏo��
				if(!check_control_char()){
					m_layer.text_out3D(m_text_x, m_text_y,
						m_face_color, m_shadow_color, (_lpcSTR)m_textp, 1);
					increment_text_pos(1);	//�����\���ʒu�̃C���N�������g=1byte
				}
				++m_textp;	//�e�L�X�g�|�C���^���P�o�C�g�i�߂�
			}else{
				//�Q�o�C�g�����̏ꍇ�͂Q�o�C�g���o��
				m_layer.text_out3D(m_text_x, m_text_y,
					m_face_color, m_shadow_color, (_lpcSTR)m_textp, 2);
				increment_text_pos(2);	//�����\���ʒu�̃C���N�������g=2byte
				m_textp += 2;	//�e�L�X�g�|�C���^���Q�o�C�g�i�߂�	
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
