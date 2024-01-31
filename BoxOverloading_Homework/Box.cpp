#include "Box.h"
#include <iostream>

using std::cout;
using std::endl;

Box::Box() 
{
    this->width = 1;
    this->length = 1;
    this->height = 1;
}

Box::Box(int width, int length, int heigth)
{
    this->setWidth(width);
    this->setLength(length);
    this->setHeight(heigth);
}

void Box::setWidth(int width)
{
    if (width < 1) {
        this->width = 1;
        std::cerr << "Width cannot be negative number, width set to 1."
            << std::endl;
    }
    else {
        this->width = width;
    }
}

void Box::setLength(int length)
{
    if (length < 1) {
        this->length = 1;
        std::cerr << "Length cannot be negative number, length set to 1."
            << std::endl;
    }
    else {
        this->length = length;
    }
}

void Box::setHeight(int height)
{
    if (height < 1) {
        this->height = 1;
        std::cerr << "Height cannot be negative number, height set to 1."
            << std::endl;
    }
    else {
        this->height = height;
    }
}

void Box::print()
{
    cout << "Box width: " << this->getWidth() << endl;
    cout << "Box length: " << this->getLength() << endl;
    cout << "Box height: " << this->getHeight() << endl;
}

int Box::getWidth()
{
    return this->width;
}

int Box::getLength()
{
    return this->length;
}

int Box::getHeight()
{
    return this->height;
}

Box Box::operator+(Box const& box2)
{
    Box temp;
    temp.height = height + box2.height;
    return temp;
}
