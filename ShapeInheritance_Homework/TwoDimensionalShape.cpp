#include "TwoDimensionalShape.h"
#include <iostream>
using namespace std;

TwoDimensionalShape::TwoDimensionalShape(int a, string position, string size, string shape, char charToFill) 
	: Shape(a, position, size, shape, charToFill)
{
}

double TwoDimensionalShape::getArea()
{
	cout << "I am in the TwoDimensional Shape function getArea" << endl;
	return Shape::getArea();
}

void TwoDimensionalShape::print()
{
	cout << "I am in the TwoDimensional Shape function print" << endl;
}

string TwoDimensionalShape::getPosition()
{
	cout << "I am in TwoDimensionalShape function getPosition" << endl;
	return "";
}

string TwoDimensionalShape::getShape()
{
	cout << "I am in TwoDimensionalShape function getShape" << endl;
	return "";
}

string TwoDimensionalShape::getSize()
{
	cout << "I am in TwoDimensionalShape function getSize" << endl;
	return "";
}

char TwoDimensionalShape::getCharToFill()
{
	cout << "I am in TwoDimensionalShape function getCharToFill" << endl;
	return 0;
}
