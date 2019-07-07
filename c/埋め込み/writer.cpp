#include <lemo/core.h>

using namespace lemo;

int main(){
	File file("target.exe", "rb+");
	Binary bin;
	string name[] = {
		"Hello.txt",
		"NewWorld.txt",
		"���홋��.txt"
	}, data[] = {
		"hello, world�c�c�Ȃ�Č����Ǝv���Ă����̂�?",
		"�����͂����Â��̂���\n\t�V��������Ɋ��t",
		"�V���E��\n��꒴�z�̕���!!"
	};
	size_t listsize = 0, cpos = 4; // �t�@�C�������X�g�T�C�Y�A���e���n�܂�n�_
	
	if(file.failed()) return 1;
	
	// ���e���n�܂�n�_���v�Z
	// �ŏ���4�o�C�g�̓��X�g�T�C�Y�p
	for(int i = 0; i < 3; ++i){
		// {name������(size_t)�A���e�ʒu(size_t)�A���e������(size_t) = 12byte} + name������
		cpos += (12 + name[i].size());
	}
	listsize = cpos;
	
	// �t�@�C�������X�g
	bin.pushVal(3);
	for(int i = 0; i < 3; ++i){
		bin.pushStrData(name[i]);
		bin.pushVal(cpos); // ���e�ʒu
		bin.pushVal(data[i].size()); // ���e������
		// ���e�ʒu�X�V
		cpos += data[i].size();
	}
	
	// ���e���X�g
	for(int i = 0; i < 3; ++i) bin.pushStr(data[i]);
	
	// �Í���
	for(size_t i = 0; i < bin.size(); ++i){
		if(i % 2 == 0) bin[i] += i;
		else if(i % 3 == 0) bin[i] -= i;
		else bin[i] = ~bin[i];
	}
	
	// �V�O�l�`���[���f�[�^�T�C�Y
	bin.pushVal(listsize);
	bin.pushVal(cpos);
	bin.pushStr("lArc");
	
	file.seek(0, SEEK_END);
	file.write(bin, bin.size());
	return 0;
}
