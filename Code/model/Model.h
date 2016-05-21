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
		void setFirstName(string);
		void setLastName(string);
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
		void setVisaType(string);
		void setVisaStatus(bool);
		void setStampingStatus(bool);
		string toString();
};

class Officer: public Human{
	double processingTime;

	public:
		Officer();
		Officer(string, string, double);
		void processStamp(Traveler*);
		void processStamp(Traveler);
		void setProcessingTime(double);
};

