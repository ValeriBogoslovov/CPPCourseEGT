#include <iostream>

using namespace std;

int main() {
  // This program takes three decimal numbers representing the side of a triangle
  // and checks if the triangle is equilateral, isosceles or scalene

  cout << "This program takes three decimal numbers representing the side of a triangle";
  cout << " and checks if the triangle is equilateral, isosceles or scalene." << endl << endl;

  // initializing the three variables and taking user input
  float side_a, side_b, side_c = 0.0;

  cout << "Enter side a: ";
  cin >> side_a;

  cout << "Enter side b: ";
  cin >> side_b;

  cout << "Enter side c: ";
  cin >> side_c;
  cout << endl;

  if (side_a == side_b && side_a == side_c) {
    cout << "The triangle is equilateral." << endl;
  } else if (side_a == side_b || side_a == side_c || side_c == side_b) {
    cout << "The triangle is isosceles." << endl;
  } else {
    cout << "The triangle is scalene." << endl;
  }

  return 0;
}
