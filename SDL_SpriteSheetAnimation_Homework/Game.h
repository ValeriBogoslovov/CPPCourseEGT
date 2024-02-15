//Game.h
#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

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

	int currentRow = 1;
	int currentFrame;
	int imgPosX = 500;
	int imgPosY = 350;
	int imgWidth;
	int imgHeight;
	int counterToTurn = 0;
	SDL_RendererFlip flip = SDL_FLIP_NONE;

};
