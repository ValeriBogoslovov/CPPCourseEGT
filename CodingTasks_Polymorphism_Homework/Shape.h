#pragma once
#include <string>

// abstract base class Shape, cannot make object of it
class Shape
{
public:
	Shape(std::string color);
	// pure virtual function that must be 
	// overrided in derived classes
	virtual double area() = 0;
	virtual void draw() = 0;
	// virtual destructor is needed when we have
	// at least one virtual function;
	virtual ~Shape() {};

// protected members
protected:
	// only accessible in derived classes
	std::string color;
};

