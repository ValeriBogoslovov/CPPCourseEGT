//Game.h
#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"
#include "Shapes.h"
class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	bool animeState = false;
	int currentFrame;
	int currentRow = 1;
	SDL_RendererFlip flip = SDL_FLIP_NONE;

	int tempXRight = 0;
	int tempXLeft = 0;

	int spriteX = 0;
	int spriteY = 300;
	int accelerate = 50;
};
