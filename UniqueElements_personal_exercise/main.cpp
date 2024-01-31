#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
// this function will return a vector of type T which can be any data type => int, char, double...
template<typename T> vector<T> unique_elements(const vector<T>& vec);

// given random vector of elements, return vector with non repeating elements

int main()
{
    const vector<char> c_vec{'A','A','A','B','B'};
    vector<char> vec_c_u = unique_elements(c_vec);
    const vector<string> s_vec{"AA","AA","BB","BBB","AA","BB"};
    vector<string> vec_s_u = unique_elements(s_vec);
    vector<int> i_vec{1,1,1,1,2,2,2,3,3,3,5,4,3,6,2,2,1,1,4,3,5,32,3,24,2,4,24,42,1};
    vector<int> vec_num_u = unique_elements(i_vec);

    for (auto i : vec_num_u) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

template<typename T> vector<T> unique_elements(const vector<T>& vec) {
    // using set we will keep only unique values
    set<T> unique_set(vec.begin(), vec.end());
    // return vector containing the values from the set
    return vector<T>(unique_set.begin(), unique_set.end());
}
