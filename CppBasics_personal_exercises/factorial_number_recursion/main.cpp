#include <iostream>

using namespace std;

int factorial_recursion (int number);

int main()
{
    cout << "This program calculate factorial of given number." << endl << endl;
    cout << "*************************************************" << endl << endl;

    int number = 0;
    cout << "Please enter whole number: ";
    cin >> number;

    if (number < 1) {
        cout << "Factorial of number is only possible with positive numbers!" << endl;
    }

    cout << number << " != " << factorial_recursion(number);

    return 0;
}

int factorial_recursion (int number) {

    // when number is equal to 1 we return the multiplication of the numbers before it
    if (number == 1) {
        return number;
    }
    // we decrement number for each function call
    // lets say number = 4, factorial of 4 is 24
    // we calculate first time 4-- * function(3) // 3 is passed to the function = 4 * 3 = 12
    // next number is 3-- * function(2) // 12 * 2 = 24
    // next number is 2-- * function(1) // 24 * 1 = 24
    // next number is 1 and is equal to 1 so the above if statement returns 24
    return number-- * factorial_recursion(number);

}
