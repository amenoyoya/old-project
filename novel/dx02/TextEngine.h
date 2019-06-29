#pragma once

#include <kiri/d3d9.h>

class TextEngine{
	DxString		m_text;
	size_t			m_textp;		//Text pointer�i�e�L�X�g���߈ʒu���|�C���g���܂��j
	size_t			m_fontsize;
	uint_t			m_face_color;	//�����F
	uint_t			m_shadow_color;	//�e�F
	uint_t			m_wait;			//�P�����\���̃E�F�C�g
	Rect			m_textarea;		//�e�L�X�g�\���̈�
	uint_t			m_text_x;		//���݂̕\���ʒu�w
	uint_t			m_text_y;		//���݂̕\���ʒu�x
	vector<uint_t>	m_xArray, m_yArray;
	Timer			m_timer;		//�E�F�C�g�p�^�C�}�[
	
	// �����\���ʒu�̃C���N�������g
	void increment_text_pos(){
		// �e�L�X�g�`��G���A����͂ݏo���Ă��܂�
		// �ꍇ�ɂ͉��s���������
		float x_pitch = m_text.p_char(m_textp)->width(),
			y_pitch = m_text.p_char(m_textp)->height();
		
		if(m_text_x + x_pitch < m_textarea.right - x_pitch){
			m_text_x += x_pitch;
		}else{
			m_text_x = m_textarea.left;
			
			if(m_text_y + y_pitch < m_textarea.bottom - y_pitch){
				m_text_y += y_pitch;
			}else{
				// 1�y�[�W�̕\���������z���Ă��܂��ꍇ�́A
				// �x����\�����ċ����I��
				// �����y�[�W����͖�����
				msgbox("��ʂ̏I�[�ɒB���܂���");
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
		m_text.font(m_fontsize, 600, "���C���I");
		m_textp = 0;
		m_timer.start();
	}
	
	// �e�L�X�g�G���W���{��
	void run(){
		// ��ɕ\������Ă��镔��
		for(size_t i=0; i<m_textp; ++i){
			m_text.p_char(i)->draw3D(m_xArray[i], m_yArray[i],
				m_face_color, m_shadow_color);
		}
		
		if(m_textp >= m_text.len()) return;
		
		//�w�莞�Ԍo�߂��Ă��Ȃ��ꍇ��Mainloop�ɖ߂�
		if(!m_timer.check(m_wait)) return;
		m_timer.start();
		
		//���P������\������
		increment_text_pos();	//�����\���ʒu�̃C���N�������g
		++m_textp;	//�e�L�X�g�|�C���^���P�o�C�g�i�߂�
	}
};
