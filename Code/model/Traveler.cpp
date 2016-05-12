#include<iostream>
#include "Model.h"

using namespace std;

Traveler:: Traveler() {
}

Traveler::Traveler(string firstname, string lastname, string visatype): Human(firstname, lastname) {
	visaType = visatype;
	isValidVisa = true;
	isStampingDone = false;
}


string Traveler:: getVisaType() {
	return visaType;
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

//TravelerNode:: TravelerNode(Traveler inputTraveler) {
//	traveler = inputTraveler;
//	cout<<"Initializing Traveler List";
//}
