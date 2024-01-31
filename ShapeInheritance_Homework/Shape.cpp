#include "Shape.h"
#include <iostream>
using namespace std;


Shape::Shape(int a, string position, string shape, string size, char ch)
{
	this->setA(a);
	this->setPosition(position);
	this->setShape(shape);
	this->setSize(size);
	this->setChar(ch);
}

double Shape::getArea()
{
	cout << "I am in the Shape function getArea" << endl;
	return (double)this->getA();
}

void Shape::print()
{
	cout << "I am in the Shape function print()" << endl;
}

void Shape::anotherPrint() 
{
	cout << "I am in Shape function anotherPrint()" << endl;
}

void Shape::setA(int a)
{
	this->a = a;
}

void Shape::setPosition(string position)
{
	this->position = position;
}

void Shape::setShape(string shape)
{
	this->shape = shape;
}

void Shape::setSize(string size)
{
	this->size = size;
}

void Shape::setChar(char ch)
{
	this->charToFill = ch;
}

int Shape::getA()
{
	return this->a;
}

string Shape::getPosition()
{
	cout << "I am in Shape function getPosition" << endl;
	return this->position;
}

string Shape::getShape()
{
	cout << "I am in Shape function getShape" << endl;
	return this->shape;
}

string Shape::getSize()
{
	cout << "I am in Shape function getSize" << endl;
	return this->size;
}

char Shape::getCharToFill()
{
	cout << "I am in Shape function getCharToFill" << endl;
	return this->charToFill;
}

