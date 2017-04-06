#pragma once
#include"ObserverMap.h"
#include "Graph.h"
#include<iostream>
class GraphView : public ObserverMap
{
public:
	GraphView();
	GraphView(Graph*);
	~GraphView();
	void UpdateMap();
	void displayMap(); 
private:
	Graph* _subject;
};

