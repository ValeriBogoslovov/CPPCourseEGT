#pragma once
#include "Shape.h"


class Rectangle : public Shape
{
public:
	Rectangle(std::string color,double width, double height);

	// overriding area and draw function from base class Shape
	double area() override;
	void draw() override;
private:
	// private members

	//declare width and height
	double width;
	double height;
};

