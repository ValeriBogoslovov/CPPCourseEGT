/*Write a program that reads N integers from the console and reverses them 
using a stack*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int inputNum;
    stack<int> numStack;

	cout << "Enter integer numbers, when you enter 0 the input terminates." << endl;

	while (cin >> inputNum && inputNum != 0)
	{
		numStack.push(inputNum);
	}
	
	while (!numStack.empty()) {
		cout << numStack.top() << " ";
		numStack.pop();
	}

	return 69;
}
