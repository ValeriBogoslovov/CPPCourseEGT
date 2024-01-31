#include "Package.h"
#include <iostream>

Package::Package(double pricePerWeight, Address recipient, Address sender, double weight)
    : recipientAddress(recipient), senderAddress(sender)
{
    this->setPricePerWeight(pricePerWeight);
    this->setWeight(weight);
}

void Package::setPricePerWeight(double pricePerWeight)
{
    this->pricePerWeight = pricePerWeight;
}

void Package::setWeight(double weight)
{
    this->weight = weight;
}

void Package::printInfo()
{
    cout << "Sender info: " << endl;
    this->senderAddress.printInfo();
    cout << "Recepient info: " << endl;
    this->recipientAddress.printInfo();
}

Address Package::getRecepient()
{
    return this->recipientAddress;
}

Address Package::getSender()
{
    return this->senderAddress;
}

double Package::getBasePrice()
{
    return this->pricePerWeight;
}

double Package::getWeight()
{
    return this->weight;
}

double Package::calculateCost()
{
    return this->getWeight() * this->getBasePrice();
}

