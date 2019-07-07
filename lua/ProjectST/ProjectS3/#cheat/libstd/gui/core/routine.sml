/* コルーチンの管理クラス */
Routine = ${}
setmetatable(Routine, ${
	__call = def(){
		local @ = ${
			m_coObjects = ${},	// コルーチンオブジェクト配列
			m_count = 0			// 現在フレーム数
		}
		setmetatable(@, ${__index = Routine})
		return @
	}
})

// 指定m_idのルーチンのキーを取得
def Routine->getKey(id){
	for key, obj in pairs(@.m_coObjects) {
		if obj.m_id == id {return key}
	}
}

// 関数を指定m_idのコルーチンに登録
def Routine->append(id, func){
	if type(id) != "number" {
		error"Routine->append: 第1引数にコルーチンを登録するIDを指定してください"
	}
	
	local key = @->getKey(id)
	local obj = nil
	
	if key {
		// すでに存在するm_idが指定された場合は上書き
		@.m_coObjects[key] = ${
			m_id = id,			// ソート用m_id変数
			m_func = func,		// 関数本体
			m_waitStart = 0,	// フレームウェイトを開始したフレーム
			m_wait = 0,			// ウェイトするフレーム数
			m_alive = true,		// 実行可能か
			m_coroutine = nil	// コルーチン化された関数本体
		}
		obj = @.m_coObjects[key]
	}else{
		// コルーチンの新規作成
		table.insert(@.m_coObjects, ${
			m_id = id,			// ソート用m_id変数
			m_func = func,		// 関数本体
			m_waitStart = 0,	// フレームウェイトを開始したフレーム
			m_wait = 0,			// ウェイトするフレーム数
			m_alive = true,		// 実行可能か
			m_coroutine = nil	// コルーチン化された関数本体
		})
		obj = @.m_coObjects[#@.m_coObjects]
	}
	
	// コルーチン化 //
	obj.m_coroutine = coroutine.create(def(){obj.m_func()})
	
	// m_idが若い順にソート
	table.sort(@.m_coObjects, def(a, b){return a.m_id < b.m_id})
	return obj
}

// 登録関数を削除
def Routine->erase(id){
	local key = @->getKey(id)
	if key {table.remove(@.m_coObjects, key)}
}

// 登録関数を全削除
def Routine->clear(){
	@.m_coObjects = ${}
	collectgarbage"collect"
}

// コルーチンを別のm_idに移動させる(Zオーダーの変更)
def Routine->move(orgm_id, destm_id){
	local key = @->getKey(orgm_id)
	if key == nil {return false}
	
	local target = @.m_coObjects[key]
	// m_id変更
	target.m_id = destm_id
	// m_idが若い順にソート
	table.sort(@.m_coObjects, def(a, b){return a.m_id < b.m_id})
}

// コルーチン実行を待機させる
def Routine->wait(frame){
	coroutine.yield(frame)
}

// コルーチン実行を中断して処理を戻す
def Routine->update(){
	coroutine.yield(true)
}

// ルーチンの実行
def Routine->run(){
	// フレームカウントを+1
	@.m_count += 1
	// コルーチンの実行
	for key, co in pairs(@.m_coObjects) {
		if co.m_alive {
			// 実行待機状態になっていなければ
			if @.m_count - co.m_waitStart >= co.m_wait {
				// 登録されている関数の実行
				local ret, alive = coroutine.resume(co.m_coroutine)
				
				co.m_wait = 0 // 待機時間を0にしておく
				// エラー発生
				if !ret {error(alive)}
				if alive == nil { // 終了したコルーチンのm_aliveをfalseに
					co.m_alive = false
				}elif type(alive) == 'number' { // ウェイトタイムを登録して実行待機状態に
					co.m_waitStart = @.m_count
					co.m_wait = alive
				}
			}
		}
	}
}

// コルーチン生存確認
// 0. dead, 1. alive, -1. not exist
def Routine->isAlive(id){
	local key = @->getKey(id)
	if key == nil { return -1 }
	
	local target = @.m_coObjects[key]
	if target.m_alive { return 1 }
	return 0
}

// 死亡中コルーチンを復活させる
// あるいは生存中コルーチンを初期化する
def Routine->restore(id){
	local key = @->getKey(id)
	if key == nil { return false }
	
	local obj = @.m_coObjects[key]
	obj.m_coroutine = coroutine.create(def(){obj.m_func()})
	obj.m_alive = true
	return true
}
