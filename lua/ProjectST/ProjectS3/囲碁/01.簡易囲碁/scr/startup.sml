require "scr.array2d"
require "scr.define"
require "scr.go"

/*------------------------------------------------------------------*/
/* ���C������                                                       */
/*------------------------------------------------------------------*/
def main(){
	local xBlack, yBlack /* ���̒���ʒu */
	local xWhite, yWhite /* ���̒���ʒu */
	local score          /* ���n�|���n   */
	
	initializeBoard() // ��Ղ̏�����
	u8print"Sample Program Start"
	xBlack, yBlack = 999, 999 // �ŏ���0�ȊO�̐����������Ă���
	xWhite, yWhite = 999, 999 // �ŏ���0�ȊO�̐����������Ă���
	black_prisoner, white_prisoner = 0, 0 // �A�Q�n�}
	move = 1 // �萔
	/* �I�ǂ���܂Ń��[�v */
	while true {
		/*------*/
		/* ���� */
		/*------*/
		displayBoard() // ��Ղ̕\��
		xBlack, yBlack = thinkMove(BLACK) // ���̒���ʒu�����
		/* ���������Ȃ甒�̏��� */
		if xBlack >= BOARD_SIZE-1 | yBlack >= BOARD_SIZE-1 {
			u8print"Black Resign. White Win."
			break
		}
		/* �����Ƃ��Ƀp�X�Ȃ�n�𐔂��ď��҂�\�� */
		if ( xBlack < 1 | yBlack < 1 ) & ( xWhite < 1 | yWhite < 1 ) {
			score = countScore()
			if score > 0 { // ����������΍��̏���
				u8print"Black Win"
			}elif score < 0 { // �������Ȃ���Δ��̏���
				u8print"White Win"
			}else{ // �����Ȃ�Έ�����
				u8print"Draw"
			}
			break
		}
		setStone(BLACK, xBlack, yBlack) // ���W��1�`19�Ȃ��Ղɐ΂�u��
		recordMove(BLACK, xBlack, yBlack) // �����ɋL�^
		move += 1 // �萔��1������
		
		/*------*/
		/* ���� */
		/*------*/
		displayBoard() // ��Ղ̕\��
		xWhite, yWhite = thinkMove(WHITE) // ���̒���ʒu�����
		/* ���������Ȃ獕�̏��� */
		if xWhite >= BOARD_SIZE-1 | yWhite >= BOARD_SIZE-1 {
			u8print"White Resign. Black Win."
			break
		}
		/* �����Ƃ��Ƀp�X�Ȃ�n�𐔂��ď��҂�\�� */
		if ( xBlack < 1 | yBlack < 1 ) & ( xWhite < 1 | yWhite < 1 ) {
			score = countScore()
			if score > 0 { // ����������΍��̏���
				u8print"Black Win"
			}elif score < 0 { // �������Ȃ���Δ��̏���
				u8print"White Win"
			}else{ // �����Ȃ�Έ�����
				u8print"Draw"
			}
			break
		}
		setStone(WHITE, xWhite, yWhite) // ���W��1�`19�Ȃ��Ղɐ΂�u��
		recordMove(WHITE, xWhite, yWhite) // �����ɋL�^
		move += 1 // �萔��1������
	}
	u8print"Sample Program End"
	os.execute"pause"
}

main()
