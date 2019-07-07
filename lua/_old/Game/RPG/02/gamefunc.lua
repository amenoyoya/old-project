----- [[ RPG�R�A ]] -----
require "STM"

----- [[ �Q�[���{�҂̏����� ]] -----
function GameMain_Init(initType)
	GameMainData.initType = initType
	
	-- ����Ȃ�Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g�̍쐬�B
	-- �I�u�W�F�N�g�ƌ����Ă��b�{�{�̃N���X�Ƃ͖��֌W�ł��B
	if GameMainData.stateObj == nil then
		GameMainData.stateObj = STM_Init(GAMEMAIN_STATE_MAX)
	end
	-- �Q�[���{�҂̏�Ԃ�������
	-- �}�b�v���[�h�����֑J�ځB
	STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MAPLOAD)
end

----- [[ �Q�[���{�҂̏I�� ]] -----
function GameMain_End()
	-- �Q�[���{�҂̏�ԊǗ��I�u�W�F�N�g�̔j��
	STM_End(GameMainData.stateObj)
end

----- [[ �}�b�v���[�h���� ]] -----
function GameMain_MapLoad()
	-- ���ň��t���[����ɑJ�ڂ���B
	local change_frame = 60
	local frame = STM_GetFrameCount(GameMainData.stateObj)
	if frame >= change_frame then
		-- �C�x���g���֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
	end
	-- �\��
	game.changefont(nil, 20)
	game.drawstrcenter(160,  "�}�b�v���[�h���ł��B")
	
	game.changefont(nil, 16)
	game.drawstrcenter(200,  string.format("�J�ڂ܂ł���%d�t���[���ł��B",
		change_frame-frame), game.rgb(128,255,128))
end

----- [[ �C�x���g�� ]] -----
function GameMain_Event()
	game.changefont(nil, 20)
	game.drawstrcenter(160, "�C�x���g���ł��B")
	
	-- ���j���[�̃L�[����
	game.drawstrcenter(200, "�uS�v�{�^���ł��X�ł��B", game.rgb(155,155,255))
	if MainData.key(DIK_S) == 1 then
		-- ���X�ɑJ��
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_SHOP)
		return;
	end
	-- �C�x���g�̃L�[����
	game.drawstrcenter(240, "�uM�v�{�^���Ń}�b�v�`�F���W�B", game.rgb(155,155,255))
	if MainData.key(DIK_M) == 1 then
		-- �}�b�v���[�h�����ɑJ��
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MAPLOAD)
		return;
	end
	-- �o�g���̃L�[����
	game.drawstrcenter(280, "�uB�v�{�^���Ńo�g�������B", game.rgb(155,155,255))
	if MainData.key(DIK_B) == 1 then
		-- �퓬�J�n�֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_IN)
		return;
	end
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY �}�b�v�ړ��Ɉڂ�܂�", game.rgb(155,155,255))
	-- �����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		-- ���̃t���[���őJ�ځB
		-- �}�b�v�ړ��֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MOVE)
	end
end

----- [[ ���X�Ŕ������� ]] ------
function GameMain_Shop()
	game.changefont(20)
	game.drawstrcenter(160, "�r�g�n�o�ł��B")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- �����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		-- ���̃t���[���őJ�ځB
		-- �C�x���g���֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
	end
end

----- [[ �}�b�v�ړ��� ]] -----
function GameMain_MapMove()
	game.changefont(20)
	game.drawstrcenter(160, "�ړ����ł��B")
	
	-- ���j���[�̃L�[����
	game.drawstrcenter(240, "�uMENU�v�{�^���Ń��j���[���J���܂��B", game.rgb(155,155,255))
	if MainData.key_menu() == 1 then
		-- ���j���[�֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MENU)
		return
	end
	-- �C�x���g�̃L�[����
	game.drawstrcenter(280, "�uE�v�{�^���ŃC�x���g�����B", game.rgb(155,155,255))
	if MainData.key(DIK_E) == 1 then
		-- �C�x���g���֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
		return
	end
	-- �o�g���̃L�[����
	game.drawstrcenter(320, "�uB�v�{�^���Ńo�g�������B", game.rgb(155,155,255))
	if MainData.key(DIK_B) == 1 then
		-- �퓬�J�n�֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_IN)
		return
	end
end

----- [[ ���j���[�� ]] -----
function GameMain_Menu()
	game.changefont(20)
	game.drawstrcenter(160, "���j���[���ł��B")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- �����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		-- ���̃t���[���őJ�ځB
		-- �}�b�v�ړ��֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MOVE)
	end
end

----- [[ �퓬�J�n ]] -----
function GameMain_BattleIn()
	-- ���̃t���[��
	local frame = STM_GetFrameCount(GameMainData.stateObj)
	
	-- �ŏ��̃t���[���Ȃ�A�o�g���J�n�O�̏�Ԃ�ۑ�����B
	if frame == 0 then
		GameMainData.beforeBattleInState = STM_GetBackState(GameMainData.stateObj)
	end
	--  ���ň��t���[����ɑJ�ڂ���B
	local change_frame = 48
	if frame >= change_frame then
		-- �퓬���֑J�ځB
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE)
	end
	-- �\��
	game.changefont(20)
	game.drawstrcenter(160, "�o�g���J�n�G�t�F�N�g�ł��B")
	
	game.changefont(16)
	game.drawstrcenter(200, string.format(
		"�J�ڂ܂ł���%d�t���[���ł��B", change_frame-frame), game.rgb(128,255,128))
end

------ [[ �퓬�� ]] -----
function GameMain_Battle()
	game.changefont(20)
	game.drawstrcenter(160, "�o�g�����ł��B")
	
	-- �Q�[���I�[�o�[�̃L�[����
	game.drawstrcenter(240, "�uG�v�{�^���ŃQ�[���I�[�o�[�ɂȂ�܂��B", game.rgb(155,155,255))
	if MainData.key(DIK_G) == 1 then
		return BATTLE_STATE_GAMEOVER	--�Q�[���I�[�o�[
	end
	-- �G���f�B���O�̃L�[����
	game.drawstrcenter(280, "�uE�v�{�^���ŃG���f�B���O�ɂȂ�܂��B", game.rgb(155,155,255))
	if MainData.key(DIK_E) == 1 then
		return BATTLE_STATE_ENDING		--�퓬�Ń{�X��|�����B
	end

	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY�Ńo�g���ɏ������܂��B", game.rgb(155,155,255))
	-- �����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		return BATTLE_STATE_WIN		--����
	end
	return BATTLE_STATE_CONTINUE	--�o�g���p��
end

----- [[ �퓬���ʕ� ]] -----
function GameMain_BattleEnd()
	game.changefont(20)
	game.drawstrcenter(160, "�o�g�����ʂł��B")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- �����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		-- ���̃t���[���őJ�ځB
		-- �o�g���˓��O�̏�ԂɑJ�ځB
		STM_SetBackState(GameMainData.stateObj, GameMainData.beforeBattleInState)
	end
end

-- �퓬��ԐU�蕪��
BattleStateCase = {
	function()end, function()MainData.gamestate = GAME_STATE_GAMEOVER end,
	function()MainData.gamestate = GAME_STATE_ENDING end,
	function()STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_END) end
}

----- [[ �퓬���b�p�[�֐� ]] -----
function GameMain_BattleEx()
	BattleStateCase[GameMain_Battle()]()
end

-- ��ԐU�蕪��
GameStateCase = {
	GameMain_MapLoad, GameMain_Event, GameMain_Shop, GameMain_MapMove,
	GameMain_Menu, GameMain_BattleIn, GameMain_BattleEx, GameMain_BattleEnd
}
