package;


import kha.audio1.Audio;
import kha.Button;
import kha.Configuration;
import kha.Framebuffer;
import kha.Game;
import kha.graphics2.Graphics;
import kha.Image;
import kha.LoadingScreen;
import kha.math.FastMatrix3;
import kha.math.Matrix3;
import kha.Scaler;
import kha.Loader;
import kha.Music;
import kha.Sys;
import kha.FontStyle;

class Empty extends Game {
	private var backbuffer: Image;
	private var bunnies:Array<Bunny>;
	private var gravity:Float = 0.5;
	private var maxX:Int;
	private var minX:Int;
	private var maxY:Int;
	private var minY:Int;
	private var bunniesCount:Int;
	
	private var g:Graphics;
	private var fps:FramesPerSecond;
	private var fill:Image;
	public function new() {
		super("Empty", false);
	}	
	
	override public function init():Void 
	{
		super.init();
		bunniesCount = 0;
		backbuffer = Image.createRenderTarget(800, 600);
		g = backbuffer.g2;
		fps = new FramesPerSecond();
		Configuration.setScreen(new LoadingScreen());
		Loader.the.loadRoom("test", roomLoaded);			
	}
	
	private function roomLoaded():Void
	{	
		fill = Loader.the.getImage("fill");
		g.font = Loader.the.loadFont("Arial", new FontStyle(false, false, false), 14);
		minX = 0;
		maxX = width - 26;
		minY = 0;
		maxY = height - 37;		
		bunnies = new Array<Bunny>();	
		Configuration.setScreen(this);
	}	
	
	override public function mouseDown(x:Int, y:Int):Void 
	{
		addBunnies(1000);
	}
	
	override public function update():Void 
	{
		for (i in 0...bunnies.length) {
			var bunny:Bunny = bunnies[i];
			bunny.x += bunny.speedX;
			bunny.y += bunny.speedY;
			bunny.speedY += gravity;			
			
			if (bunny.x > maxX) {
				bunny.speedX *= -1;
				bunny.x = maxX;
			} else if (bunny.x < minX) {
				bunny.speedX *= -1;
				bunny.x = minX;
			} if (bunny.y > maxY) {
				bunny.speedY *= -0.8;
				bunny.y = maxY;
				if (Math.random() > 0.5) bunny.speedY -= 3 + Math.random() * 4;
			}  else if (bunny.y < minY) {
				bunny.speedY = 0;
				bunny.y = minY;
			}	
		}
		
		fps.update();
	}
	
	override public function render(frame:Framebuffer):Void 
	{
		g.begin();
		g.transformation = FastMatrix3.identity();	
		
		for (i in 0...bunnies.length) {
			g.drawImage(bunnies[i].texture, bunnies[i].x, bunnies[i].y);
		}			
		
		g.drawScaledImage(fill, 0, 0, 800, 15);
		g.drawString("FPS = " + fps.fps + "           COUNT=" + bunniesCount, 0, 0);
		
		g.end();
		
		startRender(frame);
		Scaler.scale(backbuffer, frame, Sys.screenRotation);
		endRender(frame);	
		
		fps.calcFrames();
	}
	
	private function addBunnies(count:Int):Void
	{
		for (i in 0...count) {
			var bunny:Bunny = new Bunny();
			bunny.speedX = Math.random() * 5;
			bunny.speedY = (Math.random() * 5) - 2.5;
			bunnies.push(bunny);
		}
		bunniesCount += count;
	}
}
