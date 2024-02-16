#include "Rectangle.h"
#include <iostream>



Rectangle::Rectangle(std::string color, double width, double height) : Shape(color), width(width), height(height){}

double Rectangle::area()
{
    return (2 * width) + (2 * height);
}

void Rectangle::draw()
{
    std::cout << "Drawing a " << this->color << " rectangle.\n";
}
