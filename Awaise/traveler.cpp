#include<iostream>
#include<stdlib.h>
#include "human.cpp"

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

using namespace std;
boost::mt19937 gen;
class Traveler: public Human{
	private:
		string visaType;
		bool isValidVisa;
		bool isStampingDone;
		int processingTime;
		int randomize();
		
	public:
		Traveler(string, string, string);
		string getVisaType();
		int getProcessingTime();
		bool ifValidVisa();
		bool ifStampingDone();
		void setVisaStatus(bool);
		void setStampingStatus(bool);
};

Traveler::Traveler(string visatype, string firstname, string lastname):Human(firstname, lastname) {
	visaType = visatype;
	isValidVisa = true;
	isStampingDone = false;
	processingTime = randomize();
}


string Traveler:: getVisaType() {
	return visaType;
}

int Traveler:: randomize() {
    boost::uniform_int<> dist(1, 5);
    boost::variate_generator<boost::mt19937&, boost::uniform_int<> > die(gen, dist);
    return die();
}

int Traveler:: getProcessingTime() {
	return processingTime;
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