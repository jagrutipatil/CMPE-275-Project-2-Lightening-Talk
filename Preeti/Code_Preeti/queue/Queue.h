#ifndef Traveler
	#include "../model/Model.h"
#endif

struct TravelerNode{
	Traveler* travel;
	struct TravelerNode* next;
};

class TravelQueue {
	TravelerNode* start;
	TravelerNode* end;
	int capacity = 0;

public:
	TravelQueue();
	void enqueue(Traveler*);
	Traveler* dequeue();
	int size();
	void print();
};

