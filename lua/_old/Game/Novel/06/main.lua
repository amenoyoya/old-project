win = Window("窓1号")
win:setstyle(WS_GAMEWINDOW)
win:open("たいとる")

win:layer():setfont(25, 600, "ＭＳ 明朝")

str1 = "背景が付くと、雰囲気だけは随分ゲームらしくな"
str2 = "ってきましたね･･･（^^）余談ですが、ADVやノベ"
str3 = "ルは多少プログラムがへっぽこでも、奇麗なお姉"
str4 = "さんが画面に出るだけで許されます♪（爆笑）"

face, shadow = HGDI:rgb(255,255,255), HGDI:rgb(0,50,50)

back = Bitmap("back.bmp")
win:layer():drawbmp(back, 0, 0, 640, 480)

win:layer():textout3d(20, 20, face, shadow, str1);
win:layer():textout3d(20, 50, face, shadow, str2);
win:layer():textout3d(20, 80, face, shadow, str3);
win:layer():textout3d(20,110, face, shadow, str4);

while win:run() do
end
