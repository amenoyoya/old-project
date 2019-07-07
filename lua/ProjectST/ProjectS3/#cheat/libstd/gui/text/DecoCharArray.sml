/*** DecoChar配列(一行) ***/
// vertical: 縦書モード
// drawType, color, edgeColor: 初期の描画タイプ
def sdl.DecoCharArray(vertical, drawType, color, edgeColor){
	local @ = ${}
	
	@.m_vertical = (vertical & true | false)
	@.m_string = Array() // DecoChar配列
	@.m_text = "" // プレーンテキスト
	@.m_width, @.m_height = 0, 0 // 描画に必要なサイズ
	@.m_cur = ${ // append時にDecoCharに付与するデータ
		x = 0, y = 0, drawType = drawType & drawType | 1,
		color = color & color | Color(250,250,250),
		edgeColor = edgeColor & edgeColor | Color(50,50,50),
		rubyStart = 0, // ルビを振る開始位置
		index = 0 // 現在ポインタが示すindex
	}
	@.m_rubySize = 0 // ルビを振った場合、その最大サイズ
	
	/* 添字 */
	setmetatable(@, ${
		__index = def(table, key){
			if type(key) == "number" && key < table.m_string->size() {
				return table.m_string[key]
			}
		}
	})
	
	/* 色変更 */
	def @->changeColor(color, edgecolor){
		if color {@.m_cur.color = color}
		if edgecolor {@.m_cur.edgeColor = edgecolor}
	}
	/* 描画タイプ変更 */
	def @->changeDrawType(mode){
		@.m_cur.drawType = mode
	}
	
	/* 文字列追加 */
	// texMan: sdl.TexManagerオブジェクト
	def @->appendText(texMan, font, text){
		local array, max = texMan->append(font, text, @.m_cur.x, @.m_cur.y, @.m_vertical,
			${ // 追加データ
				drawType = @.m_cur.drawType,
				color = @.m_cur.color, edgeColor = @.m_cur.edgeColor
			}
		)
		@.m_string->join(array, @.m_cur.index) // DecoChar配列連結
		@.m_text->u8replace(@.m_cur.index, 0, text) // プレーンテキスト更新
		@.m_cur.index = @.m_cur.index + array->size() // ポインタ位置をappendしたテキストの後ろへ
		// append以降の位置を後ろへ調整
		if @.m_vertical { // 縦書モード
			@.m_cur.y += max.height
			@.m_height = @.m_cur.y
			for i = @.m_cur.index, @.m_string->n() {
				@.m_string[i].y += max.height
				@.m_height = @.m_string[i].y + @.m_string[i].height
			}
			if @.m_width < max.width {@.m_width = max.width}
		}else{ // 横書モード
			@.m_cur.x += max.width
			@.m_width = @.m_cur.x
			for i = @.m_cur.index, @.m_string->n() {
				@.m_string[i].x += max.width
				@.m_width = @.m_string[i].x + @.m_string[i].width
			}
			if @.m_height < max.height {@.m_height = max.height}
		}
	}
	
	/* 画像追加 (seek, erase等の編集を行う場合は使わないほうが無難) */
	def @->appendImage(filename, width, height){
		local obj = @.m_string->append(sdl.DecoChar())
		
		// 色、描画タイプ設定
		obj.drawType = @.m_cur.drawType
		obj.color = @.m_cur.color
		obj.edgeColor = @.m_cur.edgeColor
		// 画像テクスチャ作成
		obj.src.texture = sdl.Image(filename)
		obj.x, obj.y = @.m_cur.x, @.m_cur.y
		obj.width = width & width | obj.src.texture->width()
		obj.height = height & height | obj.src.texture->height()
		// データ型=IMAGE
		obj.data.image = ${fileName = filename, width = width, height = height}
		
		@.m_cur.index += 1 // ポインタ位置をインクリメント
		// append以降の位置を後ろへ調整
		if @.m_vertical { // 縦書モード
			@.m_cur.y += obj.height
			@.m_height = @.m_cur.y
			for i = @.m_cur.index, @.m_string->n() {
				@.m_string[i].y += obj.height
				@.m_height = @.m_string[i].y
			}
			if @.m_width < obj.width {@.m_width = obj.width}
		}else{ // 横書モード
			@.m_cur.x += obj.width
			@.m_width = @.m_cur.x
			for i = @.m_cur.index, @.m_string->n() {
				@.m_string[i].x += obj.width
				@.m_width = @.m_string[i].x
			}
			if @.m_height < obj.height {@.m_height = obj.height}
		}
	}
	
	/* ダミーデータ追加(ADV用) */
	def @->appendData(param){
		local obj = @.m_string->append(sdl.DecoChar())
		
		if type(param) == "table" {table.set(obj, param)}
		@.m_cur.index += 1 // ポインタ位置をインクリメント
	}
	
	/* appendImageした画像テクスチャ削除 */
	def @->close(){
		for _, v in each(@.m_string) {
			if v.data.image {v.src.texture->close()}
		}
		@.m_string, @.m_text, @.m_cur.index = Array(), "", 0
		@.m_width, @.m_height, @.m_rubySize = 0, 0, 0
		@.m_cur.x, @.m_cur.y, @.m_cur.rubyStart = 0, 0, 0
	}
	
	/* ルビ (seek, erase等の編集を行う場合は使わないほうが無難) */
	// ルビを振るテキストをappendする前に呼び出す関数
	def @->beginRuby(){
		@.m_cur.rubyStart = @.m_vertical & @.m_cur.y | @.m_cur.x
	}
	// ルビ登録
	// beginRuby()→ルビを振りたいテキストをappendText()→appendRuby()の順
	// texMan: sdl.TexManagerオブジェクト、ruby: ルビテキスト
	def @->appendRuby(texMan, rubyFont, ruby){
		local array, max = texMan->append(rubyFont, ruby, 0, 0, @.m_vertical,
			${ // 追加データ
				data = ${ruby = true}, drawType = @.m_cur.drawType,
				color = @.m_cur.color, edgeColor = @.m_cur.edgeColor
			}
		)
		/* ルビ表示位置計算 */
		local textsize = (@.m_vertical & @.m_cur.y | @.m_cur.x) - @.m_cur.rubyStart
		local rubysize = (@.m_vertical & max.height | max.width)
		local rx, ry = 0, 0
		// ルビの頭の位置を計算
		if @.m_vertical {
			ry = @.m_cur.rubyStart + (textsize-rubysize)/2
		}else{
			rx = @.m_cur.rubyStart + (textsize-rubysize)/2
		}
		// 位置変更
		for _, v in each(array) {v.x, v.y = v.x + rx, v.y + ry}
		@.m_string->join(array, @.m_cur.index) // DecoChar配列連結
		@.m_cur.index += array->size() // ポインタ位置をappendしたテキストの後ろへ
		
		/* ルビの最大サイズ更新 */
		if @.m_vertical {
			if @.m_rubySize < max.width {@.m_rubySize = max.width}
		}else{
			if @.m_rubySize < max.height {@.m_rubySize = max.height}
		}
	}
	
	/* 描画を行う前にDecoChar配列の位置を揃える */
	// x, y: 基準位置
	// stand: 文字位置の基準。 0=左(上)、1=中央、2=右(下)
	// align: 行をbaseSize基準で寄せる。 0=左(上)、1=中央、2=右(下)
	def @->doAlign(x, y, stand, align, baseSize){
		if @.m_vertical { /* 縦書モード */
			local mov = 0 // 寄せる量
			if align & baseSize & baseSize > @.m_height {
				if align == 1 {mov = (baseSize-@.m_height)/2} // 中央寄せ
				elif align == 2 {mov = baseSize-@.m_height} // 下寄せ
			}
			for _, v in each(@.m_string) {
				v.y += y + mov
				v.x += x
				if v.data.ruby { // ルビ
					v.x += @.m_width // ルビは本文の右側
					if stand == 1 {v.x += (@.m_rubySize-v.width)/2} // 中央揃え
					elif stand == 2 {v.x += (@.m_rubySize-v.width)} // 右揃え
				}else{ // 本文
					if stand == 1 {v.x += (@.m_width-v.width)/2} // 中央揃え
					elif stand == 2 {v.x += (@.m_width-v.width)} // 右揃え
				}
			}
		}else{ /* 横書モード */
			local mov = 0 // 寄せる量
			if align & baseSize & baseSize > @.m_width {
				if align == 1 {mov = (baseSize-@.m_width)/2} // 中央寄せ
				elif align == 2 {mov = baseSize-@.m_width} // 右寄せ
			}
			for _, v in each(@.m_string) {
				v.x += mov
				v.y += y
				if v.data.ruby { // ルビ
					if stand == 1 {v.y += (@.m_rubySize-v.height)/2} // 中央揃え
					elif stand == 2 {v.y += (@.m_rubySize-v.height)} // 下揃え
				}else{ // 本文
					v.y += @.m_rubySize // ルビの分下に下げる
					if stand == 1 {v.y += (@.m_height-v.height)/2} // 中央揃え
					elif stand == 2 {v.y += (@.m_height-v.height)} // 下揃え
				}
			}
		}
	}
	
	/* 描画 */
	def @->draw(x, y, alpha){
		for _, v in each(@.m_string) {v->draw(x, y, alpha)}
	}
	
	/* 編集 */
	// ポインタ位置を移動
	// mode: SEEK_SET, SEEK_CUR(既定), SEEK_END
	def @->seek(mov, mode){
		if mode == SEEK_SET {@.m_cur.index = mov}
		elif mode == SEEK_END {@.m_cur.index = @.m_string->size() + mov}
		else {@.m_cur.index += mov}
		
		if @.m_cur.index < 0 {@.m_cur.index = 0}
		elif @.m_cur.index > @.m_string->size() {@.m_cur.index = @.m_string->size()}
		
		local obj = @.m_string[@.m_cur.index-1]
		@.m_cur.x = obj & (obj.x + (@.m_vertical & 0 | obj.width)) | 0
		@.m_cur.y = obj & (obj.y + (@.m_vertical & obj.height | 0)) | 0
	}
	
	// 指定インデックスから指定個数分のDecoChar配列を削除
	// ※maxHeight(縦書ならmaxWidth)を再計算したりはしないので注意
	def @->erase(index, num){
		if !num {num = 1}
		if index < 0 {index = 0}
		if index + num > @.m_string->n() {num = @.m_string->size() - index}
		if index < @.m_string->size() {
			for i = index, @.m_string->n() {
				local prev = @.m_string[i-1]
				local x = prev & (prev.x + (@.m_vertical & 0 | prev.width)) | 0
				local y = prev & (prev.y + (@.m_vertical & prev.height | 0)) | 0
				@.m_string[i] = getclone(@.m_string[i+num]) // index+numのDecoCharを持ってくる
				if @.m_string[i] {@.m_string[i].x, @.m_string[i].y = x, y}
			}
			@.m_string.m_size -= num // 配列サイズ更新
			@.m_text->u8replace(index, num, "") // プレーンテキスト更新
			// ポインタ位置更新
			if @.m_cur.index > index {@.m_cur.index -= num}
			local obj = @.m_string[@.m_cur.index-1]
			@.m_cur.x = obj & (obj.x + (@.m_vertical & 0 | obj.width)) | 0
			@.m_cur.y = obj & (obj.y + (@.m_vertical & obj.height | 0)) | 0
			// 行幅を更新
			obj = @.m_string[@.m_string->n()]
			if @.m_vertical {@.m_height = obj & (obj.y + obj.height) | 0}
			else {@.m_width = obj & (obj.x + obj.width) | 0}
		}
	}
	
	/* 描画に必要なサイズを修得 */
	def @->maxWidth(){return @.m_vertical & @.m_width+@.m_rubySize | @.m_width}
	def @->maxHeight(){return @.m_vertical & @.m_height | @.m_height+@.m_rubySize}
	/* DecoChar配列取得 */
	def @->str(){return @.m_string}
	def @->text(){return @.m_text->str()}
	/* カーソル(ポインタ)位置 */
	def @->cur(){return ${x = @.m_cur.x, y = @.m_cur.y, index = @.m_cur.index}}
	
	return @
}
