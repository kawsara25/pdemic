#pragma once
//**********************************************
//COMP345 Assignment 1
//Winter 2017
//by Jasmine Leblond-Chartrand (25991714)
//**********************************************
//
//RoleCard.h

#ifndef ROLECARD_H_
#define ROLECARD_H_
#include "Card.h"

class RoleCard : public Cards {
private:
	std::string rolename;
public:
	RoleCard();
	RoleCard(std::string rolename, std::string cardtextfront, std::string cardtextback);
};

class DispatcherCard : public RoleCard {
public:
	DispatcherCard();
};

class MedicCard : public RoleCard {
public:
	MedicCard();
};

class ScientistCard : public RoleCard {
public:
	ScientistCard();
};

class ResearcherCard : public RoleCard {
public:
	ResearcherCard();
};

class OperationsexpertCard : public RoleCard {
public:
	OperationsexpertCard();
};

class QuarantinespecialistCard : public RoleCard {
public:
	QuarantinespecialistCard();
};
class ContingencyplannerCard : public RoleCard {
public:
	ContingencyplannerCard();
};
#endif /* ROLECARD_H_ */
