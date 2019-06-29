#pragma once

#include <kiri/win32.h>

class TextEngine{
	GDI				m_gdi;			//�e�L�X�g���C���[
	uint_t			m_screen;		//�X�N���[��HDC
	cstring			m_text;
	uchar_t			*m_textp;		//Text pointer�i�e�L�X�g���߈ʒu���|�C���g���܂��j
	Font			m_font;			//�t�H���g
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
public:
	void init(){
		m_wait = 100, m_fontsize = 20;
		
		m_face_color = color_rgb(100,200,200),
		m_shadow_color = color_rgb(10,10,10);
		
		m_textarea.left = m_textarea.top = 20,
		m_textarea.right = 640-m_textarea.left,
		m_textarea.bottom = 480-m_textarea.top;
		
		m_text_x = m_textarea.left, m_text_y = m_textarea.top,
		
		m_text_x_pitch = m_fontsize/2,
		m_text_y_pitch = m_fontsize*130/100;
	}
	
	bool open(uint_t screen_hdc, _lpcSTR filename){
		init();
		m_font.open(m_fontsize, 600, "�l�r ����");
		
		// �e�L�X�g���C���[�쐬
		if(!m_gdi.open(m_screen = screen_hdc,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom))
		{
			msgbox("�e�L�X�g���C���[�̍쐬�Ɏ��s");
			return false;
		}
		
		if(cstring("") == (m_text = read_file(filename))){
			msgbox(cstring("�X�N���v�g�ǂݍ��݃G���[\n[")
				+filename+"]�����݂��Ȃ����A�T�C�Y��0�ł�");
			return false;
		}
		m_textp = (uchar_t*)m_text;
		m_timer.start();
		return true;
	}
	
	// �e�L�X�g�G���W���{��
	void run(){
		// �e�L�X�g���C���[�`��
		m_gdi.blt(m_screen, 0, 0,
			m_textarea.left + m_textarea.right,
			m_textarea.top + m_textarea.bottom);
		
		if(m_textp >= (uchar_t*)m_text+m_text.size()) return;
		
		//�w�莞�Ԍo�߂��Ă��Ȃ��ꍇ��Mainloop�ɖ߂�
		if(!m_timer.check(m_wait)) return;
		m_timer.start();
		
		//���P������\������
		m_gdi.select_object(m_font);
		if((uchar_t)*m_textp < (uchar_t)0x80){
			m_gdi.text_out3D(m_text_x, m_text_y,
				m_face_color, m_shadow_color, (_lpcSTR)m_textp, 1);
			increment_text_pos(1);	//�����\���ʒu�̃C���N�������g=1byte
			++m_textp;	//�e�L�X�g�|�C���^���P�o�C�g�i�߂�
		}else{
			//�Q�o�C�g�����̏ꍇ�͂Q�o�C�g���o��
			m_gdi.text_out3D(m_text_x, m_text_y,
				m_face_color, m_shadow_color, (_lpcSTR)m_textp, 2);
			increment_text_pos(2);	//�����\���ʒu�̃C���N�������g=2byte
			m_textp += 2;	//�e�L�X�g�|�C���^���Q�o�C�g�i�߂�	
		}
	}
};
