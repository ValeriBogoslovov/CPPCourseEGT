#include <iostream>
#include <vector>
#include <string>
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {

    Shape* sptr1 = new TwoDimensionalShape(30, "2d-pos", "2d-shape", "small", '*');
    Shape* sptr2 = new ThreeDimensionalShape(30,15 , "3d-pos", "3d-shape", "small", '$');
    Shape* sptr3 = new Triangle(4,5,4, "pos-triangel", "Triangle", "mid-size", '%');
    Shape* sptr4 = new Circle(5, 3, "pos-circle", "Circle", "Big-circle", '$');
    Shape* sptr5 = new Square(3, "pos-square", "Square", "small-square", '#');

    vector<Shape*> myShapes;
    myShapes.push_back(sptr1);
    myShapes.push_back(sptr2);
    myShapes.push_back(sptr3);
    myShapes.push_back(sptr4);
    myShapes.push_back(sptr5);  

    for (int i = 0; i < myShapes.size(); i++)
    {
        myShapes.at(i)->print();
        myShapes.at(i)->getArea();
        myShapes.at(i)->getPosition();
        myShapes.at(i)->getShape();
        myShapes.at(i)->getSize();

    }

    return 0;
}
