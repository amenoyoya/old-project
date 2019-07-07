require "gamefunc"

----- [[ �^�C�g����� ]] -----
function GameTitle()
	--	�Z���^�[��C���Ƀ^�C�g�������\��
	game.changefont(nil, 32)
	game.drawstrcenter(160, game.ini.title)
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(240, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	�����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		--	���̃t���[���͖��O���͂�
		return GAME_STATE_NAME
	end
	
	--	�p��
	return MainData.gamestate
end

----- [[ ���O���� ]] -----
function NameInput()
	--	���O���͉�ʂ̃_�~�[
	game.changefont(nil, 20)
	game.drawstrcenter(120, "�Ȃ܂��@�́@�ɂイ��傭")
	game.drawstrcenter(200, "�Ȃ܂��F���ӂƂ�")
	game.drawstrcenter(280, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	�����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		--  �Q�[���{�҂͏����X�^�[�g��ݒ�B
		GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART)
		--	���̃t���[���̓Q�[���{�҂�
		return GAME_STATE_MAIN;
	end
	
	--	�p��
	return MainData.gamestate;
end

----- [[ �Q�[���I�[�o�[ ]] -----
function GameOver()
	--	�Q�[���I�[�o�[�̕\��
	game.changefont(nil, 28)
	game.drawstrcenter(160, "���Ȃ��́@����ł��܂����B")
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(280, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	�����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		--  �Q�[���{�҂͍ăX�^�[�g��ݒ�B
		GameMain_Init(GAMEMAIN_INITTYPE_RESTART)
		--	���̃t���[���̓Q�[���{�҂�
		return GAME_STATE_MAIN
	end
	
	--	�p��
	return MainData.gamestate
end

----- [[ �G���f�B���O ]] -----
function GameEnding()
	--	�G���f�B���O�̕\��
	game.changefont(nil, 28)
	game.drawstrcenter(200, "�Q�[���N���A�@���߂łƂ��I")
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	�����L�[�������ꂽ�H
	if MainData.anykey() == 1 then
		--	���̃t���[���̓Q�[���^�C�g����
		return GAME_STATE_TITLE
	end
	
	--	�p��
	return MainData.gamestate
end


----- [[ �Q�[���{�� ]] -----
function GameMain()
	--	�Q�[���{�҂�����ĕ\��
	game.changefont(nil, 28)
	game.drawstrcenter(100, "�Q�[���{�҂ł��B")
	
	-- �Q�[����Ԃ̍X�V�E�t���[���J�E���g
	STM_UpdateState(GameMainData.stateObj)
	
	-- �Q�[���{�҂̏�ԂŐU�蕪����B
	GameStateCase[STM_GetState(GameMainData.stateObj)]()
	--	�p��
	return MainData.gamestate
end


-- ��ԐU�蕪��
MainStateCase = {
	GameTitle, NameInput, GameMain, GameOver, GameEnding
}
