setCurrentDir(Path(getArgv(0)))
local file = io.open("ret.txt", "w")

def analyze(str){
	for ret in str->gmatch"[0-9][AoSiPuNe]" {file->write(ret.."\n")}
}
