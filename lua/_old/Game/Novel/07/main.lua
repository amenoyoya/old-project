win = Window("窓1号")
win:setstyle(WS_GAMEWINDOW)
win:open("たいとる")

layer = Layer()
layer:open(win:layer():handle(), 640, 480)
layer:setfont(25, 600, "ＭＳ 明朝")

input = DirectInput(win:handle())

str1 = "背景が付くと、雰囲気だけは随分ゲームらしくな"
str2 = "ってきましたね･･･（^^）余談ですが、ADVやノベ"
str3 = "ルは多少プログラムがへっぽこでも、奇麗なお姉"
str4 = "さんが画面に出るだけで許されます♪（爆笑）"

face, shadow = HGDI:rgb(255,255,255), HGDI:rgb(0,50,50)

back = Bitmap("back.bmp")

while win:run() and input:get() do
	if input:key(DIK_ESCAPE) == 1 then break end
	
	layer:drawbmp(back, 0, 0, 640, 480)
	
	layer:textout3d(20, 20, face, shadow, str1)
	layer:textout3d(20, 50, face, shadow, str2)
	layer:textout3d(20, 80, face, shadow, str3)
	layer:textout3d(20,110, face, shadow, str4)
	
	layer:textout3d(500, 450, HGDI:rgb(200,0,100), shadow,
		string.format("FPS: %03d", win:fps()))
	
	layer:flip()
end

win:close()
