#pragma once
#include "TwoDimensionalShape.h"
#include <string>

class Triangle : public TwoDimensionalShape {
public:
	Triangle(int c, int b, int a, string position, string shape, string size, char charToFill);
	virtual void print();
	virtual double getArea();

	int getSideB();
	int getSideC();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();
private:
	int sideB;
	int sideC;
};