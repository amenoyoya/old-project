require "define"

--[[
�L�[�{�[�h�̎�ނɂ�蓯�������������������Ă���
���Ƃ����邽�߁A���v�ȑg�ݍ��킹�𒲂ׂ�K�v������
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
