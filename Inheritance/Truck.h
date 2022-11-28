#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"


class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	Truck();
	double getTowingCapacity();
	void setTowingCapacity(double t);
	void displayInfo();
};



#endif