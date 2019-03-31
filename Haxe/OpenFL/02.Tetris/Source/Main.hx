package;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import Block;

class Main extends Sprite {
	
	private var keys:Array<Bool> = [];
	private var status:Status = new Status();
	private var map:Array<Array<Int>>;				// テトリス盤面
	private static inline var WIDTH:Int = 12;		// 横幅
	private static inline var HEIGHT:Int = 21;		// 縦幅
	private static inline var FALL_SPEED:Float = 0.05;	// 落ちるスピード
	
	public function new () {
		super ();
		
		map = [];
		for ( y in 0...HEIGHT )
		{
			map[y] = [];
			for ( x in 0...WIDTH )
			{
				// 左端、右端、下端は壁なので1を入れ、それ以外のところは0を入れる
				if (x == 0 || x == WIDTH - 1 || y == HEIGHT - 1) map[y][x] = 1;
				else map[y][x] = 0;
			}
		}
		
		initialize();
		
		addEventListener(Event.ENTER_FRAME, onEnterFrame);
		stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
		stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);
	}
	
	// 初期化処理
	private function initialize():Void
	{
		status.x = 4; // ブロックを表示する位置(ブロック単位)
		status.y = 0;
		status.block = Block.SHAPE[0]; // ブロックの形状
	}
	
	// 毎フレーム行う処理
	private function onEnterFrame(event:Event):Void 
	{
		status.y += FALL_SPEED;
		// 一つ下に移動して衝突する場合は、今のマスから動かさないようにする
		if (check(Std.int(status.x), Std.int(status.y) + 1)) status.y = Std.int(status.y);
		draw(); // 毎フレームブロックを描画
	}
	
	// ブロックが地面に落ちて、位置が確定した後の処理
	private function endProcess():Void
	{
	}
	
	// ブロックの描画
	private function draw():Void
	{
		graphics.clear(); // 初期化
		graphics.beginFill(0x0);
		graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
		graphics.endFill();
		
		for ( y in 0...HEIGHT )
		{
			for ( x in 0...WIDTH )
			{
				// 注目しているマスに0が入っていない、つまり壁かブロックが入っている場合
				if (map[y][x] != 0)
				{
					// 壁だったら
					if (x == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
					{
						graphics.lineStyle(1.0);
						graphics.beginFill(0x555555);
					}
					// ブロックだったら
					else
					{
						graphics.lineStyle(2.0);
						graphics.beginFill(Block.COLOR[map[y][x]]);
					}
					graphics.drawRect(x * Block.WIDTH, y * Block.HEIGHT, Block.WIDTH, Block.HEIGHT);
					graphics.endFill();
				}
			}
		}
		
		var block = status.block;
		for (y in 0...Block.SIZE)
		{
			for (x in 0...Block.SIZE)
			{
				// 4*4配列の中でブロックの描画があるところだけを表示する
				if (block[y][x] != 0)
				{
					graphics.lineStyle(1.5);
					graphics.beginFill(Block.COLOR[block[y][x]]);
					graphics.drawRect((status.x + x) * Block.WIDTH, (status.y + y) * Block.HEIGHT, Block.WIDTH, Block.HEIGHT);
					graphics.endFill();
				}
			}
		}
	}
	
	// 仮に引数の(x, y)に今落ちているブロックを置いた場合、
	// 他のブロックや壁と衝突してしまう場合はtrue, しない場合はfalseが返却される
	private function check(tx:Int, ty:Int):Bool
	{
		var block = status.block;
		for ( y in 0...Block.SIZE )
		{
			for ( x in 0...Block.SIZE )
			{
				if (block[y][x] != 0 && map[ty + y][tx + x] != 0) return true;
			}
		}
		return false;
	}
	
	// キーが押されたとき
	private function onKeyDown(event:KeyboardEvent):Void
	{
		keys[event.keyCode] = true;
	}
	
	// キーが離されたとき
	private function onKeyUp(event:KeyboardEvent):Void
	{
		keys[event.keyCode] = false;
	}
}
