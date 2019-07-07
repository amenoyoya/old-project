package;


import openfl.display.Sprite;
import openfl.display.Bitmap;
import openfl.Assets;


class Main extends Sprite {
	
	
	public function new () {
		
		super ();
		
		var bmp = new Bitmap(Assets.getBitmapData("assets/openfl.png"));
		addChild(bmp);
		bmp.x = (stage.stageWidth - bmp.width) / 2;
		bmp.y = (stage.stageHeight - bmp.height) / 2;
	}
	
	
}