/*Write a program that reads a sequence of integers until 0 is entered and sorts
 them in an increasing order. Use linked list*/

#include <iostream>
#include <list>

using namespace std;
int main()
{
    int inputNum = -1;
    list<int> numList;

	cout << "Please enter integer numbers, when 0 is entered the input will be terminated." << endl;

	while (cin >> inputNum && inputNum != 0)
	{
		numList.push_back(inputNum);
		
	}

	cout << "Numbers before sort: " << endl;

	for (list<int>::iterator iter = numList.begin(); iter != numList.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	numList.sort();

	cout << "Numbers after sort: " << endl;

	for (list<int>::iterator iter = numList.begin(); iter != numList.end(); iter++) {
		cout << *iter << " ";
	}

	return 69;
}
