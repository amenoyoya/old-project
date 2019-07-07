/*** 描画関数ラッピング ***/

/** 文字描画 **/
local textTexture = sdl.Texture()
// 通常描画
def sdl.drawText(x, y, text, color, font){
	if !color {color = Color(250, 250, 250)}
	if !font {font = sdl.App.font}
	textTexture->open(font->createSurface(text), true)
	return textTexture->setColor(color) & textTexture->draw(x, y)
}
// 影付き描画
def sdl.drawShadowText(x, y, text, color, shadow, font){
	if !color {color = Color(250, 250, 250)}
	if !shadow {shadow = Color(50, 50, 50)}
	if !font {font = sdl.App.font}
	textTexture->open(font->createSurface(text), true)
	// フォントサイズを25で除算して小数点以下切り上げた値を影の位置とする
	local shift = math.ceil(font->height() / 25)
	return textTexture->setColor(shadow) & textTexture->draw(x+shift, y+shift)
		& textTexture->setColor(color) & textTexture->draw(x, y)
}
// エッジ付き描画
def sdl.drawEdgeText(x, y, text, color, shadow, font){
	if !color {color = Color(250, 250, 250)}
	if !shadow {shadow = Color(50, 50, 50)}
	if !font {font = sdl.App.font}
	textTexture->open(font->createSurface(text), true)
	return textTexture->setColor(shadow) & textTexture->draw(x-1, y-1)
		& textTexture->draw(x+1, y-1) & textTexture->draw(x+1, y+1) & textTexture->draw(x-1, y+1)
		& textTexture->setColor(color) & textTexture->draw(x, y)
}


/** スクリーンショット作成 **/
def sdl.getScreenshot(){
	local size = sdl.Window->getCurrent()->size()
	local bin = Binary(size.width * size.height * 3)
	
	if sdl.readPixels(bin->ptr(), 0, 0, size.width, size.height) {return bin, size}
}

def sdl.saveScreenshot(filename, saveType){
	if !saveType {saveType = SAVE_BMP}
	local bin, size = sdl.getScreenshot()
	if bin {
		return sdl.saveSurface(sdl.createImage(bin->ptr(), size.width, size.height), Path(filename), saveType)
	}
	return false
}


/*** テクスチャ作成簡略化クラス ***/
/* 画像テクスチャクラス */
def sdl.Image(filename, colorKey){
	local @ = sdl.Texture()
	@.Texture_open = @.open
	
	def @->open(filename, colorKey){
		if !@->Texture_open(sdl.loadImage(Path(filename), colorKey), true) {
			error("画像ファイル'"..filename.."'の読み込みに失敗")
		}
	}
	
	// 色を反転させる
	def @->flipColor(){
		local size = @->width() * @->height() * @->format()
		local pixels = sdl.Texture->pixels(@)
		for i = 0, size-1 {
			if i % 4 != 3 {pixels[i] = b_not(pixels[i])}
		}
		return @->update()
	}
	
	if type(filename) == "string" {@->open(filename, colorKey)}
	return @
}


/* 文字列テクスチャクラス */
def sdl.Text(font, text){
	local @ = sdl.Texture()
	@.Texture_open = @.open
	
	def @->open(font, text){
		if !@->Texture_open(font->createSurface(text), true) {
			error"文字列テクスチャの作成に失敗"
		}
	}
	if font & type(text) == "string" {@->open(font, text)}
	return @
}


/* レイヤー(sdl.setRenderTargetの対象にできるテクスチャ)クラス */
def sdl.Layer(width, height){
	local @ = sdl.Texture()
	@.Texture_open = @.open
	
	def @->open(width, height){
		if !@->Texture_open(width, height, TEXTURE_TARGET) {
			error"レイヤーの作成に失敗"
		}
	}
	
	// レイヤーを描画対象にする
	def @->beginScene(){sdl.setRenderTarget(@)}
	def @->endScene(){sdl.setRenderTarget()}
	
	if type(width) == "number" & type(height) == "number" {@->open(width, height)}
	return @
}
