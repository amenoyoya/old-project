#include <stdio.h>
#include <stdlib.h>

extern "C" __declspec(dllexport) void hello(){
	puts("hello world");
	system("pause");
}
