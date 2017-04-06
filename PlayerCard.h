#pragma once
//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//PlayerCard.h

#ifndef PLAYERCARD_H_
#define PLAYERCARD_H_

#include "Card.h"

class PlayerCard : public Cards
{
private:
	string playercardname;
public:
	PlayerCard();
	PlayerCard(std::string playercardname, std::string cardtextfront, std::string cardtextback);
	virtual void EventAction();
};

#endif /* PLAYERCARD_H_ */
