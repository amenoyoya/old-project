require "s3.libwin32"
require "libstd.ext"
local eval = require "libstd.eval"

if getArgc() == 0 | !isDir(getArgv(1)) {
	error"[#cheat.main] �R�}���h���C�������Ƀ`�[�g�Ώۃ^�C�g���t�H���_���w�肵�Ă�������"
}

// �ݒ�t�@�C����ǂݍ���
/* �ݒ荀�ڂ́A
 * �Echeat.title: �`�[�g�Ώۃ^�C�g��
 * �Echeat.app: �`�[�g�Ώۃv���Z�X��
 * �Echeat.dir: �`�[�g�Ώۃv���Z�X�̂���f�B���N�g��
 */
local cheat = require(getArgv(1).."/setting")

/*** �`�[�g�p�e��֐���` ***/
local proc = s3.win32.Process()
local input = s3.win32.DirectInput()

// �L�[���͔���
def K(dik_id){
	return input->key(dik_id)
}

// DirectInput������͕�����擾
def I(){
	return input->getStr()
}

// �w��A�h���X�̒l���擾
def G(address, byte){
	return proc->get(address, byte | 4)
}

// �w��A�h���X�ɒl����������
def S(address, val, byte){
	return proc->set(address, val, byte | 4)
}

// ��������g��������ȏ�������
// 2�������̒P�ʂ�16�i��WORD�Ƃ��ď�������ł���
// ??�Ŏw�肳�ꂽ�����̒l�͕ύX���Ȃ�
def P(address, exp){
	return proc->puts(address, exp)
}

// �r�b�g���Z�\�Ȍv�Z�����s(signed)
def E(exp){
	return eval.calc(exp)
}

// �r�b�g���Z�\�Ȍv�Z�����s(unsigned)
def U(exp){
	return eval.ucalc(exp)
}


/*** ���C������ ***/
s3.win32.Process->getAll()

// �v���Z�X�I�[�v��or�N��
if !proc->open(cheat.app) {
	local dir = getCurrentDir()
	
	setCurrentDir(Path(cheat.dir))
	if !proc->exec(cheat.app) {
		error("[#cheat.main] �v���Z�X'"..cheat.app.."'���N���ł��܂���ł���")
	}
	setCurrentDir(dir)
}

// DirectInput����
u8printf("HWND: %X\n", proc->hwnd())
if !input->open(proc->hwnd()) {
	error"[#cheat.main] DirectInput�̐����Ɏ��s���܂���"
}

// �n�b�L���O�֐��Ăяo��
local hack = loadstring(File->load(Path(getArgv(1).."/script.sml")), "script.sml")

// ����
s3.win32.setConsColor(s3.win32.H_YELLOW)
u8print"#cheat.main ver.1.00\tby S3Engine ver.1.30"
s3.win32.setConsColor(s3.win32.H_GREEN)
u8print("�n�b�L���O�Ώہc�c "..cheat.title)
s3.win32.setConsColor(s3.win32.H_RED)
u8print"�I������ꍇ�́A�n�b�L���O�Ώۃv���Z�X���I�����Ă�������"
s3.win32.setConsColor(s3.win32.L_CYAN)
u8print"\n�Ȃ��n�b�L���O�Ώۃv���Z�X���"
u8print"\t�u4�v�L�[��������#cheat.main���I���ł��܂�"
u8print"\t�u5�v�L�[�������ƃ`�[�g�X�N���v�g�������[�h�o���܂�\n"
u8print"\t�u6�v�L�[�������ƃ`�[�g�X�N���v�g�̎��s���ꎞ��~/�ĊJ�o���܂�\n"
// �J�n
local run = true
s3.win32.setConsColor()
while !proc->isExit() {
	input->get()
	if K(DIK_6) == 1 {run = !run}
	if run {
		if K(DIK_4) == 1 {
			break
		}elif K(DIK_5) == 1 {
			hack = loadstring(File->load(Path(getArgv(1).."/script.sml")), "script.sml")
		}else{
			hack()
		}
	}
	sleep(10)
}
// �I��
input->close()
