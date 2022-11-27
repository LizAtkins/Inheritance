#pragma once
#ifndef CAR_H
#define CAR_H

class Car {

private:
	int doors;
public:
	Car() {
		doors = 0;
	}
	Car(int d) {
		doors = d;
	}
	int getDoors() {
		return doors;
	}
	void setDoors(int d) {
		doors = d;
	}

};



#endif
