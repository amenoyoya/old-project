----- [[ RPGコア ]] -----
require "STM"

----- [[ ゲーム本編の初期化 ]] -----
function GameMain_Init(initType)
	GameMainData.initType = initType
	
	-- 初回ならゲーム本編の状態管理オブジェクトの作成。
	-- オブジェクトと言ってもＣ＋＋のクラスとは無関係です。
	if GameMainData.stateObj == nil then
		GameMainData.stateObj = STM_Init(GAMEMAIN_STATE_MAX)
	end
	-- ゲーム本編の状態を初期化
	-- マップロード処理へ遷移。
	STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MAPLOAD)
end

----- [[ ゲーム本編の終了 ]] -----
function GameMain_End()
	-- ゲーム本編の状態管理オブジェクトの破棄
	STM_End(GameMainData.stateObj)
end

----- [[ マップロード処理 ]] -----
function GameMain_MapLoad()
	-- 仮で一定フレーム後に遷移する。
	local change_frame = 60
	local frame = STM_GetFrameCount(GameMainData.stateObj)
	if frame >= change_frame then
		-- イベント中へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
	end
	-- 表示
	game.changefont(nil, 20)
	game.drawstrcenter(160,  "マップロード中です。")
	
	game.changefont(nil, 16)
	game.drawstrcenter(200,  string.format("遷移まであと%dフレームです。",
		change_frame-frame), game.rgb(128,255,128))
end

----- [[ イベント中 ]] -----
function GameMain_Event()
	game.changefont(nil, 20)
	game.drawstrcenter(160, "イベント中です。")
	
	-- メニューのキー入力
	game.drawstrcenter(200, "「S」ボタンでお店です。", game.rgb(155,155,255))
	if MainData.key(DIK_S) == 1 then
		-- お店に遷移
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_SHOP)
		return;
	end
	-- イベントのキー入力
	game.drawstrcenter(240, "「M」ボタンでマップチェンジ。", game.rgb(155,155,255))
	if MainData.key(DIK_M) == 1 then
		-- マップロード処理に遷移
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MAPLOAD)
		return;
	end
	-- バトルのキー入力
	game.drawstrcenter(280, "「B」ボタンでバトル発生。", game.rgb(155,155,255))
	if MainData.key(DIK_B) == 1 then
		-- 戦闘開始へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_IN)
		return;
	end
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY マップ移動に移ります", game.rgb(155,155,255))
	-- 何かキーが押された？
	if MainData.anykey() == 1 then
		-- 次のフレームで遷移。
		-- マップ移動へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MOVE)
	end
end

----- [[ お店で買い物中 ]] ------
function GameMain_Shop()
	game.changefont(20)
	game.drawstrcenter(160, "ＳＨＯＰです。")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- 何かキーが押された？
	if MainData.anykey() == 1 then
		-- 次のフレームで遷移。
		-- イベント中へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
	end
end

----- [[ マップ移動中 ]] -----
function GameMain_MapMove()
	game.changefont(20)
	game.drawstrcenter(160, "移動中です。")
	
	-- メニューのキー入力
	game.drawstrcenter(240, "「MENU」ボタンでメニューが開きます。", game.rgb(155,155,255))
	if MainData.key_menu() == 1 then
		-- メニューへ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MENU)
		return
	end
	-- イベントのキー入力
	game.drawstrcenter(280, "「E」ボタンでイベント発生。", game.rgb(155,155,255))
	if MainData.key(DIK_E) == 1 then
		-- イベント中へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_EVENT)
		return
	end
	-- バトルのキー入力
	game.drawstrcenter(320, "「B」ボタンでバトル発生。", game.rgb(155,155,255))
	if MainData.key(DIK_B) == 1 then
		-- 戦闘開始へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_IN)
		return
	end
end

----- [[ メニュー中 ]] -----
function GameMain_Menu()
	game.changefont(20)
	game.drawstrcenter(160, "メニュー中です。")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- 何かキーが押された？
	if MainData.anykey() == 1 then
		-- 次のフレームで遷移。
		-- マップ移動へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_MOVE)
	end
end

----- [[ 戦闘開始 ]] -----
function GameMain_BattleIn()
	-- 今のフレーム
	local frame = STM_GetFrameCount(GameMainData.stateObj)
	
	-- 最初のフレームなら、バトル開始前の状態を保存する。
	if frame == 0 then
		GameMainData.beforeBattleInState = STM_GetBackState(GameMainData.stateObj)
	end
	--  仮で一定フレーム後に遷移する。
	local change_frame = 48
	if frame >= change_frame then
		-- 戦闘中へ遷移。
		STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE)
	end
	-- 表示
	game.changefont(20)
	game.drawstrcenter(160, "バトル開始エフェクトです。")
	
	game.changefont(16)
	game.drawstrcenter(200, string.format(
		"遷移まであと%dフレームです。", change_frame-frame), game.rgb(128,255,128))
end

------ [[ 戦闘中 ]] -----
function GameMain_Battle()
	game.changefont(20)
	game.drawstrcenter(160, "バトル中です。")
	
	-- ゲームオーバーのキー入力
	game.drawstrcenter(240, "「G」ボタンでゲームオーバーになります。", game.rgb(155,155,255))
	if MainData.key(DIK_G) == 1 then
		return BATTLE_STATE_GAMEOVER	--ゲームオーバー
	end
	-- エンディングのキー入力
	game.drawstrcenter(280, "「E」ボタンでエンディングになります。", game.rgb(155,155,255))
	if MainData.key(DIK_E) == 1 then
		return BATTLE_STATE_ENDING		--戦闘でボスを倒した。
	end

	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEYでバトルに勝利します。", game.rgb(155,155,255))
	-- 何かキーが押された？
	if MainData.anykey() == 1 then
		return BATTLE_STATE_WIN		--勝利
	end
	return BATTLE_STATE_CONTINUE	--バトル継続
end

----- [[ 戦闘結果報告 ]] -----
function GameMain_BattleEnd()
	game.changefont(20)
	game.drawstrcenter(160, "バトル結果です。")
	
	-- HIT ANY KEY
	game.drawstrcenter(320, "HIT ANY KEY", game.rgb(155,155,255))
	-- 何かキーが押された？
	if MainData.anykey() == 1 then
		-- 次のフレームで遷移。
		-- バトル突入前の状態に遷移。
		STM_SetBackState(GameMainData.stateObj, GameMainData.beforeBattleInState)
	end
end

-- 戦闘状態振り分け
BattleStateCase = {
	function()end, function()MainData.gamestate = GAME_STATE_GAMEOVER end,
	function()MainData.gamestate = GAME_STATE_ENDING end,
	function()STM_ChangeState(GameMainData.stateObj, GAMEMAIN_STATE_BATTLE_END) end
}

----- [[ 戦闘ラッパー関数 ]] -----
function GameMain_BattleEx()
	BattleStateCase[GameMain_Battle()]()
end

-- 状態振り分け
GameStateCase = {
	GameMain_MapLoad, GameMain_Event, GameMain_Shop, GameMain_MapMove,
	GameMain_Menu, GameMain_BattleIn, GameMain_BattleEx, GameMain_BattleEnd
}
