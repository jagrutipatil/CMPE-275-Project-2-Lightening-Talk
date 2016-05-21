#include<iostream>
#include "Model.h"

using namespace std;

Traveler:: Traveler() {
	isValidVisa = true;
	isStampingDone = false;
}

Traveler::Traveler(string firstname, string lastname, string visatype): Human(firstname, lastname) {
	visaType = visatype;
	isValidVisa = true;
	isStampingDone = false;
}


string Traveler:: getVisaType() {
	return visaType;
}

void Traveler:: setVisaType(string visa) {
	visaType = visa;
}


bool Traveler:: ifValidVisa() {
	return isValidVisa;
}

bool Traveler:: ifStampingDone() {
	return isStampingDone;
}


void Traveler:: setVisaStatus(bool status) {
	isValidVisa = status;
}

void Traveler:: setStampingStatus(bool stampStatus) {
	isStampingDone = stampStatus;
}

string boolstring( bool b ) {
	return b ? "true" : "false";
}


string Traveler:: toString() {
	return getFirstName() + " | " + getLastName() + " | " + getVisaType() + " | " + boolstring(isValidVisa) + " | " + boolstring(isStampingDone) + "\n";
}

//TravelerNode:: TravelerNode(Traveler inputTraveler) {
//	traveler = inputTraveler;
//	cout<<"Initializing Traveler List";
//}
