#pragma once
#include "Drink.h"
#include <vector>
#include <string>
#include <ctime>

using std::vector;
using std::string;

static int m_nonAlcoholicDrinks;
static int m_alcoholicDrinks;
class Order
{
public:

	void addDrink(Drink* drink);

	vector<Drink*> getDrinks();
	double calculateTotalSum();
	string getDateOfPurchase();
	int getNonAlcoholicDrinks();
	int getAlcoholicDrinks();
private:

	vector<Drink*> m_drinks;
	char m_timeAndDate[26];
	double m_totalSum;
	string m_dateOfPurchase;

};

