/*** ŒÅ’è’·2ŸŒ³”z—ñ ***/
def s3.Array2d(x, y){
	local @ = ${m_xNum=x, m_yNum=y}
	
	def @->get(x, y){
		if x < 0 | y < 0 | x >= @.m_xNum | y >= @.m_yNum {return nil}
		return @[y * @.m_xNum + x]
	}
	
	def @->set(x, y, val){
		if x >= 0 & y >= 0 & x < @.m_xNum & y < @.m_yNum {
			@[y * @.m_xNum + x] = val
			return val
		}
	}
	return @
}
