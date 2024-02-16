#pragma once

//base class Shape
class Shape
{
public:
	// pure virtual function that must be 
	// overrided in derived classes
	virtual double area() = 0;

	// virtual destructor is needed when we have
	// at least one virtual function;
	virtual ~Shape() {};
};

