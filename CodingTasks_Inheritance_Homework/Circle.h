#pragma once

// include Shape header to access the class
#include "Shape.h"


// derived class Circle, inherits public 
// and protected members and functions of Shape
class Circle : public Shape
{
public:
	// function to print out the circle's color
	void draw();
};

