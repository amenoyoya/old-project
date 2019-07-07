-- [[ 状態管理機構 ]] --
require "DB"

-- private --
local StateMngObject = {
	nowState = -1,			--現在の状態
	beforeState = -2,		--前の状態(STM_UpdateStateで現在の状態が変化なら保存)
	nextState = -3,			--次の状態(STM_UpdateStateで現在の状態にコピー)
	stateNums = 0,			--状態数
	pFrameCounts = {}		--フレームカウント配列。状態数分。
}

local function STM_SetFrameCount(object, count)
	-- 異常値チェック
	game.assert(object.nowState >= 0)
	game.assert(object.nowState < object.stateNums)
	-- フレームカウント設定
	object.pFrameCounts[object.nowState] = count
end


-- public --
--  状態管理の初期化。オブジェクトを返す。
function STM_Init(stateNums)
	local obj = lunasys.copy(StateMngObject)
	obj.stateNums = stateNums
	for i = 1, stateNums do obj.pFrameCounts[i] = 0 end
	return obj
end

--  状態管理の終了。オブジェクトの破棄。
function STM_End(object)
	object = nil
end

--  状態を遷移する。フレームカウントは０に初期化される。
function STM_ChangeState(object, state)
	--  状態を遷移する準備。STM_UpdateStateで更新される
	object.nextState = state
end

--  現在の状態を得る。
function STM_GetState(object)
	return object.nowState
end

--  現在の状態のフレームカウントを得る。
function STM_GetFrameCount(object)
	--  異常値のチェック。範囲外の内容ならアサート(異常終了する)。
	game.assert(object.nowState >= 0)
	game.assert(object.nowState < object.stateNums)
	--  フレームカウントを持ち帰る。
	return object.pFrameCounts[object.nowState]
end

--  1つ前の状態を得る。
function STM_GetBackState(object)
	return object.beforeState
end

--  前の状態に戻す。フレームカウントはそのまま。
function STM_SetBackState(object, state)
	--  状態を遷移する準備。STM_UpdateStateで更新される。
	object.beforeState = state
	object.nextState = object.beforeState
end

--  状態・フレームカウントを更新する。
function STM_UpdateState(object)
	--  状態の遷移？
	if object.nextState ~= object.nowState then
		--  遷移の状況把握のため条件比較を先に。
		local bBack = (object.nextState == object.beforeState)
		--  今の状態を保存
		object.beforeState = object.nowState
		--  新しい状態に遷移
		object.nowState = object.nextState
		--  状態を戻した？
		if bBack then
			--  フレームカウントを１つ加算。
			STM_SetFrameCount(object, STM_GetFrameCount(object)+1)
		else
			--  フレームカウントを初期化。
			STM_SetFrameCount(object, 0)
		end
	else
		--  フレームカウントを１つ加算。
		STM_SetFrameCount(object, STM_GetFrameCount(object)+1)
	end
end
