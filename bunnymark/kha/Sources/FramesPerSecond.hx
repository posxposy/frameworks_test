package;
import kha.Scheduler;
/**
 * ...
 * @author The Mozok Team - Dmitry Hryppa
 */
class FramesPerSecond
{
	
	private var totalFrames:Int;
	private var elapsedTime:Float;
	public var fps:Int;
	private var previousTime:Float;	
	public function new() 
	{
		previousTime = 0;
		elapsedTime = 0;
		totalFrames = 0;
		fps = 0;
	}
	
	public function update():Void
	{
		var currentTime:Float = Scheduler.time();
		var deltaTime:Float = (currentTime - previousTime);
		previousTime = currentTime;
		
        elapsedTime += deltaTime;		
		//прошла секунда 
		if (elapsedTime >= 1.0) {
			fps = totalFrames;
			totalFrames = 0;
			elapsedTime = 0;			
		}		
	}	
	
	public function calcFrames():Void
	{
		totalFrames++;
	}
}