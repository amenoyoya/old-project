-- �Q�[���S�̂̏�ԑJ�� --
GAME_STATE_TITLE = 1	--�^�C�g�����
GAME_STATE_NAME = 2		--���O����
GAME_STATE_MAIN = 3		--�Q�[���{��
GAME_STATE_GAMEOVER = 4	--�Q�[���I�[�o�[
GAME_STATE_ENDING = 5	--�G���f�B���O

-- �Q�[���{�҂̏������^�C�v
GAMEMAIN_INITTYPE_FIRSTSTART = 1	--�ŏ��̃X�^�[�g
GAMEMAIN_INITTYPE_RESTART = 2		--�Q�[���I�[�o�[�̃��X�^�[�g

-- �Q�[���{�҂̏��
GAMEMAIN_STATE_MAPLOAD = 1		--�}�b�v���[�h����
GAMEMAIN_STATE_EVENT = 2		--�C�x���g��
GAMEMAIN_STATE_SHOP = 3			--���X�Ŕ�������
GAMEMAIN_STATE_MOVE = 4			--�}�b�v�ړ���
GAMEMAIN_STATE_MENU = 5			--���j���[��
GAMEMAIN_STATE_BATTLE_IN = 6	--�퓬�J�n
GAMEMAIN_STATE_BATTLE = 7		--�퓬��
GAMEMAIN_STATE_BATTLE_END = 8	--�퓬���ʕ�

GAMEMAIN_STATE_MAX = 9			--�Q�[���{�҂̏�Ԃ̐�

-- �o�g���̌���
BATTLE_STATE_CONTINUE = 1	--�o�g���p��
BATTLE_STATE_GAMEOVER = 2	--�Q�[���I�[�o�[
BATTLE_STATE_ENDING = 3		--�퓬�Ń{�X��|�����B
BATTLE_STATE_WIN = 4		--�퓬�ɏ���


-- �Q�[���S�̂̊Ǘ��\�� --
MainData = {
	key = function(id)
		return game.key(id)
	end,
	
	anykey = function()
		return game.anykey()
	end,
	
	-- �Q�[�����
	gamestate = GAME_STATE_TITLE,
	
	-- �L�[�R���t�B�O
	key_up = function()
		return MainData.key(DIK_I)
	end, key_down = function()
		return MainData.key(DIK_M)
	end, key_left = function()
		return MainData.key(DIK_J)
	end, key_right = function()
		return MainData.key(DIK_K)
	end, key_menu = function()
		return MainData.key(DIK_X)
	end, key_act = function()
		return MainData.key(DIK_Z)
	end
}


-- �Q�[���{�҂̃f�[�^�̍\��
GameMainData = {
	initType = GAMEMAIN_INITTYPE_FIRSTSTART,	--�������^�C�v
	stateObj = nil,				--�Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g
	beforeBattleInState = nil	--�o�g���J�n�O�̏��
}


----- �e��ݒ� -----
-- �Q�[���^�C�g��
game.ini.title = "E A S Y - R P G"
-- �Q�[��FPS
game.ini.fps = 60
