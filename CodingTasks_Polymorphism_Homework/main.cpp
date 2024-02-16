#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

//declaring function printArea that accepts
// pointer to base class Shape
void printArea(Shape* sPtr);

int main()
{
    // create pointer of Shape class that points to an object of derived class
    Shape* circlePtr = new Circle();
    Shape* rectanglePtr = new Rectangle();

    // call function printArea and pass circle and rectangle
    printArea(circlePtr);
    printArea(rectanglePtr);

    return 0;
}

// initializing function printArea
void printArea(Shape* sPtr) {
    std::cout << "Area is: " << sPtr->area() << std::endl;
}