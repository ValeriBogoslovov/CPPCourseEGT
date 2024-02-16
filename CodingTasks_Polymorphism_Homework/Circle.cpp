#include "Circle.h"
#include <iostream>


Circle::Circle(std::string color, double radius) : Shape(color), radius(radius){}

double Circle::area()
{
    return PI * (radius * radius);
}

void Circle::draw()
{
    std::cout << "Drawing a " << this->color << " circle.\n";
}
