require "gamefunc"

----- [[ タイトル画面 ]] -----
function GameTitle()
	--	センター上気味にタイトル文字表示
	game.changefont(nil, 32)
	game.drawstrcenter(160, game.ini.title)
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(240, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	何かキーが押された？
	if MainData.anykey() == 1 then
		--	次のフレームは名前入力へ
		return GAME_STATE_NAME
	end
	
	--	継続
	return MainData.gamestate
end

----- [[ 名前入力 ]] -----
function NameInput()
	--	名前入力画面のダミー
	game.changefont(nil, 20)
	game.drawstrcenter(120, "なまえ　の　にゅうりょく")
	game.drawstrcenter(200, "なまえ：そふとや")
	game.drawstrcenter(280, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	何かキーが押された？
	if MainData.anykey() == 1 then
		--  ゲーム本編は初期スタートを設定。
		GameMain_Init(GAMEMAIN_INITTYPE_FIRSTSTART)
		--	次のフレームはゲーム本編へ
		return GAME_STATE_MAIN;
	end
	
	--	継続
	return MainData.gamestate;
end

----- [[ ゲームオーバー ]] -----
function GameOver()
	--	ゲームオーバーの表示
	game.changefont(nil, 28)
	game.drawstrcenter(160, "あなたは　しんでしまった。")
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(280, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	何かキーが押された？
	if MainData.anykey() == 1 then
		--  ゲーム本編は再スタートを設定。
		GameMain_Init(GAMEMAIN_INITTYPE_RESTART)
		--	次のフレームはゲーム本編へ
		return GAME_STATE_MAIN
	end
	
	--	継続
	return MainData.gamestate
end

----- [[ エンディング ]] -----
function GameEnding()
	--	エンディングの表示
	game.changefont(nil, 28)
	game.drawstrcenter(200, "ゲームクリア　おめでとう！")
	
	--	HIT ANY KEY
	game.changefont(nil, 20)
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	
	--	何かキーが押された？
	if MainData.anykey() == 1 then
		--	次のフレームはゲームタイトルへ
		return GAME_STATE_TITLE
	end
	
	--	継続
	return MainData.gamestate
end


----- [[ ゲーム本編 ]] -----
function GameMain()
	--	ゲーム本編だよって表示
	game.changefont(nil, 28)
	game.drawstrcenter(100, "ゲーム本編です。")
	
	-- ゲーム状態の更新・フレームカウント
	STM_UpdateState(GameMainData.stateObj)
	
	-- ゲーム本編の状態で振り分ける。
	GameStateCase[STM_GetState(GameMainData.stateObj)]()
	--	継続
	return MainData.gamestate
end


-- 状態振り分け
MainStateCase = {
	GameTitle, NameInput, GameMain, GameOver, GameEnding
}
