#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // needed for toupper

using namespace std;

int main()
{
    // convert string from lower case to upper case using ASCII table
    string input_str = "hEllo WorlD !";
    string result_str = "";

    for (char c : input_str){
        if (c >= 97 && c <= 122){
            result_str += (c - 32);
            continue;
        }
        result_str += c;
    }
    cout << result_str << endl;

    result_str = input_str;
    cout << result_str << endl;
    // using std::transform std::toupper lambda function
    std::transform(input_str.begin(), input_str.end(), result_str.begin(), [](unsigned char c){return std::toupper(c);});
    cout << result_str << endl;
    return 0;
}
