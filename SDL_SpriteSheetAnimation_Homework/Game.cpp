//Game.cpp
#include "Game.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				// use the TextureManager to load textures
				TextureManager::Instance()->loadTexture("assets/sprite-animation.png", "sprite-sheet", renderer);
				/*imgPosY = (height / 2) - (imgHeight / 2);
				imgPosX = (width / 2) - (imgWidth / 2);*/
			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

void Game::render() {

	// sets the window bg color needs to sit before SDL_RenderClear()
	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255);
	SDL_RenderClear(renderer);

	TextureManager::Instance()->drawOneFrameFromTexture("sprite-sheet", imgPosX, imgPosY, 108, 140, currentRow, currentFrame, renderer, flip);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;

		default: break;
		}
	}
}

void Game::update()
{
	int numberOfFramesInSpriteSheet = 8;
	int animationSpeed = 70; // lower is faster, min = 1

	if (counterToTurn < 9000)
	{
		counterToTurn++;
		currentRow = 1;
		currentFrame = int(((SDL_GetTicks() / animationSpeed) % numberOfFramesInSpriteSheet));
	}
	else if(counterToTurn >= 9000 && counterToTurn < 18000)
	{
		counterToTurn++;
		currentRow = 2;
		currentFrame = int(((SDL_GetTicks() / animationSpeed) % numberOfFramesInSpriteSheet));
	}
	else
	{
		counterToTurn = 0;
	}
	

}

void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	currentFrame = 0;
}

Game::~Game() {

}