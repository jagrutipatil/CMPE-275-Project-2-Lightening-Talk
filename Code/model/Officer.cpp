#include<iostream>
#include "Model.h"
using namespace std;

Officer:: Officer(string firstname, string lastname, double pTime) : Human(firstname, lastname) {
	processingTime = pTime;
}

void processStamp(Traveler t) {
	cout << "Stamping Declined for Traveler: " + t.getFirstName() + " " + t.getLastName();
	if(t.ifValidVisa()) {
		t.setStampingStatus(true);
	} else {
		t.setStampingStatus(false);
	}
}
