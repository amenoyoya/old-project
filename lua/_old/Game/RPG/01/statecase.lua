require "DB"

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
	game.drawstrcenter(160, "ゲーム本編です。")
	
	--	ゲームオーバーのキー入力
	game.changefont(nil, 20)
	game.drawstrcenter(240, "「G」ボタンでゲームオーバーになります。", game.rgb(155,155,255))
	
	if MainData.key(DIK_G) == 1 then
		return GAME_STATE_GAMEOVER
	end
	
	--	エンディングのキー入力
	game.changefont(nil, 20)
	game.drawstrcenter(280, "「E」ボタンでエンディングになります。", game.rgb(155,155,255))
	
	if MainData.key(DIK_E) == 1 then
		return GAME_STATE_ENDING
	end
	
	--	継続
	return MainData.gamestate
end


-- 状態振り分け
GameStateCase = {
	GameTitle, NameInput, GameMain, GameOver, GameEnding
}
