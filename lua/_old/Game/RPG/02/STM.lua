-- [[ ��ԊǗ��@�\ ]] --
require "DB"

-- private --
local StateMngObject = {
	nowState = -1,			--���݂̏��
	beforeState = -2,		--�O�̏��(STM_UpdateState�Ō��݂̏�Ԃ��ω��Ȃ�ۑ�)
	nextState = -3,			--���̏��(STM_UpdateState�Ō��݂̏�ԂɃR�s�[)
	stateNums = 0,			--��Ԑ�
	pFrameCounts = {}		--�t���[���J�E���g�z��B��Ԑ����B
}

local function STM_SetFrameCount(object, count)
	-- �ُ�l�`�F�b�N
	game.assert(object.nowState >= 0)
	game.assert(object.nowState < object.stateNums)
	-- �t���[���J�E���g�ݒ�
	object.pFrameCounts[object.nowState] = count
end


-- public --
--  ��ԊǗ��̏������B�I�u�W�F�N�g��Ԃ��B
function STM_Init(stateNums)
	local obj = lunasys.copy(StateMngObject)
	obj.stateNums = stateNums
	for i = 1, stateNums do obj.pFrameCounts[i] = 0 end
	return obj
end

--  ��ԊǗ��̏I���B�I�u�W�F�N�g�̔j���B
function STM_End(object)
	object = nil
end

--  ��Ԃ�J�ڂ���B�t���[���J�E���g�͂O�ɏ����������B
function STM_ChangeState(object, state)
	--  ��Ԃ�J�ڂ��鏀���BSTM_UpdateState�ōX�V�����
	object.nextState = state
end

--  ���݂̏�Ԃ𓾂�B
function STM_GetState(object)
	return object.nowState
end

--  ���݂̏�Ԃ̃t���[���J�E���g�𓾂�B
function STM_GetFrameCount(object)
	--  �ُ�l�̃`�F�b�N�B�͈͊O�̓��e�Ȃ�A�T�[�g(�ُ�I������)�B
	game.assert(object.nowState >= 0)
	game.assert(object.nowState < object.stateNums)
	--  �t���[���J�E���g�������A��B
	return object.pFrameCounts[object.nowState]
end

--  1�O�̏�Ԃ𓾂�B
function STM_GetBackState(object)
	return object.beforeState
end

--  �O�̏�Ԃɖ߂��B�t���[���J�E���g�͂��̂܂܁B
function STM_SetBackState(object, state)
	--  ��Ԃ�J�ڂ��鏀���BSTM_UpdateState�ōX�V�����B
	object.beforeState = state
	object.nextState = object.beforeState
end

--  ��ԁE�t���[���J�E���g���X�V����B
function STM_UpdateState(object)
	--  ��Ԃ̑J�ځH
	if object.nextState ~= object.nowState then
		--  �J�ڂ̏󋵔c���̂��ߏ�����r���ɁB
		local bBack = (object.nextState == object.beforeState)
		--  ���̏�Ԃ�ۑ�
		object.beforeState = object.nowState
		--  �V������ԂɑJ��
		object.nowState = object.nextState
		--  ��Ԃ�߂����H
		if bBack then
			--  �t���[���J�E���g���P���Z�B
			STM_SetFrameCount(object, STM_GetFrameCount(object)+1)
		else
			--  �t���[���J�E���g���������B
			STM_SetFrameCount(object, 0)
		end
	else
		--  �t���[���J�E���g���P���Z�B
		STM_SetFrameCount(object, STM_GetFrameCount(object)+1)
	end
end
