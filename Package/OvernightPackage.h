#pragma once

#include "Package.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(double basePrice, Address recipient, Address sender, double weight, 
		double overnightFee);
	
	void setOvernightPrice(double overnightFee);
	void printInfo() override;
	double getOvernightFee();
	double calculateCost() override;
private:
	double overnightFee;
};