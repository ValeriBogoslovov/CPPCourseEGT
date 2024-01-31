#pragma once
#include "Drink.h"


class NonAlcoholic :
    public Drink
{
public:
    NonAlcoholic(double sugar, double tax,string name, string type, 
        double price, int quantity, double volume);

    void print() override;

    double calculatePrice() override;
    double getCityTax();
    double getSugarAmount();
private:
    double m_sugarAmount;
    double m_cityTax;
};

