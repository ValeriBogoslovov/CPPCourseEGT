#pragma once
class Rectangle
{
public:
	Rectangle(int a, int b);
	void setSideA(int a);
	void setSideB(int b);

	int getSideA();
	int getSideB();
	int calculatePerimeter();
	bool operator<(const Triangle& triangleB);
	bool operator>(const Triangle& triangleB);
	bool operator==(const Triangle& triangleB);
private:
	int sideA;
	int sideB;
};

