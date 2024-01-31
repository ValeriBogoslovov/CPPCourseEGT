#pragma once
#include <string>

using namespace std;

class Shape {
public:
	Shape(int a, string position, string shape, string size, char charToFill);
	virtual double getArea();
	virtual void print();
	void anotherPrint();
	void setA(int a);
	void setPosition(string position);
	void setShape(string shape);
	void setSize(string size);
	void setChar(char ch);

	int getA();
	virtual string getPosition();
	virtual string getShape();
	virtual string getSize();
	virtual char getCharToFill();

private:
	int a;
	string position;
	string shape;
	string size;
	char charToFill;
};