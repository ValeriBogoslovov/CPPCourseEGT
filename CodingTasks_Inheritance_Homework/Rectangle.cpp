#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::string color) : Shape(color) {}

void Rectangle::draw()
{
	std::cout << "Drawing a " << this->color << " Rectangle.\n";
}
