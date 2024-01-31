#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>



int main()
{
    using namespace std;

    cout << "This program takes an integer number and converts it to string." << endl << endl;

    int input_number = 0;
    cout << "Please enter whole number: ";
    cin >> input_number;

    string number_to_string = "";

    // check if number is negative
    bool is_negative = input_number < 0;

    // make the number positive if it is negative, otherwise the below algorithm won't work
    if (is_negative) {
        input_number = -input_number;
    }

    while (input_number) {

        // get first digit of the number
        // '0' represents 48 in ASCII table, so if we have 1 as first digit
        // we get 1 + 48 = 49 which is the number 1 in ASCII table
        number_to_string += input_number % 10 + '0';

        // remove last digit
        input_number /= 10;

    }

    // if the number is negative we add minus character to the string
    if (is_negative) {
        number_to_string += '-';
    }

    // after all is done we have to reverse the number, because we save if from last to first
    reverse(number_to_string.begin(), number_to_string.end());

    cout << number_to_string << endl;

    return 0;
}
