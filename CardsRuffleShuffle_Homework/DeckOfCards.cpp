#include "DeckOfCards.h"
#include <iostream>

DeckOfCards::DeckOfCards()
{
    createDeck();
}

void DeckOfCards::shuffle()
{
	srand(time(0));
	std::cout << std::endl;
	for (int i = 0; i < 52; i++)
	{
		int randomCard = rand() % 52;
		Card temp = deck.at(i);
		deck.at(i) = deck.at(randomCard);
		deck.at(randomCard) = temp;
	}
	std::cout << "*********** SHUFFLING DECK *****************\n\n";
}


void DeckOfCards::showCards()
{
	for (auto card : deck) {


		std::cout << card.getFace();
			
		std::cout <<"\tof " << card.getSuit() << std::endl;
	}
}


void DeckOfCards::createDeck()
{
	for (int i = 1; i < 5; i++)
	{
		std::string suit;
		switch (i)
		{
		case 1: suit = "Clubs"; break;
		case 2: suit = "Diamonds"; break;
		case 3: suit = "Hearts"; break;
		case 4: suit = "Spades"; break;
		default: std::cout << "No such suit exists.\n";
			break;
		}
		//std::cout << suit << std::endl;
		for (int j = 1; j < 14; j++)
		{
			std::string face;
			switch (j)
			{
			case 1: face = "A"; break;
			case 11: face = "J"; break;
			case 12: face = "Q"; break;
			case 13: face = "K"; break;
			default: face = std::to_string(j);
				break;
			}
			//std::cout << face << std::endl;
			deck.push_back(Card(suit, face));
		}

	}
}
