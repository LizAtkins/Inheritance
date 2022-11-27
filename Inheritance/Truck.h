#pragma once
#ifndef TRUCK_H
#define TRUCK_H

class Truck {
private:
	double towingCapacity;
public:
	Truck();
	double getTowingCapacity();
	void setTowingCapacity(double t);
};



#endif