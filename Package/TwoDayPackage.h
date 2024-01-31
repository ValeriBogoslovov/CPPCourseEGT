#pragma once
#include <string>

using namespace std;

#include "Package.h"

class TwoDayPackage : public Package {
public:
	TwoDayPackage(double basePrice, Address recipient, Address sender, double weight, double twoDayFee);

	void setTwoDayFee(double fee);
	void printInfo() override;
	double getTwoDayFee();
	virtual double calculateCost();
private:
	double twoDayFee;
};