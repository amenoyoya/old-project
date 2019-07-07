#pragma once

#include <figit2/core.h>

using namespace figit;

#define __export __declspec(dllexport)

extern "C"{
	inline __export void *iistr_new(const char *str){
		return (void*)new string(str);
	}
	
	inline __export void iiobj_delete(void *obj){
		if(obj){
			delete obj;
			obj = NULL;
		}
	}
}

class iiString{
	string m_source;
	char *m_pSource;
	u32 m_cur;
public:
	iiString(): m_pSource(NULL), m_cur(0) {}
	iiString(const string &src): m_source(src), m_pSource((char*)m_source.c_str()), m_cur(0) {}
	
	u32 const &tellb() const{return m_cur;} // ���݃|�C���^�ʒu
	const char *str() const{return m_source.c_str();} // ��͒��̃\�[�X������
	const char *ptr() const{return m_pSource;}
	
	// �؂�o��
	string substr(u32 start, u32 size=u32(-1)) const{
		return m_source.substr(start, size);
	}
	
	// �|�C���^���o�C�g���i�߂�
	void seekb(s32 mov){
		m_cur += mov;
		if(m_cur < 0) m_cur = 0;
		else if(m_cur > m_source.size()) m_cur = m_source.size();
		m_pSource = (char*)m_source.c_str() + m_cur;
	}
	
	// �|�C���^���I�[�ɒB������
	bool eof() const{
		return m_cur >= m_source.size();
	}
};
