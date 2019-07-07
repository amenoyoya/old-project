--[[
キーボードの種類により同時押し制限がかけられている
ことがあるため、大丈夫な組み合わせを調べる必要がある
]]


function kleft()
	if jpadlx() < 0 then return 1 end
	return key(DIK_J)
end

function kright()
	if jpadlx() > 0 then return 1 end
	return key(DIK_K)
end

function kup()
	if jpadly() < 0 then return 1 end
	return key(DIK_I)
end

function kdown()
	if jpadly() > 0 then return 1 end
	return key(DIK_M)
end

function kslow()
	if jpad(7) > 0 then return jpad(7) end
	return key(DIK_SPACE)
end
