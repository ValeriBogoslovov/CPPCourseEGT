#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int c, int b, int a, string position, string shape, string size, char charToFill)
	: TwoDimensionalShape(a, position, shape, size, charToFill)
{
	this->sideB = b;
	this->sideC = c;
}

void Triangle::print()
{
	cout << "I am in Triangle function print()" << endl;
}

double Triangle::getArea()
{
	cout << "I am in Triangle function getArea" << endl;
	return this->getA() + this->getSideB() + this->getSideC();
}

int Triangle::getSideB()
{
	return this->sideB;
}

int Triangle::getSideC()
{
	return this->sideC;
}

string Triangle::getPosition()
{
	cout << "I am in Triangle function getPosition" << endl;
	return "";
}

string Triangle::getShape()
{
	cout << "I am in Triangle function getShape" << endl;
	return "";
}

string Triangle::getSize()
{
	cout << "I am in Triangle function getSize" << endl;
	return "";
}

char Triangle::getCharToFill()
{
	cout << "I am in Triangle function getCharToFill" << endl;
	return ' ';
}
