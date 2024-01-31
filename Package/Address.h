#pragma once
#include <string>

using namespace std;

class Address {
public:
	Address(string name, string phone, string city, string steet);

	void setPersonName(string);
	void setMobileNumber(string);
	void setCity(string);
	void setStreet(string);
	void printInfo();

	string getPersonName();
	string getMobileNumber();
	string getCity();
	string getStreet();


private:
	string personName;
	string mobileNumber;
	string city;
	string street;
};