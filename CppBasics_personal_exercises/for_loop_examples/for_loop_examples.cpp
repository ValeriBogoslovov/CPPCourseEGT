#include <iostream>

using namespace std;

int main() {

  // Find the sum of all odd numbers in range 1 to 100
  // which have a reminder after divided by 7

  cout << "Find the sum of all odd numbers in range 1 to 100, which have a reminder after divided by 7." << endl << endl;

  int sum = 0;
  for (int i = 1; i <= 100; i += 2) {
    if (i % 7 == 0) {
      cout << "Skipped " << i << endl;
      continue;
    }
    sum += i;
  }

  cout << endl << "Sum is: " << sum << endl << endl;
  sum = 0;

  // Find the sum of all odd numbers in range 1 to 100
  // which have not a reminder after divided by 7

  cout << "Find the sum of all odd numbers in range 1 to 100, which have not a reminder after divided by 7." << endl << endl;

  for (int i = 1; i <= 100; i += 2) {

    if (i % 7 == 0) {
      cout << "Added " << i << endl;
      sum += i;
      continue;
    }

  }

  cout << endl << "Sum is: " << sum << endl << endl;

  // in range 100-999 find the sum of the digits and print it out
  // example 100 = 1+0+0; 263 = 2+6+3

  cout << "This program finds the sum of the digits of a three digit number, ";
  cout << "if the sum ends in 3, it's skipped, if it finds entered number it prints it and ends." << endl << endl;

  int searched_result = 0;
  cout << "Please enter a number in range 1 to 27: ";
  cin >> searched_result;

  int current_result = 0;
  bool found = false;

  for (int i = 100; i < 1000; i++) {

    int first_digit, second_digit, third_digit = 0;

    first_digit = i / 100;
    second_digit = (i / 10) % 10;
    third_digit = i % 10;

    current_result = first_digit + second_digit + third_digit;

    // skips results that are equal or end in 3: example 23, 13, 3

    if (current_result == 3 || current_result % 10 == 3) {
      continue;
    }

    if (current_result == searched_result) {
      cout << "Found your number: " << current_result << endl;
      found = true;
      break;
    }

    cout << "Sum of " << first_digit << " + " << second_digit << " + " << third_digit
      << " = " << current_result << endl;

  }

  if (!found) {
    cout << "Your number:" << searched_result << " was not found." << endl;
  }
}
