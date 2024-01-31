#include <iostream>
#include <vector>

using namespace std;

int main() {

  int sum = 0;

  vector<int> arr = {-33, -52, 5, -6};

  for(auto num : arr) {
    sum += num;
	}
  if(sum < 0) {
    sum = -sum;
  }
  cout << sum << endl;
}
