#include<iostream>

using namespace std;

class Human {
	private:
		string firstName;
		string lastName;

	public:
		Human();
		Human(string, string);
		string getFirstName();
		string getLastName();
};

class Traveler: public Human{
	private:
		string visaType;
		bool isValidVisa;
		bool isStampingDone;

	public:
		Traveler();
		Traveler(string, string, string);
		string getVisaType();
		bool ifValidVisa();
		bool ifStampingDone();
		void setVisaStatus(bool);
		void setStampingStatus(bool);

};

class Officer: public Human{
	double processingTime;

	public:
		Officer(string, string, double);
		void processStamp(Traveler);
};

