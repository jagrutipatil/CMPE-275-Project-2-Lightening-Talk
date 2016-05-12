#include<iostream>

using namespace std;

class Human {
	private:
		string firstName;
		string lastName;

	public:
		Human(string, string);
		string getFirstName();
		string getLastName();
};

Human:: Human(string firstname, string lastname ) {
	firstName = firstname;
	lastName = lastname;
}

string Human::getFirstName() {
	return firstName;
}

string Human::getLastName() {
	return lastName;
}
