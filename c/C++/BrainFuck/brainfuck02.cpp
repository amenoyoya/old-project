/*
 * time: 55.34 sec
 */

#include <cstdio>
#include <fstream>
#include <vector>
#include <stack>

using namespace std;

const auto MEMSIZE = 30000;

struct Instruction{
	char op;
	size_t jmp;
};

auto parse(vector<Instruction> &codes, ifstream &input)->void{
	int ch;
	stack<int> pcstack;
	Instruction code;
	
	while(EOF != (ch = input.get())){
		switch(code.op = ch){
		case '+': case '-': case '>': case '<': case ',': case '.':
			codes.push_back(code);
			break;
		case '[':
			pcstack.push(codes.size());
			codes.push_back(code);
			break;
		case ']':
			auto begin = pcstack.top();
			pcstack.pop();
			codes[begin].jmp = codes.size();
			code.jmp = begin - 1;
			codes.push_back(code);
			break;
		}
	}
	codes.push_back({'\0', 0});
}

auto execute(vector<Instruction> &codes, int membuf[MEMSIZE])->void{
	auto mem = membuf;
	for(size_t pc = 0; codes[pc].op; ++pc){
		auto &code = codes[pc];
		
		switch(code.op){
		case '+':
			++*mem; break;
		case '-':
			--*mem; break;
		case '>':
			++mem; break;
		case '<':
			--mem; break;
		case ',':
			*mem = getchar(); break;
		case '.':
			putchar(*mem); break;
		case '[':
			if(*mem == 0) pc = code.jmp;
			break;
		case ']':
			pc = code.jmp; break;
		}
	}
}

auto main(int argc, char *argv[])->int{
	int membuf[MEMSIZE];
	vector<Instruction> codes;
	ifstream file("mandelbrot.b");
	
	parse(codes, file);
	execute(codes, membuf);
	return 0;
}
