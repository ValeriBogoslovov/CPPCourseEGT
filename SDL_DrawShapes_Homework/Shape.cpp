#include "Shape.h"

void Shape::drawRectangleWithBorder(SDL_Renderer* renderer, int posX, 
	int posY, int width, int height, int border)
{

	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	SDL_Rect outerRect = { posX, posY, width, height };
	SDL_RenderFillRect(renderer, &outerRect);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_Rect innerRect = { posX + border, posY + border,
		width - (2 * border), height - (2 * border) };

	SDL_RenderFillRect(renderer, &innerRect);
}

void Shape::drawHexagon(SDL_Renderer* renderer, int posX, int posY, int side)
{

	int x = 0;
	int y = 0;

	const double PI = 3.14;

	double angle = (2 * PI) / 6;

	double radius = side / (2 * sin(PI / 6));

	// six point + one
	SDL_Point points[6 + 1];

	for (int i = 0; i < 6 + 1; ++i) {

		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);

		points[i] = { x + posX, y + posY };
	}

	const SDL_Point* pts = points;

	SDL_RenderDrawLines(renderer, pts, 6 + 1);
}

void Shape::drawPentagon(SDL_Renderer* renderer, int posX, int posY, int side)
{
	int x = 0;
	int y = 0;
	const double PI = 3.14;

	double angle = (2 * PI) / 5;
	double radius = side / (2 * sin(PI / 5));

	// five point + one
	SDL_Point points[5 + 1];

	for (int i = 0; i < 5 + 1; ++i) {

		y = (int)round(sin(angle * i) * radius);
		x = (int)round(cos(angle * i) * radius);

		points[i] = { x + posX, y + posY };
	}

	const SDL_Point* pts = points;

	SDL_RenderDrawLines(renderer, pts, 5 + 1);
}
