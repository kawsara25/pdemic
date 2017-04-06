#include "City.h"

City::City()
{
	/*cityName = "";
	cityColor = "";
	pawnsincity = nullptr;
	infCubes = 0;
	//vector pawnsincity
	*/
}
City::City(string nam)
{

	cityName = nam;
	infCubes = 0;
	researchFacility = 0;


}

City::City(string cityn, string col)
{
cityName = cityn;
cityColor = col;
//pcitycard = pcitycard;
infCubes = 0;
researchFacility = false;
//pawnsincity = pawnsincitys;
}
string City::getCityName() {
	return cityName;
}

string City::getColor() {
	return cityColor;
}

int City::getInfCubes() {
	return infCubes;
}



void City::addInfCubes()
{
	infCubes++;
}

void City::removeCubes() {
	if (infCubes>0)
		infCubes--;
	else
		infCubes = 0;
}

void City::add3Cubes() {
	infCubes += 3;
}

void City::removeAllCubes() {
	infCubes = 0;
}






void City::print()
{

	cout << "City "<< cityName << endl;
	cout << "the number of infection in city:" << getInfCubes() << endl;
	if (researchFacility== true)
		cout << cityName <<"has a Research station" <<endl;
	else
		cout << cityName << "has a Research station" << endl;
}


City::~City()
{

}








void City::toString()
{
	//cardColor;
	cout << endl;
	cout << " City: " + getCityName() << endl;
	

	cout << "the number of infection in city" << infCubes;

}

//City::City(string cityname, string color, vector<Pawn*> pawnsincity, int cubes)



