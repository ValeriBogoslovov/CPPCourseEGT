#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(int a, int b) {
	this->setSideA(a);
	this->setSideB(b);
}

void Rectangle::setSideA(int a) {
	if (a < 0) this->sideA = 1;
	this->sideA = a;
}
void Rectangle::setSideB(int b) {
	if (b < 0) this->sideB = 1;
	this->sideB = b;
}

int Rectangle::getSideA(){
	return this->sideA;
}

int Rectangle::getSideB() {
	return this->sideB;
}

int Rectangle::calculatePerimeter() {
	return (getSideA() * 2) + (getSideB() * 2);
}

bool Rectangle::operator<(const Rectangle& rectangleB) {
	Rectangle temp = *this;
	if (temp.calculatePerimeter() < (rectangleB.sideA * 2) + (rectangleB.sideB * 2))) {
		return true;
	}
	return false;
}

bool Rectangle::operator>(const Rectangle& rectangleB) {
	Triangle temp = *this;
	if (temp.calculatePerimeter() > ((rectangleB.sideA * 2) + (rectangleB.sideB * 2))) {
		return true;
	}
	return false;
}

bool Rectangle::operator==(const Rectangle& rectangleB) {
	Rectangle temp = *this;
	if(temp.calculatePerimeter() == ((rectangleB.sideA * 2) + (rectangleB.sideB * 2))){
		return true;
	}
	return false;
}