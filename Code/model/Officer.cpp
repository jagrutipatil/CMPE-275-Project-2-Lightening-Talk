#include<iostream>
using namespace std;

#ifndef Officer
	#include "../model/Model.h"
#endif

Officer:: Officer() {
}


Officer:: Officer(string firstname, string lastname, double pTime) : Human(firstname, lastname) {
	processingTime = pTime;
}

void Officer::processStamp(Traveler* t) {
	if(t->ifValidVisa()) {
		cout << "\nStamping Processed for Traveler: " + t->getFirstName() + " " + t->getLastName();
		t->setStampingStatus(true);
	} else {
		cout << "\nStamping Declined for Traveler: " + t->getFirstName() + " " + t->getLastName();
		t->setStampingStatus(false);
	}
}

void Officer::processStamp(Traveler t) {
	if(t.ifValidVisa()) {
		cout << "\nStamping Processed for Traveler: " + t.getFirstName() + " " + t.getLastName();
		t.setStampingStatus(true);
	} else {
		cout << "\nStamping Declined for Traveler: " + t.getFirstName() + " " + t.getLastName();
		t.setStampingStatus(false);
	}
}


void Officer::setProcessingTime(double time) {
	processingTime = time;
}
