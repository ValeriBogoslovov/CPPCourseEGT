#include "Alcoholic.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

Alcoholic::Alcoholic(double percentage, double tax, string name, string type, 
    double price, int quantity, double volume)
    : Drink(name, type, price, quantity, volume)
{
    m_alcoholPercentage = percentage;
    m_liquorTax = tax;
}

void Alcoholic::print()
{
    Drink::print();
    cout << std::fixed << std::setprecision(2);
    cout << "Alcohol percentage: " << this->getAlcoholPercentage() << "%" << endl;
    cout << "Liquor tax: " << this->getLiquorTax() << "%" << endl << endl;
}

double Alcoholic::calculatePrice()
{
    return Drink::getQuantity() * (Drink::getPrice() * (this->getLiquorTax() / 100)) + Drink::getPrice();
}

double Alcoholic::getLiquorTax()
{
    return m_liquorTax;
}

double Alcoholic::getAlcoholPercentage()
{
    return m_alcoholPercentage;
}
