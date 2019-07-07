-- ���[�h�I��
local mode = msgbox("bintest��ǂݍ��݃��[�h�Ŏ��s���܂���?",
	"bintest - select mode -", b_or(MB_YESNO, MB_ICONQUESTION))

if mode == IDYES then
	local bin = Binary()
	local file = File("test.dat", "rb")
	
	if file:failed() == true then
		error("load error")
	end
	
	file:read(bin, file:size())
	local ver, exp_size, cnt_size =
		bin:getval(0, 4), bin:getval(4, 4), bin:getval(8, 4)
	
	msgbox("version: "..ver.."\n\n�����F\n"..bin:getstr(12, exp_size)
		.."\n\n���e�F\n"..bin:getstr(12+exp_size, cnt_size),
		"bintest - result -")
else
	local expl = "����̓o�C�i���t�@�C���ǂݍ��݃e�X�g�p�̃t�@�C���ł��B"
	local cont = "Hello, world�I�I\n�ǂ��ł����Hload�o���Ă܂����H"
	local bin = Binary()
	local file = File("test.dat", "wb")
	
	-- �w�b�_�[������������
	-- version���(ver.0.8.8)��int�^(4�o�C�g)�ŏ�������
	bin:setval(88, 4)
	file:write(bin, bin:size())
	
	bin:setval(expl:len(), 4)
	file:write(bin, bin:size())
	
	bin:setval(cont:len(), 4)
	file:write(bin, bin:size())
	
	-- ���e����������
	bin:setstr(expl, expl:len())
	file:write(bin, bin:size())
	
	bin:setstr(cont, cont:len())
	file:write(bin, bin:size())
	
	msgbox("�o�C�i���t�@�C�����쐬����܂���", "bintest - result -")
end
