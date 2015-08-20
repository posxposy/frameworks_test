package;

import kha.Image;
import kha.Loader;
/**
 * ...
 * @author The Mozok Team - Dmitry Hryppa
 */
class Bunny
{
	
	public var x:Float = 0;
	public var y:Float = 0;
	public var speedX:Float = 0;
	public var speedY:Float = 0;
	public var texture:Image;
	public function new() 
	{
		speedX = 0;
		speedY = 0;
		texture = Loader.the.getImage("wabbit_alpha");
	}
	
}