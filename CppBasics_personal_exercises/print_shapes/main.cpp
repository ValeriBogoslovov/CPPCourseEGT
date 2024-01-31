#include <iostream>

using namespace std;

int main()
{
    cout << "This program prints out a triangle given the number of rows and character of user's choice. RIGHT SIDED" << endl << endl;

    //initializing variables and getting user's input
    int rows = 0;
    cout << "Please enter number of rows: ";
    cin >> rows;

    char c;
    cout << "Please enter one charter: ";
    cin >> c;

    int number_of_chars = 1; // number of characters per row

    for (int i = 1; i <= rows; i++) { // for loop used for the rows
        for (int j = 1; j <= rows; j++) { // for loop used for the columns

            if (rows - j < number_of_chars) {
                cout << c;

            } else {
                cout << ' ';
            }
        }
        cout << endl;

        // at the end of each line, increment the number of characters for the next line
        number_of_chars++;
    }
    cout << endl << endl;
    cout << "***************************************************************************************" << endl;

    // if you want to make the triangle start from left just change the following
    // change j in second for loop to start from 0
    // in if statement check if rows-j >= counter

    cout << "This program prints out a triangle given the number of rows and character of user's choice. LEFT SIDED" << endl << endl;

    //initializing variables and getting user's input
    int rows_num = 0;
    cout << "Please enter number of rows: ";
    cin >> rows_num;

    char user_char;
    cout << "Please enter one charter: ";
    cin >> user_char;

    int counter = rows_num;

    for (int i = 1; i <= rows_num; i++) { // for loop used for the rows
        for (int j = 0; j <= rows_num; j++) { // for loop used for the columns

            if (rows_num - j >= counter) {
                cout << user_char;

            } else {
                cout << ' ';
            }
        }
        cout << endl;

        // at the end of each line, decrement the counter
        counter--;
    }

    cout << endl << endl;
    cout << "***************************************************************************************" << endl;

    return 0;
}
