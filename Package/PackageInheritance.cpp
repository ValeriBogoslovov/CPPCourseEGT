
#include <iostream>
#include "Address.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    Address sender("John", "+1 252-245-237", "Boston", "Sezam");
    Address recipient("Doe", "+1 2525-237", "Chicago", "123");

    Package* twoDayPtr = new TwoDayPackage(5, recipient, sender, 2, 3);
    Package* overnightPtr = new OvernightPackage(10, recipient, sender, 10, 15);
    twoDayPtr->printInfo();
    overnightPtr->printInfo();
    return 0;
}
