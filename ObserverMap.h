
#pragma once
//#ifndef OBSERVER_H
//#define OBSERVER_H
class ObserverMap {
public:
	~ObserverMap();
	virtual void UpdateMap() = 0;  //pure virtual function: must be implemented
	
	//	virtual void UpdateHand() = 0;
	//virtual void UpdateDiscardHand() = 0;
	//virtual void UpdateEpidemicCard() = 0;
protected:
	ObserverMap();
};
//#endif //OBSERVER_H

