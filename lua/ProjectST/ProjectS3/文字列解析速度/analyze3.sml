require "libstd.StringAnalyzer"

setCurrentDir(Path(getArgv(0)))

local lib = ffi.load"file"
ffi.cdef[[
void *newFileWriter(const char *filename);
void deleteFileWriter(void *obj);
void FileWriter_puts(void *obj, const char *str);
]]

local def FileWriter(filename){
	local @ = ${
		m_handle = ffi.gc(lib.newFileWriter(filename), lib.deleteFileWriter),
		puts = def(@, str){
			lib.FileWriter_puts(@.m_handle, str)
		}
	}
	return @
}

local file = FileWriter("ret.txt")

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
