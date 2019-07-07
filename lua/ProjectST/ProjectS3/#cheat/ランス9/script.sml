// �����X�e�[�^�X���ʃA�h���X�擾(id: 0�`21)
def addr_States(id){
	local offset = 0x03E8
	local base = G(G(0x00767D7C)+0x1EC)
	local idx = G(G(G(base)+0x8)+offset)
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(G(base+idx*4)+0x8)+id*4)
	idx = G(G(G(base+idx*4)+0x8)+0x00)
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(G(base+idx*4)+0x8))
	return G(G(base+idx*4)+0x08)
}

// �̗͂̃A�h���X
def addr_HP(id){
	return addr_States(id)+0x40
}

// ���b�̃A�h���X
def addr_Defence(id){
	return addr_States(id)+0x38
}

// �ő呕�b�̃A�h���X
def addr_DefenceMAX(id){
	return addr_States(id)+0x3C
}

// ����̃A�h���X
def addr_Resist(id){
	return addr_States(id)+0x84
}

// �ŏ��U���͂̃A�h���X
def addr_AttackMIN(id){
	return addr_States(id)+0x78
}

// �ő�U���͂̃A�h���X
def addr_AttackMAX(id){
	return addr_States(id)+0x7C
}

// ���@�͂̃A�h���X
def addr_Magic(id){
	return addr_States(id)+0x80
}

// �n��P�̃A�h���X
def addr_Exp(id){
	local offset = 0x03E8
	local base = G(G(0x00767D7C)+0x1EC)
	local idx = G(G(G(base)+0x8)+offset)
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(G(base+idx*4)+0x8)+id*4)
	idx = G(G(G(base+idx*4)+0x8)+0x0C)
	idx = G(G(G(base+idx*4)+0x8))
	return G(G(base+idx*4)+0x08)+0x0C
}

// ���ʂ̃A�h���X
def addr_Monkey(){
	local offset = 0x3F8
	local base = G(G(0x00767D7C)+0x1EC)
	local idx = G(G(G(base)+0x8)+offset)
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(G(base+idx*4)+0x8)+0x0)
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(G(base+idx*4)+0x8))
	idx = G(G(base+idx*4)+0x8)
	return idx + 0x04
}


/*** main ***/
if K(DIK_A) == 1{ // �U���́E���@�͔{��
	for id = 0, 21 {
		local addr = addr_AttackMIN(id)
		S(addr, G(addr)*2)
		addr = addr_AttackMAX(id)
		S(addr, G(addr)*2)
		addr = addr_Magic(id)
		S(addr, G(addr)*2)
	}
}elif K(DIK_D) == 1{ // �h��͔{��
	for id = 0, 21 {
		local addr = addr_Defence(id)
		S(addr, G(addr)*2)
		addr = addr_DefenceMAX(id)
		S(addr, G(addr)*2)
		addr = addr_Resist(id)
		S(addr, G(addr)*2)
	}
}elif K(DIK_H) == 1{ // �̗�+1000
	for id = 0, 21 {
		local addr = addr_HP(id)
		S(addr, G(addr)+1000)
	}
}elif K(DIK_E) == 1{ // �n��P�{��
	for id = 0, 21 {
		local addr = addr_Exp(id)
		S(addr, G(addr)*2)
	}
}elif K(DIK_M) == 1{ // ����1�ǉ�
	local addr = addr_Monkey()
	local num = G(addr)
	if num < 7 {S(addr, num+1)}
}
