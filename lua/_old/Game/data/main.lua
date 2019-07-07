-- 実行スクリプト指定
setdxincluadir(File:moduledir().."/RPG/03/")
local err = dxinclua("main.lua")

if err ~= "" then
	msgbox(err, "lunasys::error", b_or(MB_OK, MB_ICONWARNING))
end
