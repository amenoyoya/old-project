#include <sayo/core.h>

using namespace sayo;

int main(int argc, char *argv[]){
	if(argc < 2 || !isFile(argv[1])){
		puts("ソースファイルをコマンドライン引数に渡してください");
		return system("pause");
	}
	string str = File::read(argv[1]);
	
	replace(str, "<", "&lt;");
	replace(str, ">", "&gt;");
	replace(str, "\\", "&yen;");
	File::write(File::getName(argv[1])+".html.txt",
		"<pre><code>"+str+"</pre></code>");
	return 0;
}
