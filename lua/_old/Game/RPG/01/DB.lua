-- ゲーム全体の状態遷移 --
GAME_STATE_TITLE = 1	--タイトル画面
GAME_STATE_NAME = 2		--名前入力
GAME_STATE_MAIN = 3		--ゲーム本編
GAME_STATE_GAMEOVER = 4	--ゲームオーバー
GAME_STATE_ENDING = 5	--エンディング

-- ゲーム全体の管理構造 --
MainData = {
	key = function(id)
		return game.key(id)
	end,
	
	anykey = function()
		return game.anykey()
	end,
	
	gamestate = GAME_STATE_TITLE
}

-- ゲームタイトル
game.ini.title = "へたれるRPG"
