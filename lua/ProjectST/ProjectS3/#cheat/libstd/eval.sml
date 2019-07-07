/* ===== �����^eval�֐� ===== */
// int eval.calc("exp")
// unsigned int eval.ucalc("exp")
// exp: + add,  - sub,  * mul,  & and,  ^ xor,  | or,  `�O���[�o��lua�ϐ�`

/* ===== rule =====
 *  <factor> ::= ���l | '(' <bit> ')' | '-' <factor> | '+' <factor>
 *  <bit> ::= <addsub> ( '&' <addsub> | '^' <addsub> | '|' <addsub> )* 
 *  <addsub> ::= <muldiv> ( '+' <muldiv> | '-' <muldiv> )* 
 *  <muldiv> ::= <factor> ( '*' <factor> | '/' <factor> | '%' <factor> )* 
 */

// �m�[�h�\����
local def Node(){
	return ${
		name = "",				// �m�[�h��
		childs = s3.Array(),	// �q�m�[�h�ϒ��z��
		size = 0,				// �q�m�[�h�z��T�C�Y�i�ő�m�[�h���j
		length = 0,				// �q�m�[�h��
		val = 0					// ���l
	}
}

// �v�Z���]���I�u�W�F�N�g
local evaluator = ${
	m_token = ${},		// ����g�[�N��
	m_ix = 0,			// ����Ώۃg�[�N���C���f�b�N�X
	m_mode = true,		// true: signed int,  false: unsigned int �Ōv�Z
	
	// �V�K�m�[�h�쐬
	createNode = def(@, name){
		local pNode = Node()
		pNode.size = 2
		for i = 1, pNode.size {pNode.childs->append(Node())}
		pNode.name = name
		return pNode
	},
	
	// �q�m�[�h�ǉ�
	addChild = def(@, pNode, pChild){
		if pNode.length >= pNode.size {
			pNode.size *= 2		// 2�{�Ɋg������
			for i = 1, pNode.size {pNode.childs->append(Node())}
		}
		pNode.childs[pNode.length] = pChild
		pNode.length += 1
	},
	
	// �q�m�[�h2�ǉ�
	addChild2 = def(@, pNode, pChild1, pChild2){
		@->addChild(pNode, pChild1)
		@->addChild(pNode, pChild2)
	},
	
	// <factor> ::= ���l | '(' <bit> ')' | '-' <factor> | '+' <factor>
	factor = def(@){
		local pNode = nil
		if @.m_token[@.m_ix] == "(" {
			@.m_ix += 1
			pNode = @->bit()
			if @.m_token[@.m_ix] != ")" {error"[evaluator] '('�ɑ΂���')'������܂���"}
			@.m_ix += 1
		}elif @.m_token[@.m_ix] == "-" {
			@.m_ix += 1
			pNode = @->factor()
			pNode.val *= -1 // �������]
		}elif @.m_token[@.m_ix] == "+" {
			@.m_ix += 1
			pNode = @->factor()
		}else{ // Lua�ϐ�
			local str = @.m_token[@.m_ix]
			local c = str->c(0)
			
			pNode = @->createNode("num")
			@.m_ix += 1
			if 47 < c & c <=57 { // �擪�����������Ȃ炻�̂܂܂�����v�Z����
				pNode.val = (@.m_mode & toint(str) | touint(str))
			}else{ // ���l�łȂ��Ȃ�Lua�ϐ��Ƃ���loadstring����
				local val = assert(loadstring("return "..str, "evaluator"))()
				pNode.val = (@.m_mode & toint(val) | touint(val))
			}
		}
		return pNode
	},
	
	// <bit> ::= <addsub> ( '&' <addsub> | '^' <addsub> | '|' <addsub> )*
	bit = def(@){
		local pLeft = @->addsub()
		while @.m_token[@.m_ix] == "&" | @.m_token[@.m_ix] == "^" | @.m_token[@.m_ix] == "|" {
			local pNode = @->createNode(@.m_token[@.m_ix]); @.m_ix += 1
			local pRight = @->addsub()
			@->addChild2(pNode, pLeft, pRight)
			pLeft = pNode
		}
		return pLeft
	},
	
	// <addsub> ::= <muldiv> ( '+' <muldiv> | '-' <muldiv> )*
	addsub = def(@){
		local pLeft = @->muldiv()
		while @.m_token[@.m_ix] == "+" | @.m_token[@.m_ix] == "-" {
			local pNode = @->createNode(@.m_token[@.m_ix]); @.m_ix += 1
			local pRight = @->muldiv()
			@->addChild2(pNode, pLeft, pRight)
			pLeft = pNode
		}
		return pLeft
	},
	
	// <muldiv> ::= <factor> ( '*' <factor> | '/' <factor> | '%' <factor> )*
	muldiv = def(@){
		local pLeft = @->factor()
		while @.m_token[@.m_ix] == "*" | @.m_token[@.m_ix] == "/" | @.m_token[@.m_ix] == "%" {
			local pNode = @->createNode(@.m_token[@.m_ix]); @.m_ix += 1
			local pRight = @->factor()
			@->addChild2(pNode, pLeft, pRight)
			pLeft = pNode
		}
		return pLeft
	},
	
	/* �萔�v�Z */
	calc = def(@, pNode){
		if pNode.name == "num" {return pNode.val}
		local left  = @->calc(pNode.childs[0])
		local right = @->calc(pNode.childs[1])
		local opr = (@.m_mode & toint | touint)
		if pNode.name == '&' {return opr(b_and(left, right))}
		if pNode.name == '^' {return opr(b_xor(left, right))}
		if pNode.name == '|' {return opr(b_or(left, right))}
		if pNode.name == '+' {return opr(left + right)}
		if pNode.name == '-' {return opr(left - right)}
		if pNode.name == '*' {return opr(left * right)}
		if pNode.name == '/' {return opr(left / right)}
		if pNode.name == '%' {return opr(left % right)}
	},
	
	constExpression = def(@, in_token){
		@.m_token = in_token
		@.m_ix = 0
		return @->calc(@->bit())
	}
}

/* �������g�[�N���ɕ��� */
lpeg.locale(lpeg)
local space = lpeg.space^0 // space
// ���Z�q(�L���v�`������)
local op = space * lpeg.C(lpeg.S"+-*/%&|^()") * space
// ���Z�q�ȊO�̕����̘A�Ȃ�͒l(�L���v�`������)
local val = space * lpeg.C(lpeg.P(1 - lpeg.S"+-*/%&|^()")^1) * space
// �\���B�L���v�`�������g�[�N���̓e�[�u���ɒǉ�
local pat = lpeg.Ct(op^-1 * val * (op * val)^0)
local def parseExpression(exp){return s3.Array(pat->match(exp))}


/* ===== ���J�֐� ===== */
return ${
	calc = def(exp){
		evaluator.m_mode = true
		return evaluator->constExpression(parseExpression(exp))
	},
	
	ucalc = def(exp){
		evaluator.m_mode = false
		return evaluator->constExpression(parseExpression(exp))
	}
}
