#include "../model/Model.h"

struct TravelerNode{
	Traveler travel;
	struct TravelerNode* next;
};

class TravelQueue {
	TravelerNode* start;
	TravelerNode* end;

public:
	TravelQueue();
	void enqueue(Traveler);
	Traveler dequeue();
	void print();
};

