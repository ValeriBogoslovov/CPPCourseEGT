#include "Shape.h"
#include <iostream>

Shape::Shape(std::string color) : color(color){}

void Shape::draw() const
{
	std::cout << "Drawing a " << this->color << " Shape.\n";
}
