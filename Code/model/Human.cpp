#include<iostream>
namespace model {

	class Human {
		private:
		 char* firstname;
		 char* lastname;

		public:
		  char* getFirstName();
		  char* getLastName();
	};


	char* Human:: getFirstName() {
		return firstname;
	}

	char* Human:: getLastName() {
		return lastname;
	}

}

