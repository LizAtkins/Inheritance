#pragma once
#ifndef CAR_H
#define CAR_H

class Car {

private:
	int doors;
public:
	Car();
	Car(int d);
	int getDoors();
	void setDoors(int d);
	void displayInfo();

};



#endif
