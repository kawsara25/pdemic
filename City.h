
#pragma once
#ifndef City_h
#define City_h
#include<iostream>
//#include <vector>
#include <string>


using namespace std;

class City 
{
public:
	City();
	City(string s);
	void toString();
	City(string cityname, string color);
	~City();
	string getCityName();
	string getColor();
	void addInfCubes();
	int getInfCubes();
	
	void removeCubes();
	void add3Cubes();
	void removeAllCubes();
	void print();


private:
	string cityName;
	string cityColor;
	//int cubes;
	int infCubes;
	bool researchFacility;
	
	
};
#endif 
