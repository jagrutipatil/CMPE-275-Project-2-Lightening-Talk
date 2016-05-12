#include "Model.h"

Human::Human() {
}


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

