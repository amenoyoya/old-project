#include <figit/core.h>

using namespace figit;

int main(){
	ArchiveCreator ac("package.arc");
	
	ArchiveFile::setKey("ƒGƒƒGƒ");
	ac.pushFile("program", _U8("texts/ƒvƒgƒ‰ƒ€.txt"))
		->pushData("01.txt", "Hello, world")->flush();
	u8print(ArchiveFile::read("package/program"));
	u8print(ArchiveFile::read("package/01.txt"));
	return system("pause");
}
