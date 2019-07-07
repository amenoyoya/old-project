/*** �͌�Q�[���p�֐� ***/

/*------------------------------------------------------------------*/
/* ��Ղ̏�����                                                     */
/*------------------------------------------------------------------*/
def initializeBoard(){
	for y = 1, BOARD_SIZE-2 {
		for x = 1, BOARD_SIZE-2 { board->set(y, x, SPACE) }
	}
	for y = 0, BOARD_SIZE-1 {
		board->set(y, 0, OUT)
		board->set(y, BOARD_SIZE-1, OUT)
		board->set(0, y, OUT)
		board->set(BOARD_SIZE-1, y, OUT)
	}
}

/*------------------------------------------------------------------*/
/* ��Ղ�\������                                                   */
/*------------------------------------------------------------------*/
def displayBoard(){
	u8print"    [ A B C D E F G H J K L M N O P Q R S T]"
	for y = 1, BOARD_SIZE-2 {
		u8printf("[%2d] ", y)
		for x = 1, BOARD_SIZE-2 { u8printf(" %s", stone[board->get(y, x)]) }
		u8print""
	}
}

/*------------------------------------------------------------------*/
/* ����ʒu�̓���: x,y ���Ԃ�                                       */
/* ���͉�ʂ�����͂���悤�ɂȂ��Ă��܂����A�������R���s���[�^���l */
/* ���Ē���ʒu��Ԃ��悤�ɂ���΁A�R���s���[�^�ΐl�Ԃ̃v���O������ */
/* �Ȃ�܂�                                                         */
/*------------------------------------------------------------------*/
def thinkMove(color){
	local inputX, inputY = 0, 0
	while true {
		/* ����ʒu�̓��� */
		inputX, inputY = inputCoordinate(color)
		if inputX > 0 & inputX < BOARD_SIZE-1 & inputY > 0 & inputY < BOARD_SIZE-1 {
			/* ���W��1�`19�Ȃ�΍��@�肪�ǂ������ׂ� */
			if checkLegal(color, inputX, inputY) {break}
		}else{
			break
		}
	}
	return inputX, inputY
}

/*------------------------------------------------------------------*/
/* ��ʂ��琔�l�����: ���͂��ꂽ x,y ���Ԃ�                        */
/* X���W��1�`19�Ȃ��Y���W�����͂���                                */
/* X���W��1��菬������΃p�X�Ƃ݂Ȃ��AY���W�͓��͂��Ȃ�            */
/* X���W��19���傫����Γ����Ƃ݂Ȃ��AY���W�͓��͂��Ȃ�           */
/*------------------------------------------------------------------*/
def inputCoordinate(color){
	local x, y
	
	u8print("\nPlease Input "..(color == BLACK & "Black" | "White").." Coordinates.")
	u8print" Pass -> 0, Quit -> 20\n"
	/* X���W�̓��� */
	while !x {
		u8printf"InputX:"
		x = tonumber(io.read())
	}
	x = toint(x)
	if x > 0 & x < BOARD_SIZE-1 { /* X���W��1�`19�Ȃ̂�Y���W�̓��� */
		while !y {
			u8printf"InputY:"
			y = tonumber(io.read())
		}
		y = toint(y)
	}elif x < 1 { /* X���W��1��菬�����̂Ńp�X�Ƃ݂Ȃ��AY���W�͓��͂��Ȃ� */
		y = 0
	}else{ /* X���W��19���傫���̂œ����Ƃ݂Ȃ��AY���W�͓��͂��Ȃ� */
		y = 20
	}
	return x, y
}

/*------------------------------------------------------------------*/
/* ���@�肩�ǂ������ׂ�                                             */
/*------------------------------------------------------------------*/
def checkLegal(color, x, y){
	if board->get(y, x) != SPACE { /* ��_����Ȃ��ƒu���܂��� */
		return false
	}
	if move > 1 { /* ���O�ɍ�������Ă�����u���܂��� */
		if ko_x == x & ko_y == y & ko_num == move-1 {return false}
	}
	if checkSuicide(color, x, y) { /* ���E��Ȃ�u���܂��� */
		return false
	}
	/* �ȏ�̃`�F�b�N�����ׂăN���A�ł����̂Œu���܂� */
	return true
}

/*------------------------------------------------------------------*/
/* ���E�肩�ǂ������ׂ�                                             */
/*------------------------------------------------------------------*/
def checkSuicide( color, x, y){
	local opponent // ����̐F
	
	board->set(y, x, color) // ���ɐ΂�u��
	clearCheckBoard() // �}�[�N�̃N���A
	
	/* �Ώۂ̐΂�����Ɉ͂܂�Ă��邩���ׂ� */
	local rtnVal = doCheckRemoveStone(color, x, y)
	if rtnVal { // �͂܂�Ă���Ȃ�Ύ��E��̉\������
		opponent = reverseColor(color) // ����̐F�����߂�
		/* ���̐΂�u�������Ƃɂ��A�ׂ̑���̐΂�����Ȃ玩�E��ł͂Ȃ� */
		if x > 1 {
			if board->get(y, x-1) == opponent { // �ׂ͑���H
				clearCheckBoard() // �}�[�N�̃N���A
				/* ����̐΂͈͂܂�Ă��邩�H */
				rtnVal = doCheckRemoveStone(opponent, x-1, y)
				if rtnVal { // ����̐΂�����̂Ŏ��E��ł͂Ȃ�
					board->set(y, x, SPACE) // �Ղ����ɖ߂�
					return false
				}
			}
		}
		if y > 1 {
			if board->get(y-1, x) == opponent { // �ׂ͑���H
				clearCheckBoard() // �}�[�N�̃N���A
				/* ����̐΂͈͂܂�Ă��邩�H */
				rtnVal = doCheckRemoveStone(opponent, x, y-1)
				if rtnVal { // ����̐΂�����̂Ŏ��E��ł͂Ȃ�
					board->set(y, x, SPACE) // �Ղ����ɖ߂�
					return false
				}
			}
		}
		if x < BOARD_SIZE-2 {
			if board->get(y, x+1) == opponent { // �ׂ͑���H
				clearCheckBoard() // �}�[�N�̃N���A
				/* ����̐΂͈͂܂�Ă��邩�H */
				rtnVal = doCheckRemoveStone(opponent, x+1, y)
				if rtnVal { // ����̐΂�����̂Ŏ��E��ł͂Ȃ�
					board->set(y, x, SPACE) // �Ղ����ɖ߂�
					return false
				}
			}
		}
		if y < BOARD_SIZE-2 {
			if board->get(y+1, x) == opponent { // �ׂ͑���H
				clearCheckBoard() // �}�[�N�̃N���A
				/* ����̐΂͈͂܂�Ă��邩�H */
				rtnVal = doCheckRemoveStone(opponent, x, y+1)
				if rtnVal { // ����̐΂�����̂Ŏ��E��ł͂Ȃ�
					board->set(y, x, SPACE) // �Ղ����ɖ߂�
					return false
				}
			}
		}
		board->set(y, x, SPACE) // �Ղ����ɖ߂�
		return true // ����̐΂����Ȃ��Ȃ玩�E��
	}else{
		board->set(y, x, SPACE) // �Ղ����ɖ߂�
		return false // �͂܂�Ă��Ȃ��̂Ŏ��E��ł͂Ȃ�
	}
}

/*------------------------------------------------------------------*/
/* �`�F�b�N�p�̌�Ղ��N���A                                         */
/*------------------------------------------------------------------*/
def clearCheckBoard(){
	for y = 1, BOARD_SIZE-2 {
		for x = 1, BOARD_SIZE-2 {check_board->set(y, x, false)}
	}
}

/*------------------------------------------------------------------*/
/* ���W(x,y)�ɂ���color�΂�����Ɉ͂܂�Ă��邩���ׂ�               */
/* ��_�������false��Ԃ��A��_���Ȃ����true��Ԃ�                */
/*------------------------------------------------------------------*/
def doCheckRemoveStone(color, x, y){
	local rtn
	
	if check_board->get(y, x) { // �Ώۂ̏ꏊ�����ɒ��ׂ��_�Ȃ炨���܂�
		return true
	}
	check_board->set(y, x, true) // ���ׂ����Ƃ��}�[�N����
	if board->get(y, x) == SPACE { // �����u����Ă��Ȃ��Ȃ�΂����܂�
		return false
	}
	if board->get(y, x) == color { // �����F�̐΂Ȃ�΂��̐΂ׂ̗����ׂ�
		if x > 1 { // ���̐΂̍�(x-1,y)�𒲂ׂ�
			rtn = doCheckRemoveStone(color, x-1, y)
			if !rtn {return false}
		}
		if y > 1 { // ���̐΂̏�(x,y-1)�𒲂ׂ�
			rtn = doCheckRemoveStone(color, x, y-1)
			if !rtn {return false}
		}
		if x < BOARD_SIZE-2 { // ���̐΂̉E(x+1,y)�𒲂ׂ�
			rtn = doCheckRemoveStone(color, x+1, y)
			if !rtn {return false}
		}
		if y < BOARD_SIZE-2 { // ���̐΂̉�(x,y+1)�𒲂ׂ�
			rtn = doCheckRemoveStone(color, x, y+1)
			if !rtn {return false}
		}
	}
	return true // ����̐F�̐΂�������
}

/*------------------------------------------------------------------*/
/* ���s�̔���                                                       */
/* ���̃v���O�����ł͒n�𐔂��Ă��܂���                             */
/* �A�Q�n�}�̑������������Ɣ��肵�Ă��܂�                           */
/*------------------------------------------------------------------*/
def countScore(){
	local black_score, white_score = 0, 0
	/* ��Տ�̒n�𐔂���ׂ��Ƃ��낾���ȗ� */
	/* �A�Q�n�}�������� */
	black_score += black_prisoner
	white_score += white_prisoner
	return black_score - white_score // ���|����Ԃ�
}

/*------------------------------------------------------------------*/
/* ��Ղɐ΂�u��                                                   */
/*------------------------------------------------------------------*/
def setStone(color, x, y){
	local prisonerN = 0   /* ��菜���ꂽ�΂̐��i��j */
	local prisonerE = 0   /* ��菜���ꂽ�΂̐��i�E�j */
	local prisonerS = 0   /* ��菜���ꂽ�΂̐��i���j */
	local prisonerW = 0   /* ��菜���ꂽ�΂̐��i���j */
	local prisonerAll = 0 /* ��菜���ꂽ�΂̑��� */
	local koFlag = false  /* �����ǂ��� */
	
	board->set(y, x, color) // ���W(x,y)�ɐ΂�u��
	/* �u�����΂ׂ̗ɓ����F�̐΂͂��邩�H */
	if board->get(y+1, x) != color & board->get(y-1, x) != color &
		board->get(y, x+1) != color & board->get(y, x-1) != color
	{
		koFlag = true // �����F�̐΂��Ȃ��Ȃ�΍���������Ȃ�
	}else{
		koFlag = false // �����F�̐΂�����Ȃ�΍��ł͂Ȃ�
	}
	/* �u�����΂̎��͂̑���̐΂�����ł���Ό�Ղ����菜�� */
	if y > 1 {
		prisonerN = removeStone(color, x, y-1)
	}
	if x > 1 {
		prisonerW = removeStone(color, x-1, y)
	}
	if y < BOARD_SIZE-2 {
		prisonerS = removeStone(color, x, y+1)
	}
	if x < BOARD_SIZE-2 {
		prisonerE = removeStone(color, x+1, y)
	}
	prisonerAll = prisonerN + prisonerE + prisonerS + prisonerW // ��菜���ꂽ�΂̑���
	/* �u�����΂ׂ̗ɓ����F�̐΂��Ȃ��A��菜���ꂽ�΂��P�Ȃ�΍� */
	if koFlag & prisonerAll == 1 {
		ko_num = move // ���̔��������萔���o����
		/* ���̍��W���o���� */
		if prisonerE == 1 { // ��菜���ꂽ�΂��E
			ko_x, ko_y = x+1, y
		}elif prisonerS == 1 { // ��菜���ꂽ�΂���
			ko_x, ko_y = x, y+1
		}elif prisonerW == 1 { // ��菜���ꂽ�΂���
			ko_x, ko_y = x-1, y
		}elif prisonerN == 1 { // ��菜���ꂽ�΂���
			ko_x, ko_y = x, y-1
		}
	}
	/* �A�Q�n�}�̍X�V */
	if prisonerAll > 0 {
		if color == BLACK {
			black_prisoner += prisonerAll
		}elif color == WHITE {
			white_prisoner += prisonerAll;
		}
	}
}

/*------------------------------------------------------------------*/
/* ���W(x,y)�̐΂�����ł���Ό�Ղ����菜��                      */
/* ��Ղ����菜���ꂽ�ΐ����Ԃ�                                   */
/*------------------------------------------------------------------*/
def removeStone(color, x, y){
	if board->get(y, x) == color { // �u�����΂Ɠ����F�Ȃ���Ȃ�
		return 0
	}
	if board->get(y, x) == SPACE { // ��_�Ȃ���Ȃ�
		return 0
	}
	clearCheckBoard() // �}�[�N�̃N���A
	if doCheckRemoveStone(board->get(y, x), x, y) { // �͂܂�Ă���Ȃ���
		return doRemoveStone(board->get(y, x), x, y, 0)
	}
	return 0
}

/*------------------------------------------------------------------*/
/* ���W(x,y)��color�΂���Ղ����菜���A������΂̐���Ԃ�         */
/*------------------------------------------------------------------*/
def doRemoveStone(color, x, y, prisoner){
	/* ��菜�����΂Ɠ����F�Ȃ�ΐ΂���� */
	if board->get(y, x) == color {
		prisoner += 1 // ������΂̐����P���₷
		board->set(y, x, SPACE) // ���̍��W�ɋ�_��u��
		if x > 1 { // ���𒲂ׂ�
			prisoner = doRemoveStone(color, x-1, y, prisoner)
		}
		if y > 1 { // ��𒲂ׂ�
			prisoner = doRemoveStone(color, x, y-1, prisoner)
		}
		if x < BOARD_SIZE-2 { // �E�𒲂ׂ�
			prisoner = doRemoveStone(color, x+1, y, prisoner)
		}
		if y < BOARD_SIZE-2 { // ���𒲂ׂ�
			prisoner = doRemoveStone(color, x, y+1, prisoner)
		}
	}
	return prisoner // ������΂̐���Ԃ�
}

/*------------------------------------------------------------------*/
/* �����ɋL�^                                                       */
/*------------------------------------------------------------------*/
def recordMove(color, x, y){
	if move < 500 {
		log_data[move].color = color
		log_data[move].x     = x
		log_data[move].y     = y
	}
}
