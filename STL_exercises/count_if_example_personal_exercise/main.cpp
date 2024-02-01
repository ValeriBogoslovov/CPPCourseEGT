#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // count characters not in given range
    string s = "abcdeffffgggghhhh";

    // counts characters that are bigger than 'e' and smaller than 'g'
    // using count_if built in function
    // using lambda expression
    cout << count_if(s.begin(), s.end(), [](char c) {return c > 'e' && c < 'g';}) << endl;
    return 0;
}
