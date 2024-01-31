#include <iostream>

using namespace std;

int recursive_sum(int a, int b);

int main()
{
    cout << "This program finds the sum between given two numbers." << endl;
    cout << "*****************************************************" << endl << endl;

    int a, b;
    cout << "Please enter first whole number: ";
    cin >> a;
    cout << "Please enter second whole number: ";
    cin >> b;

    cout << "Sum between numbers " << a << " and " << b << " is equal to: " << recursive_sum(a, b);

}

int recursive_sum(int a, int b) {
    if (a > b){
        //swap numbers if necessary
        a = a + b;
        b = a - b;
        a = a - b;
    }
    // check if a == b and end recursion and return sum
    if (a == b) {
        return a;
    }
    // each time we call the function again value of "a" will be incremented
    // example: a = 2, b = 4
    // we check if 2 == 4, then we go and return 2 + function(2 + 1, 4)
    // we check again if 3 == 4, its not so we go and return 2 + function(3 + 1, 4)
    // we check again if 4 == 4, it is so we return 2 + 3 + 4 = 9
    return a + recursive_sum(a + 1, b);
}
