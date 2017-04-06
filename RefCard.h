#pragma once

#ifndef RefCard_h
#define RefCard_h


#include "Card.h"

//class Card{};

class RefCard : public Cards
{

public:
	RefCard();
	//arrays to hold instructions of front and back side of card
	string sideA[5];
	string sideB[5];

	//pretty print the contents of a reference card
	void readReferenceCard();

};
#endif /* RefCard_h */
