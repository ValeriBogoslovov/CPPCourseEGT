#include "Customer.h"

Customer::Customer(string username)
{
    m_username = username;
}

void Customer::addOrder(Order order)
{
    m_orders.push_back(order);
}

string Customer::getUsername()
{
    return m_username;
}

vector<Order> Customer::getOrders()
{
    return m_orders;
}
