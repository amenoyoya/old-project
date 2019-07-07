/*** 飾り付文字クラス(一文字) ***/
sdl.DecoChar = ${}
setmetatable(sdl.DecoChar, ${
	__call = def(){
		local @ = ${}
		@.x, @.y, @.width, @.height = 0, 0, -1, -1
		@.src = ${x = 0, y = 0, width = -1, height = -1, texture = nil}
		@.color, @.edgeColor = Color(255,255,255), Color(0,0,0)
		@.drawType = 1 // 描画タイプ： 0:Normal, 1:EdgeDraw, 2:ShadowDraw
		@.data = ${} // 各種データ
		setmetatable(@, ${__index = sdl.DecoChar})
		return @
	}
})
// 描画関数
// x, y: 位置を本来の位置からずらす場合指定
def sdl.DecoChar->draw(x, y, alpha){
	if(@.src.texture){
		if x == nil {x = 0}
		if y == nil {y = 0}
		if alpha == nil {alpha = @.color.alpha}
		if !@.data.ruby{ // ルビはエッジや影を描かない
			if @.drawType == 1{
				// エッジ描画(アルファ値は文字描画部と同一にする)
				@.src.texture->setColor(@.edgeColor.red, @.edgeColor.green, @.edgeColor.blue)
				@.src.texture->setAlpha(alpha)
				@.src.texture->draw(x+@.x-1, y+@.y-1, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
				@.src.texture->draw(x+@.x+1, y+@.y-1, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
				@.src.texture->draw(x+@.x-1, y+@.y+1, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
				@.src.texture->draw(x+@.x+1, y+@.y+1, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
			}elif @.drawType == 2{
				// 影描画
				@.src.texture->setColor(@.edgeColor.red, @.edgeColor.green, @.edgeColor.blue)
				@.src.texture->setAlpha(alpha)
				@.src.texture->draw(x+@.x+2, y+@.y+2, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
			}
		}
		// 本体描画
		@.src.texture->setColor(@.color.red, @.color.green, @.color.blue)
		@.src.texture->setAlpha(alpha)
		@.src.texture->draw(x+@.x, y+@.y, @.width, @.height, @.src.x, @.src.y, @.src.width, @.src.height)
	}
}


/*** DecoText用テクスチャ管理クラス ***/
sdl.TexManager = ${}
setmetatable(sdl.TexManager, ${
	__call = def(){
		local @ = ${m_textures = s3.Array() /* テクスチャ配列 */}
		setmetatable(@, ${__index = sdl.TexManager})
		return @
	}
})

/* テキスト追加関数 */
// x, y: 最初の文字の表示位置、vert: 縦書にするか、opt: その他DecoCharに設定したいテーブル
// sdl.DecoChar配列と最大サイズが返る
def sdl.TexManager->append(font, text, x, y, vert, opt){
	local dest, i = s3.Array(), 0
	local pos = ${x = x, y = y} // 表示位置
	local max = ${width = 0, height = 0} // テキストの最大サイズ
	
	while text->c(i) {
		// DecoCharを追加し、メンバを設定
		local obj = dest->append(sdl.DecoChar())
		local byte = text->u8byte(i)
		local texture = @.m_textures->append(sdl.Text(font, text->csub(i, byte)))
		local size = ${width = texture->width(), height = texture->height()} // 一文字サイズ
		obj.src = ${
			x = 0, y = 0,
			width = size.width, height = size.height,
			texture = texture
		}
		obj.x, obj.y = pos.x, pos.y
		obj.width, obj.height = size.width, size.height
		if vert { // 縦書の場合
			pos.y += size.height
			max.height += size.height
			if max.width < size.width {max.width = size.width}
		}else{ // 横書の場合
			pos.x += size.width
			max.width += size.width
			if max.height < size.height {max.height = size.height}
		}
		if type(opt) == "table" {table.set(obj, opt)}
		i += byte
	}
	return dest, max
}

/* テクスチャ削除 */
def sdl.TexManager->close(){
	for k, v in each(@.m_textures) {v->close()}
	@.m_textures = s3.Array()
}


/*** シンプルな改行可能文字列テクスチャ ***/
sdl.MultiLineText = ${}
setmetatable(sdl.MultiLineText, ${
	__call = def(font, text){
		local @ = ${}
		@.m_textures = ${}
		@.m_lineSize = 0
		@.m_maxWidth, @.m_maxHeight = 0, 0
		setmetatable(@, ${__index = sdl.MultiLineText})
		if font & type(text) == "string" {@->open(font, text)}
		return @
	}
})

def sdl.MultiLineText->open(font, text){
	@->close()
	// 改行で文字列をパースする
	local lf = lpeg.S"\r\n"
	local line = lpeg.C(lpeg.P(1 - lpeg.S"\r\n")^0)
	local lines = (lpeg.Ct(line * (lf * line)^0))->match(text)
	// 行ごとのテクスチャを作っていく
	@.m_lineSize = font->height()
	for _, str in pairs(lines) {
		if str == "" { // 空行
			@.m_textures->append"lf"
			@.m_maxHeight += @.m_lineSize
		}else{
			local obj = @.m_textures->append(sdl.Text(font, str))
			@.m_maxHeight += obj->height()
			if @.m_maxWidth < obj->width() {@.m_maxWidth = obj->width()}
		}
	}
}

def sdl.MultiLineText->close(){
	for _, v in each(@.m_textures) {
		if type(v) != "string" {v->close()}
	}
	@.m_textures, @.m_lineSize, @.m_maxWidth, @.m_maxHeight = s3.Array(), 0, 0, 0
}

def sdl.MultiLineText->draw(x, y, color){
	local ty = y
	for _, v in each(@.m_textures) {
		if v != "lf" {v->setColor(color); v->draw(x, ty)}
		ty += @.m_lineSize
	}
}

def sdl.MultiLineText->maxWidth(){return @.m_maxWidth}
def sdl.MultiLineText->maxHeight(){return @.m_maxHeight}


/** 改行可能テキスト描画 **/
local textTexture = sdl.MultiLineText()
// 通常描画
def sdl.drawTextEx(x, y, text, color, font){
	if !color {color = Color(250, 250, 250)}
	if !font {font = sdl.App.font}
	textTexture->open(font, text)
	textTexture->draw(x, y, color)
}
// 影付き描画
def sdl.drawShadowTextEx(x, y, text, color, shadow, font){
	if !color {color = Color(250, 250, 250)}
	if !shadow {shadow = Color(50, 50, 50)}
	if !font {font = sdl.App.font}
	textTexture->open(font, text)
	// フォントサイズを25で除算して小数点以下切り上げた値を影の位置とする
	local shift = math.ceil(font->height() / 25)
	textTexture->draw(x+shift, y+shift, shadow); textTexture->draw(x, y, color)
}
// エッジ付き描画
def sdl.drawEdgeTextEx(x, y, text, color, shadow, font){
	if !color {color = Color(250, 250, 250)}
	if !shadow {shadow = Color(50, 50, 50)}
	if !font {font = sdl.App.font}
	textTexture->open(font, text)
	textTexture->draw(x-1, y-1, shadow); textTexture->draw(x+1, y-1, shadow)
	textTexture->draw(x+1, y+1, shadow); textTexture->draw(x-1, y+1, shadow)
	textTexture->draw(x, y, color)
}
