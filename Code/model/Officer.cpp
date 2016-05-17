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

void Officer::processStamp(Traveler t) {
	cout << "Stamping Declined for Traveler: " + t.getFirstName() + " " + t.getLastName();
	if(t.ifValidVisa()) {
		t.setStampingStatus(true);
	} else {
		t.setStampingStatus(false);
	}
}

void Officer::setProcessingTime(double time) {
	processingTime = time;
}
