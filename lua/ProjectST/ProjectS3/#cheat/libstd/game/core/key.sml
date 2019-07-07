/* ゲーム用キー対応表 [ジョイスティック, キーボード1, ... 5] */
sdl.Key.config = ${
	// 上キー
	up = ${sdl.Joystick.UP, KEY_UP, KEY_J, -1, -1, -1},
	// 下キー
	down = ${sdl.Joystick.DOWN, KEY_DOWN, KEY_K, -1, -1, -1},
	// 左キー
	left = ${sdl.Joystick.LEFT, KEY_LEFT, KEY_H, -1, -1, -1},
	// 右キー
	right = ${sdl.Joystick.RIGHT, KEY_RIGHT, KEY_L, -1, -1, -1},
	// 決定キー
	ok = ${0, KEY_RETURN, KEY_Z, KEY_SPACE, -1, -1},
	// キャンセルキー
	cancel = ${1, KEY_ESCAPE, KEY_X, KEY_BACKSPACE, -1, -1},
	// Shiftキー
	shift = ${2, KEY_LSHIFT, KEY_RSHIFT, KEY_A, -1, -1},
	// Skipキー
	skip = ${3, KEY_LCTRL, KEY_RCTRL, KEY_S, -1, -1},
	// サブキー1
	sub1 = ${4, KEY_LALT, KEY_RALT, -1, -1, -1},
	// サブキー2
	sub2 = ${5, KEY_TAB, KEY_F1, -1, -1, -1}
}


// ジョイスティック準備(1P)
def sdl.initJoystick(){
	if sdl.Joystick->getNum() > 0{
		sdl.App.joystick = sdl.Joystick(0)
		if sdl.App.joystick->failed(){error "[sdl.App] ジョイスティックの準備に失敗"}
	}
}


// <private> ジョイスティック状態取得
local def getJoystickState(id){
	if !sdl.App.joystick{return 0}
	
	if id == "left"{return sdl.App.joystick->cross(sdl.Key.config.left[1])}
	elif id == "up"{return sdl.App.joystick->cross(sdl.Key.config.up[1])}
	elif id == "right"{return sdl.App.joystick->cross(sdl.Key.config.right[1])}
	elif id == "down"{return sdl.App.joystick->cross(sdl.Key.config.down[1])}
	else{return sdl.App.joystick->button(sdl.Key.config[id][1])}
}


local cknames = ${"up", "down", "left", "right", "ok", "cancel", "shift", "skip", "sub1", "sub2"}
local old_getAllInputStates = sdl.getAllInputStates
/* ゲーム用入力状態処理 */
def sdl.getAllInputStates(){
	old_getAllInputStates(true)
	if sdl.App.joystick{sdl.App.joystick->getAllStates()}
	// コンフィグキーをそれぞれ格納
	for _, v in pairs(cknames){
		if sdl.Key._sendPress[v] > 0{
			sdl.Key.press[v] = sdl.Key._sendPress[v]
			sdl.Key._sendPress[v] = 0
		}else{
			sdl.Key.press[v] = math.max(
				getJoystickState(v),
				sdl.getInput(sdl.Key.config[v][2]),
				sdl.getInput(sdl.Key.config[v][3]),
				sdl.getInput(sdl.Key.config[v][4]),
				sdl.getInput(sdl.Key.config[v][5]),
				sdl.getInput(sdl.Key.config[v][6])
			)
		}
	}
}
