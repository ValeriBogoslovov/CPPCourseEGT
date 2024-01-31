#pragma once
#include "Drink.h"

class Alcoholic :
    public Drink
{
public:
    Alcoholic(double percentage, double tax, string name, string type, 
        double price, int quantity, double volume);
    
    void print() override;

    double calculatePrice() override;
    double getLiquorTax();
    double getAlcoholPercentage();

private:
    double m_alcoholPercentage;
    double m_liquorTax;
};

