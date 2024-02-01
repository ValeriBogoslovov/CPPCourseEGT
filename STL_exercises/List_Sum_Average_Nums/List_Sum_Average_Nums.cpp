/*Write a program that reads from the console a sequence of positive integer
numbers. The sequence ends when the number 0 is entered. Calculate and print
the sum and average of the elements of the sequence. Use linked list.*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    int numberInput = -1;
    list<int> numList;
    int sum = 0;

    cout << "Enter positive integer numbers, 0 will terminate the input." << endl;

    while (cin >> numberInput && numberInput != 0)
    {
        numList.push_back(numberInput);
    }
    cout << endl;
    
    // creating iterator that iterate from list.begin to list.end
    // *iter is dereferencing exposing the value
    for (list<int>::iterator iter = numList.begin(); iter != numList.end(); iter++) {
        sum += *iter;
    }
    cout << "Sum of numbers: " << sum << endl;
    cout << "Average sum: " << sum / 2 << endl;

    return 69;
}

