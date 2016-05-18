#include <iostream>
#include <string>
#include "../queue/StampingService.h"

using namespace stampingService;

TravelQueue queue;
StampingService stmps;
int count = 10;

void batchTravelers() {
	for (int i = 0; i < count; i++) {
		Traveler* t = new Traveler;
		t->setFirstName("Jagruti");
		t->setLastName("Patil");
//		t->setvisa

		queue.enqueue(t);
	}
}

void addOfficers() {
	for (int i = 0; i < count; i++) {
		Officer* offc = new Officer;

		offc->setFirstName("Officer");
		offc->setLastName("Last Name");
		offc->setProcessingTime(1.0);
		stmps.addOfficer(offc);
	}
}

void progressWork() {
	cout << "Started Processing Work";

	while (queue.size() > 0) {
		 Officer* offc = stmps.getAvailableOfficer();
		 Traveler* traveler = queue.dequeue();
		 offc->processStamp(traveler);
	}
}


int main(int argc, char* argv[]) {
	cout<<"\nAdding batch of travelers";
	batchTravelers();


	cout<<"\nAdding batch of officers";
	addOfficers();

	cout<<"\nProcess the batch";
	progressWork();
}
