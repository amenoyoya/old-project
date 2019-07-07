include "analyze2"

local fe = FileEnumerator(Path"texts")
local timer = Timer()

while true {
	local path = fe->get()
	
	if path->str() == "" {break}
	//analyze(ffi.string(lib.File_load(path->str())))
	analyze(File->load(path))
	//analyze(LoadFile(path->str()));
}

print(timer->passage())
os.execute"pause"

// string.gmatch, io.open: 48 msec
// string.Analyzer, s3.File: 51 msec
// string.Analyzer, ffi.FileWriter: 47 msec
