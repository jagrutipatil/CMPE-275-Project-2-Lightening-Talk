/*
 * StampingService.h
 *
 *  Created on: May 16, 2016
 *      Author: jagruti
 */

#ifndef QUEUE_STAMPINGSERVICE_H_
#define QUEUE_STAMPINGSERVICE_H_


#include "../queue/Queue.h"
#include "vector"

using namespace std;

namespace stampingService {

struct OfficerNode {
	Officer officer;
	struct OfficerNode* next;
};

class StampingService {
	vector<Officer*> availableOfficers;
	vector<Officer*> busyOfficers;

public:
	StampingService();
	virtual ~StampingService();
	void makeOfficerBusy(Officer);
	Officer* getAvailableOfficer();
	int makeOfficerBusy(Officer*);
	void makeOfficerAvailable(Officer*, int);
	void addOfficer(Officer*);
};

} /* namespace stampingService */

#endif /* QUEUE_STAMPINGSERVICE_H_ */
