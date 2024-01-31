#pragma once
#include "Shape.h"
#include <string>
class ThreeDimensionalShape : public Shape{
public:
	ThreeDimensionalShape(int b, int a, string position, string shape, string size, char charToFill);
	virtual double getArea();
	virtual void print();
	void getVolume();
	void setB(int);
	int getB();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();
private:
	int b;
};