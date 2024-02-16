#include "Circle.h"
#include <iostream>

Circle::Circle(std::string color) : Shape(color){}

void Circle::draw() const
{
	std::cout << "Drawing a " << this->color << " Circle.\n";
}
