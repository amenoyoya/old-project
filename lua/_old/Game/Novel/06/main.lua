win = Window("��1��")
win:setstyle(WS_GAMEWINDOW)
win:open("�����Ƃ�")

win:layer():setfont(25, 600, "�l�r ����")

str1 = "�w�i���t���ƁA���͋C�����͐����Q�[���炵����"
str2 = "���Ă��܂����˥���i^^�j�]�k�ł����AADV��m�x"
str3 = "���͑����v���O�������ւ��ۂ��ł��A���Ȃ��o"
str4 = "���񂪉�ʂɏo�邾���ŋ�����܂���i���΁j"

face, shadow = HGDI:rgb(255,255,255), HGDI:rgb(0,50,50)

back = Bitmap("back.bmp")
win:layer():drawbmp(back, 0, 0, 640, 480)

win:layer():textout3d(20, 20, face, shadow, str1);
win:layer():textout3d(20, 50, face, shadow, str2);
win:layer():textout3d(20, 80, face, shadow, str3);
win:layer():textout3d(20,110, face, shadow, str4);

while win:run() do
end
