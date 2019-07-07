-- モード選択
local mode = msgbox("bintestを読み込みモードで実行しますか?",
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
	
	msgbox("version: "..ver.."\n\n説明：\n"..bin:getstr(12, exp_size)
		.."\n\n内容：\n"..bin:getstr(12+exp_size, cnt_size),
		"bintest - result -")
else
	local expl = "これはバイナリファイル読み込みテスト用のファイルです。"
	local cont = "Hello, world！！\nどうですか？load出来てますか？"
	local bin = Binary()
	local file = File("test.dat", "wb")
	
	-- ヘッダー情報を書き込む
	-- version情報(ver.0.8.8)をint型(4バイト)で書きこむ
	bin:setval(88, 4)
	file:write(bin, bin:size())
	
	bin:setval(expl:len(), 4)
	file:write(bin, bin:size())
	
	bin:setval(cont:len(), 4)
	file:write(bin, bin:size())
	
	-- 内容を書き込む
	bin:setstr(expl, expl:len())
	file:write(bin, bin:size())
	
	bin:setstr(cont, cont:len())
	file:write(bin, bin:size())
	
	msgbox("バイナリファイルが作成されました", "bintest - result -")
end
