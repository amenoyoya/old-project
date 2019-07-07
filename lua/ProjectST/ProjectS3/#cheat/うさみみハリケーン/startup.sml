require "s3.libwin32"

local proc = s3.win32.Process()
local command, capture = "", lpeg.Ct(lpeg.C(lpeg.P(1-lpeg.S"=")^1) * "=" * lpeg.C(lpeg.P(1-lpeg.S"=")^1))

proc->exec"C:\\Users\\nigahachi\\Documents\\ユーティリティ\\UsaMimi_v015\\UsaTest2.EXE"
while true {
	u8print"「アドレス=値」の書式でコマンドを打ち込んでください(「quit」で終了)"
	u8printf" >> "
	command = io.read()
	if command == "quit" {break}
	command = capture->match(command)
	u8printf("アドレス「0x%X」の値を「%d」に書き換えます\n\n",
		tonumber(command[1]), tonumber(command[2]))
	proc->set(tonumber(command[1]), tonumber(command[2]))
}
