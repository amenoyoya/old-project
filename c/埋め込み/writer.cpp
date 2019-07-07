#include <lemo/core.h>

using namespace lemo;

int main(){
	File file("target.exe", "rb+");
	Binary bin;
	string name[] = {
		"Hello.txt",
		"NewWorld.txt",
		"美麗刹那.txt"
	}, data[] = {
		"hello, world……なんて言うと思っていたのか?",
		"そいつはもう古いのだよ\n\t新しい時代に乾杯",
		"新世界へ\n語れ超越の物語!!"
	};
	size_t listsize = 0, cpos = 4; // ファイル名リストサイズ、内容が始まる地点
	
	if(file.failed()) return 1;
	
	// 内容が始まる地点を計算
	// 最初の4バイトはリストサイズ用
	for(int i = 0; i < 3; ++i){
		// {name文字数(size_t)、内容位置(size_t)、内容文字数(size_t) = 12byte} + name文字数
		cpos += (12 + name[i].size());
	}
	listsize = cpos;
	
	// ファイル名リスト
	bin.pushVal(3);
	for(int i = 0; i < 3; ++i){
		bin.pushStrData(name[i]);
		bin.pushVal(cpos); // 内容位置
		bin.pushVal(data[i].size()); // 内容文字数
		// 内容位置更新
		cpos += data[i].size();
	}
	
	// 内容リスト
	for(int i = 0; i < 3; ++i) bin.pushStr(data[i]);
	
	// 暗号化
	for(size_t i = 0; i < bin.size(); ++i){
		if(i % 2 == 0) bin[i] += i;
		else if(i % 3 == 0) bin[i] -= i;
		else bin[i] = ~bin[i];
	}
	
	// シグネチャー＆データサイズ
	bin.pushVal(listsize);
	bin.pushVal(cpos);
	bin.pushStr("lArc");
	
	file.seek(0, SEEK_END);
	file.write(bin, bin.size());
	return 0;
}
