#pragma once
#ifndef Graph_h
#define Graph_h

#include <iostream>
#include <vector>
#include<iterator>
#include <map>
#include "SubjectMap.h"
#include "City.h"
//#include "Global.h"
//#include "CardsHeaders.h" (through PlayerView - Player - Subject - CardsHeaders)
//#include "SaveLoad.h"
//#include "Global.h"


struct vertex {
	//typedef pair<int, vertex*> ve;
	vector<vertex*> adj; //destination vertex
	City* name;
	vertex(City* s) : name(s) {}
	virtual ~vertex();
};

class Graph: public Subject
{
protected:
	typedef map<City*, vertex *> cMap;
	//vmap work;
	cMap cityMap;
	vector <City*> cityInGraph;
public:
	Graph();
	Graph(vector<City*>cityVector);
	void addC(vector<City*>cityVector);
	//Graph(vector<City*>);
	virtual ~Graph();
	//typedef map<string, vertex *> vmap;
	void cityAdjacency(City* c);
	void cityWithAdjacency();
	void cityAndConnection();
	void cityConnection(City* c);
	void showCity();
	void showCityInfo(City* cityname);
	void addCityToGraph(City*);
	void printGraph();
	void move(City* f, City* t);
	void addedge(City* from, City* to);
	void getCityEdge(City*);
	void createMap();
	bool operator==(City&);
	vector<City*> adjacent_cities(City* c);
	//void drive(Pawn *);
	//void shuttleFlight(Pawn*);
	//void charterFlight(Pawn*);
	//void directFlight(Pawn*p);

};


#endif 
