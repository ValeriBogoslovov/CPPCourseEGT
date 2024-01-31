#pragma once
#include <string>

using std::string;

class Drink
{
public:
	Drink(string name, string type, double price, int quantity, double volume);

	virtual void print();

	double getPrice();
	virtual double calculatePrice();
	double getVolume();
	int getQuantity();
private:
	string m_name;
	string m_type;
	double m_price;
	int m_quantity;
	double m_volume;
};

