/** GUIライブラリ最上位ファイル **/
// Figit::GUIライブラリを使う時は require "libstd.gui" すれば良い

require "libstd.gui.core"
require "libstd.gui.text"

/* GUIアプリサンプル
table.set(sdl.App.setting, ${
	width = 480, height = 360, resizable = false
})
sdl.App->setEvent(0, def(){
	while true{
		sdl.drawText(0, 0, sdl.App.fpsMan->get(), Color(255,0,0))
		sdl.App->update()
	}
})
sdl.App->run()
*/