#include <iostream>

using namespace std;

int main()
{
    string str = "ternary";
    string end_str = "ary";

    if(end_str.size() > str.size()) {
        cout << "second string is bigger" << endl;
        return -1;
    }
    // returns true or false if one string ends with another
    if(equal(end_str.begin(), end_str.end(), str.end() - end_str.length())) {
        cout << "strings end the same" << endl;
    } else {
        cout << "different endings" << endl;
    }
    // another way is to use compare()
    if(0 == str.compare(str.length() - end_str.length(), end_str.length(), end_str)) cout << "Same endings" << endl;
    return 0;
}
