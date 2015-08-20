package;

import luxe.AppConfig;
import luxe.Color;
import luxe.Draw;
import luxe.Input;
import luxe.Game;
import luxe.Parcel;
import luxe.ParcelProgress;
import luxe.Sprite;
import luxe.Text;
import luxe.Vector;
import phoenix.BitmapFont;
import phoenix.Texture;

/**
 * ...
 * @author The Mozok Team - Dmitry Hryppa
 */

class Main extends Game
{
	private var bunnies:Array<Bunny>;
	private var gravity:Float = 0.5;
	private var maxX:Int;
	private var minX:Int;
	private var maxY:Int;
	private var minY:Int;	
	private var bunniesCount:Int;	

    private var text:Text;        
    private var font:BitmapFont;
	private var image:Texture;
	private var isLoaded:Bool = false;
	
	private var totalFrames:Int;
	private var elapsedTime:Float;
	private var fps:Int;
	private var previousTime:Float;	
	
	override function ready()
	{				
        var parcel = new Parcel({
            textures : [{ id : 'assets/wabbit_alpha.png' }],
            fonts : [{ id : 'assets/myfnt.fnt' }],
        });
		
        new ParcelProgress({
            parcel      : parcel,
            background  : new Color(1,1,1,0.85),
            oncomplete  : assetsLoaded
        });
            
        parcel.load();	
	}
	

    function assetsLoaded(_) {
		previousTime = 0;
		elapsedTime = 0;
		totalFrames = 0;
		fps = 0;
					
		minX = 0;
		maxX = Luxe.screen.w;
		minY = 0;
		maxY = Luxe.screen.h;
		bunnies = new Array<Bunny>();
		bunniesCount = 0;
		
		image = Luxe.resources.texture('assets/wabbit_alpha.png');
		font = Luxe.resources.font('assets/myfnt.fnt');
        text = new Text({
            pos : new Vector(130, 30),
            point_size : 26,
            depth : 3,
            align : TextAlign.center,
            font : font,
            text : 'FPS',
            color : new Color(0,0,0,1).rgb(0xb70000)
        });
		
		loaded = true;
    }	

	override function onkeyup(e:KeyEvent)
	{
		if(e.keycode == Key.escape){
			Luxe.shutdown();
		}
	}
	
	override function onmouseup(e:MouseEvent)
	{
		addBunnies(500);
	}
	
	private function addBunnies(count:Int):Void
	{
		for (i in 0...count) {
			var bunny:Bunny = new Bunny(image);
			bunny.speedX = Math.random() * 5;
			bunny.speedY = (Math.random() * 5) - 2.5;
			bunnies.push(bunny);
		}
		bunniesCount += count;
	}
	
	override function update(dt:Float) 
	{		
		if (!loaded) return;
		
		text.text = "bunnies " + bunniesCount + ", fps: " + fps;		
				
		for (i in 0...bunnies.length) {
			var bunny:Bunny = bunnies[i];
			bunny.spr.pos.x += bunny.speedX;
			bunny.spr.pos.y += bunny.speedY;
			bunny.speedY += gravity;			
			
			if (bunny.spr.pos.x > maxX) {
				bunny.speedX *= -1;
				bunny.spr.pos.x = maxX;
			} else if (bunny.spr.pos.x < minX) {
				bunny.speedX *= -1;
				bunny.spr.pos.x = minX;
			} if (bunny.spr.pos.y > maxY) {
				bunny.speedY *= -0.8;
				bunny.spr.pos.y = maxY;
				if (Math.random() > 0.5) bunny.speedY -= 3 + Math.random() * 4;
			}  else if (bunny.spr.pos.y < minY) {
				bunny.speedY = 0;
				bunny.spr.pos.y = minY;
			}					
		}
		
		//calc fps
		var currentTime:Float = Luxe.time;
		var deltaTime:Float = (currentTime - previousTime);
		previousTime = currentTime;
		
        elapsedTime += deltaTime;		
	
		if (elapsedTime >= 1.0) {
			fps = totalFrames;
			totalFrames = 0;
			elapsedTime = 0;			
		}
		
		totalFrames++;
	}
}
