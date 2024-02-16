#include <iostream>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    //create objects and call draw function
    Shape shape("Orange");
    shape.draw();
    
    Circle c("Yellow");
    c.draw();

    Rectangle r("Green");
    r.draw();

    return 0;
}

