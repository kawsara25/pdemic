//**********************************************
//COMP345 BUILD 1
//Winter 2017
//Team Buffalos
//**********************************************
//
//Subject.cpp  (Abstract class)

#include "SubjectPlayer.h"

SubjectPlayer::SubjectPlayer(){
    std::vector<Observer*>  listobservers;
}
SubjectPlayer::~SubjectPlayer(){
    //delete listobservers; (?)
}
void SubjectPlayer::Attach(Observer* observer){
    listobservers.push_back(observer);
};
void SubjectPlayer::Detach(Observer* observer){
    listobservers.erase(std::remove(listobservers.begin(), listobservers.end(), observer), listobservers.end());
};
void SubjectPlayer::Notify(){
    std::vector<Observer *>::iterator i = listobservers.begin();
    for (; i !=listobservers.end(); ++i)
        (*i)->Update();
};
void SubjectPlayer::NotifyHand(){
    std::vector<Observer *>::iterator i = listobservers.begin();
    for (; i !=listobservers.end(); ++i)
        (*i)->UpdateHand();
}
void SubjectPlayer::NotifyDiscardHand(){
    std::vector<Observer *>::iterator i = listobservers.begin();
    for (; i !=listobservers.end(); ++i)
        (*i)->UpdateDiscardHand();
}
void SubjectPlayer::NotifyEpidemicCard(){
    std::vector<Observer *>::iterator i = listobservers.begin();
    for (; i !=listobservers.end(); ++i)
        (*i)->UpdateEpidemicCard();
}
