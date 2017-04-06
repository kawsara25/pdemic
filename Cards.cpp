//**********************************************
//COMP345 Assignment 1
//Winter 2017
//by Jasmine Leblond-Chartrand (25991714)
//**********************************************
//
//Card.cpp



#include "Card.h"

Cards::Cards() {
	card_name = "";
	card_textfront = "";
	card_textback = "";
}

Cards::Cards(string cardname)
{
	card_name = cardname;
}


Cards::Cards(std::string cardname, std::string cardtextfront, std::string cardtextback) {
	card_name = cardname;
	card_textfront = cardtextfront;
	card_textback = cardtextback;
}

Cards::~Cards() {

}


std::string Cards::getCardName() {
	return card_name;
}

void Cards::setCardName(std::string cardname) {
	card_name = cardname;
}
std::string Cards::getCardTextFront() {
	return card_textfront;
}
void Cards::setCardTextFront(std::string cardtextfront) {
	card_textfront = cardtextfront;
}
std::string Cards::getCardTextBack() {
	return card_textback;
}
void Cards::setCardTextBack(std::string cardtextback) {
	card_textback = cardtextback;
}

void Cards::toString()
{
	cout << " Card  created with name : " + getCardName() << endl;
}

void Cards::printCard() {
	std::cout << "----------------------------------------" << std::endl;
	std::cout << this->getCardName() << std::endl;
	std::cout << this->getCardTextFront() << std::endl;
	std::cout << this->getCardTextBack() << std::endl;
	std::cout << "----------------------------------------\n\n" << std::endl;
}

void Cards::printCardFront() {
	std::cout << this->getCardName() << std::endl;
	std::cout << this->getCardTextFront() << std::endl;
}

void Cards::printCardBack() {
	std::cout << this->getCardName() << std::endl;
	std::cout << this->getCardTextBack();
}
