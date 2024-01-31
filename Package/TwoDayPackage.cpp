#include "TwoDayPackage.h"
#include <iostream>

using std::cout;
using std::endl;

TwoDayPackage::TwoDayPackage(double pricePerWeight, Address recipient, Address sender, double weight, 
    double twoDayFee) : Package(pricePerWeight, recipient, sender, weight)
{
    this->setTwoDayFee(twoDayFee);
}

void TwoDayPackage::setTwoDayFee(double fee)
{
    this->twoDayFee = fee;
}

void TwoDayPackage::printInfo()
{
    Package::printInfo();
    cout << "Total cost: " << this->calculateCost() << endl << endl;
}

double TwoDayPackage::getTwoDayFee()
{
    return this->twoDayFee;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + this->getTwoDayFee();
}
