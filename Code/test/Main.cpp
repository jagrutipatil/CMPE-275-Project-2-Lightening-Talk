#include <iostream>
#include <string>
#include "../queue/StampingService.h"

using namespace stampingService;

TravelQueue queue;
StampingService stmps;
int count = 10;

void batchTravelers() {
	for (int i = 0; i < count; i++) {
		Traveler t("Jagruti " , "Patil", "F1");
		queue.enqueue(t);
	}
}

void addOfficers() {
	for (int i = 0; i < count; i++) {
		Officer* offc;
//		offc->;
//		offc->lastName = "Offcer1";
		offc->setProcessingTime(i+1);
		stmps.addOfficer(offc);
	}
}

void progressWork() {
	for (int i = 0; i < count; i++) {
		 Officer* offc = stmps.getAvailableOfficer();
		 offc->processStamp(queue.dequeue());
	}
}


int main(int argc, char* argv[]) {
	cout<<"Adding batch of travelers";
	batchTravelers();

	cout<<"Adding batch of officers";
	addOfficers();

	cout<<"Process the batch";
	progressWork();
}
