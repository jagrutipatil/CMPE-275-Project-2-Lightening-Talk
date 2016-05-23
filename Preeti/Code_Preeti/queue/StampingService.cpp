/*
 * StampingService.cpp
 *
 *  Created on: May 16, 2016
 *      Author: jagruti
 */

#include "StampingService.h"


namespace stampingService {

StampingService::StampingService() {
	availableOfficers.reserve(sizeof(Officer)*10);
	busyOfficers.reserve(sizeof(Officer)*10);
}

StampingService::~StampingService() {
}


void StampingService:: addOfficer(Officer* officer) {
	availableOfficers.push_back(officer);
}

void StampingService::makeOfficerAvailable(Officer* officer, int index) {
	busyOfficers.erase(busyOfficers.begin() + index);
}

int StampingService::makeOfficerBusy(Officer* officer) {
	busyOfficers.push_back(officer);
	return busyOfficers.size();
}

Officer* StampingService::getAvailableOfficer() {
	Officer* officer = availableOfficers.back();
	availableOfficers.pop_back();

	return officer;
}



} /* namespace stampingService */
