require "libstd.game"

// �E�B���h�E�ݒ�
def s3.sdl.eventHandler(event){
	if event.type == QUIT {
		if IDYES == msgbox("�I�����܂����H", "�m�F", b_or(MB_YESNO, MB_ICONQUESTION)){
			return false
		}else{
			return true
		}
	}
	return sdl.guiEventProc(data)
}

(def(t){
	t.title, t.width, t.height = "���A�T��", 480, 360
})(sdl.App.setting)

// �X�R�A
HISC, SC = 0, 0


/* �e��C�x���g�ݒ� */
local event = s3.Array()

event->append(sdl.EventManager())->append(GAMESTART, def(){ // ���C���[�쐬
	layer = sdl.Layer(480, 360)
	// ���C���[�����ŃN���A���Ă���
	layer->beginScene()
	sdl.fillRect(0, 0, 480, 360, Color(0,0,0))
	layer->endScene()
	GAMESTATE = GAMEPLAY
})->appendLoop(b_or(GAMEPLAY, GAMEOVER), def(){ // ���C���[���f���e�푀��
	// ESC�L�[�ŏI��
	if sdl.getInput("cancel") == 1 {sdl.App->quit()}
	
	// �Z�[�u
	if sdl.getInput(KEY_S) == 1 {
		local bin = Binary()
		if SC > HISC {HISC = SC}
		bin->pushStrData("HISC="..HISC.."\nSC="..SC)
		if saveBinToFile("save.dat", bin) {msgbox("�Z�[�u���܂���")}
		else {msgbox("�Z�[�u�Ɏ��s���܂���")}
	}
	
	// ���[�h
	if sdl.getInput(KEY_L) == 1 {
		if isFile("save.dat") {
			local bin = loadBinFromFile("save.dat")
			if bin {
				assert(loadstring(bin->getStrData()))()
				msgbox("���[�h���܂���")
			}else{
				msgbox("�Z�[�u�f�[�^�̋K�i������������܂���")
			}
		}else{
			msgbox("�Z�[�u�f�[�^������܂���")
		}
	}
	
	// ���C���[���f
	layer->draw(0, 0)
})->set(0)

local UEKABE, SUKIMA = 100, 200
local MY, SPEED, LV = 180, 0.0, 0

event->append(sdl.EventManager())->appendLoop(GAMEPLAY, def(){ // �Q�[�����[�`��
	/*** �E���瓴�A�������Ă��� ***/
	layer->beginScene()
	// �X�R�A���烌�x�����Z�o
	LV = toint(SC/500) + 1
	if LV > 18 {LV = 18}
	
	// �E�[�ɍ���������
	sdl.drawLine(479, 0, 479, 359, Color(0,0,0))
	// ��ǂ�����
	UEKABE = UEKABE + mt_rand(LV*2+1)-LV
	if UEKABE < 10 {UEKABE = 10}
	if UEKABE > 250 {UEKABE = 250}
	sdl.drawLine(479, 0, 479, UEKABE, Color(255,LV*40,0))
	// ���ǂ�����
	SUKIMA = SUKIMA + mt_rand(LV*2+1)-LV
	if SUKIMA < 100{SUKIMA = 100}
	if SUKIMA > 200{SUKIMA = 200}
	sdl.drawLine(479, UEKABE+SUKIMA, 479, 359, Color(255,255,0))
	
	// �����蔻��
	if MY <= 0 | MY >= 360 | sdl.getPixel(340, MY).red != 0 {
		sdl.saveScreenshot("GameOver.bmp")
		GAMESTATE = GAMEOVER
		sdl.App->update()
	}
	// ���L������\��
	sdl.drawPixel(340, MY, Color(255,255,255))
	// OK�L�[�Ŏ��L�����𕂏�
	if sdl.getInput("ok") > 0 {SPEED = SPEED - 0.25}
	else {SPEED = SPEED + 0.25}
	
	if SPEED > 3.0 {SPEED = 3.0}
	if SPEED < -3.0 {SPEED = -3.0}
	MY = MY + toint(SPEED)
	
	// layer��1�s�N�Z�����炵�ĕ`��
	layer->draw(0, 0, 479, 360, 1, 0, 479, 360)
	
	// �X�R�A�\��
	SC = SC + 1
	sdl.fillRect(0, 0, 380, 24, Color(0,0,0))
	sdl.drawEdgeText(5, 5, string.format(
		"Lv:%d/ �n�C�X�R�A:%d/ ���݃X�R�A:%d", LV, HISC, SC),
		Color(255,255,255), Color(0,50,100))
	layer->endScene()
	/*** /���A�`��I��/ ***/
	sdl.App->wait(2)
})->appendLoop(GAMEOVER, def(){ // �Q�[���I�[�o�[����
	sdl.App->wait(30)
	if HISC < SC {HISC = SC}
	if IDYES == msgbox("������x���킵�܂����H", "�m�F", b_or(MB_YESNO, MB_ICONQUESTION)){
		// ���������ăQ�[���ĊJ
		SC, UEKABE, SUKIMA = 0, 100, 200
		MY, SPEED, LV = 180, 0.0, 0
		layer->beginScene()
		sdl.fillRect(0, 0, 480, 360, Color(0,0,0))
		layer->endScene()
		GAMESTATE = GAMEPLAY
		sdl.App->update()
	}else{
		sdl.App->quit()
	}
})->set(1)

sdl.App->run()
