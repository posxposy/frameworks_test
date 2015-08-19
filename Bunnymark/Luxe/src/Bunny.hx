package;
import luxe.Sprite;
import luxe.Vector;
import phoenix.Texture;
/**
 * ...
 * @author The Mozok Team - Dmitry Hryppa
 */
class Bunny
{
		
	public var speedX:Float = 0;
	public var speedY:Float = 0;	
	public var sprite:Sprite;
	
	public function new(texture:Texture) 
	{
		speedX = 0;
		speedY = 0;
		
        sprite = new Sprite({            
            texture: texture,			
            pos : new Vector(0, 0),
            size: new Vector(texture.width, texture.height)
        });
	}
	
}