//**********************************************
//COMP345 Assignment 1
//Winter 2017
//by Jasmine Leblond-Chartrand (25991714)
//**********************************************
//
//RefCard.cpp
#include "RefCard.h"


RefCard::RefCard() {
	Cards::card_name = "ACTIONS";
	Cards::card_textfront =
		"Drive/Ferry \n "
		"Move to a city connected by a white line to the one you are in.\n\n"
		"Direct Flight \n "
		"Discard a City card to move to the city named on the card. \n\n"
		"Charter Flight \n "
		"Discard the City card that matches the city you are in to move to any city. \n\n"
		"Shuttle Flight \n "
		"Move from a city with a research station to any other city that has a"
		"research station. \n\n";
	Cards::card_textback =
		"Build a Research Station\n"
		"Discard the City card that matches the city you are in to place a research"
		"station there. Take the research station from the pile next to the board. If all"
		"6 research stations have been built, take a research station from anywhere"
		"on the board.\n\n"
		"Treat Disease \n"
		"Remove 1 disease cube from the city you are in, placing it in the cube"
		"supply next to the board. If this disease color has been cured (see"
		"Discover a Cure below), remove all cubes of that color from the city you"
		"are in. "
		"\nIf the last cube of a cured disease is removed from the board, this disease"
		"is eradicated. Flip its cure marker from its vial side to its  side\n\n"
		"Share Knowledge \n"
		"You can do this action in two ways:"
		"\ngive the City card that matches the city you are in to another player, or"
		"\ntake the City card that matches the city you are in from another player."
		"\nThe other player must also be in the city with you. Both of you need to"
		"agree to do this."
		"\nIf the player who gets the card now has more than 7 Card, that player must"
		"immediately discard a card or play an Event card (see Event Card on page 7).\n\n"
		"Discover a Cure \n"
		"At any research station, discard 5 City Card of the same color from your"
		"hand to cure the disease of that color. Move the diseases cure marker to its"
		"Cure Indicator."
		"\nIf no cubes of this color are on the board, this disease is now eradicated."
		"Flip its cure marker from its vial side to its  side.\n";
	Cards(card_name, card_textfront, card_textback);
}

/*RefCard::RefCard() {
sideA[0] = "Movement Actions\n";
sideA[1] = "Drive or Ferry - Move to a city connected by a white line to the one you are in.";
sideA[2] = "Direct flight - Discard a City card to move to the city named on the card.";
sideA[3] = "Charter flight - Discard the City card that matches the city you are in to move to any city.";
sideA[4] = "Shuttle flight - Move from a city with a research station to any other city that has a research station.";

sideB[0] = "Other Actions\n";
sideB[1] = "Build a research station - Discard the City card that matches the city you are in to place a research station there. Take the research station from the pile next to the board. If all 6 research stations have been built, take a research station from anywhere on the board.";
sideB[2] = "Treat a disease - Remove 1 disease cube from the city you are in, placing it in the cube supply next to the board.If this disease color has been cured(see Discover a Cure below), remove all cubes of that color from the city you are in. If the last cube of a cured disease is removed from the board, this disease is eradicated.Flip its cure marker from its vial side to its cured side..";
sideB[3] = "Share knowledge - You can do this action in two ways: give the City card that matches the city you are in to another player, or take the City card that matches the city you are in from another player. The other player must also be in the city with you.Both of you need to agree to do this. If the player who gets the card now has more than 7 cards, that player must immediately discard a card or play an Event card";
sideB[4] = "Discover a Cure - At any research station, discard 5 City cards of the same color from your hand to cure the disease of that color.Move the disease’s cure marker to its Cure Indicator. If no cubes of this color are on the board, this disease is now eradicated. Flip its cure marker from its vial side to its cured side.";
}

//pretty print the contents of a reference card
void RefCard::readReferenceCard() {
string theRules = "---------------------------------------\n";
for (int i = 0; i <= 4; i++) {
theRules += sideA[i] + "\n\n";
}
theRules += "---------------------------------------\n";
for (int i = 0; i <= 4; i++) {
theRules += sideB[i] + "\n\n";
}
cout << theRules;
}*/


