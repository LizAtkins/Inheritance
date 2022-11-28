#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"


class Truck : public Vehicle {
private:
	double towingCapacity;
public:
	Truck(double t, string m, int y) : Vehicle(m, y)
	{
		towingCapacity = t;
	}
	double getTowingCapacity();
	void setTowingCapacity(double t);
	void displayInfo();
};



#endif