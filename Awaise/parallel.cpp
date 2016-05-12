#include<iostream>
#include<stdio.h>
#include  "omp.h"
#include "traveler.cpp"
#include<thread>
#include<chrono>
#include<boost/chrono.hpp>

using namespace std;
using namespace boost::chrono;

int main(){
	
	cout<<"Enter the number of applcants: ";
	int no;
	cin>>no;
	Traveler *travelers[no];
	string firstName, lastName, visaType;
	for(int i=0; i<no; i++)
	{
		cout<<"Enter the details for traveler no: "<<i+1<<endl;
		cout<<"First name: ";
		cin>>firstName;
		cout<<"Last name: ";
		cin>>lastName;
		cout<<"Visa Type: ";
		cin>>visaType;
		travelers[i] = new Traveler(visaType, firstName, lastName);
	}
	
	cout<<"\nPrinting the details entered\n"<<endl;
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Command useful for thread.sleep
	
	//omp_set_num_threads( omp_num_procs() );
	
	
	for(int i=0; i<no; i++)
	{		
		cout<<"First name: "<<travelers[i]->getFirstName()<<endl;
		cout<<"Last name: "<<travelers[i]->getLastName()<<endl;
		cout<<"Visa Type: "<<travelers[i]->getVisaType()<<endl;
		cout<<"Valid Visa? "<<((travelers[i]->ifValidVisa())?"Yes":"No")<<endl;
		cout<<"Stamping Done? "<<((travelers[i]->ifStampingDone())?"Yes":"No")<<endl;		
		cout<<"Processing Time "<<travelers[i]->getProcessingTime()<<endl<<endl;		
	}
	
	auto dt_s = high_resolution_clock::now();
	//cout<<"Current Time: "<<dt_s;	
	
}