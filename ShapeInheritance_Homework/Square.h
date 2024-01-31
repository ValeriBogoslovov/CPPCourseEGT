#pragma once
#include "TwoDimensionalShape.h"
#include <string>

class Square : public TwoDimensionalShape{
public:
	Square(int, string, string, string, char);
	virtual void print();
	virtual double getArea();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();
};