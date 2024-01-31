#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(int a, string position, string shape, string size, char charToFill)
	: TwoDimensionalShape(a, position, shape, size, charToFill)
{

}

void Square::print()
{
	cout << "I am in Square function print()" << endl;
}

double Square::getArea()
{
	cout << "This is the Square function getArea." << endl;
	return this->getA() * this->getA();
}

string Square::getPosition()
{
	cout << "I am in Square function getPosition" << endl;
	return "";
}

string Square::getShape()
{
	cout << "I am in Square function getShape" << endl;
	return "";
}

string Square::getSize()
{
	cout << "I am in Square function getSize" << endl;
	return "";
}

char Square::getCharToFill()
{
	cout << "I am in Square function getPosition" << endl;
	return ' ';
}
