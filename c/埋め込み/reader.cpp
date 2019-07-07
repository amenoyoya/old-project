#include <lemo/core.h>
#include <lemo/win32.h>
#include <map>

using namespace lemo;

struct ps_t{
	size_t pos, size;
};

int main(){
	File file("target.exe", "rb");
	char sig[5] = {0, 0, 0, 0, 0};
	size_t datasize = 0, listsize = 0, num = 0;
	map<string, ps_t> fileList;
	Binary bin;
	
	if(file.failed()) return 1;
	
	// lArcに対応しているか確認
	file.seek(-4, SEEK_END);
	file.rawRead(sig, 4);
	msgbox(sig);
	if(strcmp(sig, "lArc") != 0){
		puts("lArc未対応");
		return system("pause");
	}
	
	// ファイル名リスト読み込み
	file.seek(-12, SEEK_END);
	file.rawRead(&listsize, 4);
	file.rawRead(&datasize, 4);
	file.seek(-12-datasize, SEEK_END);
	file.read(&bin, listsize);
	
	// 復号化
	for(size_t i = 0; i < bin.size(); ++i){
		if(i % 2 == 0) bin[i] -= i;
		else if(i % 3 == 0) bin[i] += i;
		else bin[i] = ~bin[i];
	}
	
	// ファイル名リスト作成
	num = bin.getVal<size_t>();
	for(size_t i = 0; i < num; ++i){
		Binary buf;
		string name = bin.getStrData(), content;
		ps_t ps;
		
		ps.pos = bin.getVal<size_t>(), ps.size = bin.getVal<size_t>();
		fileList[name] = ps;
		// 内容読み込み
		file.seek(-12-datasize+ps.pos, SEEK_END);
		file.read(&buf, ps.size);
		// 復号化
		for(size_t n = 0; n < buf.size(); ++n){
			if((n+ps.pos) % 2 == 0) buf[n] -= (n+ps.pos);
			else if((n+ps.pos) % 3 == 0) buf[n] += (n+ps.pos);
			else buf[n] = ~buf[n];
		}
		content = buf.ptr();
		printf("[%d]%s : %d～%d\n%s\n\n", i, name.c_str(), ps.pos, ps.size, content.c_str());
	}
	return system("pause");
}
