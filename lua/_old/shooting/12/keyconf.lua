--[[
�L�[�{�[�h�̎�ނɂ�蓯�������������������Ă���
���Ƃ����邽�߁A���v�ȑg�ݍ��킹�𒲂ׂ�K�v������
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
