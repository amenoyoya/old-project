include "analyze"

local fe = FileEnumerator"texts"
local timer = Timer()

while true {
	local path = fe->get()
	
	if path->str() == "" {break}
	analyze(File->load(path))
}

print(timer->passage())
os.execute"pause"

/* --- ver. 1 --- */
// string.gmatch, io.open: 48 msec
// string.Analyzer, s3.File: 51 msec
// string.Analyzer, ffi.FileWriter: 47 msec

/* --- ver. 2 --- */
// string.Analyzer, s3.File: 51 msec
//  setmetatableの分だけコストがかかっている可能性
