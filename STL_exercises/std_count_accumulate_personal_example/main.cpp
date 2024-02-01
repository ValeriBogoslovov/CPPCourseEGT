#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    // find sum of all elements except the highest and lowest, one time
    // if highest or lowest are repeated sum them


    vector<int> numbers = { 6, 2, 1, 8, 10, 10, 1 }; // => 16, 10 and 1 are removed
    sort(numbers.begin(), numbers.end()); // sort vector in ascending order

    // after we sort, accumulate will make addition of all elements except first and last
    // begin() + 1, end() - 1 skips first and last
    cout << accumulate(numbers.begin() + 1, numbers.end() - 1, 0) << endl;

    // using simpler solution
    int sum = 0;
    int lowest_num = numbers[0];
    int highest_num = numbers[0];

    // iterate the vector and check if element is either lower or higher than
    // our variables lowest_num and highest_num, if so save the value
    // sum all elements and then subtract lowest and highest element
    for (int num : numbers){
        if (num < lowest_num) {
            lowest_num = num;
        } else if (num > highest_num) {
            highest_num = num;
        }
        sum += num;
    }
    sum -= (lowest_num + highest_num);
    cout << sum << endl;

    // alternative option is to use *min_element and *max_element
    // but this will iterate 3 times over the vector!
    numbers = { 6, 2, 1, 8, 10, 10, 1 };
    cout << accumulate(numbers.begin(), numbers.end(), 0) - *min_element(numbers.begin(), numbers.end()) - *max_element(numbers.begin(), numbers.end()) << endl;
    return 0;
}
