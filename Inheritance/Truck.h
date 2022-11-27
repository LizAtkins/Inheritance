#pragma once
#ifndef TRUCK_H
#define TRUCK_H

class Truck {
private:
	double towingCapacity;
public:
	Truck() {
		towingCapacity = 0;
	}
	double getTowingCapacity() {
		return towingCapacity;
	}
	void setTowingCapacity(double t) {
		towingCapacity = t;
	}
};



#endif