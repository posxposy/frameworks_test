using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Content;

namespace App
{
    public class Bunny
    {
        public float X;
        public float Y;
        public float SpeedX;
        public float SpeedY;
        public Texture2D texture;

        public Bunny(ContentManager content)
        {
            texture = content.Load<Texture2D>(@"wabbit_alpha");
        }
    }
}
