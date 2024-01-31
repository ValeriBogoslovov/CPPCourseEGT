#include <iostream>

using namespace std;

bool is_leap_year(int year) {

    if (year % 4 == 0) {

      if (year % 100 == 0 && year % 400 == 0) {
        return true;
      } else if (year % 100 == 0 && year % 400 != 0) {
        return false;
      } else if (year % 100 != 0) {
        return true;
      }
    }
    return false;
  }

int main() {

  cout << is_leap_year(1996);
}
