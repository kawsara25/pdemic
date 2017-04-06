#pragma once
//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//CityCard.h

#ifndef CityCard_h
#define CityCard_h


#include "PlayerCard.h"


class CityCard : public PlayerCard{
public:
	CityCard();
	CityCard(std::string city, std::string title, std::string cardtextfront, std::string cardtextback);
	~CityCard();
protected:
	std::string city; //to be changed for real city object

};

//NOTE: std::string city parameter type has to be changed for the real City class

class BlueCity : public CityCard{
public:
	BlueCity();
	BlueCity(std::string city, std::string title, std::string cardtextfront, std::string cardtextback);
	~BlueCity();
};

class YellowCity : public CityCard{
public:
	YellowCity();
	YellowCity(std::string city, std::string title, std::string cardtextfront, std::string cardtextback);
	~YellowCity();
};

class BlackCity : public CityCard{
public:
	BlackCity();
	BlackCity(std::string city, std::string title, std::string cardtextfront, std::string cardtextback);
	~BlackCity();
};

class RedCity : public CityCard{
public:
	RedCity();
	RedCity(std::string city, std::string title, std::string cardtextfront, std::string cardtextback);
	~RedCity();
};

#endif /* CityCard.h */
