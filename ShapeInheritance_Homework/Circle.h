#pragma once
#include "TwoDimensionalShape.h"
#include <string>

class Circle : public TwoDimensionalShape {
public:
	Circle(int, int, string, string, string, char);
	virtual void print();
	virtual double getArea();

	void setRadius(int);
	int getRadius();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();
private:
	int radius;
};