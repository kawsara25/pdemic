//**********************************************
//COMP345 BUILD 2
//Winter 2017
//Team Buffalos
//**********************************************
//
//main.cpp

#include <iostream>
#include <ctime>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include <algorithm>
#include <random>
#include "GraphView.h"
#include "PlayerView.h"
#include "CardsHeaders.h" (through PlayerView - Player - Subject - CardsHeaders)
//#include "SaveLoad.h"
#include "Global.h"


//ONLY FOR TEST (TO BE REMOVED)
City* atlantacity = new City("Atlanta", "blue");
void initMap()
{
	Graph myGraph;
	GraphView gView(&myGraph);
	vector <City*> v;

	for (int i = 0; i < 48; i++) {
		v.push_back(cityArr[i]);
		//v.push_back(cityArr[i])
	}
	myGraph.addC(v);
	myGraph.addedge(chicagoCity, washingtonCity);
	myGraph.addedge(atlantaCity,miamiCity);
	myGraph.addedge(chicagoCity, losangelesCity);
	myGraph.addedge(chicagoCity, mexicoCity);
	myGraph.addedge(miamiCity, mexicoCity);
	myGraph.addedge(limaCity, mexicoCity);
	myGraph.addedge(bogotaCity,mexicoCity);
	myGraph.addedge(essenCity, stpetersbourgCity);
	myGraph.addedge(londresCity, essenCity);
	myGraph.addedge(essenCity, milanCity);
	myGraph.addedge(madridCity, parisCity);
	myGraph.addedge(londresCity, parisCity);
	myGraph.addedge(newyorkCity, madridCity);
	myGraph.addedge(saopauloCity, madridCity);
	myGraph.addedge(newyorkCity, londresCity);
	myGraph.addedge(madridCity, londresCity);
	myGraph.addedge(washingtonCity, newyorkCity);
	myGraph.addedge(montrealCity, newyorkCity);
	myGraph.addedge(chicagoCity, sanfranciscoCity);
	myGraph.addedge(atlantaCity, chicagoCity);
	myGraph.addedge(chicagoCity, montrealCity);
	myGraph.addedge(washingtonCity, montrealCity);
	myGraph.addedge(atlantaCity, washingtonCity);
	myGraph.addedge(stpetersbourgCity, istanbulCity);
	myGraph.addedge(milanCity, istanbulCity);
	myGraph.addedge(moscouCity, istanbulCity);
	myGraph.addedge(stpetersbourgCity, moscouCity);
	myGraph.addedge(saopauloCity, lagosCity);
	myGraph.addedge(bogotaCity, saopauloCity);
	myGraph.addedge(madridCity, saopauloCity);
	myGraph.addedge(bogotaCity, buesnosairesCity);
	myGraph.addedge(bogotaCity, limaCity);
	myGraph.addedge(miamiCity, bogotaCity);
	myGraph.addedge(teheranCity, karachiCity);
	myGraph.addedge(delhiCity, karachiCity);
	myGraph.addedge(moscouCity, teheranCity);
	myGraph.addedge(teheranCity, bagdadCity);
	myGraph.addedge(istanbulCity, algerCity);
	myGraph.addedge(madridCity, algerCity);
	myGraph.addedge(bangkokCity, jakartaCity);
	myGraph.addedge(bangkokCity, hochiminhvilleCity);
	myGraph.addedge(jakartaCity, hochiminhvilleCity);
	myGraph.addedge(calcuttaCity, bangkokCity);
	myGraph.addedge(hochiminhvilleCity, manilleCity);
	myGraph.addedge(calcuttaCity, hongkongCity);
	myGraph.addedge(jakartaCity, hongkongCity);
	myGraph.addedge(karachiCity, mumbaiCity);
	myGraph.addedge(delhiCity, mumbaiCity);
	myGraph.addedge(teheranCity, delhiCity);
	myGraph.addedge(bagdadCity, delhiCity);
	myGraph.addedge(bagdadCity, ryadCity);
	myGraph.addedge(karachiCity, ryadCity);
	myGraph.addedge(delhiCity, chennaiCity);
	myGraph.addedge(mumbaiCity, chennaiCity);
	myGraph.addedge(delhiCity, calcuttaCity);

	//myGraph.createMap();
	//myGraph.cityWithAdjacency();
}

void initInfectionDeck() {
	infectiondeck.insert(infectiondeck.end(), infectioncardarr, infectioncardarr + (sizeof(infectioncardarr) / sizeof(infectioncardarr[0])));

	shuffle(infectiondeck.begin(), infectiondeck.end(), std::default_random_engine(std::random_device()()));
}
void setInitPlayerDeck(){
	playerdeck.insert(playerdeck.end(), citycardarr, citycardarr + (sizeof(citycardarr) / sizeof(citycardarr[0])));
	playerdeck.insert(playerdeck.end(), eventcardarr, eventcardarr + (sizeof(eventcardarr) / sizeof(eventcardarr[0])));

	//Rnd Shuffle playerdeck
	shuffle(playerdeck.begin(), playerdeck.end(), std::default_random_engine(std::random_device()()));
	//std::random_shuffle(playerdeck.begin(), playerdeck.end());
	//    for(int i=0; i<playerdeck.size();i++){
	//        playerdeck[i]->printCard();
	//    }


}

void createRoles(){
	// Method for distributing roles
	srand(static_cast<unsigned int>(time(nullptr)));
	int arrcheck[nbplayers];
	for (int i = 0; i < numPlayers; i++) {
		arrcheck[i] = numPlayers + 2;		// initialize test array elements with values
		// numPlayers + 2  just to make sure that this value is never reached
	}

	for (int i = 0; i < numPlayers; i++) {		// Method for giving role (by number)
		bool check;
		int nb;
		do {
			nb = rand() % 6;				// rnd nb goes from 0 to 6
			check = true;
			for (int j = 0; j <= i; j++) {
				if (nb == arrcheck[j]) {
					check = false;
					break;
				}
			}

		} while (!check);
		arrcheck[i] = nb;
		// std::cout<<arrcheck[i]<<std::endl;    // test method output rand nb
	}


	// FOR EACH PAWN (PLAYER)...
	// Distributes actual role with switch(rndnumber)
	// Call corresponding Role Player constructor
	// then distribute PlayerCard's from the <vector> playerdeck to the <vector> player hand
	// arrayOfPlayer[i] points to the role player object created to keep track of all players
	// creates playerview object (observer) for each player (subject)
	// Set playercard*'s in player_hand's  - Then NOTIFY();
	for (int i = 0; i < numPlayers; i++) {
		switch (arrcheck[i]){
		case 0:{
			Pawn dispatcherpawn("pink", atlantacity);
			Dispatcher* dispatcher = new Dispatcher(&dispatcherpawn, &referencecards[i], &dispatchercard1, dispatcherhand);
			for (int k = 0; k < nbcardsplayer; k++) {
				dispatcherhand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(dispatcher));
			dispatcher->setHand(dispatcherhand);
			arrayofPlayers.push_back(dispatcher);
			break;
		}
		case 1:{
			Pawn medicpawn("orange", atlantacity);
			Medic* medic = new Medic(&medicpawn, &referencecards[i], &mediccard1, medichand);
			for (int k = 0; k<nbcardsplayer; k++){
				medichand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(medic));
			medic->setHand(medichand);
			arrayofPlayers.push_back(medic);
			break;
		}
		case 2:{
			Pawn scientistpawn("white", atlantacity);
			Scientist* scientist = new Scientist(&scientistpawn, &referencecards[i], &scientistcard1, scientisthand);
			for (int k = 0; k<nbcardsplayer; k++){
				scientisthand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(scientist));
			scientist->setHand(scientisthand);
			arrayofPlayers.push_back(scientist);
			break;
		}
		case 3:{
			Pawn researcherpawn("brown", atlantacity);
			Researcher* researcher = new Researcher(&researcherpawn, &referencecards[i], &researchercard1, researcherhand);
			for (int k = 0; k<nbcardsplayer; k++){
				researcherhand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(researcher));
			researcher->setHand(researcherhand);
			arrayofPlayers.push_back(researcher);
			break;
		}
		case 4:{
			Pawn operationsexpertpawn("palegreen", atlantacity);
			Operationsexpert* operationsexpert = new Operationsexpert(&operationsexpertpawn, &referencecards[i], &operationsexpertcard1, operationsexperthand);
			for (int k = 0; k<nbcardsplayer; k++){
				operationsexperthand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(operationsexpert));
			operationsexpert->setHand(operationsexperthand);
			arrayofPlayers.push_back(operationsexpert);
			break;
		}
		case 5:{
			Pawn quarantinespecialistpawn("darkgreen", atlantacity);
			Quarantinespecialist* quarantinespecialist = new Quarantinespecialist(&quarantinespecialistpawn, &referencecards[i], &quarantinespecialistcard1, quarantinespecialisthand);
			for (int k = 0; k<nbcardsplayer; k++){
				quarantinespecialisthand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(quarantinespecialist));
			quarantinespecialist->setHand(quarantinespecialisthand);
			arrayofPlayers.push_back(quarantinespecialist);
			break;
		}
		case 6:{
			Pawn contingencyplannerpawn("aqua", atlantacity);
			Contingencyplanner* contingencyplanner = new Contingencyplanner(&contingencyplannerpawn, &referencecards[i], &contingencyplannercard1, contingencyplannerhand);
			for (int k = 0; k<nbcardsplayer; k++){
				contingencyplannerhand.push_back(playerdeck.back());
				playerdeck.pop_back();
			}
			arrayofPlayerViews.push_back(new PlayerView(contingencyplanner));
			contingencyplanner->setHand(contingencyplannerhand);
			arrayofPlayers.push_back(contingencyplanner);
			break;
		}
		default:{
			break;
		}
		}
	}


}

void addEpCardsPlayerDeck(){
	//insert Epidemic card after initial PlayerCard's were distributed to players
	playerdeck.insert(playerdeck.end(), epcardarr, epcardarr + (sizeof(epcardarr) / sizeof(epcardarr[0])));

	//Rnd Shuffle PlayerDeck
	shuffle(playerdeck.begin(), playerdeck.end(), std::default_random_engine(std::random_device()()));
}
void initialInfection() {
	//draw 3, then 2, then 1 infection cards and infect according to their city and color
	int i = 3;
	while (i >= 1) {
		for (int k = 3; k > 0; k--) {
			//draw infection card from infection deck
			InfectionCard* curr_inf = infectiondeck.back();
			string city = curr_inf->getCardName();
			string color = curr_inf->getCardTextFront();
			//infect the city
			for (int j = 1; j <= i; j++) {
				curr_inf->Infect(remainingDiseaseCubes, city, color);
			}
			//add drawn card to discard pile
			infectiondeck_discard.push_back(curr_inf);
			//remove card from infection deck
			infectiondeck.pop_back();
		}
		i--;
	}
	system("pause");
}
int getPlayerCount() {
	//get the number of players playing, validate, and return as int.
	int pCount;
	cout << "Please enter the number of players (2-4):";
	cin >> pCount;
	while (pCount < 2 || pCount > 4) {
		cout << "Please enter a valid number of players (2-4):";
		cin >> pCount;
	}
	//clear the screen
	system("cls");
	return pCount;
}
void initGame(){

	initMap();
	numPlayers = getPlayerCount();

	initInfectionDeck();

	setInitPlayerDeck();

	createRoles();

	addEpCardsPlayerDeck();

	initialInfection();

}

void endGame(){

	// <vector> arrayofPlayerViews contains all *PlayerView (1 per player)
	for (int i = 0; i<numPlayers; i++){
		arrayofPlayerViews[i] = nullptr;
		delete arrayofPlayerViews[i];
	}

	// <vector> arrayofPlayers contains all *Player
	for (int i = 0; i<numPlayers; i++){
		arrayofPlayers[i] = nullptr;
		delete arrayofPlayers[i];
	}

	// <vector> playerdeck contains *PlayerCard
	for (int i = 0; i<playerdeck.size(); i++){
		playerdeck[i] = nullptr;
		delete playerdeck[i];
	}
	// <vector> discardpile contains *Playercard
	for (int i = 0; i<discardpile.size(); i++){
		discardpile[i] = nullptr;
		delete discardpile[i];
	}

	// <vector> infectiondeck contains *InfectionCard
	for (int i = 0; i<infectiondeck.size(); i++) {
		infectiondeck[i] = nullptr;
		delete infectiondeck[i];
	}
	// <vector> infectiondeck_discard contains *InfectionCard
	for (int i = 0; i<infectiondeck_discard.size(); i++) {
		infectiondeck_discard[i] = nullptr;
		delete infectiondeck_discard[i];
	}


}




int main(){

	initGame();

	//test lines (draw cards)
	/*arrayofPlayers[0]->draw2pcards(playerdeck);
	arrayofPlayers[0]->draw2pcards(playerdeck);
	arrayofPlayers[0]->draw2pcards(playerdeck);*/

	// Save savestate = Save();
	// savestate.save_game();
	// system("pause");
	// savestate.load_game();
	endGame();
}
