win = Window("��1��")
win:setstyle(WS_GAMEWINDOW)
win:open("�����Ƃ�")

layer = Layer()
layer:open(win:layer():handle(), 640, 480)
layer:setfont(25, 600, "�l�r ����")

input = DirectInput(win:handle())

str1 = "�w�i���t���ƁA���͋C�����͐����Q�[���炵����"
str2 = "���Ă��܂����˥���i^^�j�]�k�ł����AADV��m�x"
str3 = "���͑����v���O�������ւ��ۂ��ł��A���Ȃ��o"
str4 = "���񂪉�ʂɏo�邾���ŋ�����܂���i���΁j"

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
