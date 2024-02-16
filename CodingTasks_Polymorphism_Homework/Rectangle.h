#pragma once
#include "Shape.h"


class Rectangle : public Shape
{
public:
	// overriding area function from base class Shape
	double area() override;
private:
	// private members

	//declare and initialize width and height
	double width = 3;
	double height = 4;
};

