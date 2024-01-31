#include "NonAlcoholic.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

NonAlcoholic::NonAlcoholic(double sugar, double tax, string name, string type, 
    double price, int quantity, double volume)
    : Drink(name, type, price, quantity, volume)
{
    m_sugarAmount = sugar;
    m_cityTax = tax;
}

void NonAlcoholic::print()
{
    Drink::print();
    cout << "Sugar amount: " << this->getSugarAmount() << " grams" << endl;
    cout << "City tax: " << this->getCityTax() << "%" << endl << endl;
}

double NonAlcoholic::calculatePrice()
{
    return (Drink::calculatePrice() + (this->getCityTax() / 100));
}

double NonAlcoholic::getCityTax()
{
    return m_cityTax;
}

double NonAlcoholic::getSugarAmount()
{
    return m_sugarAmount;
}
