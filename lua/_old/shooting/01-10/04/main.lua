require "char"

opendx("‚Ä‚·‚Æ‚°`‚Şô", 640, 480)
load_char()

while rundx(60) and 0 == key(DIK_ESCAPE) do
	draw_char()
end
