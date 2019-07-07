/*** GUIライブラリ用キー入力管理 ***/
/* キーテーブル */
sdl.Key = ${
	press = ${}, _sendPress = ${} // 設定されたキー入力状態を格納
}

/* キー対応表 [キーボード1, 2] */
sdl.Key.config = ${
	// 上キー
	up = ${KEY_UP, -1},
	// 下キー
	down = ${KEY_DOWN, -1},
	// 左キー
	left = ${KEY_LEFT, -1},
	// 右キー
	right = ${KEY_RIGHT, -1},
	// 決定キー
	ok = ${KEY_RETURN, KEY_SPACE},
	// キャンセルキー
	cancel = ${KEY_ESCAPE, -1},
	// Shiftキー
	shift = ${KEY_LSHIFT, KEY_RSHIFT},
	// Skipキー
	skip = ${KEY_LCTRL, KEY_RCTRL},
	// サブキー1
	sub1 = ${KEY_LALT, KEY_RALT},
	// サブキー2
	sub2 = ${KEY_TAB, -1}
}

/* マウス情報テーブル */
sdl.Mouse = ${
	x = 0, y = 0, moved = false, movedX = 0, movedY = 0,
	wheelX = 0, wheelY = 0
}


// コンフィグキー配列を準備
local cknames = ${"up", "down", "left", "right", "ok", "cancel", "shift", "skip", "sub1", "sub2"}
for _, v in pairs(cknames){
	sdl.Key.press[v] = 0
	sdl.Key._sendPress[v] = 0
}
sdl.Key.press[-1] = 0 // 割り当てなしキー


/* キー、マウス入力状態を更新する関数 */
// noKeyConfig: trueにするとコンフィグキーの更新は行わない
def sdl.getAllInputStates(noKeyConfig){
	sdl.getAllKeyStates()
	sdl.getMouseStates()
	// Mouse info
	sdl.Mouse.x = sdl.getCursorPos().x
	sdl.Mouse.y = sdl.getCursorPos().y
	sdl.Mouse.moved = sdl.getCursorMoved()
	sdl.Mouse.movedX = sdl.getCursorMovedX()
	sdl.Mouse.movedY = sdl.getCursorMovedY()
	sdl.Mouse.wheelX = -sdl.getMouseWheelX()
	if sdl.Mouse.wheelX > 10 {sdl.Mouse.wheelX = 10}
	if sdl.Mouse.wheelX < -10 {sdl.Mouse.wheelX = -10}
	sdl.Mouse.wheelY = -sdl.getMouseWheelY()
	if sdl.Mouse.wheelY > 10 {sdl.Mouse.wheelY = 10}
	if sdl.Mouse.wheelY < -10 {sdl.Mouse.wheelY = -10}
	
	if !noConfigKey { // キーコンフィグしたキーをそれぞれ格納
		for k, v in pairs(cknames) {
			if sdl.Key._sendPress[v] > 0 {
				sdl.Key.press[v] = sdl.Key._sendPress[v]
				sdl.Key._sendPress[v] = 0
			}else{
				sdl.Key.press[v] = math.max(
					sdl.getInput(sdl.Key.config[v][1]),
					sdl.getInput(sdl.Key.config[v][2])
				)
			}
		}
	}
}


/* マウスボタンID(改) */
MOUSE_LEFT = 285
MOUSE_MIDDLE = 286
MOUSE_RIGHT = 287


/* 設定されたキー入力状態をクリア */
def sdl.clearConfiguredInputStates(){
	for k, v in pairs(cknames) {sdl.Key.press[v] = 0}
}


/* 入力状態取得 */
// 0: 押されていない、1: 押された、2: 押されている、3: キーリピート
def sdl.getInput(id){
	if type(id) == "string" {return sdl.Key.press[id]}
	elif id < 285 {return sdl.getKey(id)}
	else {return sdl.getMouse(id - 285)}
}


/* 入力状態送信 */
// 例) Zボタンを押させる場合：sdl.sendInput(KEY_Z)
//     左クリックを押させる場合：sdl.sendInput(MOUSE_LEFT)
def sdl.sendInput(id, n){
	if n == nil {n = 1}
	if type(id) == "string" {sdl.Key._sendPress[id] = n}
	elif id < 285 {sdl.sendKey(id, n)}
	else {sdl.sendMouse(id - 285, n)}
}


/* 入力状態変更 */
def sdl.setInput(id, n){
	if n == nil {n = 1}
	if type(id) == "string" {sdl.Key.press[id] = n}
	elif id < 285 {sdl.setKey(id, n)}
	else {sdl.setMouse(id - 285, n)}
}


/* マウスカーソルが指定領域内にあるか */
def sdl.isMouseInRect(x, y, w, h){
	return sdl.Mouse.x >= x & sdl.Mouse.y >= y & sdl.Mouse.x <= x+w & sdl.Mouse.y <= y+h
}
