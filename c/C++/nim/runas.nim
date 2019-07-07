const SW_SHOW = 5
proc exec(hwnd: pointer, verb: cstring, path: cstring,
    cmd: cstring, dir: cstring, mode: cint): cint {.header:"windows.h", importc:"ShellExecuteA".}

discard exec(nil, "runas", "cmd.exe", "/k", nil, SW_SHOW)
