#pragma once
#include "Game.h"

class Shape
{
public:

	static void drawRectangleWithBorder(SDL_Renderer* renderer,
		int posX, int posY, int width, int height, int border);

	static void drawHexagon(SDL_Renderer* renderer, int posX,
		int posY, int side);

	static void drawPentagon(SDL_Renderer* renderer, int posX,
		int posY, int side);
};

