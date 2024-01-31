#pragma once
#include "Customer.h"
#include "Order.h"
#include "Drink.h"


class OnlineShopServices
{
public:

	void getNonAndAlcoholicSales();
	void addCustomer(Customer c);
	void getBestCustomer();

private:
	vector<Customer> m_customers;
};

