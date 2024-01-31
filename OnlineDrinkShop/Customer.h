#pragma once
#include "Order.h"

class Customer
{
public:
	Customer(string username);

	void addOrder(Order order);

	string getUsername();
	vector<Order> getOrders();
private:
	string m_username;
	vector<Order> m_orders;
};

