package;



import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.FPS;
import openfl.display.Graphics;
import openfl.display.PixelSnapping;
import openfl.display.Sprite;
import openfl.display.StageQuality;
import openfl.display.Tilesheet;
import openfl.display.BlendMode;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.Assets;
import openfl.Lib;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;

class Main extends Sprite {
		
	private var numBunnies:Int = 0;
	private var gravity:Float;
	private var bunnies:Array<Bunny>;
	private var maxX:Int;
	private var minX:Int;
	private var maxY:Int;
	private var minY:Int;
	private var bunnyAsset:BitmapData;
	private var tilesheet:Tilesheet;
	private var drawList:Array<Float>;
	
	private var textField:TextField;
	public function new () {		
		super ();
				
		minX = 0;
		maxX = stage.stageWidth;
		minY = 0;
		maxY = stage.stageHeight;
		gravity = 0.5;		
		
		bunnyAsset = Assets.getBitmapData("assets/wabbit_alpha.png");
		tilesheet = new Tilesheet(bunnyAsset);
		tilesheet.addTileRect(new Rectangle (0, 0, bunnyAsset.width, bunnyAsset.height));
		
		drawList = new Array<Float>();
		bunnies = new Array<Bunny>();
		
		textField = new TextField();
		textField.text = "";
		textField.background = true;
		textField.backgroundColor = 0xffffff;
		addChild(textField);
		textField.x = 20;
		textField.y = 20;
		
		var fp:FPS = new FPS(20, 40);
		fp.background = true;
		fp.backgroundColor = 0xffffff;
		addChild(fp);		
		
		addEventListener(Event.ENTER_FRAME, enterFrame);
		stage.addEventListener(MouseEvent.CLICK, function(_):Void
		{
			addBunnies(1000);
		});
	}	
	
	private function addBunnies(count:Int):Void
	{
		var bunny:Bunny; 
		for (i in 0...count)
		{
			bunny = new Bunny();
			bunny.position = new Point();
			bunny.speedX = Math.random() * 5;
			bunny.speedY = (Math.random() * 5) - 2.5;
			bunnies.push (bunny);
		}
		numBunnies += count;	
		textField.text = "bunnies: " + numBunnies;
	}
	
	private function enterFrame(e:Event) 
	{		
		graphics.clear ();
		var TILE_FIELDS = 3;
		var bunny:Bunny;
	 	for (i in 0...numBunnies)
		{
			bunny = bunnies[i];
			bunny.position.x += bunny.speedX;
			bunny.position.y += bunny.speedY;
			bunny.speedY += gravity;

			if (bunny.position.x > maxX)
			{
				bunny.speedX *= -1;
				bunny.position.x = maxX;
			}
			else if (bunny.position.x < minX)
			{
				bunny.speedX *= -1;
				bunny.position.x = minX;
			}
			if (bunny.position.y > maxY)
			{
				bunny.speedY *= -0.8;
				bunny.position.y = maxY;
				if (Math.random() > 0.5) bunny.speedY -= 3 + Math.random() * 4;
			} 
			else if (bunny.position.y < minY)
			{
				bunny.speedY = 0;
				bunny.position.y = minY;
			}

			var index = i * TILE_FIELDS;
			drawList[index] = bunny.position.x;
			drawList[index + 1] = bunny.position.y;			
		}
		
		tilesheet.drawTiles(graphics, drawList, false);		
	}
}