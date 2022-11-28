#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {

private:
	int doors;
public:
	Car(int d, string m, int y) : Vehicle(m, y) {
		doors = d;
	}
	int getDoors();
	void setDoors(int d);
	virtual void displayInfo();

};



#endif
