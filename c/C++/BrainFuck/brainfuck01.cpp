/*
 * time: 104.94 sec
 */

#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

const auto MEMSIZE = 30000;

auto parse(string &codes, ifstream &input)->void{
	int ch;
	while(EOF != (ch = input.get())){
		switch(ch){
		case '+':
		case '-':
		case '>':
		case '<':
		case ',':
		case '.':
		case '[':
		case ']':
			codes.push_back(ch);
			break;
		}
	}
}

auto execute(string &codes, int membuf[MEMSIZE])->void{
	auto mem = membuf;
	for(char *pc = (char*)codes.c_str(); *pc; ++pc){
		switch(*pc){
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
			if(*mem == 0){
				for(auto depth = 1; depth;){
					switch(*(++pc)){
					case '[':
						++depth; break;
					case ']':
						--depth; break;
					}
				}
			}
			break;
		case ']':
			for(auto depth = -1; depth;){
				switch(*(--pc)){
				case '[':
					++depth; break;
				case ']':
					--depth; break;
				}
			}
			--pc;
			break;
		}
	}
}

auto main(int argc, char *argv[])->int{
	int membuf[MEMSIZE];
	string codes;
	ifstream file("mandelbrot.b");
	parse(codes, file);
	execute(codes, membuf);
	return 0;
}
