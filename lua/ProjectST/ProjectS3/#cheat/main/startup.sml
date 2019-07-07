require "s3.libwin32"
require "libstd.ext"
local eval = require "libstd.eval"

if getArgc() == 0 | !isDir(getArgv(1)) {
	error"[#cheat.main] コマンドライン引数にチート対象タイトルフォルダを指定してください"
}

// 設定ファイルを読み込む
/* 設定項目は、
 * ・cheat.title: チート対象タイトル
 * ・cheat.app: チート対象プロセス名
 * ・cheat.dir: チート対象プロセスのあるディレクトリ
 */
local cheat = require(getArgv(1).."/setting")

/*** チート用各種関数定義 ***/
local proc = s3.win32.Process()
local input = s3.win32.DirectInput()

// キー入力判定
def K(dik_id){
	return input->key(dik_id)
}

// DirectInputから入力文字列取得
def I(){
	return input->getStr()
}

// 指定アドレスの値を取得
def G(address, byte){
	return proc->get(address, byte | 4)
}

// 指定アドレスに値を書き込む
def S(address, val, byte){
	return proc->set(address, val, byte | 4)
}

// 文字列を使った特殊な書き込み
// 2文字ずつの単位で16進数WORDとして書き込んでいく
// ??で指定された部分の値は変更しない
def P(address, exp){
	return proc->puts(address, exp)
}

// ビット演算可能な計算式実行(signed)
def E(exp){
	return eval.calc(exp)
}

// ビット演算可能な計算式実行(unsigned)
def U(exp){
	return eval.ucalc(exp)
}


/*** メイン処理 ***/
s3.win32.Process->getAll()

// プロセスオープンor起動
if !proc->open(cheat.app) {
	local dir = getCurrentDir()
	
	setCurrentDir(Path(cheat.dir))
	if !proc->exec(cheat.app) {
		error("[#cheat.main] プロセス'"..cheat.app.."'が起動できませんでした")
	}
	setCurrentDir(dir)
}

// DirectInput生成
u8printf("HWND: %X\n", proc->hwnd())
if !input->open(proc->hwnd()) {
	error"[#cheat.main] DirectInputの生成に失敗しました"
}

// ハッキング関数呼び出し
local hack = loadstring(File->load(Path(getArgv(1).."/script.sml")), "script.sml")

// 説明
s3.win32.setConsColor(s3.win32.H_YELLOW)
u8print"#cheat.main ver.1.00\tby S3Engine ver.1.30"
s3.win32.setConsColor(s3.win32.H_GREEN)
u8print("ハッキング対象…… "..cheat.title)
s3.win32.setConsColor(s3.win32.H_RED)
u8print"終了する場合は、ハッキング対象プロセスを終了してください"
s3.win32.setConsColor(s3.win32.L_CYAN)
u8print"\nなおハッキング対象プロセス上で"
u8print"\t「4」キーを押すと#cheat.mainを終了できます"
u8print"\t「5」キーを押すとチートスクリプトをリロード出来ます\n"
u8print"\t「6」キーを押すとチートスクリプトの実行を一時停止/再開出来ます\n"
// 開始
local run = true
s3.win32.setConsColor()
while !proc->isExit() {
	input->get()
	if K(DIK_6) == 1 {run = !run}
	if run {
		if K(DIK_4) == 1 {
			break
		}elif K(DIK_5) == 1 {
			hack = loadstring(File->load(Path(getArgv(1).."/script.sml")), "script.sml")
		}else{
			hack()
		}
	}
	sleep(10)
}
// 終了
input->close()
