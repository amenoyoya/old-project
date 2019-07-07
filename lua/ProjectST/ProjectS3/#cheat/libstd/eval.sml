/* ===== 整数型eval関数 ===== */
// int eval.calc("exp")
// unsigned int eval.ucalc("exp")
// exp: + add,  - sub,  * mul,  & and,  ^ xor,  | or,  `グローバルlua変数`

/* ===== rule =====
 *  <factor> ::= 数値 | '(' <bit> ')' | '-' <factor> | '+' <factor>
 *  <bit> ::= <addsub> ( '&' <addsub> | '^' <addsub> | '|' <addsub> )* 
 *  <addsub> ::= <muldiv> ( '+' <muldiv> | '-' <muldiv> )* 
 *  <muldiv> ::= <factor> ( '*' <factor> | '/' <factor> | '%' <factor> )* 
 */

// ノード構造体
local def Node(){
	return ${
		name = "",				// ノード名
		childs = s3.Array(),	// 子ノード可変長配列
		size = 0,				// 子ノード配列サイズ（最大ノード数）
		length = 0,				// 子ノード数
		val = 0					// 数値
	}
}

// 計算式評価オブジェクト
local evaluator = ${
	m_token = ${},		// 操作トークン
	m_ix = 0,			// 操作対象トークンインデックス
	m_mode = true,		// true: signed int,  false: unsigned int で計算
	
	// 新規ノード作成
	createNode = def(@, name){
		local pNode = Node()
		pNode.size = 2
		for i = 1, pNode.size {pNode.childs->append(Node())}
		pNode.name = name
		return pNode
	},
	
	// 子ノード追加
	addChild = def(@, pNode, pChild){
		if pNode.length >= pNode.size {
			pNode.size *= 2		// 2倍に拡張する
			for i = 1, pNode.size {pNode.childs->append(Node())}
		}
		pNode.childs[pNode.length] = pChild
		pNode.length += 1
	},
	
	// 子ノード2つ追加
	addChild2 = def(@, pNode, pChild1, pChild2){
		@->addChild(pNode, pChild1)
		@->addChild(pNode, pChild2)
	},
	
	// <factor> ::= 数値 | '(' <bit> ')' | '-' <factor> | '+' <factor>
	factor = def(@){
		local pNode = nil
		if @.m_token[@.m_ix] == "(" {
			@.m_ix += 1
			pNode = @->bit()
			if @.m_token[@.m_ix] != ")" {error"[evaluator] '('に対する')'がありません"}
			@.m_ix += 1
		}elif @.m_token[@.m_ix] == "-" {
			@.m_ix += 1
			pNode = @->factor()
			pNode.val *= -1 // 符号反転
		}elif @.m_token[@.m_ix] == "+" {
			@.m_ix += 1
			pNode = @->factor()
		}else{ // Lua変数
			local str = @.m_token[@.m_ix]
			local c = str->c(0)
			
			pNode = @->createNode("num")
			@.m_ix += 1
			if 47 < c & c <=57 { // 先頭文字が数字ならそのままそれを計算する
				pNode.val = (@.m_mode & toint(str) | touint(str))
			}else{ // 数値でないならLua変数としてloadstringする
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
	
	/* 定数計算 */
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

/* 数式をトークンに分割 */
lpeg.locale(lpeg)
local space = lpeg.space^0 // space
// 演算子(キャプチャする)
local op = space * lpeg.C(lpeg.S"+-*/%&|^()") * space
// 演算子以外の文字の連なりは値(キャプチャする)
local val = space * lpeg.C(lpeg.P(1 - lpeg.S"+-*/%&|^()")^1) * space
// 構文。キャプチャしたトークンはテーブルに追加
local pat = lpeg.Ct(op^-1 * val * (op * val)^0)
local def parseExpression(exp){return s3.Array(pat->match(exp))}


/* ===== 公開関数 ===== */
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
