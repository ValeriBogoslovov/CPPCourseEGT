#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    //create objects and call draw function
    Shape shape;
    shape.draw();
    
    Circle c;
    c.draw();

    Rectangle r;
    r.draw();

    return 0;
}

