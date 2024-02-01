#include <iostream>
#include <algorithm> // needed for count()
#include <vector> // needed for vector

using namespace std;

int main()
{
    vector<bool> bool_vec = {true, false, true, true, false, true, false, false, true, 1, 1};
    // counts from begin to end matches of 1, true = 1
    // alternatively cbegin() and cend() can be used, constant begin, constant end, doesn't allow modifications
    cout << count(bool_vec.begin(), bool_vec.end(), 1) << endl; // counts from begin to end matches of 1, true = 1

    int bool_arr[] = {true, false, true, true, false, true, false, false, true, 1, 1};
    // counts the number of matches of 1, true = 1
    cout << count(begin(bool_arr), end(bool_arr), 1) << endl;

    return 0;
}
