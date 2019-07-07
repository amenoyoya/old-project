--[[ データベース ]]--
module("game", package.seeall)

-- ウィンドウ設定
ini = {title=lunasys.ver(), width=640, height=480}

-- ゲーム動作制御
actor = {}

-- 選択肢表示位置
select_pos = {x=200, y=100}

-- 選択された選択肢ID
selected_id = -1
