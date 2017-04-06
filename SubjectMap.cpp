
#include"SubjectMap.h"
//#include"Observer.h"
Subject::Subject(){
	_observers = new list<ObserverMap*>;

}
Subject::~Subject(){
	delete _observers;
}

void Subject::Attach(ObserverMap* o){
	_observers->push_back(o); };

void Subject::Detach(ObserverMap* o){
	_observers->remove(o); };

void Subject::Notify(){
	list<ObserverMap*>::iterator i = _observers->begin();
for (; i != _observers->end(); ++i)
		(*i)->UpdateMap();
};