#pragma once
#include "Shape.h"


class Circle : public Shape
{
public:
	Circle(std::string color, double radius);

	// overriding area function from base class Shape
	double area() override;
	void draw() override;

//private members
private:
	//declare radius
	double radius;
	// constant attribute PI
	double PI = 3.14;
};

