/*Write a program that removes from a given sequence all negative numbers.*/

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> numVec;
    int inputNum = -1;
    
    cout << "Enter integer numbers, when 0 is entered the input terminates." << endl;
    
    while (cin >> inputNum && inputNum != 0)
    {
        numVec.push_back(inputNum);
    }
    
    //auto it = remove_if(numVec.begin(), numVec.end(), [](int i) {return i < 0; });
    //numVec.erase(it, numVec.end());

    cout << endl;
    int i = 0;

    while (i < numVec.size())
    {
        if (numVec[i] < 0) {
            numVec.erase(numVec.begin() + i, numVec.begin() + i + 1);
        }
        else {
            i++;
        }
    }

    for (int i : numVec) {
        cout << i << " ";
    }

    cout << endl;

    return 69;
}

