/*** s3::coreライブラリ拡張 ***/

/* ファイル存在確認 */
def isFile(path){return Path(path)->isFile()}
def isDir(path){return Path(path)->isDir()}

/* バイナリファイル読み込み簡略化 */
def readFile(path){
	local file = File(tolua.type(path) == "s3::Path" & path | Path(path), "rb")
	if file->failed() {
		error("ファイル'"..(tolua.type(path) == "s3::Path" & path->str() | path).."'の読み込みに失敗")
	}
	local bin = Binary(file->size())
	file->read(bin->ptr(), bin->size())
	file->close()
	return bin
}

/* バイナリを暗号化してファイルに保存 */
def saveBinToFile(filename, bin, key){
	if key == nil {key="s3password"}
	bin->encode(key, key->len())
	return File->write(Path(filename), bin->ptr(), bin->size()) > 0
}

/* ファイルからバイナリを復号化して読み込み */
def loadBinFromFile(filename, key){
	if key == nil {key="s3password"}
	local path = Path(filename)
	local bin = Binary(File->getSize(path))
	if File->read(bin->ptr(), path) > 0 & bin->decode(key, key->len()) {return bin}
}


/* ===== テーブル関連ライブラリ ===== */
// テーブルの要素をテーブルで追加
def table->set(appendTable){
	if type(@) == "table" {
		for key, val in pairs(appendTable) {
			if type(val) == "table" {
				if type(@[key]) != "table" {@[key] = ${}}
				table.set(@[key], val)
			}else{
				@[key] = val
			}
		}
	}else{
		@ = appendTable
	}
}

/*** テーブルシリアライズ ***/
def table->find(target){
	for k, v in pairs(@) {if v == target {return k}}
}

local def value2str(v, all){
	local vt = type(v)
	if vt == "nil" {return "nil"}
	if vt == "number" {return ("%d")->format(v)}
	if vt == "string" {return ("[=[%s]=]")->format(v)}
	if vt == "boolean" {return (v & "true" | "false")}
	if vt == "function" {return (all & '"*function"' | nil)}
	if vt == "thread" {return (all & '"*thread"' | nil)}
	if vt == "userdata" {return (all & '"*userdata"' | nil)}
	return nil //'"UnsupportFormat"'
}

local def field2str(v){
	local vt = type(v)
	if vt == "number" {return ("[%d]")->format(v)}
	if vt == "string" {return ("%s")->format(v)}
	return 'UnknownField'
}

// disable: シリアライズしないキーをテーブルで指定
// all: trueなら関数やユーザーデータを全て出力
def table->serialize(disable, all){
	if type(@) != "table" {return value2str(@)} // テーブルじゃない場合
	local buf = ""
	local f, v = next(@, nil)
	while f {
		// シリアライズの対象か判定
		if type(disable) != "table" | nil == table.find(f, disable) {
			// 値
			if type(v) == "table" {
				if buf != "" {buf = buf..","} // ,を付加する
				buf = buf..field2str(f) .. "=" .. table.serialize(v)
			}else{
				local value = value2str(v, all)
				if value {
					if buf != "" {buf = buf..","} // ,を付加する
					buf = buf..field2str(f) .. "=" .. value
				}
			}
		}
		// 次の要素
		f, v = next(t, f)
	}
	buf = "{" .. buf .. "}"
	return buf
}
