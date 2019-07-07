require "core"

textarea = {
	left=20, top=20, right=640-20, bottom=480-20
}
fontsize, textwait = 20, 40
face_color, shadow_color = HGDI:rgb(100,200,200), HGDI:rgb(0,50,50)

texttimer = Timer()
textlayer = Layer()
textlayer:open(layer:handle(), 640, 480)
textlayer:setfont(fontsize, 600, "ＭＳ 明朝")

textmsg = ""
textcur = 1
textpos = Point(textarea.left, textarea.top)

-- 改行
function breakline(size)
	textpos.y = textpos.y + size*5/4
	textpos.x = textarea.left
end

-- テキストエンジン実行
function run_textengine()
	textlayer:flip()
	if textcur > textmsg:len() then return false end
	if not texttimer:check(textwait) then return true end
	
	if iszenkaku(textmsg:sub(textcur)) then
		local buf = textmsg:sub(textcur, textcur+1)
		local size = textlayer:gettextsize(buf)
		
		if textpos.x + size.cx > textarea.right then
			breakline(size.cy)
		end
		
		textlayer:textout3d(textpos.x, textpos.y, face_color, shadow_color, buf)
		textpos.x = textpos.x + size.cx
		textcur = textcur + 2
	else
		local buf = textmsg:sub(textcur, textcur)
		local size = textlayer:gettextsize(buf)
		
		if textpos.x + size.cx > textarea.right then
			breakline(size.cy)
		end
		
		textlayer:textout3d(textpos.x, textpos.y, face_color, shadow_color, buf)
		textpos.x = textpos.x + size.cx
		textcur = textcur + 1
	end
	
	texttimer:start()
	return true;
end
