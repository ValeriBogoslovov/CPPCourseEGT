#pragma once
#include "Shape.h"


class Circle : public Shape
{
public:
	// overriding area function from base class Shape
	double area() override;
private:
	//private members

	//declare and initialize radius
	double radius = 5;
	// constant attribute PI
	double PI = 3.14;
};

