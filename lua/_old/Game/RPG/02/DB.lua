-- ゲーム全体の状態遷移 --
GAME_STATE_TITLE = 1	--タイトル画面
GAME_STATE_NAME = 2		--名前入力
GAME_STATE_MAIN = 3		--ゲーム本編
GAME_STATE_GAMEOVER = 4	--ゲームオーバー
GAME_STATE_ENDING = 5	--エンディング

-- ゲーム本編の初期化タイプ
GAMEMAIN_INITTYPE_FIRSTSTART = 1	--最初のスタート
GAMEMAIN_INITTYPE_RESTART = 2		--ゲームオーバーのリスタート

-- ゲーム本編の状態
GAMEMAIN_STATE_MAPLOAD = 1		--マップロード処理
GAMEMAIN_STATE_EVENT = 2		--イベント中
GAMEMAIN_STATE_SHOP = 3			--お店で買い物中
GAMEMAIN_STATE_MOVE = 4			--マップ移動中
GAMEMAIN_STATE_MENU = 5			--メニュー中
GAMEMAIN_STATE_BATTLE_IN = 6	--戦闘開始
GAMEMAIN_STATE_BATTLE = 7		--戦闘中
GAMEMAIN_STATE_BATTLE_END = 8	--戦闘結果報告

GAMEMAIN_STATE_MAX = 9			--ゲーム本編の状態の数

-- バトルの結果
BATTLE_STATE_CONTINUE = 1	--バトル継続
BATTLE_STATE_GAMEOVER = 2	--ゲームオーバー
BATTLE_STATE_ENDING = 3		--戦闘でボスを倒した。
BATTLE_STATE_WIN = 4		--戦闘に勝利


-- ゲーム全体の管理構造 --
MainData = {
	key = function(id)
		return game.key(id)
	end,
	
	anykey = function()
		return game.anykey()
	end,
	
	-- ゲーム状態
	gamestate = GAME_STATE_TITLE,
	
	-- キーコンフィグ
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


-- ゲーム本編のデータの構造
GameMainData = {
	initType = GAMEMAIN_INITTYPE_FIRSTSTART,	--初期化タイプ
	stateObj = nil,				--ゲーム本編の状態管理オブジェクト
	beforeBattleInState = nil	--バトル開始前の状態
}


----- 各種設定 -----
-- ゲームタイトル
game.ini.title = "E A S Y - R P G"
-- ゲームFPS
game.ini.fps = 60
