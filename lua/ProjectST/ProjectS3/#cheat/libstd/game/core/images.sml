/*** 画像管理 ***/
sdl.IMG = ${} // 画像配列
local IMG_main = s3.Array() // 画像ロードした画像ID
local IMG_sub = s3.Array() // 画像ハンドルを継承した画像ID

/* 画像オブジェクト */
local def Sprite(id, img, colorKey){
	local @ = ${}
	@.m_alive = 1 // 表示フラグ(0 or 1)
	@.x, @.y, @.dx, @.dy = 0, 0, 0, 0 // 表示位置、移動速度
	@.m_width, @.m_height = -1, -1 // 当たり判定用
	@.m_scaleX, @.m_scaleY = 1, 1 // スケール
	@.m_src = ${x = 0, y = 0, width = -1, height = -1} // 表示領域
	@.m_angle = 0; @.m_center = ${x = 0, y = 0} // 回転角度, 回転中心
	@.m_flip = 0; @.m_blend = BLEND_ALPHA // 反転状態, ブレンドモード
	@.m_color = Color(255,255,255) // 表示色
	
	/* 画像ロード(コンストラクタ) */
	// img: 画像ファイル名、もしくはSpriteオブジェクト
	// 		Spriteオブジェクトを指定した場合は、そのsdl.Texture画像を描画する
	// ・imgが文字列で"text:"から始まっている場合はTextLayer作成
	def @->__init__(id, img, colorKey){
		if type(img) == "string"{
			if img->csub(0, 5) == "text:"{ // TextLayer作成
				@.m_handle = sdl.TextLayer(img->csub(5))
			}else{ // 新規画像ロード
				@.m_handle = sdl.Image(img, colorKey)
			}
			@.m_filename = img // ロードした画像ファイル名 or DecoText
			@.m_orgID = id
			@.m_colorKey = colorKey // カラーキー
		}elif type(img) == "table"{ // 画像ハンドル継承
			@.m_handle = img.m_handle
			@.m_orgID = img.m_orgID // ロードしたオリジナル画像ID
		}
	}
	
	/* 描画 */
	def @->draw(){
		if @.m_handle & @.m_alive == 1{
			local w = (@.m_src.width == -1 & @->width() | @.m_src.width)
			local h = (@.m_src.height == -1 & @->height() | @.m_src.height)
			
			@.m_handle->setAngle(@.m_angle)->setCenter(@.m_center.x, @.m_center.y)->setFlip(@.m_flip)
			return @.m_handle->setBlendMode(@.m_blend) & @.m_handle->setColor(@.m_color)
				& @.m_handle->draw(@.x, @.y, w * @.m_scaleX, h * @.m_scaleY, @.m_src.x, @.m_src.y, @.m_src.width, @.m_src.height)
		}
		return false
	}
	
	/* 描画フラグ設定 */
	// flag=nilなら現在状態取得
	def @->alive(flag){
		if flag != nil{@.m_alive = tonumber(flag)}
		return @.m_alive
	}
	
	/* 位置 */
	def @->setPos(x, y){@.x, @.y = x, y}
	
	/* 拡大・縮小 */
	def @->setScaleX(sx){
		@.m_scaleX = sx
		@.m_width = (@.m_src.width == -1 & @->width() | @.m_src.width) * @.m_scaleX
	}
	def @->setScaleY(sy){
		@.m_scaleY = sy
		@.m_height = (@.m_src.height == -1 & @->height() | @.m_src.height) * @.m_scaleY
	}
	def @->setScale(sx, sy){
		@->setScaleX(sx); @->setScaleY(sy & sy | sx)
	}
	
	/* 表示領域 */
	def @->setSource(x, y, w, h){
		table.set(@.m_src, ${x = x, y = y, width = w, height = h})
		@.m_width = (@.m_src.width == -1 & @->width() | @.m_src.width) * @.m_scaleX
		@.m_height = (@.m_src.height == -1 & @->height() | @.m_src.height) * @.m_scaleY
	}
	
	/* 移動 */
	def @->move(){@.x += @.dx; @.y += @.dy}
	
	/* 回転設定 */
	def @->setAngle(angle){@.m_angle = angle}
	// -1を指定すると回転中心をサイズ/2に
	def @->setCenter(x, y){@.m_center = ${x = x, y = y}}
	
	/* 反転設定(0: 通常、1: 水平反転、2: 垂直反転) */
	def @->setFlip(mode){@.m_flip = mode}
	
	/* ブレンディング */
	def @->setBlendMode(mode){@.m_blend = (mode & mode | BLEND_ALPHA)}
	
	/* 色設定 */
	def @->setColor(r, g, b){
		if tolua.type(r) == "s3::sdl::Color"{
			@.m_color = r
		}else{
			if type(r) == "number"{@.m_color.red = r}
			if type(g) == "number"{@.m_color.green = g}
			if type(b) == "number"{@.m_color.blue = b}
		}
	}
	def @->setAlpha(a){@.m_color.alpha = a}
	
	/* フェードイン */
	def @->fadeIn(count){
		local frame = count - 1
		while frame >= 0{
			@->setAlpha(toint(255/count)*(count-frame))
			frame -= 1
			@->draw()
			sdl.App->update()
		}
	}
	
	/* フェードアウト */
	def @->fadeOut(count){
		local frame = 0
		while frame < count{
			@->setAlpha(toint(255/count)*(count-frame))
			frame += 1
			@->draw()
			sdl.App->update()
		}
	}
	
	/* 当たり判定 */
	// x: sdl.IMG[xxx]でも可(y, w, hは無視)
	def @->collision(x, y, w, h){
		local sw = (@.m_width == -1 & @->width() | @.m_width)
		local sh = (@.m_height == -1 & @->height() | @.m_height)
		local ix, iy, iw, ih = x, y, w, h
		
		if type(x) == "table"{
			ix, iy = x.x, x.y
			iw = (x.m_width == -1 & x->width() | x.m_width)
			ih = (x.m_height == -1 & x->height() | x.m_height)
		}
		return @.x < ix + iw & @.x + sw > ix & @.y < iy + ih & @.y + sh > iy
	}
	
	def @->width(){return @.m_handle & @.m_handle->width() | @.m_width}
	def @->height(){return @.m_handle & @.m_handle->height() | @.m_height}
	
	@->__init__(id, img, colorKey)
	return @
}


/*** 画像登録 ***/
// id: 描画ルーチンID。若いほど奥に描かれる
// img: 画像ファイル名、もしくはsdl.IMG[xxx]
def sdl.IMG_append(id, img, colorKey, fadeInFrame){
	local obj = Sprite(id, img, colorKey)
	
	sdl.IMG_erase(id)
	sdl.IMG[id] = obj
	// メイン画像かサブ画像か判定し、配列に追加
	if obj.m_filename{IMG_main->append(id)}
	else{IMG_sub->append(id)}
	// 描画関数をid番目のルーチンに割り当て
	sdl.App.routine->append(id, def(){
		local obj = sdl.IMG[id]
		
		if type(fadeInFrame) == "number"{ // フェードインする
			obj->fadeIn(fadeInFrame)
		}
		// 描画
		while true{
			if obj->alive() == 1{obj->move(); obj->draw()}
			sdl.App.routine->update()
		}
	})
	return obj
}

/*** 画像登録抹消 ***/
def sdl.IMG_erase(id, fadeOutFrame){
	if sdl.IMG[id]{
		if type(fadeOutFrame) == "number"{
			sdl.App.routine->append(id, def(){
				local obj = sdl.IMG[id]
				// フェードアウトする
				obj->fadeOut(fadeOutFrame)
				sdl.IMG[id] = nil
				sdl.App.routine->erase(id)
			})
		}else{
			sdl.IMG[id] = nil
			sdl.App.routine->erase(id)
		}
		// 配列削除
		local index = IMG_main->find(id)
		if index{IMG_main->erase(index)}
		else{IMG_sub->erase(IMG_sub->find(id))}
		collectgarbage "collect"
	}
}


/*** 登録画像状態保存 ***/
// 戻り値: Binary
def sdl.IMG_pack(){
	local bin = Binary()
	
	bin->reserve(IMG_main->size()*126 + IMG_sub->size()*126)
	// オリジナル画像配列セーブ
	bin->pushVal(IMG_main->size()) // 配列数
	for key, id in each(IMG_main){
		local obj = sdl.IMG[id]
		
		bin->pushVal(id); bin->pushStrData(obj.m_filename)
		if obj.m_colorKey{
			bin->pushVal(1, 1); bin->pushVal(obj.m_colorKey.red, 1)
			bin->pushVal(obj.m_colorKey.green, 1); bin->pushVal(obj.m_colorKey.blue, 1)
		}else{
			bin->pushVal(0, 1)
		}
		bin->pushVal(obj.m_alive, 1); bin->pushVal(obj.x); bin->pushVal(obj.y)
		bin->pushVal(obj.dx); bin->pushVal(obj.dy)
		bin->pushVal(obj.m_width); bin->pushVal(obj.m_height)
		bin->pushNum(obj.m_scaleX); bin->pushNum(obj.m_scaleY)
		bin->pushVal(obj.m_src.x); bin->pushVal(obj.m_src.y); bin->pushVal(obj.m_src.width); bin->pushVal(obj.m_src.height)
		bin->pushNum(obj.m_angle); bin->pushVal(obj.m_center.x); bin->pushVal(obj.m_center.y)
		bin->pushVal(obj.m_flip, 1); bin->pushVal(obj.m_blend, 1)
		bin->pushVal(obj.m_color.red, 1); bin->pushVal(obj.m_color.green, 1); bin->pushVal(obj.m_color.blue, 1); bin->pushVal(obj.m_color.alpha, 1)
	}
	// サブ画像配列セーブ
	bin->pushVal(IMG_sub->size()) // 配列数
	for key, id in each(IMG_sub){
		local obj = sdl.IMG[id]
		
		bin->pushVal(id); bin->pushVal(obj.m_orgID)
		bin->pushVal(obj.m_alive, 1); bin->pushVal(obj.x); bin->pushVal(obj.y)
		bin->pushVal(obj.dx); bin->pushVal(obj.dy)
		bin->pushVal(obj.m_width); bin->pushVal(obj.m_height)
		bin->pushNum(obj.m_scaleX); bin->pushNum(obj.m_scaleY)
		bin->pushVal(obj.m_src.x); bin->pushVal(obj.m_src.y); bin->pushVal(obj.m_src.width); bin->pushVal(obj.m_src.height)
		bin->pushNum(obj.m_angle); bin->pushVal(obj.m_center.x); bin->pushVal(obj.m_center.y)
		bin->pushVal(obj.m_flip, 1); bin->pushVal(obj.m_blend, 1)
		bin->pushVal(obj.m_color.red, 1); bin->pushVal(obj.m_color.green, 1); bin->pushVal(obj.m_color.blue, 1); bin->pushVal(obj.m_color.alpha, 1)
	}
	return bin
}


/*** 登録画像状態復元 ***/
// bin: IMG_packで生成したBinaryオブジェクト
def sdl.IMG_unpack(bin){
	local num = bin->getU32()
	for i = 1, num{ // オリジナル画像配列復元
		local id, name = bin->getS32(), bin->getStrData()
		local key = nil
		if bin->getU8() == 1{
			key = Color(bin->getU8(), bin->getU8(), bin->getU8())
		}
		// 画像復元
		local img = sdl.IMG_append(id, name, key)
		img.m_alive = bin->getU8()
		img.x, img.y = bin->getS32(), bin->getS32()
		img.dx, img.dy = bin->getS32(), bin->getS32()
		img.m_width, img.m_height = bin->getS32(), bin->getS32()
		img.m_scaleX, img.m_scaleY = bin->getNum(), bin->getNum()
		img.m_src = ${
			x = bin->getS32(), y = bin->getS32(), width = bin->getS32(), height = bin->getS32()
		}
		img.m_angle = bin->getNum()
		img.m_center = ${x = bin->getS32(), y = bin->getS32()}
		img.m_flip, img.m_blend = bin->getU8(), bin->getU8()
		img.m_color = Color(bin->getU8(), bin->getU8(), bin->getU8(), bin->getU8())
	}
	num = bin->getU32()
	for i = 1, num{ // サブ画像配列復元
		local id, parentID = bin->getS32(), bin->getS32()
		local parent = sdl.IMG[parentID]
		if !parent{error "[sdl.IMG_unpack] サブ画像オブジェクトの復元に失敗\n正しいセーブデータでない可能性があります"}
		// 画像復元
		local img = sdl.IMG_append(id, parent)
		img.m_alive = bin->getU8()
		img.x, img.y = bin->getS32(), bin->getS32()
		img.dx, img.dy = bin->getS32(), bin->getS32()
		img.m_width, img.m_height = bin->getS32(), bin->getS32()
		img.m_scaleX, img.m_scaleY = bin->getNum(), bin->getNum()
		img.m_src = ${
			x = bin->getS32(), y = bin->getS32(), width = bin->getS32(), height = bin->getS32()
		}
		img.m_angle = bin->getNum()
		img.m_center = ${x = bin->getS32(), y = bin->getS32()}
		img.m_flip, img.m_blend = bin->getU8(), bin->getU8()
		img.m_color = Color(bin->getU8(), bin->getU8(), bin->getU8(), bin->getU8())
	}
}
