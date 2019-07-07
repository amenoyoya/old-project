#include <figit/core.h>

using namespace figit;

int main(){
	ArchiveCreator ac("package.arc");
	
	ArchiveFile::setKey("�G���G��");
	ac.pushFile("program", _U8("texts/�v��g����.txt"))
		->pushData("01.txt", "Hello, world")->flush();
	u8print(ArchiveFile::read("package/program"));
	u8print(ArchiveFile::read("package/01.txt"));
	return system("pause");
}
