#include <iostream>

#include "Game.h"
#include <SDL.h>


Game* game = NULL;
const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;


int main(int, char**) {
	
	game = new Game();

	game->init("My new window",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_RESIZABLE);

	while (game->isRunning()) {
		game->handleEvents();
		game->render();
		game->update();
		
	}
	game->clean();

	delete game;
	return 0;
}