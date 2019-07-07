#pragma once

#include <kiri/win32.h>
#include <kiri/script.h>

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
	Timer			m_timer;		//�E�F�C�g�p�^�C�}�[
	
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
			case '[':
				call_command();	//�R�}���h���������Ă�
				++m_textp;
				return true;
			case ';':
				linefeed();		//���s����
				return true;
			case 0x09: //TAB
			case 0x0a: //LF
			case 0x0d: //CR
				return true; //�������Ȃ��Ŗ߂�==������
			}
		}
		return false; //���䕶���ɊY�����Ȃ����� �� false��Ԃ�
	}
	
	bool call_command(){
		cstring command;
		
		//[]�݂̈͂̕������擾
		++m_textp;
		for(int flag=1; flag!=0; ++m_textp){
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				msgbox("�X�N���v�g��[��]�̑Ή����Ԉ���Ă��܂�");
				return false;
			}
			if(*m_textp == '[') ++flag;
			if(*m_textp == ']') --flag;
			command.push_back(*m_textp);
		}
		// �Ō���̗]�v��]���폜
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
		m_wait = 80, m_fontsize = 20;
		
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
		return true;
	}
	
	void set(_lpcSTR str){
		if(!is_running){
			m_text = str;
			m_textp = (uchar_t*)m_text;
			// �e�L�X�g�̏������o������running�\�ɂ���
			is_running = true;
			m_timer.start();
		}
	}
	
	// �G���W���ɃR�}���h��o�^
	void regist(_lpcSTR name, int (*func)(lua_State *)){
		m_lua.regist(name, func);
	}
	
	// �e�L�X�g�G���W���{��
	void run(){
		// �e�L�X�g���C���[�`��
		m_layer.flip();
		
		if(is_running){
			// �������I�������running�s�\�ɂ���
			if(m_textp >= (uchar_t*)m_text+m_text.size()){
				is_running = false;
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

inline void engine_can_run(bool flag){
	g_text_engine.is_running = flag;
}

inline void engine_run(){
	g_text_engine.run();
}

