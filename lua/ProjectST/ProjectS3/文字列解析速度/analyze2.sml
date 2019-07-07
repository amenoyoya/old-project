require "libstd.StringAnalyzer"

setCurrentDir(Path(getArgv(0)))
local file = File(Path"ret.txt", "w")

local def matchnum(a){
	local c = a->str()->c(a->tellb())
	
	return 48 <= c & c < 58
}

local def matchlist(a, list){
	local i, c = 0, list->c(0)
	
	while c {
		if a->str()->c(a->tellb()) == c {return true}
		i = i + 1
		c = list->c(i)
	}
	return false
}

def analyze(str){
	local a = str->Analyzer()
	
	while !a->eof(){
		if matchnum(a) {
			local pos = a->tellb()
			
			a->seekb(1)
			if matchlist(a, "AoSiPuNe") {
				a->seekb(1)
				file->puts(a->str()->csub(pos, 2).."\n")
			}
		}else{
			a->seek(1)
		}
	}
}
