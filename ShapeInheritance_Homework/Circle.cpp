#include "Circle.h"
#include <iostream>

using namespace std;


Circle::Circle(int radius, int a, string position, string shape, string size, char charToFill) 
	: TwoDimensionalShape(a, position, shape, size, charToFill)
{
	this->setRadius(radius);
}

void Circle::print()
{
	cout << "I am in Circle function print()" << endl;
}

double Circle::getArea()
{
	cout << "This is Circle getArea." << endl;
	return 3.14 * (this->getRadius() * this->getRadius());
}

void Circle::setRadius(int)
{
	this->radius = radius;
}

int Circle::getRadius()
{
	return this->radius;
}

string Circle::getPosition()
{
	cout << "I am in Circle function getPosition" << endl;
	return "";
}

string Circle::getShape()
{
	cout << "I am in Circle function getShape" << endl;
	return "";
}

string Circle::getSize()
{
	cout << "I am in Circle function getSize" << endl;
	return "";
}

char Circle::getCharToFill()
{
	cout << "I am in Circle function getCharToFill" << endl;
	return ' ';
}

