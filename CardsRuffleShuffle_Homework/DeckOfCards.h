#pragma once
#include <vector>

#include "Card.h"


class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle();
	void showCards();

private:
	void createDeck();
	std::vector<Card> deck;
};

