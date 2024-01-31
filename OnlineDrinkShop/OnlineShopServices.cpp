#include "OnlineShopServices.h"
#include <iostream>
using namespace std;

void OnlineShopServices::getNonAndAlcoholicSales()
{
	cout << "Number of drinks sold: ";
	for (auto c : m_customers) {
		for (auto o : c.getOrders()) {
			cout << o.getAlcoholicDrinks() + o.getNonAlcoholicDrinks() << endl;
			cout << "Number of non alcoholic drinks sold: " << o.getNonAlcoholicDrinks() << endl;
			cout << "Number of alcoholic drinks sold: " << o.getAlcoholicDrinks() << endl;
			break;
		}
		break;
	}
}

void OnlineShopServices::addCustomer(Customer c)
{
	m_customers.push_back(c);
}

void OnlineShopServices::getBestCustomer()
{
	string bestCustomer = "";
	double currentSum = 0;
	for (auto c : m_customers) {
		for (auto o : c.getOrders()) {
			if (currentSum < o.calculateTotalSum()) {
				currentSum = o.calculateTotalSum();
				bestCustomer = c.getUsername();
			}
		}
		
	}
	cout << "Best customer name: " << bestCustomer << endl;
	cout << "Total money spend: $" << currentSum << endl;
}
