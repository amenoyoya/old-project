#include "testlib/string.h"

File file(Path("ret.txt"), "w");

/*s32 matchlist(const char *str, const char *tbl[], s32 size){
	for(s32 i = 0; i < size; ++i){
		if(strncmp(str, tbl[i], strlen(tbl[i])) == 0) return i;
	}
	return -1;
}

void analyze(const char *str){
	u32 size = strlen(str), i = 0;
	const char *num[10] = {"0","1","2","3","4","5","6","7","8","9"};
	const char *chr[8]  = {"A","o","S","i","P","u","N", "e"};
	
	while(i < size-1){
		s32 n = matchlist(str + i, num, 10);
		if(n != -1){
			++i;
			s32 c = matchlist(str + i, chr, 8);
			if(c != -1){
				file.puts(string(num[n])+chr[c]+"\n");
				++i;
			}
		}else{
			++i;
		}
	}
}*/

/*void analyze(const string &str){
	str::Analyzer a(str);
	static string num[] = {"0","1","2","3","4","5","6","7","8","9"},
		chr[] = {"A","o","S","i","P","u","N", "e"};
	
	while(!a.eof()){
		if(a.matchList(10, num)){
			string n = a.word1();
			
			a.seekb(1);
			if(a.matchList(8, chr)){
				file.puts(n+a.word1()+"\n");
				a.seekb(1);
			}
		}else{
			a.seekb(1);
		}
	}
}*/

inline bool matchnum(const char *str){
	u8 c = *str; return 47 < c && c < 58;
}

s8 matchlist(const char *str, const char *tbl){
	u32 size = strlen(tbl);
	
	for(u32 i = 0; i < size; ++i){
		if(*str == *(tbl + i)) return true;
	}
	return 0;
}

void analyze(const string &str){
	static const char *chr = "AoSiPuNe";
	/*u32 size = str.size();
	
	for(u32 i = 0; i < size-1; ++i){
		if(matchnum(str.c_str()+i) && matchlist(str.c_str()+i+1, chr)){
			file.puts(str.substr(i, 2)+"\n"); ++i;
		}
	}*/
	str::Analyzer a(str);
	
	while(!a.eof()){
		if(matchnum(a.ptr()) && matchlist(a.ptr()+1, chr)){
			file.puts(a.substr(a.tellb(), 2)+"\n");
			a.seekb(1);
		}
		a.seekb(1);
	}
}

__main(){
	FileIterator fi(Path("RandomChars/texts"));
	Timer timer;
	
	while(true){
		Path path = fi.get();
		
		if(path.str() == "") break;
		analyze(File::load(path).c_str());
	}
	printf("%d\n", timer.passage());
	return system("pause");
}
