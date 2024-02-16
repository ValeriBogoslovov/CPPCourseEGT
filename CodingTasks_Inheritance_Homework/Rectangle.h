#pragma once
// include Shape header to access the class
#include "Shape.h"

// derived class Rectangle, inherits public 
// and protected members and functions of Shape
class Rectangle : public Shape
{
public:
	Rectangle(std::string color);
	// function to print out the rectangle's color
	void draw() const;
};

