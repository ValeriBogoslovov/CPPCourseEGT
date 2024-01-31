#pragma once
#include <string>
#include "Shape.h"

class TwoDimensionalShape : public Shape{
public:
	TwoDimensionalShape(int a, string position, string shape, string size, char charToFill);
	virtual double getArea();
	virtual void print();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();
};