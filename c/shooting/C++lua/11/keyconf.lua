require "define"

--[[
キーボードの種類により同時押し制限がかけられている
ことがあるため、大丈夫な組み合わせを調べる必要がある
]]


function key_Left()
	if jpad_lx() < 0 then return 1 end
	return key(DIK_J)
end

function key_Right()
	if jpad_lx() > 0 then return 1 end
	return key(DIK_K)
end

function key_Up()
	if jpad_ly() < 0 then return 1 end
	return key(DIK_I)
end

function key_Down()
	if jpad_ly() > 0 then return 1 end
	return key(DIK_M)
end

function key_Slow()
	if jpad_btn(7) > 0 then return jpad_btn(7) end
	return key(DIK_SPACE)
end
