#include <iostream>
#include <string>

using namespace std;

string convert(int number);

int main()
{
    // This program converts a number into a string
    // if number is divisible by 3 with no remainder it says "Pling"
    // if number is divisible by 5 with no remainder it says "Plang"
    // if number is divisible by 7 with no remainder it says "Plong"
    // if number is divisible with no remainder by two or three of the numbers
    // it combines the strings for example if number is divisible by 3 and 5 it says "PlingPlang"


    for (int i = 1; i <= 105; i++) {
        string message = convert(i);
        cout << message;
    }

    return 0;
}

string convert(int number) {
    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {

        return to_string(number) + " = PlingPlangPlong\n";

    } else if (number % 3 == 0 && number % 7 == 0){

        return to_string(number) + " = PlingPlong\n";

    } else if (number % 3 == 0 && number % 5 == 0) {

        return to_string(number) + " = PlingPlang\n";

    } else if (number % 5 == 0 && number % 7 == 0) {

        return to_string(number) + " = PlangPlong\n";

    } else if (number % 3 == 0) {

        return to_string(number) + " = Pling\n";

    } else if (number % 5 == 0) {

        return to_string(number) + " = Plang\n";

    } else if (number % 7 == 0) {

        return to_string(number) + " = Plong\n";

    } else {

        return to_string(number) + " is not devisible with no remainder by neither 3, 5 or 7\n";

    }
}
