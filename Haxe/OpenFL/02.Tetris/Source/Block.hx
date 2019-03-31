
class Block
{
	public static inline var SIZE:Int = 4;		// ブロックの形状を4*4の配列で保持しているので、その4を定数にしている
	public static inline var WIDTH:Int = 20;		// ブロックの横サイズ
	public static inline var HEIGHT:Int = 20;	// ブロックの縦サイズ
	
	// 色
	public static var COLOR:Array<Int> = [0x0, 0xFEFBB3, 0x69DEEE, 0x3DC642, 0xF33433, 0x797CFB, 0xF88C2D, 0xFFAAFF];
	
	// 形状
	public static var SHAPE:Array<Array<Array<Int>>> =
	[
		[
			[0, 0, 0, 0],
			[0, 1, 1, 0],
			[0, 1, 1, 0],
			[0, 0, 0, 0]
		],
		[
			[0, 2, 0, 0],
			[0, 2, 0, 0],
			[0, 2, 0, 0],
			[0, 2, 0, 0]
		],
		[
			[0, 0, 0, 0],
			[0, 3, 3, 0],
			[3, 3, 0, 0],
			[0, 0, 0, 0]
		],
		[
			[0, 0, 0, 0],
			[4, 4, 0, 0],
			[0, 4, 4, 0],
			[0, 0, 0, 0]
		],
		[
			[0, 0, 0, 0],
			[5, 0, 0, 0],
			[5, 5, 5, 0],
			[0, 0, 0, 0]
		],
		[
			[0, 0, 0, 0],
			[0, 0, 6, 0],
			[6, 6, 6, 0],
			[0, 0, 0, 0]
		],
		[
			[0, 0, 0, 0],
			[0, 7, 0, 0],
			[7, 7, 7, 0],
			[0, 0, 0, 0]
		]
	];
}


class Status
{
	public var x:Float;						// このx, yの位置からブロックを表示する
	public var y:Float;
	public var block:Array<Array<Int>>;	// 今持っているブロック
	
	public function new(){}
}
