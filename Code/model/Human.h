#include<iostream>

using namespace std;

class Human {
	private:
		string firstName;
		string lastName;

	public:
		Human(string, string);
		char* getFirstName();
		char* getLastName();
};

Human:: Human(string firstname, string lastname ) {
	firstName = firstname;
	lastName = lastname;
}

char* Human::getFirstName() {
	return firstName;
}

char* Human::getLastName() {
	return lastName;
}

