#pragma once
#include <string>

// base class Shape
class Shape
{
public:

	// function to print out the shape's color
	void draw();
// protected members and function will only be accessible
// in derived classes
protected:
	std::string color;
};

