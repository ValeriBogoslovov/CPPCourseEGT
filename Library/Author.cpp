#include "Author.h"
#include <iostream>

Author::Author(string firstName, string lastName, string nationality)
{
    this->setFirstName(firstName);
    this->setLastName(lastName);
    this->setNationality(nationality);
}

void Author::setFirstName(string fName)
{
    this->firstName = fName;
}

void Author::setLastName(string lName)
{
    this->lastName = lName;
}

void Author::setNationality(string nationality)
{
    this->nationality = nationality;
}

void Author::printAuthor()
{
    cout << "Author name: " << this->getFirstName() << " " << this->getLastName()
        << ", Nationality: " << this->getNationality() << endl;
}

string Author::getFirstName()
{
    return this->firstName;
}

string Author::getLastName()
{
    return this->lastName;
}

string Author::getNationality()
{
    return this->nationality;
}
