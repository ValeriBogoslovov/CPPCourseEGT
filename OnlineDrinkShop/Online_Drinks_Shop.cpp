#include <iostream>
#include <vector>

#include "Drink.h"
#include "Alcoholic.h"
#include "NonAlcoholic.h"
#include "Order.h"
#include "Customer.h"
#include "OnlineShopServices.h"

using std::cout;
using std::endl;
using std::vector;

int main()
{
    //Testing VS Git
    //Testing Branches
    OnlineShopServices oss1;
    OnlineShopServices oss;
    Drink* d1 = new Alcoholic(40, 15, "Jack Daniel's", "hard-liquor", 33, 1, 0.7);
    Drink* d2 = new NonAlcoholic(15, 15, "Koka Kola", "carbonated", 2.8, 1, 1);
    Drink* d3 = new NonAlcoholic(10, 15, "Cappy", "juice", 3.2, 3, 2);
    Order o1;
    Order o2;
    Customer c1("Stefcho");
    Customer c2("Vancho");
    o2.addDrink(d3);
    o2.addDrink(d2);
    o2.addDrink(d1);
    c2.addOrder(o2);
    
    o1.addDrink(d1);
    o1.addDrink(d2);
    c1.addOrder(o1);
    oss.addCustomer(c1);
    oss.addCustomer(c2);
    oss.getNonAndAlcoholicSales();
    oss.getBestCustomer();
}
