#include<iostream>
using namespace std;

class Officer: public Human{
	double processingTime;

	public:
		Officer(double processingTime);
		void processStamp(Traveller);
};

Officer:: Officer(double pTime) {
	processingTime = pTime;
}

void processStamp(Traveller t) {
	cout << "Stamping Declined for Traveler: " + t.firstName + " " + t.lastName;
	if(t.isValidVisa) {
		t.setStampingStatus(true);
	} else {
		t.setStampingStatus(false);
	}
}
