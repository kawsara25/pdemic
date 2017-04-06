//**********************************************
//COMP345 BUILD 1
//Winter 2017
//Team Buffalos
//**********************************************
//
//Subject.h (Abstract class)


#ifndef SUBJECTPLAYER_H
#define SUBJECTPLAYER_H
#include <vector>
#include <algorithm>

#include "ObserverPlayer.h"

#include "CardsHeaders.h"

class SubjectPlayer {
public:
    virtual void Attach(Observer* observer);
    virtual void Detach(Observer* observer);
    virtual void Notify();
    virtual void NotifyHand();
    virtual void NotifyDiscardHand();
    virtual void NotifyEpidemicCard();
	SubjectPlayer();
	~SubjectPlayer();
private:
    std::vector<Observer*> listobservers;
};


#endif //SUBJECT_H
