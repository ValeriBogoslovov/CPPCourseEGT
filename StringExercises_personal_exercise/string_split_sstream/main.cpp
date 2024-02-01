#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    /*string input_str = "I love strings let's split them by empty space";
    vector<string> vec;
    // stringstream breaks word by empty space
    stringstream str_stream(input_str);
    // this variable will hold the extracted word off the stream
    string word;

    // >> operator extracts a word off the stream
    while(str_stream >> word) {
        vec.push_back(word);
    }

    for(string word : vec) {
        cout << word << endl;
    }*/

    string input_str = "I love strings let's split them by empty space";
    vector<string> vec;

    // split string by certain delimiter
    char delim = ' '; // whatever we need to split
    stringstream str_stream(input_str);
    string word;

    while(!str_stream.eof()) {
        getline(str_stream, word, delim);
        cout << word << endl;
    }

    return 0;
}
