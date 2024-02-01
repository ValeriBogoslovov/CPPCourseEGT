#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<pair<int,int>> busStops(3);
    int remaining_people = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter number of people that gets on the bus: ";
        cin >> busStops[i].first;
        cout << "Enter number of people that gets off the bus: ";
        cin >> busStops[i].second;
        cout << endl;
    }
    cout << endl;
    /*for (int i = 0; i < 3; i++) {
        remaining_people += busStops[i].first;
        remaining_people -= busStops[i].second;
    }*/
    remaining_people = accumulate(busStops.begin(), busStops.end(), 0, [](int sum, auto i) { return sum + i.first - i.second; });
    cout << "Remaining people on the bus: " << remaining_people << endl;

    return 0;
}
