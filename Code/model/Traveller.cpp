#include<iostream>

using namespace std;

class Traveller: public Human{
	private:
		string visaType;
		bool isValidVisa;
		bool isStampingDone;

	public:
		Traveller(string);
		string getVisaType();
		bool ifValidVisa();
		bool ifStampingDone();

};


Traveller::Traveller(string visatype) {
	visaType = visatype;
	isValidVisa = true;
	isStampingDone = false;
}


string Traveller:: getVisaType() {
	return visaType;
}

bool Traveller:: ifValidVisa() {
	return isValidVisa;
}

bool Traveller:: ifStampingDone() {
	return isStampingDone;
}


