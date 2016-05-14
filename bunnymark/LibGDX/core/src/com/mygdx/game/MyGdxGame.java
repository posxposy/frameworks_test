package com.mygdx.game;

import com.badlogic.gdx.ApplicationAdapter;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.Input;
import com.badlogic.gdx.graphics.GL20;
import com.badlogic.gdx.graphics.g2d.BitmapFont;
import com.badlogic.gdx.graphics.g2d.SpriteBatch;

import java.util.Iterator;
import java.util.Vector;
import java.util.Arrays;

public class MyGdxGame extends ApplicationAdapter {
	SpriteBatch batch;

	private Texure bunnyTexture;
	private Vector<Bunny> bunnies;
	private float gravity = 0.5f;
	private int minX;
	private int minY;
	private int maxX;
	private int maxY;
	private int countOfBunnies;
	private BitmapFont font;
	@Override
	public void create () {
		batch = new SpriteBatch();
		minX = 0;
		minY = 0;
		maxX = 800;
		maxY = 600;
		countOfBunnies = 0;
		bunnies = new Vector<Bunny>();
		font = new BitmapFont();
		bunnyTexture = new Texture("wabbit_alpha.png"); //libgdx don't cache this one, I think, so we should load this only once
	}

	private void addBunnies(int count) {
		for (int i = 0; i < count; i++){
			Bunny bunny = new Bunny(bunnyTexture);
			bunny.speedX = (float)Math.random() * 5;
			bunny.speedY = (float)(Math.random() * 5) - 2.5f;

			bunnies.add(bunny);
		}
		countOfBunnies += count;
	}

	Bunny[] addElement(Bunny[] a, Bunny e) {
		a  = Arrays.copyOf(a, a.length + 1);
		a[a.length - 1] = e;
		return a;
	}

	@Override
	public void render () {
		Gdx.gl.glClearColor(0.21f, 0.21f, 0.21f, 1);
		Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);

		if (Gdx.input.isButtonPressed(Input.Buttons.LEFT)){
			addBunnies(100);
		}

		Iterator<Bunny> it = bunnies.iterator();
		batch.begin();

		while(it.hasNext()) {
			Bunny bunny = it.next();

			//;
			bunny.x += bunny.speedX;
			bunny.y += bunny.speedY;
			bunny.speedY += gravity;

			if (bunny.x > maxX)
			{
				bunny.speedX *= -1;
				bunny.x = maxX;
			}
			else if (bunny.x < minX)
			{
				bunny.speedX *= -1;
				bunny.x = minX;
			}
			if (bunny.y > maxY)
			{
				bunny.speedY *= -0.8;
				bunny.y = maxY;
				if (Math.random() > 0.5) bunny.speedY -= 3 + Math.random() * 4;
			}
			else if (bunny.y < minY)
			{
				bunny.speedY = 0;
				bunny.y = minY;
			}

			batch.draw(bunny.texture, bunny.x, bunny.y);
		}
		font.draw(batch, "FPS=" + Gdx.graphics.getFramesPerSecond()+"               COUNT="+countOfBunnies, 10, 20);
		batch.end();
	}
}
