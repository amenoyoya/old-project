/*** SDLゲームライブラリ・コア ***/

require "libstd.game.core.key"
require "libstd.game.core.images"
require "libstd.game.core.sounds"
require "libstd.game.core.event"

// sdl.Appのデフォルト設定をゲーム用に変更
sdl.App.setting.fps = 60
sdl.App.setting.title = "s3.GameSystem"
sdl.App.setting.bgColor = Color(0,0,0)
sdl.App.setting.resizable = false
sdl.App.setting.volumes = ${5,5,5,5} // チャンネル音量
sdl.App.setting.channels = 4 // SOUND再生チャンネル数

// メインルーチン-1000番をゲーム用のコア処理で上書き
sdl.App.routine->append(-1000, def(){
	local changeMode = false // フルスクリーン切り替えを行ったかのフラグ
	
	sdl.initJoystick() // Joystick初期化
	// サウンド関連初期化
	if !sdl.Mixer->alloc(sdl.App.setting.channels){
		error("サウンド再生チャンネルを"..sdl.App.setting.channels.."個確保できませんでした")
	}
	for i = 0, sdl.App.setting.channels-1{
		local vol = sdl.App.setting.volumes[i]
		sdl.Mixer->volume(i, vol & vol | 100)
	}
	
	while true{
		sdl.getAllInputStates() // ゲーム用入力処理
		if sdl.getInput(KEY_RETURN) == 0{changeMode = false}
		// Alt + Enter でフルスクリーン
		if sdl.getInput(KEY_LALT) > 0 | sdl.getInput(KEY_RALT) > 0{
			if sdl.getInput(KEY_RETURN) == 1 & !changeMode{
				changeMode = true
				sdl.App->changeWindowMode()
			}
		}
		if changeMode{
			// フルスクリーン切替時は、Enterおよび設定済みキーは押していないことにする
			sdl.setKey(KEY_RETURN, 0)
			sdl.clearConfiguredInputStates()
		}
		sdl.App->update()
	}
})
