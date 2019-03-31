/*
 * time: 5.10 sec
 */

#include <cstdio>
#include <fstream>
#include <stack>

#define XBYAK_NO_OP_NAMES
#include "xbyak/xbyak.h"

using namespace std;

const auto MEMSIZE = 30000, CODESIZE = 50000;

auto tolabel(char ch, int num)->char*{
	static char labelbuf[1024];
	snprintf(labelbuf, sizeof(labelbuf), "%c%d", ch, num);
	return labelbuf;
}

auto parse(Xbyak::CodeGenerator &gen, ifstream &input, int membuf[MEMSIZE])->void{
	gen.push(gen.ebx);
	auto memreg = gen.ebx, eax = gen.ebx;
	auto mem = gen.dword[memreg];
	gen.mov(memreg, (int)membuf);
	
	stack<int> labelstack;
	int labelnum = 0, ch;
	
	while(EOF != (ch = input.get())){
		switch(ch){
		case '+':
			gen.inc(mem); break;
		case '-':
			gen.dec(mem); break;
		case '>':
			gen.add(memreg, 4); break;
		case '<':
			gen.add(memreg, -4); break;
		case ',':
			gen.call((void*)getchar);
			gen.mov(mem, gen.eax);
			break;
		case '.':
			gen.push(mem);
			gen.call((void*)putchar);
			gen.pop(gen.eax);
			break;
		case '[':
			gen.L(tolabel('L', labelnum));
			gen.mov(gen.eax, mem);
			gen.test(gen.eax, gen.eax);
			gen.jz(tolabel('R', labelnum), Xbyak::CodeGenerator::T_NEAR);
			labelstack.push(labelnum++);
			break;
		case ']':
			auto begin = labelstack.top();
			labelstack.pop();
			gen.jmp(tolabel('L', begin), Xbyak::CodeGenerator::T_NEAR);
			gen.L(tolabel('R', begin));
			break;
		}
	}
	gen.pop(gen.ebx);
	gen.ret();
}

inline auto execute(Xbyak::CodeGenerator &gen)->void{
	((void(*)())gen.getCode())();
}

auto main(int argc, char *argv[])->int{
	int membuf[MEMSIZE];
	Xbyak::CodeGenerator gen(CODESIZE);
	ifstream file("mandelbrot.b");
	
	parse(gen, file, membuf);
	execute(gen);
	return 0;
}
