-- �Q�[���S�̂̏�ԑJ�� --
GAME_STATE_TITLE = 1	--�^�C�g�����
GAME_STATE_NAME = 2		--���O����
GAME_STATE_MAIN = 3		--�Q�[���{��
GAME_STATE_GAMEOVER = 4	--�Q�[���I�[�o�[
GAME_STATE_ENDING = 5	--�G���f�B���O

-- �Q�[���S�̂̊Ǘ��\�� --
MainData = {
	key = function(id)
		return game.key(id)
	end,
	
	anykey = function()
		return game.anykey()
	end,
	
	gamestate = GAME_STATE_TITLE
}

-- �Q�[���^�C�g��
game.ini.title = "�ւ����RPG"
