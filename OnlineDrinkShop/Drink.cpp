#include "Drink.h"
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

Drink::Drink(string name, string type, double price, int quantity, double volume)
{
    m_name = name;
    m_type = type;
    m_price = price;
    m_quantity = quantity;
    m_volume = volume;
}

void Drink::print()
{
    // shows 2 zeroes after the decimal point if the double is whole number
    // 2.0 will be shown as 2.00, 2.9 -> 2.90
    cout << std::fixed << std::setprecision(2);
    cout << "Drink name: " << m_name << "\nDrink type: " << m_type
        << "\nDrink price: $" << m_price << endl;
    if (this->getVolume() < 1.0) {
        cout << std::fixed << std::setprecision(3);
        cout << "Drink volume: " << this->getVolume() << "ml" << endl;
    }
    else {
        cout << std::fixed << std::setprecision(1);
        cout << "Drink volume: " << this->getVolume() << "L" << endl;
    }
    
}

double Drink::getPrice()
{
    return m_price;
}

double Drink::calculatePrice()
{
    return this->getPrice() * this->getQuantity();
}

double Drink::getVolume()
{
    return m_volume;
}

int Drink::getQuantity()
{
    return m_quantity;
}
