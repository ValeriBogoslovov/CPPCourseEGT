#include <iostream>
using std::cout;
using std::endl;
#include "Box.h"


int main() {
	Box b1(2, 2, 2);
	Box b2(3, 3, 3);
	Box b3;
	b3.print();
	b3 = b1 + b2;// overloaded operator "+"
	b3.print();
}