#include "../queue/Queue.h"

#include<iostream>
using namespace std;


TravelQueue::TravelQueue() {
	start = NULL;
	end = NULL;
}

void TravelQueue:: enqueue(Traveler t) {
	TravelerNode *temp = new TravelerNode;
    temp->travel = t;
    temp->next = NULL;

    if(start == NULL){
        start = temp;
    }else{
        end->next = temp;
    }
    end = temp;
}

Traveler TravelQueue:: dequeue() {
    TravelerNode *temp = new TravelerNode;

    if(start == NULL){
        cout<<"\nNo elements in Queue\n";
    }else{
        temp = start;
        start = start->next;
//        delete temp;
    }
    return temp->travel;
}

void TravelQueue:: print() {
    TravelerNode *temp = new TravelerNode;
    temp = start;

    if(start == NULL){
        cout<<"\nEmpty Queue";
    }else{
        while(temp != NULL){
            cout<<"\nName: " << temp->travel.getFirstName() + " " + temp->travel.getLastName();
            temp = temp->next;
        }
    }
}
