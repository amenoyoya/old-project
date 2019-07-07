require "libstd.game"

// ウィンドウ設定
def s3.sdl.eventHandler(event){
	if event.type == QUIT {
		if IDYES == msgbox("終了しますか？", "確認", b_or(MB_YESNO, MB_ICONQUESTION)){
			return false
		}else{
			return true
		}
	}
	return sdl.guiEventProc(data)
}

(def(t){
	t.title, t.width, t.height = "洞窟探検", 480, 360
})(sdl.App.setting)

// スコア
HISC, SC = 0, 0


/* 各種イベント設定 */
local event = s3.Array()

event->append(sdl.EventManager())->append(GAMESTART, def(){ // レイヤー作成
	layer = sdl.Layer(480, 360)
	// レイヤーを黒でクリアしておく
	layer->beginScene()
	sdl.fillRect(0, 0, 480, 360, Color(0,0,0))
	layer->endScene()
	GAMESTATE = GAMEPLAY
})->appendLoop(b_or(GAMEPLAY, GAMEOVER), def(){ // レイヤー反映＆各種操作
	// ESCキーで終了
	if sdl.getInput("cancel") == 1 {sdl.App->quit()}
	
	// セーブ
	if sdl.getInput(KEY_S) == 1 {
		local bin = Binary()
		if SC > HISC {HISC = SC}
		bin->pushStrData("HISC="..HISC.."\nSC="..SC)
		if saveBinToFile("save.dat", bin) {msgbox("セーブしました")}
		else {msgbox("セーブに失敗しました")}
	}
	
	// ロード
	if sdl.getInput(KEY_L) == 1 {
		if isFile("save.dat") {
			local bin = loadBinFromFile("save.dat")
			if bin {
				assert(loadstring(bin->getStrData()))()
				msgbox("ロードしました")
			}else{
				msgbox("セーブデータの規格が正しくありません")
			}
		}else{
			msgbox("セーブデータがありません")
		}
	}
	
	// レイヤー反映
	layer->draw(0, 0)
})->set(0)

local UEKABE, SUKIMA = 100, 200
local MY, SPEED, LV = 180, 0.0, 0

event->append(sdl.EventManager())->appendLoop(GAMEPLAY, def(){ // ゲームルーチン
	/*** 右から洞窟が迫ってくる ***/
	layer->beginScene()
	// スコアからレベルを算出
	LV = toint(SC/500) + 1
	if LV > 18 {LV = 18}
	
	// 右端に黒線を引く
	sdl.drawLine(479, 0, 479, 359, Color(0,0,0))
	// 上壁を引く
	UEKABE = UEKABE + mt_rand(LV*2+1)-LV
	if UEKABE < 10 {UEKABE = 10}
	if UEKABE > 250 {UEKABE = 250}
	sdl.drawLine(479, 0, 479, UEKABE, Color(255,LV*40,0))
	// 下壁を引く
	SUKIMA = SUKIMA + mt_rand(LV*2+1)-LV
	if SUKIMA < 100{SUKIMA = 100}
	if SUKIMA > 200{SUKIMA = 200}
	sdl.drawLine(479, UEKABE+SUKIMA, 479, 359, Color(255,255,0))
	
	// 当たり判定
	if MY <= 0 | MY >= 360 | sdl.getPixel(340, MY).red != 0 {
		sdl.saveScreenshot("GameOver.bmp")
		GAMESTATE = GAMEOVER
		sdl.App->update()
	}
	// 自キャラを表示
	sdl.drawPixel(340, MY, Color(255,255,255))
	// OKキーで自キャラを浮上
	if sdl.getInput("ok") > 0 {SPEED = SPEED - 0.25}
	else {SPEED = SPEED + 0.25}
	
	if SPEED > 3.0 {SPEED = 3.0}
	if SPEED < -3.0 {SPEED = -3.0}
	MY = MY + toint(SPEED)
	
	// layerを1ピクセルずらして描画
	layer->draw(0, 0, 479, 360, 1, 0, 479, 360)
	
	// スコア表示
	SC = SC + 1
	sdl.fillRect(0, 0, 380, 24, Color(0,0,0))
	sdl.drawEdgeText(5, 5, string.format(
		"Lv:%d/ ハイスコア:%d/ 現在スコア:%d", LV, HISC, SC),
		Color(255,255,255), Color(0,50,100))
	layer->endScene()
	/*** /洞窟描画終了/ ***/
	sdl.App->wait(2)
})->appendLoop(GAMEOVER, def(){ // ゲームオーバー処理
	sdl.App->wait(30)
	if HISC < SC {HISC = SC}
	if IDYES == msgbox("もう一度挑戦しますか？", "確認", b_or(MB_YESNO, MB_ICONQUESTION)){
		// 初期化してゲーム再開
		SC, UEKABE, SUKIMA = 0, 100, 200
		MY, SPEED, LV = 180, 0.0, 0
		layer->beginScene()
		sdl.fillRect(0, 0, 480, 360, Color(0,0,0))
		layer->endScene()
		GAMESTATE = GAMEPLAY
		sdl.App->update()
	}else{
		sdl.App->quit()
	}
})->set(1)

sdl.App->run()
