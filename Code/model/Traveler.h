#include<iostream>

using namespace std;

class Traveler: public Human{
	private:
		string visaType;
		bool isValidVisa;
		bool isStampingDone;

	public:
		Traveler(string);
		string getVisaType();
		bool ifValidVisa();
		bool ifStampingDone();
		void setVisaStatus(bool);
		void setStampingStatus(bool);

};


Traveler::Traveler(string visatype) {
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
