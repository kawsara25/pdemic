//**********************************************
//COMP345 BUILD 1
//Winter 2017
//Team Buffalos
//**********************************************
//
//InfectionCard.h

#pragma once
#include <string>
#include <vector>
#include "Card.h"
using namespace std;

class InfectionCard : public Cards {
public:
	//constructor,destructor
	InfectionCard();
	InfectionCard(string city, string title, string cardtextfront, string cardtextback);
	~InfectionCard();
	

	//action
	void Infect(int* remainingDiseaseCubes,string city, string color);
};
