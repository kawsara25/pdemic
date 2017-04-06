#pragma once
//**********************************************
//COMP345 Assignment 1
//Winter 2017
//by Jasmine Leblond-Chartrand (25991714)
//**********************************************
//
//Card.h

#ifndef Card_h
#define Card_h
#include <iostream>
#include <string>
using namespace std;

class Cards {
protected:
	std::string card_name;
	std::string card_textfront;
	std::string card_textback;

public:
	Cards();
	Cards(string);
	Cards(std::string, std::string, std::string);
	virtual ~Cards();

	std::string getCardName();
	void setCardName(std::string);
	std::string getCardTextFront();
	void setCardTextFront(std::string);
	std::string getCardTextBack();
	void setCardTextBack(std::string);
	virtual void toString();
	void printCard();
	void printCardFront();
	void printCardBack();

};

#endif /* Card_h */
