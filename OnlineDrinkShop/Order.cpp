#include "Order.h"
#include "NonAlcoholic.h"
#include "Alcoholic.h"

void Order::addDrink(Drink* drink)
{
	m_drinks.push_back(drink);
	time_t now = time(0);
	ctime_s(m_timeAndDate, sizeof m_timeAndDate, &now);
	m_dateOfPurchase = m_timeAndDate;
	NonAlcoholic* nonAlcoholicPtr = dynamic_cast<NonAlcoholic*>(drink);
	Alcoholic* alcoholicPtr = dynamic_cast<Alcoholic*>(drink);
	if (nonAlcoholicPtr != nullptr) {
		m_nonAlcoholicDrinks++;
	}
	else if (alcoholicPtr != nullptr) {
		m_alcoholicDrinks++;
	}
}

vector<Drink*> Order::getDrinks()
{
	return m_drinks;
}

double Order::calculateTotalSum()
{
	m_totalSum = 0;
	for (Drink* d : m_drinks) {
		m_totalSum += d->calculatePrice();
	}
	return m_totalSum;
}

string Order::getDateOfPurchase()
{
	return m_dateOfPurchase;
}

int Order::getNonAlcoholicDrinks()
{
	return m_nonAlcoholicDrinks;
}

int Order::getAlcoholicDrinks()
{
	return m_alcoholicDrinks;
}
