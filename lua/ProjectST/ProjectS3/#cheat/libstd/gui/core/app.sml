/*** FPS管理クラス ***/
FPSManager = ${}
setmetatable(FPSManager, ${
	__call = def(){
		local @ = ${m_fps = 0, m_cnt = 0, m_keeptimer = Timer(), m_timer = Timer()}
		setmetatable(@, ${__index = FPSManager})
		@->start()
		return @
	}
})

/** Timerスタート **/
def FPSManager->start(){
	@.m_keeptimer->start()
	@.m_timer->start()
}

/** FPSを調整=>trueが返ったら描画処理を行う **/
def FPSManager->averaged(fps){
	/* FPS一定化 */
	if fps > 0 { // FPSが0以下ならFPS調整は行わない
		if !@.m_keeptimer->check(1000/fps) {return false}
		@.m_keeptimer->start()
	}
	
	/* FPS取得 */
	@.m_cnt += 1 // 呼ばれるたびにフレーム数をカウントしていく
	// 前回のチェック時刻から1秒（＝1000ミリ秒）経ったか？
	if @.m_timer->check(1000) {
		// 1秒間のカウント数＝FPS
		@.m_fps = @.m_cnt
		@.m_cnt = 0 //カウンタをゼロクリア
		@.m_timer->start()	//次のチェックのために現在時刻を保存
	}
	return true
}

/** FPS値取得 **/
def FPSManager->get(){return @.m_fps}


/*** GUIアプリ(EditBox)用イベントプロシージャ ***/
// EditBox本体の定義はctrl/editbox.smlで行う
sdl.EditBox = ${
	active = 0, // 現在編集中のEditBox ID
	objects = ${} // EditBoxオブジェクト配列
}

def sdl.guiEventProc(event){
	if event.type == TEXTINPUT {
		local obj = sdl.EditBox.objects[sdl.EditBox.active]
		if obj { // 入力されたテキストを挿入
			obj.m_string->appendText(obj.m_texMan, obj.m_font, event.text.text)
			if obj.m_string->maxWidth() > obj.m_width + 2 { // 幅を超過した場合
				// サイズが収まるようになるまで後ろから文字を消していく
				while obj.m_string->str()->size() > 0 &
					obj.m_string->maxWidth() > obj.m_width + 2
				{
					obj.m_string->erase(obj.m_string->str()->n(), 1)
				}
			}
			obj.m_layer->beginScene()
			sdl.clearScreen()
			obj.m_string->draw(2, 2)
			obj.m_layer->endScene()
		}
	}elif event.type == TEXTEDITING {
		local obj = sdl.EditBox.objects[sdl.EditBox.active]
		if obj { // IMEデータを渡す
			obj.m_edit.text = event.edit.text
			obj.m_edit.cursor = event.edit.start
			obj.m_edit.selection = event.edit.length
		}
	}
	return sdl.defEventProc(event)
}

// SDLイベントハンドラをGUIイベントハンドラで上書き
s3.sdl.eventHandler = sdl.guiEventProc


/*** GUIアプリ用グローバル変数(メインウィンドウ等) ***/
sdl.App = ${
	win = nil,					// メインウィンドウ
	routine = Routine(),		// メインルーチン
	subWin = s3.Array(),		// サブウィンドウ配列
	subRoutine = s3.Array(),	// サブウィンドウ用コルーチン配列
	fpsMan = FPSManager(),		// FPSマネージャー
	font = nil,					// グローバルフォント
	
	/* 設定用テーブル */
	setting = ${
		fps = 30, // FPS
		title = "s3.gui.Window", // ウィンドウタイトル
		bgColor = Color(255,255,255), // 背景色
		x = -1, y = -1, width = 640, height = 480, // ウィンドウ位置・サイズ
		// ウィンドウアイコン = ${アイコンパス, 暗号化キー}
		icon = ${path = "libcore@s3engine/icon.ico", password = ""},
		windowed = true, resizable = true, // ウィンドウモード、可変サイズ
		renderer = "opengl", // 描画エンジン
		fontName = "msgothic", fontSize = 16 // グローバルフォント設定
	},
	
	/* メソッド */
	// 実行本体関数
	run = def(@){
		// 初期化
		if !sdl.init() {error"SDLライブラリの初期化に失敗"}
		// メインウィンドウ生成
		@.win = sdl.Window(@.setting.bgColor)
		// ウィンドウ表示
		if !@.win->open(@.setting.title, @.setting.x, @.setting.y, @.setting.width, @.setting.height,
			@.setting.windowed, @.setting.resizable, @.setting.renderer)
		{
			error "メインウィンドウの起動に失敗"
		}
		// アイコン設定
		if !@.win->setIcon(sdl.loadImage(Path(@.setting.icon.path), nil, @.setting.icon.password)) {
			error("アイコンファイル'"..@.setting.icon.path.."'の読み込みに失敗")
		}
		// グローバルフォント作成
		@.font = sdl.Font(sdl.Font->getFromSystem(@.setting.fontName), @.setting.fontSize)
		if @.font->failed() {error"グローバルフォントの作成に失敗"}
		@.font->setStyle(FONT_BOLD)
		sdl.stopTextInput() // テキストインプットは無効化しておく
		
		/*** GUIアプリ実行 ***/
		local fps = @.setting.fps
		
		@.fpsMan->start()
		while sdl.procEvent() {
			if fps > 0 {
				if @.fpsMan->get() < @.setting.fps*2/3 {
					if fps < @.setting.fps*3/2 {
						fps += 5 // 十分な速度が得られないときはFPS値を上げる
					}
				}
				if @.fpsMan->get() > @.setting.fps + @.setting.fps/10 {
					fps = @.setting.fps // 速すぎる時はFPS値を下げる
				}
			}
			if @.fpsMan->averaged(fps) {
				if !@.win->beginScene() {sdl.clearScreen()}
				@.routine->run() // ルーチン実行
				@.win->endScene()
				// サブウィンドウの描画処理
				for i = 0, @.subWin->n() {
					if !@.subWin[i]->beginScene() {sdl.clearScreen()}
					@.subRoutine[i]->run()
					@.subWin[i]->endScene()
				}
			}
		}
		for k, v in each(@.subWin) {v->close()}
		@.win->close()
	},
	
	// ルーチン追加関数
	setEvent = def(@, id, func){
		@.routine->append(id, func)
	},
	
	// コルーチン一時停止、中断関数
	update = def(@){
		@.routine->update()
	},
	wait = def(@, frame){
		@.routine->wait(frame)
	},
	
	// サブウィンドウ作成関数
	openSubWindow = def(@, title, x, y, w, h, bg, resizable){
		if!title{title = "figit::SubWindow"}
		if!x{x = -1}
		if!y{y = -1}
		if!w{w = 640}
		if!h{h = 480}
		if!bg{bg = Color(255,255,255)}
		if resizable == nil{resizable = true}
		
		local subWin = @.subWin->append(sdl.Window(bg))
		@.subRoutine->append(Routine()) // コルーチン追加
		if subWin->open(title, x, y, w, h, true, resizable, @.setting.renderer){return subWin, @.subWin->n()}
	},
	
	// サブウィンドウ用ルーチン追加関数
	setSubEvent = def(@, n, id, func){
		if n < @.subRoutine->size(){
			@.subRoutine[n]->append(id, func)
		}
	},
	
	// アプリ終了関数
	quit = def(@){
		local event = sdl.Event()
		event.type = QUIT
		sdl.pushEvent(event)
	},
	
	// ウィンドウモード変更
	changeWindowMode = def(@){
		@.setting.windowed = !@.setting.windowed
		return @.win->setWindowMode(@.setting.windowed)
	},
}

// メインルーチン-1000番はキー入力処理用に使う
sdl.App.routine->append(-1000, def(){
	while true{
		sdl.getAllInputStates() // キー入力処理
		sdl.App->update()
	}
})
