#pragma once
#include <string>
#include "Address.h"

using namespace std;

class Package {
public:
	Package(double pricePerWeight, Address recipient, Address sender, double weight);

	void setPricePerWeight(double pricePerWeight);
	void setWeight(double weight);
	virtual void printInfo();

	Address getRecepient();
	Address getSender();
	double getBasePrice();
	double getWeight();
	virtual double calculateCost();

private:
	double pricePerWeight;
	Address recipientAddress;
	Address senderAddress;
	double weight;
};