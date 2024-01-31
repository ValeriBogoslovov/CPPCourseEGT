#include "OvernightPackage.h"
#include <iostream>

using std::cout;
using std::endl;

OvernightPackage::OvernightPackage(double basePrice, Address recipient, Address sender, double weight, 
    double overnightFee) : Package(basePrice, recipient, sender, weight)
{
    this->setOvernightPrice(overnightFee);
}

void OvernightPackage::setOvernightPrice(double overnightFee)
{
    this->overnightFee = overnightFee;
}

void OvernightPackage::printInfo()
{
    Package::printInfo();
    cout << "Total cost: " << this->calculateCost() << endl << endl;
}

double OvernightPackage::getOvernightFee()
{
    return this->overnightFee;
}

double OvernightPackage::calculateCost()
{
    return Package::calculateCost() + this->getOvernightFee();
}
