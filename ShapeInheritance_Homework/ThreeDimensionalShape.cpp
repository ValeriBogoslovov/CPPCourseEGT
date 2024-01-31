#include "ThreeDimensionalShape.h"
#include <iostream>
using namespace std;

ThreeDimensionalShape::ThreeDimensionalShape(int a, int b, string position, string shape, string size, char charToFill) 
	: Shape(a, position, shape, size, charToFill)
{
	this->setB(b);
}

double ThreeDimensionalShape::getArea()
{
	cout << "I am in the Three Dimensional Shape getArea" << endl;
	return 0.0;
}

void ThreeDimensionalShape::print()
{
	cout << "I am in the Three Dimensional Shape print" << endl;
}

void ThreeDimensionalShape::getVolume()
{
	cout << "I am in the Three Dimentional Shape getVolume" << endl;
}

void ThreeDimensionalShape::setB(int b)
{
	this->b = b;
}

int ThreeDimensionalShape::getB()
{
	return this->b;
}

string ThreeDimensionalShape::getPosition()
{
	cout << "I am in ThreeDimensionalShape getPosition" << endl;
	return "";
}

string ThreeDimensionalShape::getShape()
{
	cout << "I am in ThreeDimensionalShape getShape" << endl;
	return "";
}

string ThreeDimensionalShape::getSize()
{
	cout << "I am in ThreeDimensionalShape getSize" << endl;
	return "";
}

char ThreeDimensionalShape::getCharToFill()
{
	cout << "I am in ThreeDimensionalShape getCharToFill" << endl;
	return ' ';
}
