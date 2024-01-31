#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int random_num_generator() {
    srand(time(0));
    return 1 + rand();
}

double calculateParkingFee(int);
void takeInput(double, int);

int main()
{
    int time = 0;
    double fee = 0.0;

    takeInput(fee, time);

    return 0;
}

double calculateParkingFee(int time) {
    //$2 for up to thee hours
    //$.50 for each additional our up to 24hours
    double initialFee = 2.0;
    double nextHours = .5;
    double total = 0.0;

    if (time <= 3) {
        return initialFee;
    }
    total = ((time - 3) * nextHours) + initialFee;
    if (total > 10.0) return 10.0;

    return total;
}

void takeInput(double fee, int time) {

    for (int i = 0; i < 3; i++) {
        cout << "Enter amount of time the car was parked: ";
        cin >> time;
        fee = calculateParkingFee(time);
        cout << "Parking fee: $"<< fee << endl;
        fee = 0.0;
    }
}
