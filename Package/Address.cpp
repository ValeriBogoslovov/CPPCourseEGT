#include "Address.h"
#include <iostream>

Address::Address(string name, string phoneNumber, string city, string street)
{
    this->setPersonName(name);
    this->setMobileNumber(phoneNumber);
    this->setCity(city);
    this->setStreet(street);
}

void Address::setPersonName(string name)
{
    this->personName = name;
}

void Address::setMobileNumber(string phoneNumber)
{
    this->mobileNumber = phoneNumber;
}

void Address::setCity(string city)
{
    this->city = city;
}

void Address::setStreet(string street)
{
    this->street = street;
}

void Address::printInfo()
{
    cout << "Person name: " << this->getPersonName() << endl;
    cout << "Person mobile number: " << this->getMobileNumber() << endl;
    cout << "Person city: " << this->getCity() << endl;
    cout << "Person street: " << this->getStreet() << endl;
}

string Address::getPersonName()
{
    return this->personName;
}

string Address::getMobileNumber()
{
    return this->mobileNumber;
}

string Address::getCity()
{
    return this->city;
}

string Address::getStreet()
{
    return this->street;
}
