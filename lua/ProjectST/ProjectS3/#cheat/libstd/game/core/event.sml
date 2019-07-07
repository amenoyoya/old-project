/*** ゲーム状態 ***/
GAMESTART = 2
GAMEPLAY  = 4
GAMEPAUSE = 8
GAMEOVER  = 16
GAMESTATE = GAMESTART // 現在状態


/*** イベント管理クラス ***/
sdl.EventManager = ${}
setmetatable(sdl.EventManager, ${
	__call = def(){
		local @ = ${m_events = ${}}
		setmetatable(@, ${__index = sdl.EventManager})
		return @
	}
})

/* イベント発生条件を満たした時一度だけ実行する関数をセット */
// condition: イベント実行条件
// 		数値なら condition & GAMESTATE == GAMESTATE のとき(conditionのビットフラグが立っている時)実行
// 		文字列ならそれを条件式とする
def sdl.EventManager->append(condition, func){
	if !@.m_events[condition]{
		@.m_events[condition] = ${running = false}
		if type(condition) == "string"{
			@.m_events[condition].condition = assert(loadstring("return "..condition))
		}else{
			@.m_events[condition].condition = def(){
				return b_and(condition, GAMESTATE) == GAMESTATE
			}
		}
	}
	@.m_events[condition].event = func
	return @
}

/* イベント発生条件を満たしている限り実行し続ける関数をセット */
def sdl.EventManager->appendLoop(condition, func){
	if !@.m_events[condition]{
		@.m_events[condition] = ${running = false}
		if type(condition) == "string"{
			@.m_events[condition].condition = assert(loadstring("return "..condition))
		}else{
			@.m_events[condition].condition = def(){
				return b_and(condition, GAMESTATE) == GAMESTATE
			}
		}
	}
	@.m_events[condition].loopEvent = func
	return @
}

/* イベントを指定ルーチンにセット */
def sdl.EventManager->set(id, routine){
	if !routine{routine = sdl.App.routine}
	routine->append(id, def(){
		while true{
			for cond, evt in pairs(@.m_events){
				if evt.condition(){
					if !evt.running{ // イベント発生
						evt.running = true
						if evt.event{evt.event()}
					}else{ // イベント発生中
						if evt.loopEvent{evt.loopEvent()}
					}
				}else{
					evt.running = false
				}
			}
			routine->update()
		}
	})
}
