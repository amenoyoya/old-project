require "s3.libwin32"

local proc = s3.win32.Process()
local command, capture = "", lpeg.Ct(lpeg.C(lpeg.P(1-lpeg.S"=")^1) * "=" * lpeg.C(lpeg.P(1-lpeg.S"=")^1))

proc->exec"C:\\Users\\nigahachi\\Documents\\���[�e�B���e�B\\UsaMimi_v015\\UsaTest2.EXE"
while true {
	u8print"�u�A�h���X=�l�v�̏����ŃR�}���h��ł�����ł�������(�uquit�v�ŏI��)"
	u8printf" >> "
	command = io.read()
	if command == "quit" {break}
	command = capture->match(command)
	u8printf("�A�h���X�u0x%X�v�̒l���u%d�v�ɏ��������܂�\n\n",
		tonumber(command[1]), tonumber(command[2]))
	proc->set(tonumber(command[1]), tonumber(command[2]))
}
