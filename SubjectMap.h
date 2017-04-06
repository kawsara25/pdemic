#pragma once
#include"ObserverMap.h"

#include<list>
using namespace std;
class Subject{ 
public:
	virtual void Attach(ObserverMap* o);
	virtual void Detach(ObserverMap* o);
	virtual void Notify(); Subject(); ~Subject(); 
private:
	list<ObserverMap*> *_observers;
};