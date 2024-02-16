#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    //create objects and call draw function
    Shape shape("Orange");
    shape.draw();
    
    Circle circle("Yellow");
    circle.draw();

    Rectangle rectangle("Green");
    rectangle.draw();

    return 0;
}

