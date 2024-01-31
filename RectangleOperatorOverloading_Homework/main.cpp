#include <iostream>

#include "Triangle.h"

using std::cout;
using std::endl;

int main() {
	Rectangle rec1(2, 6);
	Rectangle rec2(2, 4);

	if (rec1 == rec2) {
		cout << "Rectangles are equal." << endl;
	}
	else if (rec1 < rec2) {
		cout << "Rectangle rec1 has smaller perimeter than rec2." << endl;
	}
	else if (rec1 > rec2) {
		cout << "Rectangle rec1 has bigger perimeter than rec2." << endl;
	}

	return 0;
}