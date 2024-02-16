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
    Shape* circlePtr = new Circle("blue", 5.2);
    Shape* rectanglePtr = new Rectangle("grey", 2.6, 3.8);

    // call function printArea and pass circle and rectangle
    printArea(circlePtr);
    printArea(rectanglePtr);

    // call function draw
    circlePtr->draw();
    rectanglePtr->draw();

    // delete dynamic object to release memory and prevent memory leaks
    delete circlePtr;
    delete rectanglePtr;
    // assign null value to release the memory address
    circlePtr = nullptr;
    rectanglePtr = nullptr;

    return 0;
}

// initializing function printArea
void printArea(Shape* sPtr) {
    std::cout << "Area is: " << sPtr->area() << std::endl;
}