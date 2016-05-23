#include "../queue/Queue.h"

#include<iostream>
using namespace std;


TravelQueue::TravelQueue() {
	start = NULL;
	end = NULL;
}

int TravelQueue:: size() {
	return capacity;
}

void TravelQueue:: enqueue(Traveler* t) {
	TravelerNode *temp = new TravelerNode;
    temp->travel = t;
    temp->next = NULL;

    capacity++;
    if (start == NULL){
        start = temp;
    } else{
        end->next = temp;
    }
    end = temp;
}

Traveler* TravelQueue:: dequeue() {
    Traveler *temp = NULL;

    if (start == NULL) {
        cout<<"\nNo elements in Queue\n";
    }else{
    	capacity--;
        temp = start->travel;
        start = start->next;
    }
    return temp;
}

void TravelQueue:: print() {
    TravelerNode *temp = new TravelerNode;
    temp = start;

    if(start == NULL){
        cout<<"\nEmpty Queue";
    }else{
        while(temp != NULL){
            cout<<"\nName: " << temp->travel->getFirstName() + " " + temp->travel->getLastName();
            temp = temp->next;
        }
    }
}
